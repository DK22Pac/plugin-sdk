/*
    Plugin-SDK (Grand Theft Auto IV) source file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/
#include "CTaskManager.h"

CTask* CTaskManager::FindActiveTaskByType(int32_t index) {
    return plugin::CallMethodAndReturnDyn<CTask*, CTaskManager*>(gpattern("53 55 56 33 F6 57 8B E9"), this, index);
}

