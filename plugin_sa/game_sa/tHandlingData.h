/*
    Plugin-SDK (Grand Theft Auto San Andreas) header file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/
#pragma once
#include "PluginBase.h"
#include "cTransmission.h"
#include "CVector.h"
#include "eVehicleHandlingModelFlags.h"
#include "eVehicleHandlingFlags.h"

enum PLUGIN_API eVehicleLightsSize : unsigned char {
    LIGHTS_LONG,
    LIGHTS_SMALL,
    LIGHTS_BIG,
    LIGHTS_TALL
};

struct PLUGIN_API tHandlingData {
    int           m_nVehicleId;
    float         m_fMass; // 1.0 to 50000.0
    float field_8;
    float         m_fTurnMass;
    float         m_fDragMult;
    CVector       m_vecCentreOfMass; // x, y, z - 1.0 to 50000.0
    unsigned char m_nPercentSubmerged; // 10 to 120 (> 100% vehicle sinks)
    float         m_fBuoyancyConstant;
    float         m_fTractionMultiplier; // 0.5 to 2.0
    cTransmission m_transmissionData;
    float         m_fBrakeDeceleration; // 0.1 to 10.0
    float         m_fBrakeBias; // 0.0 > x > 1.0
    char          m_bABS; // 0/1
    char field_9D;
    char field_9E;
    char field_9F;
    float         m_fSteeringLock; // 10.0 to 40.0
    float         m_fTractionLoss;
    float         m_fTractionBias;
    float         m_fSuspensionForceLevel; // not [L/M/H]
    float         m_fSuspensionDampingLevel; // not [L/M/H]
    float         m_fSuspensionHighSpdComDamp; // often zero - 200.0 or more for bouncy vehicles
    float         m_fSuspensionUpperLimit;
    float         m_fSuspensionLowerLimit;
    float         m_fSuspensionBiasBetweenFrontAndRear;
    float         m_fSuspensionAntiDiveMultiplier;
    float         m_fCollisionDamageMultiplier; // 0.2 to 5.0
    union {
        eVehicleHandlingModelFlags m_nModelFlags;
        struct {
            unsigned int m_bIsVan : 1;
            unsigned int m_bIsBus : 1;
            unsigned int m_bIsLow : 1;
            unsigned int m_bIsBig : 1;
            unsigned int m_bReverseBonnet : 1;
            unsigned int m_bHangingBoot : 1;
            unsigned int m_bTailgateBoot : 1;
            unsigned int m_bNoswingBoot : 1;
            unsigned int m_bNoDoors : 1;
            unsigned int m_bTandemSeats : 1;
            unsigned int m_bSitInBoat : 1;
            unsigned int m_bConvertible : 1;
            unsigned int m_bNoExhaust : 1;
            unsigned int m_bDoubleExhaust : 1;
            unsigned int m_bNo1fpsLookBehind : 1;
            unsigned int m_bForceDoorCheck : 1;
            unsigned int m_bAxleFNotlit : 1;
            unsigned int m_bAxleFSolid : 1;
            unsigned int m_bAxleFMcpherson : 1;
            unsigned int m_bAxleFReverse : 1;
            unsigned int m_bAxleRNotlit : 1;
            unsigned int m_bAxleRSolid : 1;
            unsigned int m_bAxleRMcpherson : 1;
            unsigned int m_bAxleRReverse : 1;
            unsigned int m_bIsBike : 1;
            unsigned int m_bIsHeli : 1;
            unsigned int m_bIsPlane : 1;
            unsigned int m_bIsBoat : 1;
            unsigned int m_bBouncePanels : 1;
            unsigned int m_bDoubleRwheels : 1;
            unsigned int m_bForceGroundClearance : 1;
            unsigned int m_bIsHatchback : 1;
        };
    };
    union {
        eVehicleHandlingFlags m_nHandlingFlags;
        struct {
            unsigned int m_b1gBoost : 1;
            unsigned int m_b2gBoost : 1;
            unsigned int m_bNpcAntiRoll : 1;
            unsigned int m_bNpcNeutralHandl : 1;
            unsigned int m_bNoHandbrake : 1;
            unsigned int m_bSteerRearwheels : 1;
            unsigned int m_bHbRearwheelSteer : 1;
            unsigned int m_bAltSteerOpt : 1;
            unsigned int m_bWheelFNarrow2 : 1;
            unsigned int m_bWheelFNarrow : 1;
            unsigned int m_bWheelFWide : 1;
            unsigned int m_bWheelFWide2 : 1;
            unsigned int m_bWheelRNarrow2 : 1;
            unsigned int m_bWheelRNarrow : 1;
            unsigned int m_bWheelRWide : 1;
            unsigned int m_bWheelRWide2 : 1;
            unsigned int m_bHydraulicGeom : 1;
            unsigned int m_bHydraulicInst : 1;
            unsigned int m_bHydraulicNone : 1;
            unsigned int m_bNosInst : 1;
            unsigned int m_bOffroadAbility : 1;
            unsigned int m_bOffroadAbility2 : 1;
            unsigned int m_bHalogenLights : 1;
            unsigned int m_bProcRearwheelFirst : 1;
            unsigned int m_bUseMaxspLimit : 1;
            unsigned int m_bLowRider : 1;
            unsigned int m_bStreetRacer : 1;
            unsigned int m_bUnused1 : 1;
            unsigned int m_bSwingingChassis : 1;
        };
    };
    float              m_fSeatOffsetDistance; // // ped seat position offset towards centre of car
    unsigned int       m_nMonetaryValue; // 1 to 100000
    eVehicleLightsSize m_nFrontLights;
    eVehicleLightsSize m_nRearLights;
    unsigned char      m_nAnimGroup;
};
VALIDATE_OFFSET(tHandlingData, m_nVehicleId, 0x0);
VALIDATE_OFFSET(tHandlingData, m_fMass, 0x4);
VALIDATE_OFFSET(tHandlingData, field_8, 0x8);
VALIDATE_OFFSET(tHandlingData, m_fTurnMass, 0xC);
VALIDATE_OFFSET(tHandlingData, m_fDragMult, 0x10);
VALIDATE_OFFSET(tHandlingData, m_vecCentreOfMass, 0x14);
VALIDATE_OFFSET(tHandlingData, m_nPercentSubmerged, 0x20);
VALIDATE_OFFSET(tHandlingData, m_fBuoyancyConstant, 0x24);
VALIDATE_OFFSET(tHandlingData, m_fTractionMultiplier, 0x28);
VALIDATE_OFFSET(tHandlingData, m_transmissionData, 0x2C);
VALIDATE_OFFSET(tHandlingData, m_fBrakeDeceleration, 0x94);
VALIDATE_OFFSET(tHandlingData, m_fBrakeBias, 0x98);
VALIDATE_OFFSET(tHandlingData, m_bABS, 0x9C);
VALIDATE_OFFSET(tHandlingData, field_9D, 0x9D);
VALIDATE_OFFSET(tHandlingData, field_9E, 0x9E);
VALIDATE_OFFSET(tHandlingData, field_9F, 0x9F);
VALIDATE_OFFSET(tHandlingData, m_fSteeringLock, 0xA0);
VALIDATE_OFFSET(tHandlingData, m_fTractionLoss, 0xA4);
VALIDATE_OFFSET(tHandlingData, m_fTractionBias, 0xA8);
VALIDATE_OFFSET(tHandlingData, m_fSuspensionForceLevel, 0xAC);
VALIDATE_OFFSET(tHandlingData, m_fSuspensionDampingLevel, 0xB0);
VALIDATE_OFFSET(tHandlingData, m_fSuspensionHighSpdComDamp, 0xB4);
VALIDATE_OFFSET(tHandlingData, m_fSuspensionUpperLimit, 0xB8);
VALIDATE_OFFSET(tHandlingData, m_fSuspensionLowerLimit, 0xBC);
VALIDATE_OFFSET(tHandlingData, m_fSuspensionBiasBetweenFrontAndRear, 0xC0);
VALIDATE_OFFSET(tHandlingData, m_fSuspensionAntiDiveMultiplier, 0xC4);
VALIDATE_OFFSET(tHandlingData, m_fCollisionDamageMultiplier, 0xC8);
VALIDATE_OFFSET(tHandlingData, m_nModelFlags, 0xCC);
VALIDATE_OFFSET(tHandlingData, m_nHandlingFlags, 0xD0);
VALIDATE_OFFSET(tHandlingData, m_fSeatOffsetDistance, 0xD4);
VALIDATE_OFFSET(tHandlingData, m_nMonetaryValue, 0xD8);
VALIDATE_OFFSET(tHandlingData, m_nFrontLights, 0xDC);
VALIDATE_OFFSET(tHandlingData, m_nRearLights, 0xDD);
VALIDATE_OFFSET(tHandlingData, m_nAnimGroup, 0xDE);
VALIDATE_SIZE(tHandlingData, 0xE0);
