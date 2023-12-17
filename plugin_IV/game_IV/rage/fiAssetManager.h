/*
    Plugin-SDK (Grand Theft Auto IV) header file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/
#pragma once
#include "PluginBase.h"
#include "fiStream.h"

namespace rage {
    struct Entry {
        char folder[512];
    };

    class fiAssetManager {
    public:
        char m_Paths[4][512];
        rage::fiAssetManager::Entry m_Entries[8];
        int32_t m_SP;
        uint32_t m_PathCount;
        int32_t m_WritePath;
        bool m_WritePathIsWriteOnly;

    public:
        fiStream* Open(const char* base, const char* ext, bool probeOnly, bool readOnly);
        void FullPath(char* dest, int maxLen, const char* base, const char* ext, int pathIndex);
        void AddExtension(char* dest, int maxLen, const char* base, const char* ext);
        fiStream* Create(const char* base, const char* ext, bool probeOnly);
    };

    VALIDATE_SIZE(fiAssetManager, 0x1810);

    extern fiAssetManager& ASSET;
}
