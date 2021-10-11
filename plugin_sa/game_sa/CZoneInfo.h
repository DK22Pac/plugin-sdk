/*
	Plugin-SDK (Grand Theft Auto San Andreas) header file
	Authors: GTA Community. See more here
	https://github.com/DK22Pac/plugin-sdk
	Do not delete this comment block. Respect others' work!
*/
#pragma once
#include "PluginBase.h"
#include "CRGBA.h"

class PLUGIN_API CZoneInfo
{
public:
	char m_nGangDensity[10];
	char m_nDealerCounter;
	CRGBA m_ZoneColor;
	char m_nFlags;
	char m_nPopulationRace;
};

VALIDATE_SIZE(CZoneInfo, 0x11);