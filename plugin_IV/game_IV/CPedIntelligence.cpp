/*
    Plugin-SDK (Grand Theft Auto IV) source file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/
#include "CPedIntelligence.h"

static uint32_t CPedIntelligence__IsSwimmingAddr;
bool CPedIntelligence::IsSwimming() {
    return plugin::CallMethodAndReturnDyn<bool>(CPedIntelligence__IsSwimmingAddr, this);
}

static uint32_t CPedIntelligence__IsClimbingAddr;
bool CPedIntelligence::IsClimbing() {
    return plugin::CallMethodAndReturnDyn<bool>(CPedIntelligence__IsClimbingAddr, this);
}

static uint32_t CPedIntelligence__ClearTasksAddr;
void CPedIntelligence::ClearTasks(bool arg1) {
    plugin::CallMethodDyn(CPedIntelligence__ClearTasksAddr, this, arg1);
}

template<>
void plugin::InitPatterns<CPedIntelligence>() {
    CPedIntelligence__IsSwimmingAddr = plugin::GetPattern("8B 51 40 8B 42 6C", 0);
    CPedIntelligence__IsClimbingAddr = plugin::GetPattern("56 8B F1 8B 86 ? ? ? ? 85 C0 74 2B", 0);
    CPedIntelligence__ClearTasksAddr = plugin::GetPattern("53 55 56 57 8B F9 E8 ? ? ? ? 6A 03", 0);
}
