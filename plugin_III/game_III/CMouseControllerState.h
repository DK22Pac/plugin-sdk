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
VALIDATE_OFFSET(CMouseControllerState, lmb, 0x0);
VALIDATE_OFFSET(CMouseControllerState, rmb, 0x1);
VALIDATE_OFFSET(CMouseControllerState, mmb, 0x2);
VALIDATE_OFFSET(CMouseControllerState, wheelUp, 0x3);
VALIDATE_OFFSET(CMouseControllerState, wheelDown, 0x4);
VALIDATE_OFFSET(CMouseControllerState, bmx, 0x5);
VALIDATE_OFFSET(CMouseControllerState, bmx2, 0x6);
VALIDATE_OFFSET(CMouseControllerState, x, 0x8);
VALIDATE_OFFSET(CMouseControllerState, y, 0xC);
VALIDATE_SIZE(CMouseControllerState, 0x10);

#include "meta/meta.CMouseControllerState.h"
