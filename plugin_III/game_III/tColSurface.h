/*
    Plugin-SDK (Grand Theft Auto 3) header file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/
#pragma once

#include "PluginBase.h"

struct PLUGIN_API tColSurface {
    unsigned char material;
    unsigned char flag;
    unsigned char lighting;
    unsigned char light;
};

VALIDATE_SIZE(tColSurface, 0x4);