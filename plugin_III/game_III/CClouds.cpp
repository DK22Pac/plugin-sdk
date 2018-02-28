/*
    Plugin-SDK (Grand Theft Auto 3) source file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/
#include "CClouds.h"

RwRGBA *CClouds::ms_colourTop = (RwRGBA*)0x94143C;
RwRGBA *CClouds::ms_colourBottom = (RwRGBA*)0x8F2C38;
float &CClouds::CloudRotation = *(float*)0x8F5F40;
float &CClouds::IndividualRotation = *(float*)0x943078;
float &CClouds::ms_cameraRoll = *(float *)0x8F29CC;
float &CClouds::ms_horizonZ = *(float *)0x8F31C0;

RwTexture*& gpCloudTex = *(RwTexture**)0x9411C0;

// Converted from cdecl void CClouds::Init(void) 0x4F6C10 
void CClouds::Init() {
    plugin::Call<0x4F6C10>();
}

// Converted from cdecl void CClouds::Render(void) 0x4F6D90 
void CClouds::Render() {
    plugin::Call<0x4F6D90>();
}

// Converted from cdecl void CClouds::RenderBackground(short redTop,short greenTop,short blueTop,short redBottom,short greenBottom,short blueBottom,short alpha) 0x4F7F00
void CClouds::RenderBackground(short redTop, short greenTop, short blueTop, short redBottom, short greenBottom, short blueBottom, short alpha) {
    plugin::Call<0x4F7F00, short, short, short, short, short, short, short>(redTop, greenTop, blueTop, redBottom, greenBottom, blueBottom, alpha);
}

// Converted from cdecl void CClouds::RenderHorizon(void) 0x4F85F0 
void CClouds::RenderHorizon() {
    plugin::Call<0x4F85F0>();
}

// Converted from cdecl void CClouds::Shutdown(void) 0x4F6CA0 
void CClouds::Shutdown() {
    plugin::Call<0x4F6CA0>();
}

// Converted from cdecl void CClouds::Update(void) 0x4F6CE0 
void CClouds::Update() {
    plugin::Call<0x4F6CE0>();
}

// Converted from cdecl bool UseDarkBackground(void) 0x4F7ED0 
bool UseDarkBackground() {
    return plugin::CallAndReturn<bool, 0x4F7ED0>();
}
