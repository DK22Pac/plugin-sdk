/*
Plugin-SDK (Grand Theft Auto) header file
Authors: GTA Community. See more here
https://github.com/DK22Pac/plugin-sdk
Do not delete this comment block. Respect others' work!
*/
#pragma once

#include "plbase/PluginBase_SA.h"


class PLUGIN_API CAnimationStyleDescriptor {
public:
	char groupName[16];
	char blockName[16];
	int field_20;
	int animsCount;
	void *animNames;
	void *animDesc;
};

VALIDATE_SIZE(CAnimationStyleDescriptor, 0x30);


