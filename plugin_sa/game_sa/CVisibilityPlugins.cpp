/*
    Plugin-SDK (Grand Theft Auto San Andreas) source file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/
#include "CVisibilityPlugins.h"

int& CVisibilityPlugins::ms_atomicPluginOffset = *(int *)0x8D608C;

void CVisibilityPlugins::SetAtomicFlag(RpAtomic * atomic, unsigned short flag)
{
	((void (__cdecl *)(RpAtomic *, unsigned short))0x7322B0)(atomic, flag);
}

void CVisibilityPlugins::ClearAtomicFlag(RpAtomic * atomic, unsigned short flag)
{
	((void (__cdecl *)(RpAtomic *, unsigned short))0x732310)(atomic, flag);
}