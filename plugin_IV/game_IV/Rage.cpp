/*
    Plugin-SDK (Grand Theft Auto IV) source file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/
#include "Rage.h"

int32_t& rage::screenWidth = *gpatternt(int32_t, "8B 0D ? ? ? ? 0F 44 0D ? ? ? ? 83 3D", 2);
int32_t& rage::screenHeight = *gpatternt(int32_t, "8B 35 ? ? ? ? 0F 44 35 ? ? ? ? FF D7 39 05 ? ? ? ? 8B 0D ? ? ? ? 0F 44 0D ? ? ? ? 83 3D", 2);

void rage::ResetViewport(bool force) {
    plugin::CallDyn(gpattern("55 8B EC 83 E4 F0 83 EC 48 80 3D ? ? ? ? ? 56 57 0F 85"), force);
}

int rage::SetRenderState(uint32_t state, uint32_t value) {
    return plugin::CallAndReturnDyn<int>(gpattern("8B 4C 24 04 8B 44 24 08 89 04 8D"), state, value);
}

void rage::SetTexture(grcTexturePC* tex) {
    plugin::CallDyn(gpattern("8B 44 24 04 85 C0 0F 44 05"), tex);
}

void rage::Begin(int32_t x, int32_t y) {
    plugin::CallDyn(gpattern("83 3D ? ? ? ? ? 75 18 83 3D ? ? ? ? ? 75 0F 83 3D ? ? ? ? ? 0F 95 C1 E8 ? ? ? ? 56"), x, y);
}

void rage::SetVertex(float x, float y, float z, float u, float v, float clip, rage::Color32 const& col, float min, float max) {
    plugin::CallDyn(gpattern("83 3D ? ? ? ? ? 74 78"), x, y, z, u, v, clip, col, min, max);
}

void rage::End() {
    plugin::CallDyn(gpattern("83 3D ? ? ? ? ? 74 0F E8 ? ? ? ? C7 05 ? ? ? ? ? ? ? ? C7 05 ? ? ? ? ? ? ? ? C3"));
}

uint32_t rage::GetHashKey(const char* str, uint32_t arg2) {
    return plugin::CallAndReturnDyn<uint32_t>(gpattern("8B 54 24 08 53 56 8B 74 24 0C 80 3E 22"), str, arg2);
}
