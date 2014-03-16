#include "CStats.h"

float CStats::GetStatValue(unsigned short statId)
{
	return ((float (__cdecl *)(unsigned short))0x559AF0)(statId);
}