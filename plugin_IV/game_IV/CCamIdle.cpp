/*
    Plugin-SDK (Grand Theft Auto IV) source file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/
#include "CCamIdle.h"

static uint32_t CCam__ResetStatsAddr;
void CCamIdle::ResetStats(bool unused) {
    plugin::CallMethodDyn(CCam__ResetStatsAddr, this, unused);
}

template<>
void plugin::InitPatterns<CCamIdle>() {
    CCam__ResetStatsAddr = plugin::GetPattern("C7 81 ? ? ? ? ? ? ? ? C7 81 ? ? ? ? ? ? ? ? C7 81 ? ? ? ? ? ? ? ? C7 81 ? ? ? ? ? ? ? ? C7 81 ? ? ? ? ? ? ? ? C7 81 ? ? ? ? ? ? ? ? C7 81 ? ? ? ? ? ? ? ? 80 A1 ? ? ? ? ? 8B 81", 0);
}
