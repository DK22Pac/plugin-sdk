/*
    Plugin-SDK (Grand Theft Auto San Andreas) source file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/
#include "CPlaneTrail.h"

void CPlaneTrail::Init()
{
	((void (__cdecl *)())0x717160)();
}

void CPlaneTrail::Render(float intensity)
{
	((void (__cdecl *)(float))0x717180)(intensity);
}

void CPlaneTrail::RegisterPoint(CVector point)
{
	((void (__cdecl *)(CVector))0x7172D0)(point);
}