/*
    Plugin-SDK (Grand Theft Auto IV) source file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/
#include "CTaskSimpleAimGun.h"

static uint32_t CTaskSimpleAimGun__GetAtAddr;
CEntity* CTaskSimpleAimGun::GetAt(bool arg1, bool arg2) {
    return plugin::CallMethodAndReturnDyn<CEntity*, CTaskSimpleAimGun*>(CTaskSimpleAimGun__GetAtAddr, this, arg1, arg2);
}

template<>
void plugin::InitPatterns<CTaskSimpleAimGun>() {
    CTaskSimpleAimGun__GetAtAddr = plugin::GetPattern("8B 54 24 04 85 D2 74 05", 0);
}
