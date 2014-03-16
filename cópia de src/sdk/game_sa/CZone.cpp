#include "CZone.h"

#define FUNC_CZone__GetTranslatedName 0x5720C0

// Returns pointer to GXT name string.
const char* CZone::GetTranslatedName()
{
	return ( ( const char *(__thiscall* )(CZone *) )FUNC_CZone__GetTranslatedName)(this);
}