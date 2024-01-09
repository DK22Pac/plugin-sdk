/*
    Plugin-SDK (Grand Theft Auto Vice City) source file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/
#include "CPlayerSkin.h"

RpClump*& gpPlayerClump = *reinterpret_cast<RpClump**>(0x786D50);

int &CPlayerSkin::m_txdSlot = *(int *)0x978608;

// Converted from cdecl void CPlayerSkin::BeginFrontendSkinEdit(void) 0x627D10
void CPlayerSkin::BeginFrontendSkinEdit() {
    plugin::Call<0x627D10>();
}

// Converted from cdecl void CPlayerSkin::EndFrontendSkinEdit(void) 0x627CE0
void CPlayerSkin::EndFrontendSkinEdit() {
    plugin::Call<0x627CE0>();
}

// Converted from cdecl int CPlayerSkin::GetSkinTexture(char const*) 0x627E60
int CPlayerSkin::GetSkinTexture(char const* arg0) {
    return plugin::CallAndReturn<int, 0x627E60, char const*>(arg0);
}

// Converted from cdecl void CPlayerSkin::Initialise(void) 0x627FB0
void CPlayerSkin::Initialise() {
    plugin::Call<0x627FB0>();
}

// Converted from cdecl void CPlayerSkin::RenderFrontendSkinEdit(void) 0x627BC0
void CPlayerSkin::RenderFrontendSkinEdit() {
    plugin::Call<0x627BC0>();
}

// Converted from cdecl void CPlayerSkin::Shutdown(void) 0x627FA0
void CPlayerSkin::Shutdown() {
    plugin::Call<0x627FA0>();
}
