/*
    Plugin-SDK (Grand Theft Auto Vice City) header file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/
#pragma once

#include "PluginBase.h"
#include "CPlayerInfo.h"
#include "CVehicle.h"
extern unsigned int MAX_SCRIPT_SPACE_SIZE; // default 260512

class PLUGIN_API CTheScripts {
public:
	static unsigned char *ScriptSpace; // static unsigned char ScriptSpace[MAX_SCRIPT_SPACE_SIZE]

	static bool CTheScripts::IsPlayerOnAMission();

	static bool CTheScripts::IsPlayerStopped(CPlayerInfo* player);

	static bool CTheScripts::IsVehicleStopped(CVehicle* vehicle);
};
