/*
    Plugin-SDK (Grand Theft Auto IV) header file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/
#pragma once
#include "PluginBase.h"

class CPtrNodeSingle {
public:
    int32_t ptr;
    CPtrNodeSingle* next;
};
VALIDATE_OFFSET(CPtrNodeSingle, ptr, 0x0);
VALIDATE_OFFSET(CPtrNodeSingle, next, 0x4);
VALIDATE_SIZE(CPtrNodeSingle, 0x8);
