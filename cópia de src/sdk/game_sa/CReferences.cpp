#include "CReferences.h"

CReference *CReferences::aRefs = (CReference *)0xB9B9A8;
CReference **CReferences::pEmptyList = (CReference **)0xBA1768;

void CReferences::Init()
{
	((void (__cdecl *)())0x5719B0)();
}

unsigned int CReferences::ListSize(CReference *ref)
{
	return ((unsigned int (__cdecl *)())0x5719E0)();
}

void CReferences::RemoveReferencesToPlayer()
{
	((void (__cdecl *)())0x571AD0)();
}

void CReferences::PruneAllReferencesInWorld()
{
	((void (__cdecl *)())0x571CC0)();
}