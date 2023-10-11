/*
    Plugin-SDK (Grand Theft Auto IV) source file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/
#include "CTaskComplexAimAndThrowProjectile.h"

static uint32_t CTaskComplexAimAndThrowProjectile__GetAtAddr;
CPed* CTaskComplexAimAndThrowProjectile::GetAt() {
    return plugin::CallMethodAndReturnDyn<CPed*, CTaskComplexAimAndThrowProjectile*>(CTaskComplexAimAndThrowProjectile__GetAtAddr, this);
}

template<>
void plugin::InitPatterns<CTaskComplexAimAndThrowProjectile>() {
    CTaskComplexAimAndThrowProjectile__GetAtAddr = plugin::GetPattern("8B 41 14 C3 CC CC CC CC CC CC CC CC CC CC CC CC", 0);
}
