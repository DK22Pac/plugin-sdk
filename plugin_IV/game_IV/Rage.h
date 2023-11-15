/*
    Plugin-SDK (Grand Theft Auto IV) header file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/
#pragma once
#include "PluginBase.h"

// Audio
#include "rage/audEntity.h"

// Render
#include "rage/grcTexture.h"
#include "rage/grcTextureFactory.h"

// Math
#include "rage/Math.h"
#include "rage/Matrix34.h"
#include "rage/Matrix44.h"
#include "rage/Quaternion.h"
#include "rage/Vector2.h"
#include "rage/Vector3.h"
#include "rage/Vector4.h"
#include "rage/Color32.h"

// Misc
#include "rage/pgDictionary.h"

enum rageRenderState {
    RENDERSTATE_LIGHTINGMODE = 1,
    RENDERSTATE_CULLMODE = 0,
    RENDERSTATE_DEPTHWRITE = 6,
    RENDERSTATE_DEPTHBIAS = 11,
};

template<typename T>
T* GetD3DDevice() {
    return *gpatternt(T*, "68 ? ? ? ? 8B 08 68 ? ? ? ? 6A 14", 1);
}

template<typename T>
T GetHWnd() {
    return *gpatternt(T, "A1 ? ? ? ? 85 C0 74 08 57", 1);
}

namespace rage {
    extern int32_t& screenWidth;
    extern int32_t& screenHeight;
    extern uint32_t GetHashKey(const char* str, uint32_t arg2);

    extern void ResetViewport(bool force);
    extern int SetRenderState(uint32_t state, uint32_t value);
    extern void SetTexture(grcTexturePC* tex);
    extern void Begin(int32_t x, int32_t y);
    extern void SetVertex(float x, float y, float z, float u, float v, float clip, Color32 const& col, float min, float max);
    extern void End();
}
