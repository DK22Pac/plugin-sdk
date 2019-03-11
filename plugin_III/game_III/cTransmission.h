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

VALIDATE_SIZE(cTransmission, 0x60);
