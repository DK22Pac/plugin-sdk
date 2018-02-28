/*
    Plugin-SDK (Grand Theft Auto San Andreas) source file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/
#include "cTransmission.h"

cTransmission::cTransmission()
{
	((void (__thiscall *)(cTransmission *))0x6D0450)(this);
};

void cTransmission::InitGearRatios()
{
	((void (__thiscall *)(cTransmission *))0x6D0460)(this);
};

void cTransmission::CalculateGearForSimpleCar(float velocity, unsigned char& currrentGear)
{
	((void (__thiscall *)(cTransmission *, float, unsigned char&))0x6D0530)(this, velocity, currrentGear);
};

void cTransmission::DisplayGearRatios()
{
	((void (__thiscall *)(cTransmission *))0x6D0590)(this);
};

float cTransmission::CalculateDriveAcceleration(float& gasPedal, unsigned char& currrentGear, float& gearChangeCount, float& speed, float& unk1, float& unk2, bool allWheelsOnGround, unsigned char handlingType)
{
	return ((float (__thiscall *)(cTransmission *, float&, unsigned char&, float&, float&, float&, float&, bool, unsigned char))0x6D05E0)(this, gasPedal, currrentGear, gearChangeCount, speed, unk1, unk2, allWheelsOnGround, handlingType);
};