/*
    Plugin-SDK (Grand Theft Auto IV) source file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/
#include "CGrcState_SetDepthWrite.h"

static uint32_t CGrcState_SetDepthWrite__CGrcState_SetDepthWrite;
CGrcState_SetDepthWrite::CGrcState_SetDepthWrite(int32_t mode) {
    plugin::CallMethodDyn<CGrcState_SetDepthWrite*>(CGrcState_SetDepthWrite__CGrcState_SetDepthWrite, this, mode);
}

template<>
void plugin::InitPatterns<CGrcState_SetDepthWrite>() {
    CGrcState_SetDepthWrite__CGrcState_SetDepthWrite = plugin::GetPattern("8B 41 04 C7 01 ? ? ? ? 33 05 ? ? ? ? 25 ? ? ? ? 31 41 04 8A 44 24 04", 0);
}
