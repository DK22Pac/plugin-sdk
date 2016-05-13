#include "CStreaming.h"

void CStreaming::ImGonnaUseStreamingMemory()
{
	((void (__cdecl *)())0x407BE0)();
}

void CStreaming::IHaveUsedStreamingMemory()
{
	((void (__cdecl *)())0x407BF0)();
}

void CStreaming::MakeSpaceFor(unsigned int size)
{
	((void (__cdecl *)(unsigned int))0x40E120)(size);
}