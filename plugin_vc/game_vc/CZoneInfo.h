/*
    Plugin-SDK (Grand Theft Auto Vice City) source file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/
#pragma once
#include "PluginBase.h"

struct CZoneInfo {
	unsigned short carDensity;
	unsigned short carThreshold[9];
	unsigned short boatThreshold[2];
	unsigned short gangThreshold[9];
	unsigned short copThreshold;
	unsigned short pedDensity;
	unsigned short gangPedThreshold[9];
	unsigned short copPedThreshold;
	unsigned short pedGroup;
};
