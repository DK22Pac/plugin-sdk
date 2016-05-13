#include "CPlaneTrails.h"

CPlaneTrail *CPlaneTrails::aArray = (CPlaneTrail *)0xC713A8;

void CPlaneTrails::Init()
{
	((void (__cdecl *)())0x717370)();
}

void CPlaneTrails::Update()
{
	((void (__cdecl *)())0x7174F0)();
}

void CPlaneTrails::RegisterPoint(CVector point, unsigned int trailIndex)
{
	((void (__cdecl *)(CVector, unsigned int))0x7174C0)(point, trailIndex);
}