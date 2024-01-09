/*
    Plugin-SDK (Grand Theft Auto IV) source file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/
#include "CDrawRadarCircleDC.h"

CDrawRadarCircleDC::CDrawRadarCircleDC(rage::Vector2 const& pos, rage::Vector2 const& scale, rage::Color32 const& col) {
    plugin::CallMethodDyn(gpattern("8B D1 8B 4C 24 04 8B 42 04 C7 02 ? ? ? ? 33 05 ? ? ? ? 25 ? ? ? ? 31 42 04 FF 05 ? ? ? ? C7 02 ? ? ? ? C7 42 ? ? ? ? ? 8B 01 89 42 08 8B 41 04 8B 4C 24 08 89 42 0C 8B 01 89 42 10 8B 41 04 89 42 14 8B 44 24 0C 89 42 18 8B C2 C2 0C 00 CC CC CC CC CC CC CC CC CC CC 8B D1"), this, &pos, &scale, col);
}

void CDrawRadarCircleDC::Execute() {
    plugin::CallMethodDyn(gpattern("51 8D 41 18"), this);
}

int32_t CDrawRadarCircleDC::GetSize() {
    return plugin::CallMethodAndReturnDyn<int32_t>(gpattern("B8 ? ? ? ? C3 CC CC CC CC CC CC CC CC CC CC 55 8B EC 83 E4 F8 83 EC 1C 56 8D 54 24 08 B9 ? ? ? ? C7 44 24 ? ? ? ? ? C7 44 24 ? ? ? ? ? E8 ? ? ? ? 84 C0 74 28 8B 4C 24 14 33 C0 85 C9 7E 14 8B 55 08 8B 74 24 18 8D 49 00 3B 14 86 74 12 40 3B C1 7C F6 83 C8 FF 5E 8B E5 5D C2 04 00 83 C8 FF 5E 8B E5 5D C2 04 00 CC CC 83 EC 18 8D 14 24 B9 ? ? ? ? C7 44 24 ? ? ? ? ? E8 ? ? ? ? 84 C0 74 11 8B 4C 24 1C 8B 44 24 10 8B 04 88 83 C4 18 C2 04 00 83 C8 FF 83 C4 18 C2 04 00 CC CC CC CC CC CC CC CC CC CC 83 EC 18 8D 14 24 B9 ? ? ? ? C7 44 24 ? ? ? ? ? E8 ? ? ? ? 84 C0 74 38 8B 44 24 1C 8B 4C 24 14 8B 0C 81 E8 ? ? ? ? 83 F8 FF 74 23 48 83 F8 04 77 1D FF 24 85 ? ? ? ? B8 ? ? ? ? 83 C4 18 C2 04 00 B8 ? ? ? ? 83 C4 18 C2 04 00 33 C0 83 C4 18 C2 04 00 4E D5 52"), this);
}
