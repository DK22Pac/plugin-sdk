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

VALIDATE_SIZE(CAnimBlock,0x20);