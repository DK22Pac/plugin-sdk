/*
    Plugin-SDK (Grand Theft Auto 3) header file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/
#pragma once

#include "PluginBase.h"
#include "CVehicle.h"

class PLUGIN_API CCurrentVehicle {
    PLUGIN_NO_DEFAULT_CONSTRUCTION(CCurrentVehicle)

public:
    CVehicle *m_pCurrentVehicle;

    SUPPORTED_10EN_11EN_STEAM void Display();
    SUPPORTED_10EN_11EN_STEAM void Init();
    SUPPORTED_10EN_11EN_STEAM void Process();
};

VALIDATE_SIZE(CCurrentVehicle, 0x4);

#include "meta/meta.CCurrentVehicle.h"
