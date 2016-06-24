#pragma once

#include "plbase/PluginBase_SA.h"
#include "LimbOrienation.h"

#pragma pack(push, 4)
class PLUGIN_API CPedIK
{
public:
	class CPed *m_pPed;
	LimbOrienation m_TorsoOrien;
	float m_fSlopePitch;
	float m_fSlopePitchLimitMult;
	float m_fSlopeRoll;
	float m_fBodyRoll;
	unsigned __int32 m_dwFlags;
};
#pragma pack(pop)

VALIDATE_SIZE(CPedIK, 0x20);