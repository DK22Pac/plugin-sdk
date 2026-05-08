/*
    Plugin-SDK (Grand Theft Auto Vice City) header file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/
#pragma once
#include "PluginBase.h"
#include "cTransmission.h"
#include "CVector.h"
#include "eVehicleFlags.h"

enum eVehicleLightsSize : unsigned char
{
    LIGHTS_LONG,
    LIGHTS_SMALL,
    LIGHTS_BIG,
    LIGHTS_TALL
};

struct tHandlingData {
    int m_dwVehicleId;
    float fMass;
    float fMassInverted;
    float fTurnMass;
    CVector m_vDimensions;
    CVector m_vecCentreOfMass;
    int nPercentSubmerged;
    float fBuoyancyForce;
    float fTractionMultiplier;
    cTransmission m_transmissionData;
    float fBrakeDeceleration;
    float fBrakeBias;
    unsigned char bABS;
    char pad[3];
    float fSteeringLock;                         
    float fTractionLoss;                          
    float fTractionBias; 
    float fABS; 
    float fSuspensionForceLevel;                                  
    float fSuspensionDampingLevel;                                 
    float fSuspUpperLimit;                         
    float fSuspLowerLimit;                          
    float fSuspBias;                     
    float fSuspAntiDiveMultiplier;                                 
    float fCollisionDamageMultiplier;                                      
    unsigned int uFlags;                     
    float fSeatOffsetDistance;                            
    int nMonetaryValue;                        
    eVehicleLightsSize bFrontLights;
    eVehicleLightsSize bRearLights;
    char pad2[2];
};
VALIDATE_OFFSET(tHandlingData, m_dwVehicleId, 0x0);
VALIDATE_OFFSET(tHandlingData, fMass, 0x4);
VALIDATE_OFFSET(tHandlingData, fMassInverted, 0x8);
VALIDATE_OFFSET(tHandlingData, fTurnMass, 0xC);
VALIDATE_OFFSET(tHandlingData, m_vDimensions, 0x10);
VALIDATE_OFFSET(tHandlingData, m_vecCentreOfMass, 0x1C);
VALIDATE_OFFSET(tHandlingData, nPercentSubmerged, 0x28);
VALIDATE_OFFSET(tHandlingData, fBuoyancyForce, 0x2C);
VALIDATE_OFFSET(tHandlingData, fTractionMultiplier, 0x30);
VALIDATE_OFFSET(tHandlingData, m_transmissionData, 0x34);
VALIDATE_OFFSET(tHandlingData, fBrakeDeceleration, 0x94);
VALIDATE_OFFSET(tHandlingData, fBrakeBias, 0x98);
VALIDATE_OFFSET(tHandlingData, bABS, 0x9C);
VALIDATE_OFFSET(tHandlingData, pad, 0x9D);
VALIDATE_OFFSET(tHandlingData, fSteeringLock, 0xA0);
VALIDATE_OFFSET(tHandlingData, fTractionLoss, 0xA4);
VALIDATE_OFFSET(tHandlingData, fTractionBias, 0xA8);
VALIDATE_OFFSET(tHandlingData, fABS, 0xAC);
VALIDATE_OFFSET(tHandlingData, fSuspensionForceLevel, 0xB0);
VALIDATE_OFFSET(tHandlingData, fSuspensionDampingLevel, 0xB4);
VALIDATE_OFFSET(tHandlingData, fSuspUpperLimit, 0xB8);
VALIDATE_OFFSET(tHandlingData, fSuspLowerLimit, 0xBC);
VALIDATE_OFFSET(tHandlingData, fSuspBias, 0xC0);
VALIDATE_OFFSET(tHandlingData, fSuspAntiDiveMultiplier, 0xC4);
VALIDATE_OFFSET(tHandlingData, fCollisionDamageMultiplier, 0xC8);
VALIDATE_OFFSET(tHandlingData, uFlags, 0xCC);
VALIDATE_OFFSET(tHandlingData, fSeatOffsetDistance, 0xD0);
VALIDATE_OFFSET(tHandlingData, nMonetaryValue, 0xD4);
VALIDATE_OFFSET(tHandlingData, bFrontLights, 0xD8);
VALIDATE_OFFSET(tHandlingData, bRearLights, 0xD9);
VALIDATE_OFFSET(tHandlingData, pad2, 0xDA);
VALIDATE_SIZE(tHandlingData, 0xDC);