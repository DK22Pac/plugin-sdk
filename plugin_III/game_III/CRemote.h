/*
    Plugin-SDK (Grand Theft Auto) header file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/
#pragma once

#include "plbase/PluginBase_III.h"

class CRemote {
public:
    static void GivePlayerRemoteControlledCar(float x, float y, float z, float angle, unsigned short modelIndex);
    static void TakeRemoteControlledCarFromPlayer();
};
