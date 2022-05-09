/*
	Plugin-SDK (Grand Theft Auto 3) header file
	Authors: GTA Community. See more here
	https://github.com/DK22Pac/plugin-sdk
	Do not delete this comment block. Respect others' work!
*/
#pragma once
#include "PluginBase.h"
#include "CEntity.h"

class CRenderer {
public:
	static int& ms_nNoOfVisibleEntities;
	static CEntity** ms_aVisibleEntityPtrs;
};
