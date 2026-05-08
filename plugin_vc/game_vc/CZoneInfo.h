/*
    Plugin-SDK (Grand Theft Auto Vice City) header file
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
VALIDATE_OFFSET(CZoneInfo, carDensity, 0x0);
VALIDATE_OFFSET(CZoneInfo, carThreshold, 0x2);
VALIDATE_OFFSET(CZoneInfo, boatThreshold, 0x14);
VALIDATE_OFFSET(CZoneInfo, gangThreshold, 0x18);
VALIDATE_OFFSET(CZoneInfo, copThreshold, 0x2A);
VALIDATE_OFFSET(CZoneInfo, pedDensity, 0x2C);
VALIDATE_OFFSET(CZoneInfo, gangPedThreshold, 0x2E);
VALIDATE_OFFSET(CZoneInfo, copPedThreshold, 0x40);
VALIDATE_OFFSET(CZoneInfo, pedGroup, 0x42);
VALIDATE_SIZE(CZoneInfo, 0x44);
