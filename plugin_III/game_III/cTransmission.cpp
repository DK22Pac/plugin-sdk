/*
    Plugin-SDK (Grand Theft Auto 3) source file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/
#include "cTransmission.h"

tTransmissionGear** cTransmission::pGearRatio  = (tTransmissionGear**)0x64D05C;
tTransmissionGear** cTransmission::pGearRatio0 = (tTransmissionGear**)0x64D040;
tTransmissionGear** cTransmission::pGearRatio1 = (tTransmissionGear**)0x64D038;
tTransmissionGear** cTransmission::CurrentGear = (tTransmissionGear**)0x64D048;
float& cTransmission::fAcceleration = *(float *)0x64D04C;
float& cTransmission::fVelocity   = *(float *)0x64D054;
float& cTransmission::fCheat     = *(float *)0x64D058;


// Converted from thiscall float cTransmission::CalculateDriveAcceleration(float const& gasPedal,uchar & currrentGear,float &pSpeed,float const& pCurrentSpeed,bool bCheat) 0x5506B0
float cTransmission::CalculateDriveAcceleration(float const& gasPedal, unsigned char& currrentGear, float& pSpeed, float const& pCurrentSpeed, bool bCheat) {
    return plugin::CallMethodAndReturn<float, 0x5506B0, cTransmission *, float const&, unsigned char&, float&, float const&, bool>(this, gasPedal, currrentGear, pSpeed, pCurrentSpeed, bCheat);
}

// Converted from thiscall void cTransmission::CalculateGearForSimpleCar(float velocity,uchar & currrentGear) 0x550A00
void cTransmission::CalculateGearForSimpleCar(float velocity, unsigned char& currrentGear) {
    plugin::CallMethod<0x550A00, cTransmission *, float, unsigned char&>(this, velocity, currrentGear);
}

// Converted from thiscall void cTransmission::InitGearRatios(void) 0x550590 
void cTransmission::InitGearRatios() {
    plugin::CallMethod<0x550590, cTransmission *>(this);
}

// Converted from thiscall void cTransmission::cTransmission(void) 0x550580 
cTransmission::cTransmission() {
    plugin::CallMethod<0x550580, cTransmission *>(this);
}