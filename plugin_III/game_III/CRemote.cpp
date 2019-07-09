/*
    Plugin-SDK (Grand Theft Auto 3) source file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/
#include "CRemote.h"

PLUGIN_SOURCE_FILE

int addrof(CRemote::GivePlayerRemoteControlledCar) = ADDRESS_BY_VERSION(0x435C30, 0x435C30, 0x435C30);
int gaddrof(CRemote::GivePlayerRemoteControlledCar) = GLOBAL_ADDRESS_BY_VERSION(0x435C30, 0x435C30, 0x435C30);

void CRemote::GivePlayerRemoteControlledCar(float x, float y, float z, float angle, unsigned short modelIndex) {
    plugin::CallDynGlobal<float, float, float, float, unsigned short>(gaddrof(CRemote::GivePlayerRemoteControlledCar), x, y, z, angle, modelIndex);
}

int addrof(CRemote::TakeRemoteControlledCarFromPlayer) = ADDRESS_BY_VERSION(0x435DA0, 0x435DA0, 0x435DA0);
int gaddrof(CRemote::TakeRemoteControlledCarFromPlayer) = GLOBAL_ADDRESS_BY_VERSION(0x435DA0, 0x435DA0, 0x435DA0);

void CRemote::TakeRemoteControlledCarFromPlayer() {
    plugin::CallDynGlobal(gaddrof(CRemote::TakeRemoteControlledCarFromPlayer));
}
