/*
    Plugin-SDK (Grand Theft Auto 3) source file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/
#include "CBrightLights.h"

float &TrafficLightsSide            = *(float *)0x5FEEE0;
float &TrafficLightsUp              = *(float *)0x5FEEF8;
unsigned short &TrafficLightIndices = *(unsigned short *)0x5FEF10;
float &LongCarHeadLightsSide        = *(float *)0x5FEF28;
float &LongCarHeadLightsFront       = *(float *)0x5FEF48;
float &LongCarHeadLightsUp          = *(float *)0x5FEF68;
float &SmallCarHeadLightsSide       = *(float *)0x5FEF88;
float &SmallCarHeadLightsFront      = *(float *)0x5FEFA8;
float &SmallCarHeadLightsUp         = *(float *)0x5FEFC8;
float &BigCarHeadLightsSide         = *(float *)0x5FEFE8;
float &BigCarHeadLightsFront        = *(float *)0x5FF008;
float &BigCarHeadLightsUp           = *(float *)0x5FF028;
float &TallCarHeadLightsSide        = *(float *)0x5FF048;
float &TallCarHeadLightsFront       = *(float *)0x5FF068;
float &TallCarHeadLightsUp          = *(float *)0x5FF088;
unsigned short &CubeIndices         = *(unsigned short *)0x5FF0A8;
float &SirenLightsSide              = *(float *)0x5FF0F0;
float &SirenLightsUp                = *(float *)0x5FF108;
unsigned int MAX_NUM_BRIGHTLIGHTS = 32;

CBrightLight *CBrightLights::aBrightLights = (CBrightLight *)0x733A68;
unsigned int &CBrightLights::NumBrightLights = *(unsigned int *)0x8F2C70;

// Converted from thiscall void CBrightLight::CBrightLight(void) 0x51C340
CBrightLight::CBrightLight() {
    plugin::CallMethod<0x51C340, CBrightLight *>(this);
}

// Converted from cdecl void CBrightLights::Init(void) 0x5197A0
void CBrightLights::Init() {
    plugin::Call<0x5197A0>();
}

// Converted from cdecl void CBrightLights::Render(void) 0x5197B0
void CBrightLights::Render() {
    plugin::Call<0x5197B0>();
}

// Converted from cdecl void CBrightLights::RenderOutGeometryBuffer(void) 0x51A3B0
void CBrightLights::RenderOutGeometryBuffer() {
    plugin::Call<0x51A3B0>();
}

// Converted from cdecl void CBrightLights::RegisterOne(CVector posn, CVector right, CVector up, CVector at, uchar red, uchar green, uchar blue, uchar alpha) 0x51A410
void CBrightLights::RegisterOne(CVector posn, CVector right, CVector up, CVector at, unsigned char red, unsigned char green, unsigned char blue, unsigned char alpha) {
    plugin::Call<0x51A410, CVector, CVector, CVector, CVector, unsigned char, unsigned char, unsigned char, unsigned char>(posn, right, up, at, red, green, blue, alpha);
}
