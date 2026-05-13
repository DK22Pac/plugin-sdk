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
VALIDATE_OFFSET(tQueuedMode, Mode, 0x0);
VALIDATE_OFFSET(tQueuedMode, Duration, 0x4);
VALIDATE_OFFSET(tQueuedMode, MinZoom, 0x8);
VALIDATE_OFFSET(tQueuedMode, MaxZoom, 0xA);
VALIDATE_SIZE(tQueuedMode, 0xC);
