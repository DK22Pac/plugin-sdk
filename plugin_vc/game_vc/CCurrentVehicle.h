/*
    Plugin-SDK (Grand Theft Auto) header file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/
#pragma once

#include "plbase\PluginBase_VC.h"

class CCurrentVehicle
{
public:
	class CVehicle *m_pCurrentVehicle;
};

VALIDATE_SIZE(CCurrentVehicle, 0x04);