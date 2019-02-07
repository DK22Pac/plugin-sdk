/*
    Plugin-SDK (Grand Theft Auto 3) source file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/
#include "CCoronas.h"

RwTexture **gpCoronaTexture = (RwTexture **)0x695538;

bool& CCoronas::SunBlockedByClouds = *(bool *)0xA10B25;
int& CCoronas::bChangeBrightnessImmediately = *(int *)0x975380;
CRegisteredCorona *CCoronas::aCoronas = (CRegisteredCorona *)0x815128;
int& CCoronas::LastCamLook = *(int *)0x709230;
float& CCoronas::LightsMult = *(float *)0x69567C;

// Converted from cdecl void CCoronas::DoSunAndMoon(void) 0x542210
void CCoronas::DoSunAndMoon() {
    plugin::Call<0x542210>();
}

// Converted from cdecl void CCoronas::UpdateCoronaCoors(uint id, CVector const& posn, float farClip, float angle) 0x5423E0
void CCoronas::UpdateCoronaCoors(unsigned int id, CVector const& posn, float farClip, float angle) {
    plugin::Call<0x5423E0, unsigned int, CVector const&, float, float>(id, posn, farClip, angle);
}

// Converted from cdecl void CCoronas::RegisterCorona(uint coronaId,uchar red,uchar green,uchar blue,uchar alpha,CVector const& pos,float radius,float farClip,RwTexture *texture,uchar flare,uchar reflection,uchar,uchar,float normalAngle,bool,float) 0x542490
void CCoronas::RegisterCorona(unsigned int coronaId, unsigned char red, unsigned char green, unsigned char blue, unsigned char alpha, CVector const& pos, float radius, float farClip, RwTexture* texture, unsigned char flare, unsigned char reflection, unsigned char arg11, unsigned char arg12, float normalAngle, bool arg14, float arg15) {
    plugin::Call<0x542490, unsigned int, unsigned char, unsigned char, unsigned char, unsigned char, CVector const&, float, float, RwTexture*, unsigned char, unsigned char, unsigned char, unsigned char, float, bool, float>(coronaId, red, green, blue, alpha, pos, radius, farClip, texture, flare, reflection, arg11, arg12, normalAngle, arg14, arg15);
}

// Converted from cdecl void CCoronas::RegisterCorona(uint coronaId,uchar red,uchar green,uchar blue,uchar alpha,CVector const& pos,float radius,float farClip,uchar,uchar flare,uchar reflection,uchar,uchar,float normalAngle,bool,float) 0x5427A0
void CCoronas::RegisterCorona(unsigned int coronaId, unsigned char red, unsigned char green, unsigned char blue, unsigned char alpha, CVector const& pos, float radius, float farClip, unsigned char arg8, unsigned char flare, unsigned char reflection, unsigned char arg11, unsigned char arg12, float normalAngle, bool arg14, float arg15) {
    plugin::Call<0x5427A0, unsigned int, unsigned char, unsigned char, unsigned char, unsigned char, CVector const&, float, float, unsigned char, unsigned char, unsigned char, unsigned char, unsigned char, float, bool, float>(coronaId, red, green, blue, alpha, pos, radius, farClip, arg8, flare, reflection, arg11, arg12, normalAngle, arg14, arg15);
}

// Converted from cdecl void CCoronas::Shutdown(void) 0x542800
void CCoronas::Shutdown() {
    plugin::Call<0x542800>();
}

// Converted from cdecl void CCoronas::Init(void) 0x542830
void CCoronas::Init() {
    plugin::Call<0x542830>();
}

// Converted from cdecl void CCoronas::RenderSunReflection(void) 0x542970
void CCoronas::RenderSunReflection() {
    plugin::Call<0x542970>();
}

// Converted from cdecl void CCoronas::RenderReflections(void) 0x542FF0
void CCoronas::RenderReflections() {
    plugin::Call<0x542FF0>();
}

// Converted from cdecl void CCoronas::Render(void) 0x543500
void CCoronas::Render() {
    plugin::Call<0x543500>();
}

// Converted from cdecl void CCoronas::Update(void) 0x544130
void CCoronas::Update() {
    plugin::Call<0x544130>();
}
