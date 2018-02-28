/*
    Plugin-SDK (Grand Theft Auto Vice City) header file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/
#pragma once

#include "PluginBase.h"

struct tQueuedMode {
	short Mode;
private:
    char _pad2[2];
public:
	float Duration;
	short MinZoom;
	short MaxZoom;
};

VALIDATE_SIZE(tQueuedMode, 0xC);
