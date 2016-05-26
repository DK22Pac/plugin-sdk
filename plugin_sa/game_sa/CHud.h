#pragma once

#include "plbase/PluginBase.h"

class PLUGIN_API CHud
{
public:
	// static char m_BigMessage[7][128];
	static char (*m_BigMessage)[128];
	static Bool &bScriptForceDisplayWithCounters;

    static void SetHelpMessage(char const *text, bool quickMessage, bool permanent, bool addToBrief);
};