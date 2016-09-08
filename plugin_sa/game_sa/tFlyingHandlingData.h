/*
    Plugin-SDK (Grand Theft Auto) header file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/
#pragma once

#include "plbase/PluginBase_SA.h"
#include "CVector.h"

#pragma pack(push, 4)
struct PLUGIN_API tFlyingHandlingData
{
	__int32 m_dwVehicleId;
	float   m_fThrust;
	float   m_fThrustFallOff;
	float   m_fYaw;
	float   m_fYawStab;
	float   m_fSideSlip;
	float   m_fRoll;
	float   m_fRollStab;
	float   m_fPitch;
	float   m_fPitchStab;
	float   m_fFormLift;
	float   m_fAttackLift;
	float   m_fGearUpR;
	float   m_fGearDownL;
	float   m_fWindMult;
	float   m_fMoveRes;
	CVector m_vTurnRes;
	CVector m_vSpeedRes;
};
#pragma pack(pop)

VALIDATE_SIZE(tFlyingHandlingData, 0x58);