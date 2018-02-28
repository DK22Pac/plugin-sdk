/*
    Plugin-SDK (Grand Theft Auto San Andreas) source file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/
#include "CDraw.h"

float &CDraw::ms_fFOV = *(float *)0x8D5038;
float &CDraw::ms_fLODDistance = *(float *)0xC3EF98;
float &CDraw::ms_fFarClipZ = *(float *)0xC3EF9C;
float &CDraw::ms_fNearClipZ = *(float *)0xC3EFA0;
float &CDraw::ms_fAspectRatio = *(float *)0xC3EFA4;
unsigned char &CDraw::FadeRed = *(unsigned char *)0xC3EFA8;
unsigned char &CDraw::FadeGreen = *(unsigned char *)0xC3EFA9;
unsigned char &CDraw::FadeBlue = *(unsigned char *)0xC3EFAA;
unsigned char &CDraw::FadeValue = *(unsigned char *)0xC3EFAB;

// Converted from cdecl void CDraw::SetFOV(float fovValue) 0x6FF410
void CDraw::SetFOV(float fovValue) {
    plugin::Call<0x6FF410, float>(fovValue);
}

// Converted from cdecl float CDraw::CalculateAspectRatio(void) 0x6FF420
float CDraw::CalculateAspectRatio() {
    return plugin::CallAndReturn<float, 0x6FF420>();
}