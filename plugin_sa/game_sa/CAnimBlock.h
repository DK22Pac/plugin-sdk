/*
    Plugin-SDK (Grand Theft Auto San Andreas) header file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/
#pragma once

#include "PluginBase.h"

class PLUGIN_API CAnimBlock {
public:

 	char szName[16];
 	char bLoaded;
 	char pad;
 	short usRefs;
 	int startAnimation;
 	int animationCount;
 	int animationStyle;
};
VALIDATE_OFFSET(CAnimBlock, szName, 0x0);
VALIDATE_OFFSET(CAnimBlock, bLoaded, 0x10);
VALIDATE_OFFSET(CAnimBlock, pad, 0x11);
VALIDATE_OFFSET(CAnimBlock, usRefs, 0x12);
VALIDATE_OFFSET(CAnimBlock, startAnimation, 0x14);
VALIDATE_OFFSET(CAnimBlock, animationCount, 0x18);
VALIDATE_OFFSET(CAnimBlock, animationStyle, 0x1C);
VALIDATE_SIZE(CAnimBlock, 0x20);
