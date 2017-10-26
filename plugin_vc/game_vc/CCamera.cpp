#include "CCamera.h"

CCamera &TheCamera = *(CCamera *)0x7E4688;

float CCamera::Find3rdPersonQuickAimPitch() {
    return plugin::CallMethodAndReturn<float, 0x46F7C6, CCamera *>(this);
}
