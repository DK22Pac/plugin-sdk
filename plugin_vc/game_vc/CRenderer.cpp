/*
	Plugin-SDK (Grand Theft Auto Vice City) source file
	Authors: GTA Community. See more here
	https://github.com/DK22Pac/plugin-sdk
	Do not delete this comment block. Respect others' work!
*/
#include "CRenderer.h"

int& CRenderer::ms_nNoOfVisibleEntities = *(int*)0xA0D1E4;
CEntity** CRenderer::ms_aVisibleEntityPtrs = (CEntity**)0x7D54F8;

