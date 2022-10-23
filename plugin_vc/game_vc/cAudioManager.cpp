/*
	Plugin-SDK (Grand Theft Auto Vice City) source file
	Authors: GTA Community. See more here
	https://github.com/DK22Pac/plugin-sdk
	Do not delete this comment block. Respect others' work!
*/
#include "cAudioManager.h"

cAudioManager AudioManager = *(cAudioManager*)0x78D718;

CVehicle* cAudioManager::FindVehicleOfPlayer() {
	return plugin::CallAndReturn<CVehicle*, 0x5F5A60>();
}
