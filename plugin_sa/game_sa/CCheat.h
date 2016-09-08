/*
    Plugin-SDK (Grand Theft Auto) header file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/
#pragma once
#include "plbase/PluginBase_SA.h"

class PLUGIN_API CCheat {
public:
    // static char m_CheatString[30]
    static char *m_CheatString;

    static class CVehicle *VehicleCheat(int vehicleId);
	static class CVehicle *TankerTruck();
};