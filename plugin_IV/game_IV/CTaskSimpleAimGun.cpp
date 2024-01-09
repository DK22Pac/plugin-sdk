/*
    Plugin-SDK (Grand Theft Auto IV) source file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/
#include "CTaskSimpleAimGun.h"

CEntity* CTaskSimpleAimGun::GetAt(void* out, bool arg2) {
    return plugin::CallMethodAndReturnDyn<CEntity*, CTaskSimpleAimGun*>(gpattern("8B 54 24 04 85 D2 74 05"), this, out, arg2);
}
