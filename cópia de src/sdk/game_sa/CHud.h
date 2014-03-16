#pragma once

#include "plugin/plugin.h"

class PLUGIN_API CHud
{
public:
	// static char m_BigMessage[7][128];
	static char (*m_BigMessage)[128];
	static Bool &bScriptForceDisplayWithCounters;
};