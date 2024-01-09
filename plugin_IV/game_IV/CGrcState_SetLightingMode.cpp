/*
    Plugin-SDK (Grand Theft Auto IV) header file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/
#include "CGrcState_SetLightingMode.h"

CGrcState_SetLightingMode::CGrcState_SetLightingMode(int32_t mode) {
    plugin::CallMethodDyn<CGrcState_SetLightingMode*>(gpattern("8B 41 04 C7 01 ? ? ? ? 33 05 ? ? ? ? 25 ? ? ? ? 31 41 04 8B 44 24 04 FF 05 ? ? ? ? 89 41 08 C7 01 ? ? ? ? 8B C1 C2 04 00 CC 8B D1"), this, mode);
}

