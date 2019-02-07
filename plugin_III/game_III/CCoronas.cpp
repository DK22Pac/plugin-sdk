/*
Plugin-SDK (Grand Theft Auto 3) source file
Authors: GTA Community. See more here
https://github.com/DK22Pac/plugin-sdk
Do not delete this comment block. Respect others' work!
*/
#include "CCoronas.h"

RwTexture **gpCoronaTexture = (RwTexture **)0x5FAF44;

bool& CCoronas::SunBlockedByClouds = *(bool *)0x95CD73;
int& CCoronas::bChangeBrightnessImmediately = *(int *)0x8E2C30;
CRegisteredCorona *CCoronas::aCoronas = (CRegisteredCorona *)0x72E518;
int& CCoronas::LastCamLook = *(int *)0x62F238;
float& CCoronas::LightsMult = *(float *)0x5FB088;


// Converted from cdecl void CCoronas::DoSunAndMoon(void) 0x4FA380
void CCoronas::DoSunAndMoon() {
    plugin::Call<0x4FA380>();
}

// Converted from cdecl void CCoronas::Init(void) 0x4F9F90
void CCoronas::Init() {
    plugin::Call<0x4F9F90>();
}

// Converted from cdecl void CCoronas::RegisterCorona(uint id, uchar red, uchar green, uchar blue, uchar alpha, CVector const& posn, float radius, float farClip, RwTexture *texture, uchar flareType, uchar enableReflection, uchar checkObstacles, uchar, float normalAngle) 0x4FA0E0
void CCoronas::RegisterCorona(unsigned int id, unsigned char red, unsigned char green, unsigned char blue, unsigned char alpha, CVector const& posn, float radius, float farClip, RwTexture* texture, unsigned char flareType, unsigned char enableReflection, unsigned char checkObstacles, unsigned char arg12, float normalAngle) {
    plugin::Call<0x4FA0E0, unsigned int, unsigned char, unsigned char, unsigned char, unsigned char, CVector const&, float, float, RwTexture*, unsigned char, unsigned char, unsigned char, unsigned char, float>(id, red, green, blue, alpha, posn, radius, farClip, texture, flareType, enableReflection, checkObstacles, arg12, normalAngle);
}

// Converted from cdecl void CCoronas::RegisterCorona(uint id, uchar red, uchar green, uchar blue, uchar alpha, CVector const& posn, float radius, float farClip, uchar coronaType, uchar flareType, uchar enableReflection, uchar checkObstacles, uchar, float normalAngle) 0x4FA080
void CCoronas::RegisterCorona(unsigned int id, unsigned char red, unsigned char green, unsigned char blue, unsigned char alpha, CVector const& posn, float radius, float farClip, unsigned char coronaType, unsigned char flareType, unsigned char enableReflection, unsigned char checkObstacles, unsigned char arg12, float normalAngle) {
    plugin::Call<0x4FA080, unsigned int, unsigned char, unsigned char, unsigned char, unsigned char, CVector const&, float, float, unsigned char, unsigned char, unsigned char, unsigned char, unsigned char, float>(id, red, green, blue, alpha, posn, radius, farClip, coronaType, flareType, enableReflection, checkObstacles, arg12, normalAngle);
}

// Converted from cdecl void CCoronas::Render(void) 0x4F8FB0
void CCoronas::Render() {
    plugin::Call<0x4F8FB0>();
}

// Converted from cdecl void CCoronas::RenderReflections(void) 0x4F9B40
void CCoronas::RenderReflections() {
    plugin::Call<0x4F9B40>();
}

// Converted from cdecl void CCoronas::Shutdown(void) 0x4FA050
void CCoronas::Shutdown() {
    plugin::Call<0x4FA050>();
}

// Converted from cdecl void CCoronas::Update(void) 0x4F8EC0
void CCoronas::Update() {
    plugin::Call<0x4F8EC0>();
}

// Converted from cdecl void CCoronas::UpdateCoronaCoors(uint id, CVector const& posn, float farClip, float angle) 0x4FA2D0
void CCoronas::UpdateCoronaCoors(unsigned int id, CVector const& posn, float farClip, float angle) {
    plugin::Call<0x4FA2D0, unsigned int, CVector const&, float, float>(id, posn, farClip, angle);
}