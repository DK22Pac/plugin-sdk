/*
	Plugin-SDK (Grand Theft Auto Vice City) header file
	Authors: GTA Community. See more here
	https://github.com/DK22Pac/plugin-sdk
	Do not delete this comment block. Respect others' work!
*/
#pragma once
#include "PluginBase.h"
#include "CVehicle.h"

class PLUGIN_API cAudioManager {
public:
	static CVehicle* FindVehicleOfPlayer();

};

extern cAudioManager AudioManager;
