/*
    Plugin-SDK (Grand Theft Auto 2) source file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/
#include "CCamera.h"

CCamera* TheCamera = (CCamera*)0x5E3CC4;

void CCamera::WorldToScreen2D(int x, int y, int z, int* outX, int* outY) {
    plugin::CallMethod<0x4B90E0>(this, x, y, z, outX, outY);
}

void CCamera::WorldToScreen2D(CEncodedVector in, CEncodedVector2D* out) {
    WorldToScreen2D(in.x, in.y, in.z, &out->x, &out->y);
}

