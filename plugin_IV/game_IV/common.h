/*
    Plugin-SDK (Grand Theft Auto IV) header file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/
#pragma once
#include "PluginBase.h"
#include "CPlayerPed.h"
#include "CSprite2d.h"

class common;

enum eGameEpisode : uint32_t {
    EPISODE_IV,
    EPISODE_TLAD,
    EPISODE_TBOGT,
};

extern eGameEpisode& gGameEpisode;

extern CPlayerPed* FindPlayerPed(int32_t id);
extern CVehicle* FindPlayerVehicle(int32_t id);

extern void ResetViewport(bool force);
extern int SetRenderState(uint32_t state, uint32_t value);
extern void SetTexture(rage::grcTexturePC* tex);
extern void Begin(int32_t x, int32_t y);
extern void SetVertex(float x, float y, float z, float u, float v, float clip, rage::Color32 const& col, float min, float max);
extern void End();

