/*
    Plugin-SDK (Grand Theft Auto San Andreas) source file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/
#include "CReferences.h"

CReference *CReferences::aRefs = (CReference *)0xB9B9A8;
CReference **CReferences::pEmptyList = (CReference **)0xBA1768;

void CReferences::Init()
{
	((void (__cdecl *)())0x5719B0)();
}

unsigned int CReferences::ListSize(CReference *ref)
{
	return ((unsigned int (__cdecl *)(CReference *))0x5719E0)(ref);
}

void CReferences::RemoveReferencesToPlayer()
{
	((void (__cdecl *)())0x571AD0)();
}

void CReferences::PruneAllReferencesInWorld()
{
	((void (__cdecl *)())0x571CC0)();
}