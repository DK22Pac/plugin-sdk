/*
    Plugin-SDK (Grand Theft Auto IV) source file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/
#include "CRadar.h"
#include "Patch.h"
#include "Rage.h"

tRadarTrace** CRadar::ms_RadarTrace = gpatternt(tRadarTrace*, "8B 04 85 ? ? ? ? 80 78 08 00 75 0C A1 ? ? ? ? 8B 04 85 ? ? ? ? 0F B7 40 20", 3); // [1500]
CSprite2d& CRadar::RadarRingBack = *gpatternt(CSprite2d, "B9 ? ? ? ? E8 ? ? ? ? E8 ? ? ? ? 5F 5E C7 05", 1);
CSprite2d& CRadar::RadarRingFront = *gpatternt(CSprite2d, "B9 ? ? ? ? E8 ? ? ? ? 68 ? ? ? ? B9 ? ? ? ? E8 ? ? ? ? E8 ? ? ? ? 5F", 1);
CSprite2d** CRadar::RadarSprites = gpatternt(CSprite2d*, "89 0C 85 ? ? ? ? A3 ? ? ? ? 48 C3 A1 ? ? ? ? 33 C9 89 0C 85 ? ? ? ? 40 A3 ? ? ? ? 48 C3 CC", 3);
rage::Vector2& vec2DRadarOrigin = *gpatternt(rage::Vector2, "A3 ? ? ? ? A1 ? ? ? ? 6A 00 6A FF", 1);

bool CRadar::IsRenderPhaseTime() {
    return plugin::CallAndReturnDyn<bool>(gpattern("80 3D ? ? ? ? ? 75 74 80 3D"));
}

int32_t CRadar::GetActualBlipArrayIndex(int32_t blipIndex) {
    return plugin::CallAndReturnDyn<int32_t>(gpattern("8B 4C 24 04 83 F9 FF 74 1D"), blipIndex);
}

