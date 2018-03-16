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

VALIDATE_SIZE(tHandlingData, 0xDC);