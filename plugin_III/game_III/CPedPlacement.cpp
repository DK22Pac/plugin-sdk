/*
Plugin-SDK (Grand Theft Auto 3) source file
Authors: GTA Community. See more here
https://github.com/DK22Pac/plugin-sdk
Do not delete this comment block. Respect others' work!
*/
#include "CPedPlacement.h"

// Converted from cdecl void CPedPlacement::FindZCoorForPed(CVector *position) 0x4EE340
void CPedPlacement::FindZCoorForPed(CVector* position) {
    plugin::Call<0x4EE340, CVector*>(position);
}

// Converted from cdecl bool CPedPlacement::IsPositionClearForPed(CVector *position) 0x4EE2C0
bool CPedPlacement::IsPositionClearForPed(CVector* position) {
    return plugin::CallAndReturn<bool, 0x4EE2C0, CVector*>(position);
}

// Converted from cdecl bool CPedPlacement::IsPositionClearOfCars(CVector *position) 0x4EE310
bool CPedPlacement::IsPositionClearOfCars(CVector* position) {
    return plugin::CallAndReturn<bool, 0x4EE310, CVector*>(position);
}
