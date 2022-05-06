/*
	Plugin-SDK (Grand Theft Auto 3) source file
	Authors: GTA Community. See more here
	https://github.com/DK22Pac/plugin-sdk
	Do not delete this comment block. Respect others' work!
*/
#include "CRenderer.h"

int& CRenderer::ms_nNoOfVisibleEntities = *(int*)0x940730;
CEntity** CRenderer::ms_aVisibleEntityPtrs = (CEntity**)0x6E9920;

