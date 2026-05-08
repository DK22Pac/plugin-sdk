/*
    Plugin-SDK (Grand Theft Auto San Andreas) header file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/
#pragma once

#include "PluginBase.h"

class PLUGIN_API CAnimationStyleDescriptor {
public:
	char groupName[16];
	char blockName[16];
	int field_20;
	int animsCount;
	void *animNames;
	void *animDesc;
};
VALIDATE_OFFSET(CAnimationStyleDescriptor, groupName, 0x0);
VALIDATE_OFFSET(CAnimationStyleDescriptor, blockName, 0x10);
VALIDATE_OFFSET(CAnimationStyleDescriptor, field_20, 0x20);
VALIDATE_OFFSET(CAnimationStyleDescriptor, animsCount, 0x24);
VALIDATE_OFFSET(CAnimationStyleDescriptor, animNames, 0x28);
VALIDATE_OFFSET(CAnimationStyleDescriptor, animDesc, 0x2C);
VALIDATE_SIZE(CAnimationStyleDescriptor, 0x30);
