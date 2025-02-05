/*
    Plugin-SDK (Grand Theft Auto Vice City) source file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/
#include "cBuoyancy.h"

cBuoyancy& mod_Buoyancy = *(cBuoyancy*)0x978940;

bool cBuoyancy::ProcessBuoyancy(CPhysical* phys, float buoyancy, CVector* point, CVector* impulse) {
    return plugin::CallMethodAndReturn<bool, 0x5AAC90, cBuoyancy*, CPhysical *, float, CVector*, CVector*>(this, phys, buoyancy, point, impulse);
}
