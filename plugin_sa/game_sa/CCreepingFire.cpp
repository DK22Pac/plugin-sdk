/*
    Plugin-SDK (Grand Theft Auto San Andreas) source file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/
#include "CCreepingFire.h"

// Converted from cdecl bool CCreepingFire::TryToStartFireAtCoors(CVector posn,signed char numGenerations,bool,bool scriptFire,float zDistance) 0x53A450
bool CCreepingFire::TryToStartFireAtCoors(CVector posn, signed char numGenerations, _IGNORED_ bool arg2, bool scriptFire, float zDistance) {
    return ((bool(__cdecl *)(CVector, signed char, bool, bool, float))0x53A450)(posn, numGenerations, arg2, scriptFire, zDistance);
}

// Converted from cdecl void CCreepingFire::SetReadyToBurn(void) 0x539CC0
void CCreepingFire::SetReadyToBurn() {
    ((void(__cdecl *)())0x539CC0)();
}

// Converted from cdecl void CCreepingFire::Update(void) 0x539CE0
void CCreepingFire::Update() {
    ((void(__cdecl *)())0x539CE0)();
}