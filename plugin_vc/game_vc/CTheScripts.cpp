/*
    Plugin-SDK (Grand Theft Auto Vice City) header file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/
#include "CTheScripts.h"

unsigned int MAX_SCRIPT_SPACE_SIZE = 260512;

unsigned char *CTheScripts::ScriptSpace = (unsigned char *)0x821280;

bool CTheScripts::IsPlayerOnAMission() {
	return plugin::CallAndReturn<bool, 0x44FE30>();
}

bool CTheScripts::IsPlayerStopped(CPlayerInfo* player) {
	return plugin::CallAndReturn<bool, 0x45ED50, CPlayerInfo*>(player);
}

bool CTheScripts::IsVehicleStopped(CVehicle* vehicle) {
	return plugin::CallAndReturn<bool, 0x45ED20, CVehicle*>(vehicle);
}
