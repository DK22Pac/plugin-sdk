/*
Plugin-SDK (Grand Theft Auto) source file
Authors: GTA Community. See more here
https://github.com/DK22Pac/plugin-sdk
Do not delete this comment block. Respect others' work!
*/
#include "cTransmission.h"

// Converted from thiscall float cTransmission::CalculateDriveAcceleration(float const& gasPedal,uchar & currrentGear,float &,float const&,bool) 0x5506B0
float cTransmission::CalculateDriveAcceleration(float const& gasPedal, unsigned char& currrentGear, float& arg2, float const& arg3, bool arg4) {
    return plugin::CallMethodAndReturn<float, 0x5506B0, cTransmission *, float const&, unsigned char&, float&, float const&, bool>(this, gasPedal, currrentGear, arg2, arg3, arg4);
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