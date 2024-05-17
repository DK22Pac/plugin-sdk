/*
    Plugin-SDK (Grand Theft Auto 3) source file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/
#include "cBuoyancy.h"

cBuoyancy& mod_Buoyancy = *(cBuoyancy*)0x8F2674;

bool cBuoyancy::ProcessBuoyancy(CPhysical* phys, float buoyancy, CVector* point, CVector* impulse) {
    return plugin::CallMethodAndReturn<bool, 0x546270>(this, phys, buoyancy, point, impulse);
}
