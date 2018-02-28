/*
    Plugin-SDK (Grand Theft Auto San Andreas) source file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/
#include "CClouds.h"

float &CClouds::m_fVolumetricCloudDensity = *(float *)0x8D5388;
bool &CClouds::m_bVolumetricCloudHeightSwitch = *(bool *)0x8D538C;
float &CClouds::m_fVolumetricCloudWindMoveFactor = *(float *)0x8D5390;
float &CClouds::m_fVolumetricCloudMaxDistance = *(float *)0xC6AA58;
unsigned int &CClouds::m_VolumetricCloudsUsedNum = *(unsigned int *)0xC6AA5C;
float &CClouds::ms_cameraRoll = *(float *)0xC6AA64;
int &CClouds::IndividualRotation = *(int *)0xC6AA6C;
float &CClouds::CloudRotation = *(float *)0xC6AA70;
tVolumetricClouds &CClouds::ms_vc = *(tVolumetricClouds *)0xC6AAB0;
tMovingFog &CClouds::ms_mf = *(tMovingFog *)0xC6C158;
CVector &CClouds::PlayerCoords = *(CVector *)0xC6E958;
CVector &CClouds::CameraCoors = *(CVector *)0xC6E964;
unsigned char *RAINBOW_LINES_COLOR_RED = (unsigned char *)0x8D5370;
unsigned char *RAINBOW_LINES_COLOR_GREEN = (unsigned char *)0x8D5378;
unsigned char *RAINBOW_LINES_COLOR_BLUE  = (unsigned char *)0x8D5380;
float *LOW_CLOUDS_X_COORDS = (float *)0x8D5394;
float *LOW_CLOUDS_Y_COORDS = (float *)0x8D53C4;
float *LOW_CLOUDS_Z_COORDS = (float *)0x8D53F4;
float *STARS_Y_POSITIONS = (float *)0x8D55EC;
float *STARS_Z_POSITIONS = (float *)0x8D5610;
float *STARS_SIZES = (float *)0x8D5634;
float &CurrentFogIntensity = *(float *)0x8D5798;
RwTexture *&gpMoonMask = *(RwTexture **)0xC6AA74;
RwTexture **gpCloudTex = (RwTexture **)0xC6AA78;

// Converted from cdecl void CClouds::Shutdown(void) 0x712FA0
void CClouds::Shutdown() {
    plugin::Call<0x712FA0>();
}

// Converted from cdecl void CClouds::Update(void) 0x712FF0
void CClouds::Update() {
    plugin::Call<0x712FF0>();
}

// Converted from cdecl void CClouds::SetUpOneSkyPoly(CVector vert1pos,CVector vert2pos,CVector vert3pos,CVector vert4pos,uchar topRed,uchar topGreen,uchar topBlue,uchar bottomRed,uchar bottomGreen,uchar bottomBlue) 0x713060
void CClouds::SetUpOneSkyPoly(CVector vert1pos, CVector vert2pos, CVector vert3pos, CVector vert4pos, unsigned char topRed, unsigned char topGreen, unsigned char topBlue, unsigned char bottomRed, unsigned char bottomGreen, unsigned char bottomBlue) {
    plugin::Call<0x713060, CVector, CVector, CVector, CVector, unsigned char, unsigned char, unsigned char, unsigned char, unsigned char, unsigned char>(vert1pos, vert2pos, vert3pos, vert4pos, topRed, topGreen, topBlue, bottomRed, bottomGreen, bottomBlue);
}

// Converted from cdecl void CClouds::VolumetricCloudsInit(void) 0x7131C0
void CClouds::VolumetricCloudsInit() {
    plugin::Call<0x7131C0>();
}

// Converted from cdecl int CClouds::VolumetricClouds_GetFirstFreeSlot(void) 0x7135C0
int CClouds::VolumetricClouds_GetFirstFreeSlot() {
    return plugin::CallAndReturn<int, 0x7135C0>();
}

// Converted from cdecl void CClouds::VolumetricClouds_Delete(int vcSlotIndex) 0x7135F0
void CClouds::VolumetricClouds_Delete(int vcSlotIndex) {
    plugin::Call<0x7135F0, int>(vcSlotIndex);
}

// Converted from cdecl float CClouds::VolumetricCloudsGetMaxDistance(void) 0x713630
float CClouds::VolumetricCloudsGetMaxDistance() {
    return plugin::CallAndReturn<float, 0x713630>();
}

// Converted from cdecl void CClouds::MovingFogInit(void) 0x713660
void CClouds::MovingFogInit() {
    plugin::Call<0x713660>();
}

// Converted from cdecl float CClouds::MovingFog_GetFXIntensity(void) 0x7136D0
float CClouds::MovingFog_GetFXIntensity() {
    return plugin::CallAndReturn<float, 0x7136D0>();
}

// Converted from cdecl CVector CClouds::MovingFog_GetWind(void) 0x7136E0
CVector CClouds::MovingFog_GetWind() {
    CVector result;
    plugin::Call<0x7136E0, CVector*>(&result);
    return result;
}

// Converted from cdecl int CClouds::MovingFog_GetFirstFreeSlot(void) 0x713710
int CClouds::MovingFog_GetFirstFreeSlot() {
    return plugin::CallAndReturn<int, 0x713710>();
}

// Converted from cdecl void CClouds::MovingFog_Delete(int fogSlotIndex) 0x713730
void CClouds::MovingFog_Delete(int fogSlotIndex) {
    plugin::Call<0x713730, int>(fogSlotIndex);
}

// Converted from cdecl void CClouds::MovingFog_Create(CVector *posn) 0x713760
void CClouds::MovingFog_Create(CVector* posn) {
    plugin::Call<0x713760, CVector*>(posn);
}

// Converted from cdecl void CClouds::Init(void) 0x7138D0
void CClouds::Init() {
    plugin::Call<0x7138D0>();
}

// Converted from cdecl void CClouds::Render(void) 0x713950
void CClouds::Render() {
    plugin::Call<0x713950>();
}

// Converted from cdecl void CClouds::RenderSkyPolys(void) 0x714650
void CClouds::RenderSkyPolys() {
    plugin::Call<0x714650>();
}

// Converted from cdecl void CClouds::RenderBottomFromHeight(void) 0x7154B0
void CClouds::RenderBottomFromHeight() {
    plugin::Call<0x7154B0>();
}

// Converted from cdecl void CClouds::VolumetricClouds_Create(CVector *posn) 0x715F40
void CClouds::VolumetricClouds_Create(CVector* posn) {
    plugin::Call<0x715F40, CVector*>(posn);
}

// Converted from cdecl void CClouds::VolumetricCloudsRender(void) 0x716380
void CClouds::VolumetricCloudsRender() {
    plugin::Call<0x716380>();
}

// Converted from cdecl void CClouds::MovingFog_Update(void) 0x716B10
void CClouds::MovingFog_Update() {
    plugin::Call<0x716B10>();
}

// Converted from cdecl void CClouds::MovingFogRender(void) 0x716C90
void CClouds::MovingFogRender() {
    plugin::Call<0x716C90>();
}
