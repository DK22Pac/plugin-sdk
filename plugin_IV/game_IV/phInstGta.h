/*
    Plugin-SDK (Grand Theft Auto IV) header file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/
#pragma once
#include "PluginBase.h"
#include "rage/phInst.h"

class phInstGta : rage::phInst {
public:
    int field_50;
    int field_54;
    int field_58;
    int field_5C;
};
VALIDATE_OFFSET(phInstGta, field_50, 0x50);
VALIDATE_OFFSET(phInstGta, field_54, 0x54);
VALIDATE_OFFSET(phInstGta, field_58, 0x58);
VALIDATE_OFFSET(phInstGta, field_5C, 0x5C);
VALIDATE_SIZE(phInstGta, 0x60);
