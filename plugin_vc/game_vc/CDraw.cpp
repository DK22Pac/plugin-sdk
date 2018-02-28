/*
    Plugin-SDK (Grand Theft Auto Vice City) header file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/

#include "CDraw.h"

// variables
// Converted from float CDraw::ms_fFOV 0x696658
float& CDraw::ms_fFOV = *(float*)0x696658;
// Converted from float CDraw::ms_fAspectRatio 0x94DD38
float& CDraw::ms_fAspectRatio = *(float*)0x94DD38;
// Converted from float CDraw::ms_fFarClipZ 0xA10678
float& CDraw::ms_fFarClipZ = *(float*)0xA10678;
// Converted from float CDraw::ms_fNearClipZ 0x978534
float& CDraw::ms_fNearClipZ = *(float*)0x978534;
// Converted from float CDraw::ms_fLODDistance 0x97F274
float& CDraw::ms_fLODDistance = *(float*)0x97F274;
// Converted from unsigned char CDraw::FadeRed 0xA10B4B
unsigned char& CDraw::FadeRed = *(unsigned char*)0xA10B4B;
// Converted from unsigned char CDraw::FadeGreen 0xA10B21
unsigned char& CDraw::FadeGreen = *(unsigned char*)0xA10B21;
// Converted from unsigned char CDraw::FadeBlue 0xA10AED
unsigned char& CDraw::FadeBlue = *(unsigned char*)0xA10AED;
// Converted from unsigned char CDraw::FadeValue 0xA10B16
unsigned char& CDraw::FadeValue = *(unsigned char*)0xA10B16;

// functions
// Converted from cdecl void CDraw::CalculateAspectRatio(void) 0x54A270
void CDraw::CalculateAspectRatio() {
    plugin::Call<0x54A270>();
}

// Converted from cdecl void CDraw::SetFOV(float fov) 0x54A2E0
void CDraw::SetFOV(float fov) {
    plugin::Call<0x54A2E0, float>(fov);
}