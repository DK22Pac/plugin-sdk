/*
    Plugin-SDK (Grand Theft Auto Vice City) header file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/
#pragma once

#include "PluginBase.h"

class PLUGIN_API CAnimationStyleDescriptor {
public:
    char *groupName;
    char *blockName;
    int modelIndex;
    int animsCount;
    char **animNames;
    struct {
        int animId;
        int flags;
    } *animDesc;
};
VALIDATE_OFFSET(CAnimationStyleDescriptor, groupName, 0x0);
VALIDATE_OFFSET(CAnimationStyleDescriptor, blockName, 0x4);
VALIDATE_OFFSET(CAnimationStyleDescriptor, modelIndex, 0x8);
VALIDATE_OFFSET(CAnimationStyleDescriptor, animsCount, 0xC);
VALIDATE_OFFSET(CAnimationStyleDescriptor, animNames, 0x10);
VALIDATE_OFFSET(CAnimationStyleDescriptor, animDesc, 0x14);
VALIDATE_SIZE(CAnimationStyleDescriptor, 0x18);