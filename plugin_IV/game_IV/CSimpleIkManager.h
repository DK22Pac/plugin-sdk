/*
    Plugin-SDK (Grand Theft Auto IV) header file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/
#pragma once
#include "PluginBase.h"
#include "CVirtualBase.h"
#include "Rage.h"

class CSimpleIkManager : CVirtualBase {
public:
    int field_4;
    int field_8;
    int field_C;
    int field_10;
    int field_14;
    int field_18;
    int field_1C;
    rage::Vector3 field_20;
    int field_2C;
    int field_30;
    int field_34;
    int field_38;
    int field_3C;
};

VALIDATE_SIZE(CSimpleIkManager, 0x40);
