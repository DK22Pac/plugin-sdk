#pragma once
#include "plbase/PluginBase_SA.h"

#pragma pack(push, 4)
class CRideAnimData
{
	uint32_t m_dwAnimGroup;
	int32_t dword4;
	float m_fAnimLean;
	int32_t dwordC;
	float dword10;
	float m_fHandlebarsAngle;
	float m_fAnimPercentageState;
};
#pragma pack(pop)

VALIDATE_SIZE(CRideAnimData, 0x1C);