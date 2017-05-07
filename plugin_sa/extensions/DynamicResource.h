#pragma once
#include <string>
#include <vector>
#include "plugin.h"

namespace plugin {
    class DynamicResource {
        static std::vector<DynamicResource*> resourcesList;

    public:
        DynamicResource();
        virtual ~DynamicResource();
        virtual void Load() = 0;
        virtual void Unload() = 0;
        static void ReleaseAllDynamicResources();
        static void RecreateAllDynamicResources();
        static void InitDynamicResourceSystem();
    };
}