/*
    Plugin-SDK (Grand Theft Auto IV) header file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/
#include "CTaskManager.h"

static uint32_t CTaskManager__FindActiveTaskByTypeAddr;
CTask* CTaskManager::FindActiveTaskByType(int32_t index) {
    return plugin::CallMethodAndReturnDyn<CTask*, CTaskManager*>(CTaskManager__FindActiveTaskByTypeAddr, this, index);
}

template<>
void plugin::InitPatterns<CTaskManager>() {
    CTaskManager__FindActiveTaskByTypeAddr = plugin::GetPattern("53 55 56 33 F6 57 8B E9", 0);
}
