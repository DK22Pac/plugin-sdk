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
    public:
#ifdef RW
        RwTexDictionary* texDictionary;
#endif
        std::unordered_map<std::string, texClass*, CaseInsensitiveUnorderedMap::Hash, CaseInsensitiveUnorderedMap::Comp> spritesMap;
        std::array<CSprite2d, 64> spriteBuf;
        uint32_t buf;
        std::string slotName;
        bool istxd;

    public:
        SpriteLoader() = default;
        void Clear();
        bool LoadAllSpritesFromTxd(std::string const& path);
#ifdef RW
        bool LoadAllSpritesFromFolder(std::string const& path);
#endif
        CSprite2d* GetSprite(std::string const& name);
        texClass* GetTex(std::string const& name);
    };
}
#endif
