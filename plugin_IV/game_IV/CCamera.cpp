/*
    Plugin-SDK (Grand Theft Auto IV) source file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/
#include "CCamera.h"
#include "Patch.h"

static CCamera* TheCameraAddr;
CCamera& TheCamera = *(CCamera*)TheCameraAddr;

static float* CCamera__m_fMouseAccel;
float& CCamera::m_fMouseAccel = *(float*)CCamera__m_fMouseAccel;

static uint32_t CCamera__CreateCamModeAddr;
CCam* CCamera::CreateCamMode(eCamMode mode, CCam* arg2, CCam* arg3) {
    return plugin::CallMethodAndReturnDyn<CCam*>(CCamera__CreateCamModeAddr, this, mode, arg2, arg3);
}

template<>
void plugin::InitPatterns<CCamera>() {
    TheCameraAddr = (CCamera*)plugin::patch::GetPointer(plugin::GetPattern("B9 ? ? ? ? E8 ? ? ? ? 8B 10 8B C8 A3", 1));

    CCamera__m_fMouseAccel = (float*)plugin::patch::GetPointer(plugin::GetPattern("C7 05 ? ? ? ? ? ? ? ? C7 05 ? ? ? ? ? ? ? ? A3 ? ? ? ? C7 05 ? ? ? ? ? ? ? ? C7 05 ? ? ? ? ? ? ? ? C7 05 ? ? ? ? ? ? ? ? C7 05 ? ? ? ? ? ? ? ? C7 05", 2));

    CCamera__CreateCamModeAddr = plugin::GetPattern("53 8B D9 56 33 F6 83 3B 3C", 0);
}
