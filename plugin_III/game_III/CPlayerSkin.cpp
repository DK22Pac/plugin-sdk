/*
Plugin-SDK (Grand Theft Auto 3) header file
Authors: GTA Community. See more here
https://github.com/DK22Pac/plugin-sdk
Do not delete this comment block. Respect others' work!
*/
#include "CPlayerSkin.h"

int &CPlayerSkin::m_txdSlot = *(int *)0x8F1AA0;
unsigned int &CPlayerSkin::LastFlash = *(unsigned int *)0x661008;

// Converted from cdecl void CPlayerSkin::BeginFrontendSkinEdit(void) 0x59BC70 
void CPlayerSkin::BeginFrontendSkinEdit() {
    plugin::Call<0x59BC70>();
}

// Converted from cdecl void CPlayerSkin::EndFrontendSkinEdit(void) 0x59BCB0 
void CPlayerSkin::EndFrontendSkinEdit() {
    plugin::Call<0x59BCB0>();
}

// Converted from cdecl RwTexture* CPlayerSkin::GetSkinTexture(char const* name) 0x59B9F0
RwTexture* CPlayerSkin::GetSkinTexture(char const* name) {
    return plugin::CallAndReturn<RwTexture*, 0x59B9F0, char const*>(name);
}

// Converted from cdecl void CPlayerSkin::Initialise(void) 0x59B9B0 
void CPlayerSkin::Initialise() {
    plugin::Call<0x59B9B0>();
}
