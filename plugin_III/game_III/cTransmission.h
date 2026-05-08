/*
    Plugin-SDK (Grand Theft Auto 3) header file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/
#pragma once

#include "PluginBase.h"
#include "tTransmissionGear.h"

class PLUGIN_API cTransmission {
public:
    tTransmissionGear m_aGears[6];
    unsigned char   m_nDriveType; // F/R/4
    unsigned char   m_nEngineType; // P/D/E
    unsigned char   m_nNumberOfGears; // 1 to 6
    struct {
        unsigned char m_b1gBoost : 1;
        unsigned char m_b2gBoost : 1;
    } m_nHandlingFlags;
    float           m_fEngineAcceleration; // 0.1 to 10.0
    float           m_fMaxForwardsVelocity;
    float           m_fMaxTrafficVelocity;
    float           m_fMaxBackwardsVelocity;
    float           m_fCurrentVelocity;
    
    //variables
    static tTransmissionGear** pGearRatio;
    static tTransmissionGear** pGearRatio0;
    static tTransmissionGear** pGearRatio1;
    static tTransmissionGear** CurrentGear;
    static float& fAcceleration;
    static float& fVelocity;
    static float& fCheat;
    
    //funcs
    float CalculateDriveAcceleration(float const& gasPedal, unsigned char& currrentGear, float& pSpeed, float const& pCurrentSpeed, bool bCheat);
    void CalculateGearForSimpleCar(float velocity, unsigned char& currrentGear);
    void InitGearRatios();
    cTransmission();
};
VALIDATE_OFFSET(cTransmission, m_aGears, 0x0);
VALIDATE_OFFSET(cTransmission, m_nDriveType, 0x48);
VALIDATE_OFFSET(cTransmission, m_nEngineType, 0x49);
VALIDATE_OFFSET(cTransmission, m_nNumberOfGears, 0x4A);
VALIDATE_OFFSET(cTransmission, m_nHandlingFlags, 0x4B);
VALIDATE_OFFSET(cTransmission, m_fEngineAcceleration, 0x4C);
VALIDATE_OFFSET(cTransmission, m_fMaxForwardsVelocity, 0x50);
VALIDATE_OFFSET(cTransmission, m_fMaxTrafficVelocity, 0x54);
VALIDATE_OFFSET(cTransmission, m_fMaxBackwardsVelocity, 0x58);
VALIDATE_OFFSET(cTransmission, m_fCurrentVelocity, 0x5C);
VALIDATE_SIZE(cTransmission, 0x60);
