/*
    Plugin-SDK (Grand Theft Auto Vice City) header file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/
#pragma once

#include "PluginBase.h"

class PLUGIN_API CAnimBlock {
public:
 	char name[20];
 	char bLoaded;
 	char pad;
 	short usRefs;
 	int startAnimation;
 	int animationCount;
};
VALIDATE_OFFSET(CAnimBlock, name, 0x0);
VALIDATE_OFFSET(CAnimBlock, bLoaded, 0x14);
VALIDATE_OFFSET(CAnimBlock, pad, 0x15);
VALIDATE_OFFSET(CAnimBlock, usRefs, 0x16);
VALIDATE_OFFSET(CAnimBlock, startAnimation, 0x18);
VALIDATE_OFFSET(CAnimBlock, animationCount, 0x1C);
VALIDATE_SIZE(CAnimBlock, 0x20);