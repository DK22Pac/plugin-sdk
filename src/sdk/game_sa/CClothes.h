#pragma once

#include <plugin/plugin.h>

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