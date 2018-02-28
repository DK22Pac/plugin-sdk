/*
    Plugin-SDK (Grand Theft Auto 3) source file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/
#include "CDraw.h"

float &CDraw::ms_fFOV = *(float *)0x5FBC6C;
float &CDraw::ms_fLODDistance = *(float *)0x8F2C30;
float &CDraw::ms_fFarClipZ = *(float *)0x9434F0;
float &CDraw::ms_fNearClipZ = *(float *)0x8E2DC4;
unsigned char &CDraw::FadeRed = *(unsigned char *)0x95CD90;
unsigned char &CDraw::FadeGreen = *(unsigned char *)0x95CD71;
unsigned char &CDraw::FadeBlue = *(unsigned char *)0x95CD53;
unsigned char &CDraw::FadeValue = *(unsigned char *)0x95CD68;

// Converted from cdecl void CDraw::SetFOV(float fovValue) 0x4FE7B0
void CDraw::SetFOV(float fovValue) {
    plugin::Call<0x4FE7B0, float>(fovValue);
}
