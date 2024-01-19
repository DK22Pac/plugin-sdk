/*
    Plugin-SDK (Grand Theft Auto IV) header file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/
#pragma once
#include "PluginBase.h"

class CPtrNodeDouble {
public:
    int32_t ptr;
    CPtrNodeDouble* next;
    CPtrNodeDouble* prev;
};

VALIDATE_SIZE(CPtrNodeDouble, 0xC);
