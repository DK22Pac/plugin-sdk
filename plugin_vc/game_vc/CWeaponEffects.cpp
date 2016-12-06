/*
Plugin-SDK (Grand Theft Auto) header file
Authors: GTA Community. See more here
https://github.com/DK22Pac/plugin-sdk
Do not delete this comment block. Respect others' work!
*/
#include "CWeaponEffects.h"

// Converted from void CWeaponEffects::CWeaponEffects(void) 0x5D5150
CWeaponEffects::CWeaponEffects() {
    plugin::CallVirtualMethod<0, CWeaponEffects *>(this);
}

// Converted from cdecl void CWeaponEffects::ClearCrossHair(void) 0x5D5050
void CWeaponEffects::ClearCrossHair() {
    plugin::Call<0x5D5050>();
}

// Converted from cdecl void CWeaponEffects::Init(void) 0x5D50B0
void CWeaponEffects::Init() {
    plugin::Call<0x5D50B0>();
}

// Converted from cdecl void CWeaponEffects::MarkTarget(CVector, uchar, uchar, uchar, uchar, float) 0x5D5060
void CWeaponEffects::MarkTarget(CVector arg0, unsigned char arg1, unsigned char arg2, unsigned char arg3, unsigned char arg4, float arg5) {
    plugin::Call<0x5D5060, CVector, unsigned char, unsigned char, unsigned char, unsigned char, float>(arg0, arg1, arg2, arg3, arg4, arg5);
}

// Converted from cdecl void CWeaponEffects::Render(void) 0x5D4E90
void CWeaponEffects::Render() {
    plugin::Call<0x5D4E90>();
}

// Converted from cdecl void CWeaponEffects::Shutdown(void) 0x5D5090
void CWeaponEffects::Shutdown() {
    plugin::Call<0x5D5090>();
}