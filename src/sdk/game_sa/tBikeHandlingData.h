#pragma once

#include <plugin/plugin.h>

#pragma pack(push, 4)
struct PLUGIN_API tBikeHandlingData
{
	__int32 m_dwVehicleId;
	float   m_fLeanFwdCOM;
	float   m_fLeanFwdForce;
	float   m_fLeanBakCOM;
	float   m_fLeanBakForce;
	float   m_fMaxLean;
	float   m_fFullAnimLean;
	float   m_fDesLean;
	float   m_fSpeedSteer;
	float   m_fSlipSteer;
	float   m_fNoPlayerCOMz;
	float   m_fWheelieAng;
	float   m_fStoppieAng;
	float   m_fWheelieSteer;
	float   m_fWheelieStabMult;
	float   m_fStoppieStabMult;
};
#pragma pack(pop)

VALIDATE_SIZE(tBikeHandlingData, 0x40);