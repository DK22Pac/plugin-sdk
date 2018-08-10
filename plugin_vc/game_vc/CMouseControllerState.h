/*
    Plugin-SDK (Grand Theft Auto Vice City) header file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/
#pragma once

#include "PluginBase.h"

class PLUGIN_API CMouseControllerState {
public:
    char lmb;
    char rmb;
    char mmb;
    char wheelUp;
    char wheelDown;
    char bmx1;
    char bmx2;
private:
    char _pad7;
public:
    float X;
    float Y;
};

VALIDATE_SIZE(CMouseControllerState, 0x10);
