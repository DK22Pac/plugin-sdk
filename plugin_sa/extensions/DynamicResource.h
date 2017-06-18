#pragma once
#include <string>
#include <vector>
#include "plugin.h"

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