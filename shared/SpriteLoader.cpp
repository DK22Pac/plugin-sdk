/*
    Plugin-SDK (Grand Theft Auto) SHARED source file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/
#include "SpriteLoader.h"

#if defined(GTA3) || defined(GTAVC) || defined(GTASA)
#include "CFileLoader.h"
#endif

#if defined(GTA3) || defined(GTAVC) || defined(GTASA) || defined(GTAIV)
#include "CTxdStore.h"

namespace plugin {
    static int32_t NumSlots = 0;

    void SpriteLoader::Clear() {
#ifdef RAGE
        for (auto& it : spritesMap) {
            auto tex = it.second;
            tex->Release();
        }

        int32_t slot = CTxdStore::FindTxdSlot(slotName.c_str());
        CTxdStore::RemoveTxdSlot(slot);
#elif RW
        if (texDictionary) {
            RwTexDictionaryDestroy(texDictionary);
            texDictionary = nullptr;
        }
#endif
        spritesMap = {};
        spriteBuf = {};
        buf = 0;
    }

    void SpriteLoader::LoadAllSpritesFromTxd(std::string const& path) {
#ifdef RAGE
        if (slotName.empty()) {
            char n[32];
            sprintf(n, "psdkslot_%d", NumSlots);
            NumSlots++;
            slotName = n;
        }

        int32_t slot = CTxdStore::AddTxdSlot(slotName.c_str());
        CTxdStore::LoadTxd(slot, path.c_str());
        CTxdStore::AddRef(slot);
        CTxdStore::PushCurrentTxd();
        CTxdStore::SetCurrentTxd(slot);

        for (auto& it : CTxdStore::ms_pStoredTxd->m_Entries) {
            std::string n = it.Get()->m_Name;
            std::string prefix = "pack:/";
            std::string suffix = ".dds";

            if (n.substr(0, prefix.length()) == prefix) {
                n.erase(0, prefix.length());
            }

            if (n.length() >= suffix.length() &&
                n.substr(n.length() - suffix.length()) == suffix) {
                n.erase(n.length() - suffix.length());
            }
            spritesMap.insert({ n, it.Get() });
        }

        CTxdStore::PopCurrentTxd();
#else
        if (!texDictionary) {
            auto dict = CFileLoader::LoadTexDictionary(path.c_str());

            if (dict) {
                RwTexDictionaryForAllTextures(dict, [](RwTexture* tex, void* data) {
                    auto map = (std::unordered_map<std::string, RwTexture*>*)data;

                    map->insert({ tex->name, tex });
                    return tex;
                }, &spritesMap);

                texDictionary = dict;
            }
        }
#endif
    }

    CSprite2d* SpriteLoader::GetSprite(std::string const& name) {
        auto s = spritesMap.find(name);
        if (s != spritesMap.end()) {
            if (buf > spriteBuf.size() - 1)
                buf = 0;

            spriteBuf[buf].m_pTexture = s->second;
            return &spriteBuf[buf++];
        }

        return nullptr;
    }

    texClass* SpriteLoader::GetTex(std::string const& name) {
        auto s = spritesMap.find(name);
        if (s != spritesMap.end())
            return s->second;
        return nullptr;
    }

}
#endif
