/*
    Plugin-SDK (Grand Theft Auto) source file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/
#include "CRemote.h"

// Converted from cdecl void CRemote::GivePlayerRemoteControlledCar(float x,float y,float z,float angle,ushort modelIndex) 0x435C30
void CRemote::GivePlayerRemoteControlledCar(float x, float y, float z, float angle, unsigned short modelIndex) {
    plugin::Call<0x435C30, float, float, float, float, unsigned short>(x, y, z, angle, modelIndex);
}

// Converted from cdecl void CRemote::TakeRemoteControlledCarFromPlayer(void) 0x435DA0
void CRemote::TakeRemoteControlledCarFromPlayer() {
    plugin::Call<0x435DA0>();
}
