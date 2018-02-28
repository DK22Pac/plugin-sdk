/*
    Plugin-SDK (Grand Theft Auto San Andreas) source file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/
#include "CColourSet.h"

// Converted from thiscall void CColourSet::CColourSet(int weatherId, int timeId)	0x55F4B0
CColourSet::CColourSet(int weatherId, int timeId) {
    plugin::CallMethod<0x55F4B0, CColourSet *, int, int>(this, weatherId, timeId);
}

// Converted from thiscall void CColourSet::Interpolate(CColourSet* a, CColourSet* b, float factor_a, float factor_b, bool bIgnoreSky)	0x55F870
void CColourSet::Interpolate(CColourSet* a, CColourSet* b, float factor_a, float factor_b, bool bIgnoreSky) {
    plugin::CallMethod<0x55F870, CColourSet *, CColourSet*, CColourSet*, float, float, bool>(this, a, b, factor_a, factor_b, bIgnoreSky);
}
