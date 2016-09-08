/*
    Plugin-SDK (Grand Theft Auto) header file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/
#pragma once

#include "plbase/PluginBase_SA.h"
#include "RenderWare.h"

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