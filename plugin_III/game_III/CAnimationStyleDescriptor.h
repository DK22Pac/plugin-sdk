/*
    Plugin-SDK (Grand Theft Auto 3) header file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/
#pragma once

#include "PluginBase.h"

struct CAnimAssocDesc {
    int animId;
    int flags;
};

class PLUGIN_API CAnimationStyleDescriptor {
public:
    char *groupName;
    char *blockName;
    int modelIndex;
    int animsCount;
    char **animNames;
    CAnimAssocDesc* animDescs;
};

VALIDATE_SIZE(CAnimationStyleDescriptor, 0x18);