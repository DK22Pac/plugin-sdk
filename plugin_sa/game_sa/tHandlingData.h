/*
    Plugin-SDK (Grand Theft Auto) header file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/
#pragma once

#include "plbase/PluginBase_SA.h"
#include "cTransmission.h"
#include "CVector.h"
#include "eVehicleHandlingModelFlags.h"
#include "eVehicleHandlingFlags.h"

enum eVehicleLightsSize : unsigned __int8
{
	LIGHTS_LONG,
	LIGHTS_SMALL,
	LIGHTS_BIG,
	LIGHTS_TALL
};

#pragma pack(push, 4)
struct PLUGIN_API tHandlingData
{
	__int32            m_dwVehicleId;
	float              m_fMass; // 1.0 to 50000.0
	float field_8;
	float              m_fTurnMass;
	float              m_fDragMult;
	CVector            m_vCentreOfMass; // x, y, z - 1.0 to 50000.0
	unsigned __int8    m_nPercentSubmerged; // 10 to 120 (> 100% vehicle sinks)
	float              m_fBuoyancyConstant;
	float              m_fTractionMultiplier; // 0.5 to 2.0
	cTransmission      m_transmissionData;
	float              m_fBrakeDeceleration; // 0.1 to 10.0
	float              m_fBrakeBias; // 0.0 > x > 1.0
	__int8             m_bABS; // 0/1
	__int8 field_9D;
	__int8 field_9E;
	__int8 field_9F;
	float              m_fSteeringLock; // 10.0 to 40.0
	float              m_fTractionLoss;
	float              m_fTractionBias;
	float              m_fSuspensionForceLevel; // not [L/M/H]
	float              m_fSuspensionDampingLevel; // not [L/M/H]
	float              m_fSuspensionHighSpdComDamp; // often zero - 200.0 or more for bouncy vehicles
	float              m_fSuspensionUpperLimit;
	float              m_fSuspensionLowerLimit;
	float              m_fSuspensionBiasBetweenFrontAndRear;
	float              m_fSuspensionAntiDiveMultiplier;
	float              m_fCollisionDamageMultiplier; // 0.2 to 5.0
	union {
		eVehicleHandlingModelFlags m_dwModelFlags;
		struct {
			unsigned __int32 m_bIsVan : 1;
			unsigned __int32 m_bIsBus : 1;
			unsigned __int32 m_bIsLow : 1;
			unsigned __int32 m_bIsBig : 1;
			unsigned __int32 m_bReverseBonnet : 1;
			unsigned __int32 m_bHangingBoot : 1;
			unsigned __int32 m_bTailgateBoot : 1;
			unsigned __int32 m_bNoswingBoot : 1;
			unsigned __int32 m_bNoDoors : 1;
			unsigned __int32 m_bTandemSeats : 1;
			unsigned __int32 m_bSitInBoat : 1;
			unsigned __int32 m_bConvertible : 1;
			unsigned __int32 m_bNoExhaust : 1;
			unsigned __int32 m_bDoubleExhaust : 1;
			unsigned __int32 m_bNo1fpsLookBehind : 1;
			unsigned __int32 m_bForceDoorCheck : 1;
			unsigned __int32 m_bAxleFNotlit : 1;
			unsigned __int32 m_bAxleFSolid : 1;
			unsigned __int32 m_bAxleFMcpherson : 1;
			unsigned __int32 m_bAxleFReverse : 1;
			unsigned __int32 m_bAxleRNotlit : 1;
			unsigned __int32 m_bAxleRSolid : 1;
			unsigned __int32 m_bAxleRMcpherson : 1;
			unsigned __int32 m_bAxleRReverse : 1;
			unsigned __int32 m_bIsBike : 1;
			unsigned __int32 m_bIsHeli : 1;
			unsigned __int32 m_bIsPlane : 1;
			unsigned __int32 m_bIsBoat : 1;
			unsigned __int32 m_bBouncePanels : 1;
			unsigned __int32 m_bDoubleRwheels : 1;
			unsigned __int32 m_bForceGroundClearance : 1;
			unsigned __int32 m_bIsHatchback : 1;
		};
	};
	union {
		eVehicleHandlingFlags m_dwHandlingFlags;
		struct {
			unsigned __int32 m_b1gBoost : 1;
			unsigned __int32 m_b2gBoost : 1;
			unsigned __int32 m_bNpcAntiRoll : 1;
			unsigned __int32 m_bNpcNeutralHandl : 1;
			unsigned __int32 m_bNoHandbrake : 1;
			unsigned __int32 m_bSteerRearwheels : 1;
			unsigned __int32 m_bHbRearwheelSteer : 1;
			unsigned __int32 m_bAltSteerOpt : 1;
			unsigned __int32 m_bWheelFNarrow2 : 1;
			unsigned __int32 m_bWheelFNarrow : 1;
			unsigned __int32 m_bWheelFWide : 1;
			unsigned __int32 m_bWheelFWide2 : 1;
			unsigned __int32 m_bWheelRNarrow2 : 1;
			unsigned __int32 m_bWheelRNarrow : 1;
			unsigned __int32 m_bWheelRWide : 1;
			unsigned __int32 m_bWheelRWide2 : 1;
			unsigned __int32 m_bHydraulicGeom : 1;
			unsigned __int32 m_bHydraulicInst : 1;
			unsigned __int32 m_bHydraulicNone : 1;
			unsigned __int32 m_bNosInst : 1;
			unsigned __int32 m_bOffroadAbility : 1;
			unsigned __int32 m_bOffroadAbility2 : 1;
			unsigned __int32 m_bHalogenLights : 1;
			unsigned __int32 m_bProcRearwheelFirst : 1;
			unsigned __int32 m_bUseMaxspLimit : 1;
			unsigned __int32 m_bLowRider : 1;
			unsigned __int32 m_bStreetRacer : 1;
			unsigned __int32 m_bSwingingChassis : 1;
		};
	};
	float              m_fSeatOffsetDistance; // // ped seat position offset towards centre of car
	unsigned __int32   m_dwMonetaryValue; // 1 to 100000
	eVehicleLightsSize m_nFrontLights;
	eVehicleLightsSize m_nRearLights;
	unsigned __int8    m_nAnimGroup;
};
#pragma pack(pop)

VALIDATE_SIZE(tHandlingData, 0xE0);