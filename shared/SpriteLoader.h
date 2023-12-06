/*
    Plugin-SDK (Grand Theft Auto) SHARED header file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/
#pragma once
#include "PluginBase.h"
#include "Other.h"

#if defined(GTA3) || defined(GTAVC) || defined(GTASA) || defined(GTAIV)
#include "CSprite2d.h"

#include <unordered_map>

namespace plugin {

#ifdef RAGE
    using texClass = rage::grcTexturePC;
#elif RW
    using texClass = RwTexture;
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

    public:
        SpriteLoader() = default;
        void Clear();
        void LoadAllSpritesFromTxd(std::string const& path);
        CSprite2d* GetSprite(std::string const& name);
        texClass* GetTex(std::string const& name);
    };
}
#endif
