/*
    Plugin-SDK (Grand Theft Auto IV) header file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/
#include "CPedIntelligence.h"

static uint32_t CPedIntelligence__IsSwimming;
bool CPedIntelligence::IsSwimming() {
    return plugin::CallMethodAndReturnDyn<bool>(CPedIntelligence__IsSwimming, this);
}

static uint32_t CPedIntelligence__IsClimbing;
bool CPedIntelligence::IsClimbing() {
    return plugin::CallMethodAndReturnDyn<bool>(CPedIntelligence__IsClimbing, this);
}

template<>
void plugin::InitPatterns<CPedIntelligence>() {
    CPedIntelligence__IsSwimming = plugin::GetPattern("8B 51 40 8B 42 6C", 0);
    CPedIntelligence__IsClimbing = plugin::GetPattern("56 8B F1 8B 86 ? ? ? ? 85 C0 74 2B", 0);
}
