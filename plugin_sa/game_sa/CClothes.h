/*
    Plugin-SDK (Grand Theft Auto) header file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/
#pragma once

#include "plbase/PluginBase_SA.h"

#pragma pack(push, 4)
class PLUGIN_API CClothes
{
public:
	unsigned __int32 m_adwModelKeys[10];
	unsigned __int32 m_adwTextureKeys[18];
	float m_fFatStat;
	float m_fMuscleStat;
};
#pragma pack(pop)

VALIDATE_SIZE(CClothes, 0x78);