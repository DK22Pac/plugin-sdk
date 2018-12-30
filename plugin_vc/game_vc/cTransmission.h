/*
Plugin-SDK (Grand Theft Auto Vice City) header file
Authors: GTA Community. See more here
https://github.com/DK22Pac/plugin-sdk
Do not delete this comment block. Respect others' work!
*/
#pragma once

#include "PluginBase.h"
#include "tTransmissionGear.h"

class PLUGIN_API cTransmission
{
public:
    tTransmissionGear m_aGears[6];
    unsigned char   m_nDriveType; // F/R/4
    unsigned char   m_nEngineType; // P/D/E
    unsigned char   m_nNumberOfGears; // 1 to 6
    unsigned char m_nHandlingFlags;
    float             m_fEngineAcceleration; // 0.1 to 10.0
    float             m_fMaxGearVelocity; // 5.0 to 150.0
    float             m_fMaxSpeed;
    float             m_fMinGearVelocity;
    float             m_fCurrentSpeed;

    //funcs

    float CalculateDriveAcceleration(float const& gasPedal, unsigned char& currrentGear, float& arg2, float const& arg3, bool arg4);
    void CalculateGearForSimpleCar(float velocity, unsigned char& currrentGear);
    void InitGearRatios();
    cTransmission();
};
VALIDATE_SIZE(cTransmission, 0x60);