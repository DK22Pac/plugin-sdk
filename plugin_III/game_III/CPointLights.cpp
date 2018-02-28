/*
Plugin-SDK (Grand Theft Auto 3) source file
Authors: GTA Community. See more here
https://github.com/DK22Pac/plugin-sdk
Do not delete this comment block. Respect others' work!
*/
#include "CPointLights.h"

unsigned int MAX_POINTLIGHTS = 32;

unsigned short &CPointLights::NumLights = *(unsigned short *)0x95CC3E;
CPointLight *CPointLights::aPointLights = (CPointLight *)0x7096D0;

// Converted from cdecl void CPointLights::AddLight(uchar lightType,CVector point,CVector direction,float radius,float red,float green,float blue,uchar fogType,bool generateExtraShadows) 0x510790
void CPointLights::AddLight(unsigned char lightType, CVector point, CVector direction, float radius, float red, float green, float blue, unsigned char fogType, bool generateExtraShadows) {
    plugin::Call<0x510790, unsigned char, CVector, CVector, float, float, float, float, unsigned char, bool>(lightType, point, direction, radius, red, green, blue, fogType, generateExtraShadows);
}

// Converted from cdecl float CPointLights::GenerateLightsAffectingObject(CVector *point) 0x510960
float CPointLights::GenerateLightsAffectingObject(CVector* point) {
    return plugin::CallAndReturn<float, 0x510960, CVector*>(point);
}

// Converted from cdecl void CPointLights::RemoveLightsAffectingObject(void) 0x510C20
void CPointLights::RemoveLightsAffectingObject() {
    plugin::Call<0x510C20>();
}

// Converted from cdecl void CPointLights::RenderFogEffect(void) 0x510C30 
void CPointLights::RenderFogEffect() {
    plugin::Call<0x510C30>();
}

// Converted from thiscall void CPointLight::CPointLight(void) 0x511930
CPointLight::CPointLight() {
    plugin::CallMethod<0x511930, CPointLight *>(this);
}
