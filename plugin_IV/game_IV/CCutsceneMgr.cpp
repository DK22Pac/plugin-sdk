/*
    Plugin-SDK (Grand Theft Auto IV) source file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/
#include "CCutsceneMgr.h"
#include "Patch.h"

static int32_t* CCutsceneMgr__ms_runningAddr;
int32_t& CCutsceneMgr::ms_running = *(int32_t*)CCutsceneMgr__ms_runningAddr;

static uint32_t CCutsceneMgr__IsRunningAddr;
bool CCutsceneMgr::IsRunning() {
    return plugin::CallAndReturnDyn<bool>(CCutsceneMgr__IsRunningAddr);
}

template<>
void plugin::InitPatterns<CCutsceneMgr>() {
    CCutsceneMgr__ms_runningAddr = (int32_t*)plugin::patch::GetPointer(plugin::GetPattern("C7 05 ? ? ? ? ? ? ? ? C6 05 ? ? ? ? ? C6 05 ? ? ? ? ? C6 05 ? ? ? ? ? C6 05 ? ? ? ? ? C7 05 ? ? ? ? ? ? ? ? C7 05 ? ? ? ? ? ? ? ? B9", 2));
    CCutsceneMgr__IsRunningAddr = plugin::GetPattern("83 3D ? ? ? ? ? 0F 95 C0 C3 CC CC CC CC CC 8B 0D ? ? ? ? 8B 54 24 04", 0);
}
