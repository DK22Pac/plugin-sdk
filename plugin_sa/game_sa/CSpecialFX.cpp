/*
    Plugin-SDK (Grand Theft Auto San Andreas) source file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/
#include "CSpecialFX.h"

bool &CSpecialFX::bVideoCam = *(bool *)0xC7C70C;
bool &CSpecialFX::bLiftCam = *(bool *)0xC7C70D;
unsigned int &CSpecialFX::SnapShotFrames = *(unsigned int *)0xC7C710;
bool &CSpecialFX::bSnapShotActive = *(bool *)0xC7C714;
RwTexture *&gpFinishFlagTex = *(RwTexture **)0xC7C718;

// Converted from cdecl void CSpecialFX::AddWeaponStreak(int weaponType) 0x7233F0
void CSpecialFX::AddWeaponStreak(int weaponType) {
    plugin::Call<0x7233F0, int>(weaponType);
}

// Converted from cdecl void CSpecialFX::Init(void) 0x7268F0
void CSpecialFX::Init() {
    plugin::Call<0x7268F0>();
}

// Converted from cdecl void CSpecialFX::Render(void) 0x726AD0
void CSpecialFX::Render() {
    plugin::Call<0x726AD0>();
}

// Converted from cdecl void CSpecialFX::Render2DFXs(void) 0x721660
void CSpecialFX::Render2DFXs() {
    plugin::Call<0x721660>();
}

// Converted from cdecl void CSpecialFX::ReplayStarted(void) 0x721D30
void CSpecialFX::ReplayStarted() {
    plugin::Call<0x721D30>();
}

// Converted from cdecl void CSpecialFX::Shutdown(void) 0x723390
void CSpecialFX::Shutdown() {
    plugin::Call<0x723390>();
}

// Converted from cdecl void CSpecialFX::Update(void) 0x726AA0
void CSpecialFX::Update() {
    plugin::Call<0x726AA0>();
}