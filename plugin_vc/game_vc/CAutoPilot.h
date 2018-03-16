/*
    Plugin-SDK (Grand Theft Auto Vice City) header file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/
#pragma once

#include "PluginBase.h"

class CAutoPilot {
public:
    char pad_0[42];
    unsigned char uFlagsEx;
    char pad_2B[3];
    bool bRealPhysics;  // using real physics
    char pad_34[9];
    unsigned char byteUnknown_3D;
    char pad_3E[59];
};

VALIDATE_SIZE(CAutoPilot, 0x74);