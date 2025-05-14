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
    static int32_t Index = 0;

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
#ifdef RAGE
            for (auto& it : spritesMap) {
                auto tex = it.second;
                tex->Release();
            }
#elif RW
            for (auto& it : spritesMap) {
                auto tex = it.second;
                RwTextureDestroy(tex);
            }
#endif
        }
        spritesMap.clear();
        spritesMapIndex.clear();
        slotName.clear();
        istxd = false;
        NumSlots = 0;
        Index = 0;
        mipMap = false;
#ifdef RAGE
        extension = "dds";
#else
        extension = "png";
#endif
        memUsed = 0;
    }

    bool SpriteLoader::LoadAllSpritesFromTxd(std::string const& path) {
        if (!spritesMap.empty())
            return false;

#ifdef RAGE
        if (slotName.empty()) {
make_slot:
            char n[64];
            sprintf_s(n, "psdkslot_%d", NumSlots);
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


    texClass* SpriteLoader::LoadSpriteFromFolder(std::string const& file) {
        std::string fileNoExt = RemovePath(file);
        fileNoExt = RemoveExtension(fileNoExt);

        texClass* tex = nullptr;
#ifdef RW
        Image* img = nullptr;
        if (!CreateImageFromFile(file, img))
            return nullptr;

        uint32_t w = img->width;
        uint32_t h = img->height;
        uint8_t* p = img->pixels;

        int32_t flags = rwRASTERTYPETEXTURE | rwRASTERFORMAT8888;

        if (mipMap)
            flags |= rwRASTERFORMATMIPMAP | rwRASTERFORMATAUTOMIPMAP;

        RwRaster* raster = RwRasterCreate(w, h, 0, flags);
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

        tex = RwTextureCreate(raster);
        if (mipMap)
            RwTextureSetFilterMode(tex, rwFILTERMIPLINEAR);
        else
            RwTextureSetFilterMode(tex, rwFILTERLINEAR);

        RwTextureSetMipmapping(mipMap);
        RwTextureSetAutoMipmapping(mipMap);

        memset(tex->name, 0, 32);
        fileNoExt.copy(tex->name, 32);

        img->Release();

        memUsed += w * h * 4;
#else
        tex = rage::grcTextureFactoryPC::GetInstance()->Create(file.c_str(), nullptr);

        memUsed += tex->m_Width, tex->m_Height * 4;
#endif

        spritesMap.insert({ fileNoExt, tex });
        spritesMapIndex.insert({ Index++, tex });

        return tex;
    }

    bool SpriteLoader::LoadAllSpritesFromFolder(std::string const& path) {
        auto files = GetAllFilesInFolder(path, "." + extension);
        for (auto& file : files) {
            LoadSpriteFromFolder(path + "\\" + file);
        }

        istxd = false;

        return true;
    }

    CSprite2d SpriteLoader::GetSprite(std::string const& name) {
        CSprite2d sprite;
        auto s = spritesMap.find(name);
        if (s != spritesMap.end())
            sprite.m_pTexture = s->second;
        
        return sprite;
    }

    CSprite2d SpriteLoader::GetSprite(uint32_t id) {
        CSprite2d sprite;

        auto s = spritesMapIndex.find(id);
        if (s != spritesMapIndex.end())
            sprite.m_pTexture = s->second;

        return sprite;
    }

    texClass* SpriteLoader::GetTex(std::string const& name) {
        auto s = spritesMap.find(name);
        if (s != spritesMap.end())
            return s->second;
        return nullptr;
    }

    void SpriteLoader::SetMipMapOn(bool on) {
        mipMap = on;
    }

    void SpriteLoader::SetExtension(std::string ext) {
        extension = ext;
    }

    uint32_t SpriteLoader::GetMemoryUsed() {
        return memUsed / (1024 * 1024);
    }
}
#endif
