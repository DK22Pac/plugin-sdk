/*
    Plugin-SDK (Grand Theft Auto) SHARED header file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/
#pragma once
#include "PluginBase.h"
#include "Other.h"
#include "Image.h"

#if defined(GTA3) || defined(GTAVC) || defined(GTASA) || defined(GTAIV)
#include "CSprite2d.h"

#include <unordered_map>

namespace plugin {

#ifdef RAGE
    using texClass = rage::grcTexturePC;
#elif RW
    using texClass = RwTexture;
#else 
    using texClass = void;
#endif

    class SpriteLoader {
    private:
#ifdef RW
        RwTexDictionary* texDictionary;
#endif
        std::unordered_map<std::string, texClass*, CaseInsensitiveUnorderedMap::Hash, CaseInsensitiveUnorderedMap::Comp> spritesMap;
        std::unordered_map<uint32_t, texClass*> spritesMapIndex;

        std::string slotName;
        bool istxd;
        bool mipMap;
        std::string extension;

    public:
        inline SpriteLoader() {
#ifdef RW
            texDictionary = nullptr;
#endif
            spritesMap = {};
            spritesMapIndex = {};
            slotName = {};
            istxd = false;
            mipMap = false;
            extension = "png";
        }
        void Clear();
        bool LoadAllSpritesFromTxd(std::string const& path);
#ifdef RW
        RwTexture* LoadSpriteFromFolder(std::string const& file);
        bool LoadAllSpritesFromFolder(std::string const& path);
#endif
        CSprite2d GetSprite(std::string const& name);
        CSprite2d GetSprite(uint32_t id);
        texClass* GetTex(std::string const& name);
        void SetMipMapOn(bool on);
        void SetExtension(std::string ext);
    };
}
#endif
