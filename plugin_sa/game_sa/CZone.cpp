/*
    Plugin-SDK (Grand Theft Auto San Andreas) source file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/
#include "CZone.h"

#define FUNC_CZone__GetTranslatedName 0x5720C0

// Returns pointer to GXT name string.
const char* CZone::GetTranslatedName()
{
	return ( ( const char *(__thiscall* )(CZone *) )FUNC_CZone__GetTranslatedName)(this);
}