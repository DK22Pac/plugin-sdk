/*
    Plugin-SDK (Grand Theft Auto 3) header file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/
#pragma once

#include "PluginBase.h"

class PLUGIN_API CMouseControllerState {
public:
    bool lmb;
    bool rmb;
    bool mmb;
    bool wheelUp;
    bool wheelDown;
    bool bmx;
    bool bmx2;
    float x;
    float y;

    SUPPORTED_10EN_11EN_STEAM CMouseControllerState();

    SUPPORTED_10EN_11EN_STEAM void Clear();
};

VALIDATE_SIZE(CMouseControllerState, 0x10);

#include "meta/meta.CMouseControllerState.h"
