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
        if (istxd) {
#ifdef RAGE
            for (auto& it : spritesMap) {
                auto tex = it.second;
                tex->Release();
            }

            int32_t slot = CTxdStore::FindTxdSlot(slotName.c_str());
            if (slot != -1)
                CTxdStore::RemoveTxdSlot(slot);
#elif RW
            if (texDictionary) {
                RwTexDictionaryDestroy(texDictionary);
                texDictionary = nullptr;
            }
#endif
        }
        else {
#ifdef RW
            for (auto& it : spritesMap) {
                auto tex = it.second;
                RwTextureDestroy(tex);
            }
#endif
        }
        spritesMap = {};
        spriteBuf = {};
        buf = 0;
        slotName = {};
        istxd = false;
    }

    bool SpriteLoader::LoadAllSpritesFromTxd(std::string const& path) {
        if (!spritesMap.empty())
            return false;

#ifdef RAGE
        if (slotName.empty()) {
make_slot:
            char n[64];
            sprintf(n, "psdkslot_%d", NumSlots);
            NumSlots++;

            int32_t slot = CTxdStore::FindTxdSlot(n);
            if (slot != -1)
                goto make_slot;

            slotName = n;
        }

        int32_t slot = CTxdStore::AddTxdSlot(slotName.c_str());
        if (!CTxdStore::LoadTxd(slot, path.c_str())) {
            CTxdStore::RemoveTxdSlot(slot);
            return false;
        }
    
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

            if (!dict)
                return false;

            RwTexDictionaryForAllTextures(dict, [](RwTexture* tex, void* data) {
                auto map = (std::unordered_map<std::string, RwTexture*>*)data;

                map->insert({ tex->name, tex });
                return tex;
                }, &spritesMap);

            texDictionary = dict;
        }

#endif

        istxd = true;

        return true;
    }


#ifdef RW
    bool SpriteLoader::LoadAllSpritesFromFolder(std::string const& path) {
        if (!spritesMap.empty())
            return false;

        auto files = GetAllFilesInFolder(path, ".png");
        for (auto& file : files) {
            Image* img = nullptr;
            if (CreateImageFromFile(path + "\\" + file, img)) {
                uint32_t w = img->width;
                uint32_t h = img->height;
                uint8_t* p = img->pixels;

                RwRaster* raster = RwRasterCreate(w, h, 0, rwRASTERTYPETEXTURE | rwRASTERFORMAT8888);
                RwUInt32* pixels = (RwUInt32*)RwRasterLock(raster, 0, rwRASTERLOCKWRITE);

                for (uint32_t i = 0; i < w * h * 4; i += 4) {
                    uint8_t r = p[i + 2];
                    uint8_t g = p[i + 1];
                    uint8_t b = p[i];

                    p[i + 2] = b;
                    p[i + 1] = g;
                    p[i] = r;
                }

                memcpy(pixels, p, w * h * 4);
                RwRasterUnlock(raster);
                auto tex = RwTextureCreate(raster);
                RwTextureSetFilterMode(tex, rwFILTERLINEAR);
                img->Release();

                std::string fileNoExt = file;
                size_t pos = fileNoExt.find_last_of('.');

                if (pos != std::string::npos) {
                    if (fileNoExt.substr(pos) == ".png") {
                        fileNoExt.erase(pos);
                    }
                }

                spritesMap.insert({ fileNoExt, tex });
            }
        }

        istxd = false;

        return true;
    }
#endif

    CSprite2d* SpriteLoader::GetSprite(std::string const& name) {
        auto& s = spritesMap.find(name);
        if (s != spritesMap.end()) {
            if (buf > spriteBuf.size() - 1)
                buf = 0;

            spriteBuf[buf].m_pTexture = s->second;
            return &spriteBuf[buf++];
        }
        return nullptr;

        //static CSprite2d dummy;
        //return &dummy;
    }

    texClass* SpriteLoader::GetTex(std::string const& name) {
        auto s = spritesMap.find(name);
        if (s != spritesMap.end())
            return s->second;
        return nullptr;
    }

}
#endif
