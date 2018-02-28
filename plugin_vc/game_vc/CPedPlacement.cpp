/*
Plugin-SDK (Grand Theft Auto Vice City) source file
Authors: GTA Community. See more here
https://github.com/DK22Pac/plugin-sdk
Do not delete this comment block. Respect others' work!
*/
#include "CPedPlacement.h"

// Converted from cdecl bool CPedPlacement::FindZCoorForPed(CVector *posn) 0x52FA60
bool CPedPlacement::FindZCoorForPed(CVector* posn) {
    return plugin::CallAndReturn<bool, 0x52FA60, CVector*>(posn);
}

// Converted from cdecl bool CPedPlacement::IsPositionClearForPed(CVector const& posn, float, int, CEntity **entity) 0x52FBD0
bool CPedPlacement::IsPositionClearForPed(CVector const& posn, float arg1, int arg2, CEntity** entity) {
    return plugin::CallAndReturn<bool, 0x52FBD0, CVector const&, float, int, CEntity**>(posn, arg1, arg2, entity);
}

// Converted from cdecl bool CPedPlacement::IsPositionClearOfCars(CVector *posn) 0x52FBA0
bool CPedPlacement::IsPositionClearOfCars(CVector* posn) {
    return plugin::CallAndReturn<bool, 0x52FBA0, CVector*>(posn);
}