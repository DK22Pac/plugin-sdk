/*
    Plugin-SDK (Grand Theft Auto IV) source file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/

#include "common.h"
#include "Patch.h"
#include "CSprite2d.h"

static eGameEpisode* gGameEpisodeAddr = nullptr;
eGameEpisode& gGameEpisode = *(eGameEpisode*)gGameEpisodeAddr;

static uint32_t CPlayerPed__FindPlayerPedAddr;
CPlayerPed* FindPlayerPed(int32_t id) {
    return plugin::CallAndReturnDyn<CPlayerPed*>(CPlayerPed__FindPlayerPedAddr, id);
}

static uint32_t CPlayerPed__FindPlayerVehicleAddr;
CVehicle* FindPlayerVehicle(int32_t id) {
    return plugin::CallAndReturnDyn<CVehicle*>(CPlayerPed__FindPlayerVehicleAddr, id);
}

static uint32_t ResetViewportAddr;
void ResetViewport(bool force) {
    plugin::CallDyn(ResetViewportAddr, force);
}

static uint32_t SetRenderStateAddr;
int SetRenderState(uint32_t state, uint32_t value) {
    return plugin::CallAndReturnDyn<int>(SetRenderStateAddr, state, value);
}

static uint32_t SetTextureAddr;
void SetTexture(rage::grcTexturePC* tex) {
    plugin::CallDyn(SetTextureAddr, tex);
}

static uint32_t BeginAddr;
void Begin(int32_t x, int32_t y) {
    plugin::CallDyn(BeginAddr, x, y);
}

static uint32_t SetVertexAddr;
void SetVertex(float x, float y, float z, float u, float v, float clip, rage::Color32 const& col, float min, float max) {
    plugin::CallDyn(SetVertexAddr, x, y, z, u, v, clip, col, min, max);
}

static uint32_t EndAddr;
void End() {
    plugin::CallDyn(EndAddr);
}

template<>
void plugin::InitPatterns<common>() {
    gGameEpisodeAddr = (eGameEpisode*)plugin::patch::GetPointer(plugin::GetPattern("83 3D ? ? ? ? ? 75 0F 6A 02", 2));
    CPlayerPed__FindPlayerPedAddr = plugin::GetPattern("8B 44 24 04 85 C0 75 18 A1", 0);
    CPlayerPed__FindPlayerVehicleAddr = plugin::GetPattern("8B 44 24 04 85 C0 75 15", 0);

    ResetViewportAddr = plugin::GetPattern("55 8B EC 83 E4 F0 83 EC 48 80 3D ? ? ? ? ? 56 57 0F 85", 0);
    SetRenderStateAddr = plugin::GetPattern("8B 4C 24 04 8B 44 24 08 89 04 8D", 0);
    SetTextureAddr = plugin::GetPattern("8B 44 24 04 85 C0 0F 44 05", 0);
    BeginAddr = plugin::GetPattern("83 3D ? ? ? ? ? 75 18 83 3D ? ? ? ? ? 75 0F 83 3D ? ? ? ? ? 0F 95 C1 E8 ? ? ? ? 56", 0);
    SetVertexAddr = plugin::GetPattern("83 3D ? ? ? ? ? 74 78", 0);
    EndAddr = plugin::GetPattern("83 3D ? ? ? ? ? 74 0F E8 ? ? ? ? C7 05 ? ? ? ? ? ? ? ? C7 05 ? ? ? ? ? ? ? ? C3", 0);
}
