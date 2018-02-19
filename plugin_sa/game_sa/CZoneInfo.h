/*
Plugin-SDK (Grand Theft Auto) header file
Authors: GTA Community. See more here
https://github.com/DK22Pac/plugin-sdk
Do not delete this comment block. Respect others' work!
*/
#pragma once
#include "plbase/PluginBase_SA.h"

class PLUGIN_API CZoneInfo
{
public:
	char GangDensity[10];
	char DrugDealerCounter;
	char ZoneRGBA[4];
	char Flags1;
	char Flags2;
};

VALIDATE_SIZE(CZoneInfo, 0x11);