/*
    Plugin-SDK (Grand Theft Auto IV) source file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/
#include "Rage.h"

rage::VTX* s_Current = gpatternt(rage::VTX, "A3 ? ? ? ? C7 05 ? ? ? ? ? ? ? ? 5E C3 83 3D", 1);
rage::grcDrawMode& s_DrawMode = *gpatternt(rage::grcDrawMode, "89 35 ? ? ? ? A3 ? ? ? ? C7 05", 2);
int32_t& s_Count = *gpatternt(int32_t, "89 3D ? ? ? ? 5F 89 35 ? ? ? ? A3", 2);

uint32_t rage::atStringHash(const char* str, uint32_t initValue) {
    return plugin::CallAndReturnDyn<uint32_t>(gpattern("8B 54 24 08 53 56 8B 74 24 0C 80 3E 22"), str, initValue);
}

void rage::grcBindTexture(const rage::grcTexture* tex) {
    plugin::CallDyn(gpattern("8B 44 24 04 85 C0 0F 44 05"), tex);
}

void rage::grcBegin(rage::grcDrawMode dm, int32_t count) {
    plugin::CallDyn(gpattern("83 3D ? ? ? ? ? 75 18 83 3D ? ? ? ? ? 75 0F 83 3D ? ? ? ? ? 0F 95 C1 E8 ? ? ? ? 56"), dm, count);
}

void rage::grcVertex(float x, float y, float z, float nx, float ny, float nz, rage::Color32 const& c, float s, float t) {
    plugin::CallDyn(gpattern("83 3D ? ? ? ? ? 74 78"), x, y, z, nx, ny, nz, c, s, t);
}

void rage::grcEnd() {
    plugin::CallDyn(gpattern("83 3D ? ? ? ? ? 74 0F E8 ? ? ? ? C7 05 ? ? ? ? ? ? ? ? C7 05 ? ? ? ? ? ? ? ? C3"));
}

void rage::grcWorldIdentity() {
    plugin::CallDyn(gpattern("51 8B 0D ? ? ? ? 68 ? ? ? ? E8 ? ? ? ? 59"));
}
