/*
Plugin-SDK (Grand Theft Auto 3) header file
Authors: GTA Community. See more here
https://github.com/DK22Pac/plugin-sdk
Do not delete this comment block. Respect others' work!
*/
#include "CWeaponEffects.h"

CWeaponEffects& gCrossHair = *(CWeaponEffects*)0x6503BC;
RwTexture*& gpCrossHairTex = *(RwTexture**)0x6503D8;
RwRaster*& gpCrossHairRaster = *(RwRaster**)0x6503DC;

// Converted from thiscall void CWeaponEffects::CWeaponEffects(void) 0x564C40
CWeaponEffects::CWeaponEffects() {
    plugin::CallMethod<0x564C40, CWeaponEffects *>(this);
}

// Converted from cdecl void CWeaponEffects::ClearCrossHair(void) 0x564D60 
void CWeaponEffects::ClearCrossHair() {
    plugin::Call<0x564D60>();
}

// Converted from cdecl void CWeaponEffects::Init(void) 0x564C60 
void CWeaponEffects::Init() {
    plugin::Call<0x564C60>();
}

// Converted from cdecl void CWeaponEffects::MarkTarget(CVector pos,uchar red,uchar green,uchar blue,uchar alpha,float size) 0x564D00
void CWeaponEffects::MarkTarget(CVector pos, unsigned char red, unsigned char green, unsigned char blue, unsigned char alpha, float size) {
    plugin::Call<0x564D00, CVector, unsigned char, unsigned char, unsigned char, unsigned char, float>(pos, red, green, blue, alpha, size);
}

// Converted from cdecl void CWeaponEffects::Render(void) 0x564D70 
void CWeaponEffects::Render() {
    plugin::Call<0x564D70>();
}

// Converted from cdecl void CWeaponEffects::Shutdown(void) 0x564CF0 
void CWeaponEffects::Shutdown() {
    plugin::Call<0x564CF0>();
}

// Converted from thiscall void CWeaponEffects::~CWeaponEffects() 0x564C50
CWeaponEffects::~CWeaponEffects() {
    plugin::CallMethod<0x564C50, CWeaponEffects *>(this);
}
