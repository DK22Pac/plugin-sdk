/*
    Plugin-SDK (Grand Theft Auto 3) header file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/
#pragma once

#include "PluginBase.h"

class PLUGIN_API CRemote {
public:
    SUPPORTED_10EN_11EN_STEAM static void GivePlayerRemoteControlledCar(float x, float y, float z, float angle, unsigned short modelIndex);
    SUPPORTED_10EN_11EN_STEAM static void TakeRemoteControlledCarFromPlayer();
};

#include "meta/meta.CRemote.h"
