/*
    Plugin-SDK (Grand Theft Auto IV) source file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/
#include "CPedIntelligence.h"

bool CPedIntelligence::IsSwimming() {
    return plugin::CallMethodAndReturnDyn<bool>(gpattern("8B 51 40 8B 42 6C"), this);
}

bool CPedIntelligence::IsClimbing() {
    return plugin::CallMethodAndReturnDyn<bool>(gpattern("56 8B F1 8B 86 ? ? ? ? 85 C0 74 2B"), this);
}

void CPedIntelligence::ClearTasks(bool arg1) {
    plugin::CallMethodDyn(gpattern("53 55 56 57 8B F9 E8 ? ? ? ? 6A 03"), this, arg1);
}

