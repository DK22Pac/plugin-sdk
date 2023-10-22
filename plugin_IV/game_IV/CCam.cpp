/*
    Plugin-SDK (Grand Theft Auto IV) source file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/
#include "CCam.h"

static uint32_t CCam__SetAsCurrentAddr;
void CCam::SetAsCurrent() {
    plugin::CallMethodDyn(CCam__SetAsCurrentAddr, this);
}

static uint32_t CCam__GetCamMode;
CCam* CCam::GetCamMode(eCamMode mode, int32_t arg2) {
    return plugin::CallMethodAndReturnDyn<CCam*>(CCam__GetCamMode, this, mode, arg2);
}

template<>
void plugin::InitPatterns<CCam>() {
    CCam__SetAsCurrentAddr = plugin::GetPattern("80 89 ? ? ? ? ? 8B 89", 0);
    CCam__GetCamMode = plugin::GetPattern("56 8B F1 57 8B 06 FF 50 28 8B 7C 24 0C 3B C7 75 16 8B 44 24 10 8B C8 48 89 44 24 10 85 C9 7F 07 5F 8B C6 5E C2 08 00 8B 8E", 0);
}
