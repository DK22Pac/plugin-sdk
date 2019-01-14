/*
    Plugin-SDK (Grand Theft Auto 3) header file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/
#pragma once

#include "PluginBase.h"

class PLUGIN_API CAnimBlock {
public:
 	char szName[24];
	int startAnimation;	// into CAnimBlock::ms_aAnimations[]
	int animationCount;
};

VALIDATE_SIZE(CAnimBlock,0x20);