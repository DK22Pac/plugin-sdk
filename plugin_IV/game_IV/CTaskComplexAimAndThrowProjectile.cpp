/*
    Plugin-SDK (Grand Theft Auto IV) source file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/
#include "CTaskComplexAimAndThrowProjectile.h"

CPed* CTaskComplexAimAndThrowProjectile::GetAt() {
    return plugin::CallMethodAndReturnDyn<CPed*, CTaskComplexAimAndThrowProjectile*>(gpattern("8B 41 14 C3 CC CC CC CC CC CC CC CC CC CC CC CC"), this);
}

