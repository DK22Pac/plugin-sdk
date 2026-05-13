/*
    Plugin-SDK (Grand Theft Auto 3) header file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/
#pragma once

#include "PluginBase.h"
#include "CVector.h"
#include "cTransmission.h"
#include "eVehicleHandlingModelFlags.h"
#include "eHandlingIndex.h"

enum PLUGIN_API eVehicleLightsSize : unsigned char {
    LIGHTS_LONG,
    LIGHTS_SMALL,
    LIGHTS_BIG,
    LIGHTS_TALL
};

struct PLUGIN_API tHandlingData {
    uint32_t m_nHandlingId;
    float m_fMass; // 1.0 to 50000.0
    float m_fInvMass;
    float m_fTurnMass; 
    CVector m_vDimensions; // 0.0 > x > 20.0
    CVector m_vCentreOfMass; // -10.0 > x > 10.0
    unsigned char m_nPercentSubmerged; // 10 to 120
    // char _pad29[3];
    float m_fBuoyancyConstant; 
    float m_fTractionMultiplier; // 0.5 to 2.0
    cTransmission m_transmissionData; 
    float m_fBrakeDeceleration; // 0.1 to 10.0
    float m_fBrakeBias; // 0.0 > x > 1.0
    bool m_bABS; 
    // char _pad9D[3]; 
    float m_fSteeringLock; // 10.0 to 40.0
    float m_fTractionLoss; // 0.0 > x > 1.0
    float m_fTractionBias; // 0.0 > x > 1.0
    int field_AC; 
    float m_fSuspensionForceLevel;   // not [L/M/H]
    float m_fSuspensionDampingLevel; // not [L/M/H]
    float m_fSuspensionUpperLimit; 
    float m_fSuspensionLowerLimit; 
    float m_fSuspensionBiasBetweenFrontAndRear; 
    float m_fCollisionDamageMultiplier; // 0.2 to 5.0
    union {
        eVehicleHandlingModelFlags m_nModelFlags;
        struct {
            unsigned int m_b1gBoost : 1;
            unsigned int m_b2gBoost : 1;
            unsigned int m_bRevBonnet : 1;
            unsigned int m_bHangingBoot : 1;
            unsigned int m_bNoDoors : 1;
            unsigned int m_bIsVan : 1;
            unsigned int m_bIsBus : 1;
            unsigned int m_bIsLow : 1;
            unsigned int m_bDblExhaust : 1;
            unsigned int m_bTailgateBoot : 1;
            unsigned int m_bNoswingBoot : 1;
            unsigned int m_bNonplayerStabiliser : 1;
            unsigned int m_bNeutralHandling : 1;
            unsigned int m_bHasNoRoof : 1;
            unsigned int m_bIsBig : 1;
            unsigned int m_bHalogenLights : 1;
        };
    };
    float m_fSeatOffsetDistance; // ped seat position offset towards centre of car
    unsigned int m_nMonetaryValue; // 1 to 100000
    eVehicleLightsSize m_nFrontLights;
    eVehicleLightsSize m_nRearLights;
    //char _padD6[2];
};
VALIDATE_OFFSET(tHandlingData, m_nHandlingId, 0x0);
VALIDATE_OFFSET(tHandlingData, m_fMass, 0x4);
VALIDATE_OFFSET(tHandlingData, m_fInvMass, 0x8);
VALIDATE_OFFSET(tHandlingData, m_fTurnMass, 0xC);
VALIDATE_OFFSET(tHandlingData, m_vDimensions, 0x10);
VALIDATE_OFFSET(tHandlingData, m_vCentreOfMass, 0x1C);
VALIDATE_OFFSET(tHandlingData, m_nPercentSubmerged, 0x28);
VALIDATE_OFFSET(tHandlingData, m_fBuoyancyConstant, 0x2C);
VALIDATE_OFFSET(tHandlingData, m_fTractionMultiplier, 0x30);
VALIDATE_OFFSET(tHandlingData, m_transmissionData, 0x34);
VALIDATE_OFFSET(tHandlingData, m_fBrakeDeceleration, 0x94);
VALIDATE_OFFSET(tHandlingData, m_fBrakeBias, 0x98);
VALIDATE_OFFSET(tHandlingData, m_bABS, 0x9C);
VALIDATE_OFFSET(tHandlingData, m_fSteeringLock, 0xA0);
VALIDATE_OFFSET(tHandlingData, m_fTractionLoss, 0xA4);
VALIDATE_OFFSET(tHandlingData, m_fTractionBias, 0xA8);
VALIDATE_OFFSET(tHandlingData, field_AC, 0xAC);
VALIDATE_OFFSET(tHandlingData, m_fSuspensionForceLevel, 0xB0);
VALIDATE_OFFSET(tHandlingData, m_fSuspensionDampingLevel, 0xB4);
VALIDATE_OFFSET(tHandlingData, m_fSuspensionUpperLimit, 0xB8);
VALIDATE_OFFSET(tHandlingData, m_fSuspensionLowerLimit, 0xBC);
VALIDATE_OFFSET(tHandlingData, m_fSuspensionBiasBetweenFrontAndRear, 0xC0);
VALIDATE_OFFSET(tHandlingData, m_fCollisionDamageMultiplier, 0xC4);
VALIDATE_OFFSET(tHandlingData, m_nModelFlags, 0xC8);
VALIDATE_OFFSET(tHandlingData, m_fSeatOffsetDistance, 0xCC);
VALIDATE_OFFSET(tHandlingData, m_nMonetaryValue, 0xD0);
VALIDATE_OFFSET(tHandlingData, m_nFrontLights, 0xD4);
VALIDATE_OFFSET(tHandlingData, m_nRearLights, 0xD5);
VALIDATE_SIZE(tHandlingData, 0xD8);
