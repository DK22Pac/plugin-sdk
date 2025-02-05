/*
    Plugin-SDK (Grand Theft Auto Vice City) source file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/
#include "CZone.h"

// Returns pointer to GXT name string.
wchar_t* CZone::GetTranslatedName() {
    return plugin::CallMethodAndReturn<wchar_t*, 0x4DE4B0, CZone*>(this);
}
