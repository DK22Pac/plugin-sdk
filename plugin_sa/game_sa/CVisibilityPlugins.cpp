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