#pragma once

#include "plbase/PluginBase.h"

class PLUGIN_API CStreaming
{
public:
	static void ImGonnaUseStreamingMemory();
	static void IHaveUsedStreamingMemory();
	static void MakeSpaceFor(unsigned int size);
};