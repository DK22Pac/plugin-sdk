#pragma once

#include <plugin/plugin.h>
#include "RenderWareTypes.h"

struct tAtomicVisibilityPlugin
{
public:
	short          m_wModelId;
	unsigned short m_wFlags;
};

class PLUGIN_API CVisibilityPlugins
{
public:
	static int& ms_atomicPluginOffset;

	static void SetAtomicFlag(RpAtomic * atomic, unsigned short flag);
	static void ClearAtomicFlag(RpAtomic * atomic, unsigned short flag);
};

#define RpAtomicGetVisibilityPlugin(atomic) ((tAtomicVisibilityPlugin *)((unsigned int)atomic + CVisibilityPlugins::ms_atomicPluginOffset))