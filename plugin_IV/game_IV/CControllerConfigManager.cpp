/*
    Plugin-SDK (Grand Theft Auto IV) source file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/
#include "CControllerConfigManager.h"
#include "Patch.h"

static void* ControlsManagerAddr;
CControllerConfigManager* ControlsManager = (CControllerConfigManager*)ControlsManagerAddr; // [4]

template<>
void plugin::InitPatterns<CControllerConfigManager>() {
    ControlsManagerAddr = plugin::patch::GetPointer(plugin::GetPattern("B8 ? ? ? ? C3 B8 ? ? ? ? C3 CC CC CC CC CC CC CC CC CC CC CC CC CC", 1));
}
