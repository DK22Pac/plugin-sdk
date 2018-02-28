/*
    Plugin-SDK (Grand Theft Auto) SHARED header file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/
#pragma once
#include <string>
#include <vector>

namespace plugin {
    class DynamicResource {
        static std::vector<DynamicResource*> resourcesList;
        static bool resourceSystemInitialized;

        static void ReleaseAllDynamicResources();
        static void RecreateAllDynamicResources();
    public:
        DynamicResource();
        virtual ~DynamicResource();
        virtual void Load() = 0;
        virtual void Unload() = 0;
    };
}
