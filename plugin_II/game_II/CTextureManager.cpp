/*
    Plugin-SDK (Grand Theft Auto 2) source file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/
#include "CTextureManager.h"

CTextureManager** TextureManager = (CTextureManager**)0x671978;

CTextureManager* GetTextureManager() {
    return *TextureManager;
}

CTextureManager::CTextureManager() {
    plugin::CallMethod<0x4C3190, CTextureManager*>(this);
}

void CTextureManager::Load() {
    plugin::CallMethod<0x4C30A0, CTextureManager*>(this);
}

void CTextureManager::Unload() {
    plugin::CallMethod<0x4C2D60, CTextureManager*>(this);
}

tTexture* CTextureManager::GetTexture(int id1, int id2, int const& mode, int enableAlpha) {
    return plugin::CallMethodAndReturn<tTexture*, 0x4C2AC0, CTextureManager*, int, int, int, int>(this, id1, id2, mode, enableAlpha);
}
