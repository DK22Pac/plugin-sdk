/*
Plugin-SDK (Grand Theft Auto 3) header file
Authors: GTA Community. See more here
https://github.com/DK22Pac/plugin-sdk
Do not delete this comment block. Respect others' work!
*/
#pragma once

#include "PluginBase.h"

struct tTransmissionGear {
	float fMaxVelocity;
	float fShiftUpVelocity;
	float fShiftDownVelocity;
};

VALIDATE_SIZE(tTransmissionGear, 0xC);