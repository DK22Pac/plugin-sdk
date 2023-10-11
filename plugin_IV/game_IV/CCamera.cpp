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

template<>
void plugin::InitPatterns<CCamera>() {
    TheCameraAddr = (CCamera*)plugin::patch::GetPointer(plugin::GetPattern("B9 ? ? ? ? E8 ? ? ? ? 84 C0 75 10 6A 01", 1));

    CCamera__m_fMouseAccel = (float*)plugin::patch::GetPointer(plugin::GetPattern("C7 05 ? ? ? ? ? ? ? ? C7 05 ? ? ? ? ? ? ? ? A3 ? ? ? ? C7 05 ? ? ? ? ? ? ? ? C7 05 ? ? ? ? ? ? ? ? C7 05 ? ? ? ? ? ? ? ? C7 05 ? ? ? ? ? ? ? ? C7 05", 2));
}
