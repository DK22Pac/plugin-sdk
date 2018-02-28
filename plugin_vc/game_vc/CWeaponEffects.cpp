/*
Plugin-SDK (Grand Theft Auto Vice City) header file
Authors: GTA Community. See more here
https://github.com/DK22Pac/plugin-sdk
Do not delete this comment block. Respect others' work!
*/
#include "CWeaponEffects.h"

// Converted from RwTexture* gpCrossHairTex 0xA0FD40
RwTexture*& gpCrossHairTex = *(RwTexture**)0xA0FD40;

// Converted from CWeaponEffects gCrossHair 0x9786EC
CWeaponEffects& gCrossHair = *(CWeaponEffects*)0x9786EC;

// Converted from thiscall void CWeaponEffects::CWeaponEffects(void) 0x5D5140
CWeaponEffects::CWeaponEffects() {
    plugin::CallMethod<0x5D5140, CWeaponEffects *>(this);
}

// Converted from cdecl void CWeaponEffects::ClearCrossHair(void) 0x5D5050
void CWeaponEffects::ClearCrossHair() {
    plugin::Call<0x5D5050>();
}

// Converted from cdecl void CWeaponEffects::Init(void) 0x5D50B0
void CWeaponEffects::Init() {
    plugin::Call<0x5D50B0>();
}

// Converted from cdecl void CWeaponEffects::MarkTarget(CVector pos, uchar red, uchar green, uchar blue, uchar alpha, float size) 0x5D5060
void CWeaponEffects::MarkTarget(CVector pos, unsigned char red, unsigned char green, unsigned char blue, unsigned char alpha, float size) {
    plugin::Call<0x5D5060, CVector, unsigned char, unsigned char, unsigned char, unsigned char, float>(pos, red, green, blue, alpha, size);
}

// Converted from cdecl void CWeaponEffects::Render(void) 0x5D4E90
void CWeaponEffects::Render() {
    plugin::Call<0x5D4E90>();
}

// Converted from cdecl void CWeaponEffects::Shutdown(void) 0x5D5090
void CWeaponEffects::Shutdown() {
    plugin::Call<0x5D5090>();
}