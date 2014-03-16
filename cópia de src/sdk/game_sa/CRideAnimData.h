#pragma once
#include "plugin/plugin.h"

#pragma pack(push, 4)
class CRideAnimData
{
	UInt32 m_dwAnimGroup;
	Int32 dword4;
	Float m_fAnimLean;
	Int32 dwordC;
	Float dword10;
	Float m_fHandlebarsAngle;
	Float m_fAnimPercentageState;
};
#pragma pack(pop)

VALIDATE_SIZE(CRideAnimData, 0x1C);