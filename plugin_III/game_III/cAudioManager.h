/*
    Plugin-SDK (Grand Theft Auto 3) header file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/
#pragma once

#include "PluginBase.h"

class cAudioManager {
public:

    cAudioManager();
    ~cAudioManager();
    bool UsesSiren(unsigned int index); // see eVehicleIndex
    bool UsesSirenSwitching(unsigned int index); // see eVehicleIndex
};

//VALIDATE_SIZE(cAudioManager, 0x4B14);

extern cAudioManager &gAudioManager;