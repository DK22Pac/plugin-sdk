/*
    Plugin-SDK (Grand Theft Auto) SHARED source file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/
#include "DynamicResource.h"
#include "plugin.h"

using namespace plugin;

#if defined(GTA3) || defined(GTAVC) || defined(GTASA)

std::vector<DynamicResource*> DynamicResource::resourcesList;
bool DynamicResource::resourceSystemInitialized = false;

DynamicResource::DynamicResource() {
    if (!resourceSystemInitialized) {
        plugin::Events::d3dLostEvent += ReleaseAllDynamicResources;
        plugin::Events::d3dResetEvent += RecreateAllDynamicResources;
        resourceSystemInitialized = true;
    }
    resourcesList.push_back(this);
}

DynamicResource::~DynamicResource() {
    resourcesList.erase(std::remove(resourcesList.begin(), resourcesList.end(), this), resourcesList.end());
}

void DynamicResource::ReleaseAllDynamicResources() {
    for (auto res : resourcesList) { res->Unload(); }
}

void DynamicResource::RecreateAllDynamicResources() {
    for (auto res : resourcesList) { res->Load(); }
}
#endif
