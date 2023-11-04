/*
    Plugin-SDK (Grand Theft Auto IV) source file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/
#include "CRadar.h"
#include "Patch.h"
#include "Rage.h"

tRadarTrace** CRadar::ms_RadarTrace = nullptr; // [1500]

static CSprite2d* CRadar__RadarRingBackAddr;
CSprite2d& CRadar::RadarRingBack = *(CSprite2d*)CRadar__RadarRingBackAddr;

static CSprite2d* CRadar__RadarRingFrontAddr;
CSprite2d& CRadar::RadarRingFront = *(CSprite2d*)CRadar__RadarRingFrontAddr;

static CSprite2d** CRadar__RadarSpritesAddr;
CSprite2d** CRadar::RadarSprites = (CSprite2d**)CRadar__RadarSpritesAddr; // [130]

static rage::Vector2* CRadar__vec2DRadarOriginAddr;
rage::Vector2& vec2DRadarOrigin = *(rage::Vector2*)CRadar__vec2DRadarOriginAddr;

static uint32_t CRadar__IsRenderPhaseTimeAddr;
bool CRadar::IsRenderPhaseTime() {
    return plugin::CallAndReturnDyn<bool>(CRadar__IsRenderPhaseTimeAddr);
}

static int32_t CRadar__GetActualBlipArrayIndexAddr;
int32_t CRadar::GetActualBlipArrayIndex(int32_t blipIndex) {
    return plugin::CallAndReturnDyn<int32_t>(CRadar__GetActualBlipArrayIndexAddr, blipIndex);
}

template<>
void plugin::InitPatterns<CRadar>() {
    CRadar::ms_RadarTrace = (tRadarTrace**)plugin::patch::GetPointer(plugin::GetPattern("8B 04 85 ? ? ? ? 80 78 08 00 75 0C A1 ? ? ? ? 8B 04 85 ? ? ? ? 0F B7 40 20", 3));

    CRadar__RadarRingBackAddr = (CSprite2d*)plugin::patch::GetPointer(plugin::GetPattern("B9 ? ? ? ? E8 ? ? ? ? E8 ? ? ? ? 5F 5E C7 05", 1));
    CRadar__RadarRingFrontAddr = (CSprite2d*)plugin::patch::GetPointer(plugin::GetPattern("B9 ? ? ? ? E8 ? ? ? ? 68 ? ? ? ? B9 ? ? ? ? E8 ? ? ? ? E8 ? ? ? ? 5F", 1));

    CRadar__RadarSpritesAddr = (CSprite2d**)plugin::patch::GetPointer(plugin::GetPattern("89 0C 85 ? ? ? ? A3 ? ? ? ? 48 C3 A1 ? ? ? ? 33 C9 89 0C 85 ? ? ? ? 40 A3 ? ? ? ? 48 C3 CC", 3));
    CRadar__vec2DRadarOriginAddr = (rage::Vector2*)plugin::patch::GetPointer(plugin::GetPattern("A3 ? ? ? ? A1 ? ? ? ? 6A 00 6A FF", 1));

    CRadar__IsRenderPhaseTimeAddr = plugin::GetPattern("80 3D ? ? ? ? ? 75 74 80 3D", 0);
    CRadar__GetActualBlipArrayIndexAddr = plugin::GetPattern("8B 4C 24 04 83 F9 FF 74 1D", 0);
}
