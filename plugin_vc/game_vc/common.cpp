/*
    Plugin-SDK (Grand Theft Auto) source file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/
#include "common.h"

// Converted from cdecl float FindPlayerHeading(void) 0x4BBF70;
float FindPlayerHeading() {
    return plugin::CallAndReturn<float, 0x4BBF70>();
}

// Converted from cdecl CVector& FindPlayerCentreOfWorld_NoSniperShift(void) 0x4BC020;
CVector& FindPlayerCentreOfWorld_NoSniperShift() {
    return plugin::CallAndReturn<CVector&, 0x4BC020>();
}

// Converted from cdecl CVector& FindPlayerCentreOfWorld(int playerId) 0x4BC0A0;
CVector& FindPlayerCentreOfWorld(int playerId) {
    return plugin::CallAndReturn<CVector&, 0x4BC0A0, int>(playerId);
}

// Converted from cdecl CPed* FindPlayerPed(void) 0x4BC120;
CPed* FindPlayerPed() {
    return plugin::CallAndReturn<CPed*, 0x4BC120>();
}

// Converted from cdecl CTrain* FindPlayerTrain(void) 0x4BC140;
CTrain* FindPlayerTrain() {
    return plugin::CallAndReturn<CTrain*, 0x4BC140>();
}

// Converted from cdecl CEntity* FindPlayerEntity(void) 0x4BC1B0;
CEntity* FindPlayerEntity() {
    return plugin::CallAndReturn<CEntity*, 0x4BC1B0>();
}

// Converted from cdecl CVehicle* FindPlayerVehicle(void) 0x4BC1E0;
CVehicle* FindPlayerVehicle() {
    return plugin::CallAndReturn<CVehicle*, 0x4BC1E0>();
}

// Converted from cdecl CVector& FindPlayerSpeed(void) 0x4BC210;
CVector& FindPlayerSpeed() {
    return plugin::CallAndReturn<CVector&, 0x4BC210>();
}

// Converted from cdecl CVector& FindPlayerCoors(void) 0x4BC240;
CVector& FindPlayerCoors() {
    return plugin::CallAndReturn<CVector&, 0x4BC240>();
}