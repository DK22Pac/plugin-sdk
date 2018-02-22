/*
    Plugin-SDK (Grand Theft Auto) source file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/
#include "CAudioHydrant.h"

// Converted from thiscall void CAudioHydrant::CAudioHydrant(void) 0x4BFE00
CAudioHydrant::CAudioHydrant() {
    plugin::CallMethod<0x4BFE00, CAudioHydrant *>(this);
}

// Converted from cdecl bool CAudioHydrant::Add(CParticleObject *object) 0x4BC330
bool CAudioHydrant::Add(CParticleObject* object) {
    return plugin::CallAndReturn<bool, 0x4BC330, CParticleObject*>(object);
}

// Converted from cdecl void CAudioHydrant::Remove(CParticleObject *object) 0x4BC390
void CAudioHydrant::Remove(CParticleObject* object) {
    plugin::Call<0x4BC390, CParticleObject*>(object);
}
