/*
    Plugin-SDK (Grand Theft Auto IV) source file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/
#include "CCamera.h"

CCamera& TheCamera = *gpatternt(CCamera, "B9 ? ? ? ? E8 ? ? ? ? 8B 10 8B C8 A3", 1);

bool& CCamera::m_bCameraControlsDisabled = *gpatternt(bool, "A2 ? ? ? ? C3 CC CC CC CC CC CC CC 80 79 08 00", 1);

CCam* CCamera::CreateCamMode(eCamMode mode, CCam* arg2, CCam* arg3) {
    return plugin::CallMethodAndReturnDyn<CCam*>(gpattern("53 8B D9 56 33 F6 83 3B 3C"), this, mode, arg2, arg3);
}
