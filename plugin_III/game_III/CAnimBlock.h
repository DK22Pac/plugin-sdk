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
VALIDATE_OFFSET(CAnimBlock, szName, 0x0);
VALIDATE_OFFSET(CAnimBlock, startAnimation, 0x18);
VALIDATE_OFFSET(CAnimBlock, animationCount, 0x1C);
VALIDATE_SIZE(CAnimBlock, 0x20);