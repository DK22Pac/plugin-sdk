/*
    Plugin-SDK (Grand Theft Auto IV) source file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/
#include "CGrcState_SetCullMode.h"

static uint32_t CGrcState_SetCullMode__CGrcState_SetCullMode;
CGrcState_SetCullMode::CGrcState_SetCullMode(int32_t mode) {
    plugin::CallMethodDyn<CGrcState_SetCullMode*>(CGrcState_SetCullMode__CGrcState_SetCullMode, this, mode);
}

template<>
void plugin::InitPatterns<CGrcState_SetCullMode>() {
    CGrcState_SetCullMode__CGrcState_SetCullMode = plugin::GetPattern("8B 41 04 C7 01 ? ? ? ? 33 05 ? ? ? ? 25 ? ? ? ? 31 41 04 8B 44 24 04 FF 05 ? ? ? ? 89 41 08 C7 01 ? ? ? ? 8B C1 C2 04 00 CC 8B 41 04 F3 0F 10 44 24", 0);
}
