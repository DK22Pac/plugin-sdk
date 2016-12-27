/*
    Plugin-SDK (Grand Theft Auto) source file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/
#include "CStats.h"

float CStats::GetStatValue(unsigned short statId)
{
	return ((float (__cdecl *)(unsigned short))0x558E40)(statId);
}