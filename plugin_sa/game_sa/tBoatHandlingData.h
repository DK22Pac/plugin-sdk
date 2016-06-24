#pragma once

#include "plbase/PluginBase_SA.h"
#include "CVector.h"

#pragma pack(push, 4)
struct PLUGIN_API tBoatHandlingData
{
	__int32 m_dwVehicleId;
	float   m_fThrustY;
	float   m_fThrustZ;
	float   m_fThrustAppZ;
	float   m_fAqPlaneForce;
	float   m_fAqPlaneLimit;
	float   m_fAqPlaneOffset;
	float   m_fWaveAudioMult;
	float   m_fLookLRBehindCamHeight;
	CVector m_vMoveRes;
	CVector m_vTurnRes; 
};
#pragma pack(pop)

VALIDATE_SIZE(tBoatHandlingData, 0x3C);