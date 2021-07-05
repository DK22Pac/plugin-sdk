/*
    Plugin-SDK (Grand Theft Auto 3) source file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/
#include "CSprite2d.h"

PLUGIN_SOURCE_FILE

PLUGIN_VARIABLE RwIm2DVertex(&CSprite2d::maVertices)[8] = *reinterpret_cast<RwIm2DVertex(*)[8]>(GLOBAL_ADDRESS_BY_VERSION(0x6E9168, 0x6E9168, 0x6F92A8));
PLUGIN_VARIABLE CSprite2d(&CSprite2d::mCurrentSprite)[10] = *reinterpret_cast<CSprite2d(*)[10]>(GLOBAL_ADDRESS_BY_VERSION(0x6F4500, 0x6F4500, 0x704640));
PLUGIN_VARIABLE int(&CSprite2d::mBankStart)[10] = *reinterpret_cast<int(*)[10]>(GLOBAL_ADDRESS_BY_VERSION(0x774BE8, 0x774BE8, 0x784D28));
PLUGIN_VARIABLE RwTexture *(&CSprite2d::mpBankTextures)[10] = *reinterpret_cast<RwTexture *(*)[10]>(GLOBAL_ADDRESS_BY_VERSION(0x774DC0, 0x774DC0, 0x784F00));
PLUGIN_VARIABLE RwIm2DVertex(&CSprite2d::maBankVertices)[500] = *reinterpret_cast<RwIm2DVertex(*)[500]>(GLOBAL_ADDRESS_BY_VERSION(0x8429F8, 0x8429F8, 0x852B38));
PLUGIN_VARIABLE float &CSprite2d::RecipNearClip = *reinterpret_cast<float *>(GLOBAL_ADDRESS_BY_VERSION(0x880DB4, 0x880D64, 0x890EA4));
PLUGIN_VARIABLE int &CSprite2d::mCurrentBank = *reinterpret_cast<int *>(GLOBAL_ADDRESS_BY_VERSION(0x8F1AF4, 0x8F1BA8, 0x901CE8));

int ctor_addr(CSprite2d) = ADDRESS_BY_VERSION(0x51E9E0, 0x51EC10, 0x51EBA0);
int ctor_gaddr(CSprite2d) = GLOBAL_ADDRESS_BY_VERSION(0x51E9E0, 0x51EC10, 0x51EBA0);

int dtor_addr(CSprite2d) = ADDRESS_BY_VERSION(0x51E9F0, 0x51EC20, 0x51EBB0);
int dtor_gaddr(CSprite2d) = GLOBAL_ADDRESS_BY_VERSION(0x51E9F0, 0x51EC20, 0x51EBB0);

int addrof(CSprite2d::Delete) = ADDRESS_BY_VERSION(0x51EA00, 0x51EC30, 0x51EBC0);
int gaddrof(CSprite2d::Delete) = GLOBAL_ADDRESS_BY_VERSION(0x51EA00, 0x51EC30, 0x51EBC0);

void CSprite2d::Delete() {
    plugin::CallMethodDynGlobal<CSprite2d *>(gaddrof(CSprite2d::Delete), this);
}

int addrof_o(CSprite2d::Draw, void (CSprite2d::*)(float, float, float, float, CRGBA const &)) = ADDRESS_BY_VERSION(0x51ECE0, 0x51EF10, 0x51EEA0);
int gaddrof_o(CSprite2d::Draw, void (CSprite2d::*)(float, float, float, float, CRGBA const &)) = GLOBAL_ADDRESS_BY_VERSION(0x51ECE0, 0x51EF10, 0x51EEA0);

void CSprite2d::Draw(float x, float y, float w, float h, CRGBA const &color) {
    plugin::CallMethodDynGlobal<CSprite2d *, float, float, float, float, CRGBA const &>(gaddrof_o(CSprite2d::Draw, void (CSprite2d::*)(float, float, float, float, CRGBA const &)), this, x, y, w, h, color);
}

int addrof_o(CSprite2d::Draw, void (CSprite2d::*)(CRect const &, CRGBA const &)) = ADDRESS_BY_VERSION(0x51ED50, 0x51EF80, 0x51EF10);
int gaddrof_o(CSprite2d::Draw, void (CSprite2d::*)(CRect const &, CRGBA const &)) = GLOBAL_ADDRESS_BY_VERSION(0x51ED50, 0x51EF80, 0x51EF10);

void CSprite2d::Draw(CRect const &rect, CRGBA const &color) {
    plugin::CallMethodDynGlobal<CSprite2d *, CRect const &, CRGBA const &>(gaddrof_o(CSprite2d::Draw, void (CSprite2d::*)(CRect const &, CRGBA const &)), this, rect, color);
}

int addrof_o(CSprite2d::Draw, void (CSprite2d::*)(CRect const &, CRGBA const &, float, float, float, float, float, float, float, float)) = ADDRESS_BY_VERSION(0x51ED90, 0x51EFC0, 0x51EF50);
int gaddrof_o(CSprite2d::Draw, void (CSprite2d::*)(CRect const &, CRGBA const &, float, float, float, float, float, float, float, float)) = GLOBAL_ADDRESS_BY_VERSION(0x51ED90, 0x51EFC0, 0x51EF50);

void CSprite2d::Draw(CRect const &rect, CRGBA const &color, float u1, float v1, float u2, float v2, float u3, float v3, float u4, float v4) {
    plugin::CallMethodDynGlobal<CSprite2d *, CRect const &, CRGBA const &, float, float, float, float, float, float, float, float>(gaddrof_o(CSprite2d::Draw, void (CSprite2d::*)(CRect const &, CRGBA const &, float, float, float, float, float, float, float, float)), this, rect, color, u1, v1, u2, v2, u3, v3, u4, v4);
}

int addrof_o(CSprite2d::Draw, void (CSprite2d::*)(CRect const &, CRGBA const &, CRGBA const &, CRGBA const &, CRGBA const &)) = ADDRESS_BY_VERSION(0x51EDF0, 0x51F020, 0x51EFB0);
int gaddrof_o(CSprite2d::Draw, void (CSprite2d::*)(CRect const &, CRGBA const &, CRGBA const &, CRGBA const &, CRGBA const &)) = GLOBAL_ADDRESS_BY_VERSION(0x51EDF0, 0x51F020, 0x51EFB0);

void CSprite2d::Draw(CRect const &rect, CRGBA const &color1, CRGBA const &color2, CRGBA const &color3, CRGBA const &color4) {
    plugin::CallMethodDynGlobal<CSprite2d *, CRect const &, CRGBA const &, CRGBA const &, CRGBA const &, CRGBA const &>(gaddrof_o(CSprite2d::Draw, void (CSprite2d::*)(CRect const &, CRGBA const &, CRGBA const &, CRGBA const &, CRGBA const &)), this, rect, color1, color2, color3, color4);
}

int addrof_o(CSprite2d::Draw, void (CSprite2d::*)(float, float, float, float, float, float, float, float, CRGBA const &)) = ADDRESS_BY_VERSION(0x51EE40, 0x51F070, 0x51F000);
int gaddrof_o(CSprite2d::Draw, void (CSprite2d::*)(float, float, float, float, float, float, float, float, CRGBA const &)) = GLOBAL_ADDRESS_BY_VERSION(0x51EE40, 0x51F070, 0x51F000);

void CSprite2d::Draw(float x1, float y1, float x2, float y2, float x3, float y3, float x4, float y4, CRGBA const &color) {
    plugin::CallMethodDynGlobal<CSprite2d *, float, float, float, float, float, float, float, float, CRGBA const &>(gaddrof_o(CSprite2d::Draw, void (CSprite2d::*)(float, float, float, float, float, float, float, float, CRGBA const &)), this, x1, y1, x2, y2, x3, y3, x4, y4, color);
}

int addrof(CSprite2d::SetAddressing) = ADDRESS_BY_VERSION(0x51EAA0, 0x51ECD0, 0x51EC60);
int gaddrof(CSprite2d::SetAddressing) = GLOBAL_ADDRESS_BY_VERSION(0x51EAA0, 0x51ECD0, 0x51EC60);

void CSprite2d::SetAddressing(RwTextureAddressMode modeUV) {
    plugin::CallMethodDynGlobal<CSprite2d *, RwTextureAddressMode>(gaddrof(CSprite2d::SetAddressing), this, modeUV);
}

int addrof(CSprite2d::SetRenderState) = ADDRESS_BY_VERSION(0x51F950, 0x51FB80, 0x51FB10);
int gaddrof(CSprite2d::SetRenderState) = GLOBAL_ADDRESS_BY_VERSION(0x51F950, 0x51FB80, 0x51FB10);

void CSprite2d::SetRenderState() {
    plugin::CallMethodDynGlobal<CSprite2d *>(gaddrof(CSprite2d::SetRenderState), this);
}

int addrof_o(CSprite2d::SetTexture, void (CSprite2d::*)(char *)) = ADDRESS_BY_VERSION(0x51EA40, 0x51EC70, 0x51EC00);
int gaddrof_o(CSprite2d::SetTexture, void (CSprite2d::*)(char *)) = GLOBAL_ADDRESS_BY_VERSION(0x51EA40, 0x51EC70, 0x51EC00);

void CSprite2d::SetTexture(char *name) {
    plugin::CallMethodDynGlobal<CSprite2d *, char *>(gaddrof_o(CSprite2d::SetTexture, void (CSprite2d::*)(char *)), this, name);
}

int addrof_o(CSprite2d::SetTexture, void (CSprite2d::*)(char *, char *)) = ADDRESS_BY_VERSION(0x51EA70, 0x51ECA0, 0x51EC30);
int gaddrof_o(CSprite2d::SetTexture, void (CSprite2d::*)(char *, char *)) = GLOBAL_ADDRESS_BY_VERSION(0x51EA70, 0x51ECA0, 0x51EC30);

void CSprite2d::SetTexture(char *name, char *maskName) {
    plugin::CallMethodDynGlobal<CSprite2d *, char *, char *>(gaddrof_o(CSprite2d::SetTexture, void (CSprite2d::*)(char *, char *)), this, name, maskName);
}

int addrof(CSprite2d::AddSpriteToBank) = ADDRESS_BY_VERSION(0x51EBC0, 0x51EDF0, 0x51ED80);
int gaddrof(CSprite2d::AddSpriteToBank) = GLOBAL_ADDRESS_BY_VERSION(0x51EBC0, 0x51EDF0, 0x51ED80);

void CSprite2d::AddSpriteToBank(int bank, CRect const &rect, CRGBA const &color, float u1, float v1, float u2, float v2, float u3, float v3, float u4, float v4) {
    plugin::CallDynGlobal<int, CRect const &, CRGBA const &, float, float, float, float, float, float, float, float>(gaddrof(CSprite2d::AddSpriteToBank), bank, rect, color, u1, v1, u2, v2, u3, v3, u4, v4);
}

int addrof(CSprite2d::DrawBank) = ADDRESS_BY_VERSION(0x51EC50, 0x51EE80, 0x51EE10);
int gaddrof(CSprite2d::DrawBank) = GLOBAL_ADDRESS_BY_VERSION(0x51EC50, 0x51EE80, 0x51EE10);

void CSprite2d::DrawBank(int bank) {
    plugin::CallDynGlobal<int>(gaddrof(CSprite2d::DrawBank), bank);
}

int addrof_o(CSprite2d::DrawRect, void (*)(CRect const &, CRGBA const &)) = ADDRESS_BY_VERSION(0x51F970, 0x51FBA0, 0x51FB30);
int gaddrof_o(CSprite2d::DrawRect, void (*)(CRect const &, CRGBA const &)) = GLOBAL_ADDRESS_BY_VERSION(0x51F970, 0x51FBA0, 0x51FB30);

void CSprite2d::DrawRect(CRect const &rect, CRGBA const &color) {
    plugin::CallDynGlobal<CRect const &, CRGBA const &>(gaddrof_o(CSprite2d::DrawRect, void (*)(CRect const &, CRGBA const &)), rect, color);
}

int addrof_o(CSprite2d::DrawRect, void (*)(CRect const &, CRGBA const &, CRGBA const &, CRGBA const &, CRGBA const &)) = ADDRESS_BY_VERSION(0x51FA00, 0x51FC30, 0x51FBC0);
int gaddrof_o(CSprite2d::DrawRect, void (*)(CRect const &, CRGBA const &, CRGBA const &, CRGBA const &, CRGBA const &)) = GLOBAL_ADDRESS_BY_VERSION(0x51FA00, 0x51FC30, 0x51FBC0);

void CSprite2d::DrawRect(CRect const &rect, CRGBA const &color1, CRGBA const &color2, CRGBA const &color3, CRGBA const &color4) {
    plugin::CallDynGlobal<CRect const &, CRGBA const &, CRGBA const &, CRGBA const &, CRGBA const &>(gaddrof_o(CSprite2d::DrawRect, void (*)(CRect const &, CRGBA const &, CRGBA const &, CRGBA const &, CRGBA const &)), rect, color1, color2, color3, color4);
}

int addrof(CSprite2d::DrawRectXLU) = ADDRESS_BY_VERSION(0x51FA80, 0x51FCB0, 0x51FC40);
int gaddrof(CSprite2d::DrawRectXLU) = GLOBAL_ADDRESS_BY_VERSION(0x51FA80, 0x51FCB0, 0x51FC40);

void CSprite2d::DrawRectXLU(CRect const &rect, CRGBA const &color1, CRGBA const &color2, CRGBA const &color3, CRGBA const &color4) {
    plugin::CallDynGlobal<CRect const &, CRGBA const &, CRGBA const &, CRGBA const &, CRGBA const &>(gaddrof(CSprite2d::DrawRectXLU), rect, color1, color2, color3, color4);
}

int addrof(CSprite2d::GetBank) = ADDRESS_BY_VERSION(0x51EB70, 0x51EDA0, 0x51ED30);
int gaddrof(CSprite2d::GetBank) = GLOBAL_ADDRESS_BY_VERSION(0x51EB70, 0x51EDA0, 0x51ED30);

int CSprite2d::GetBank(int n, RwTexture *texture) {
    return plugin::CallAndReturnDynGlobal<int, int, RwTexture *>(gaddrof(CSprite2d::GetBank), n, texture);
}

int addrof(CSprite2d::InitPerFrame) = ADDRESS_BY_VERSION(0x51EAE0, 0x51ED10, 0x51ECA0);
int gaddrof(CSprite2d::InitPerFrame) = GLOBAL_ADDRESS_BY_VERSION(0x51EAE0, 0x51ED10, 0x51ECA0);

void CSprite2d::InitPerFrame() {
    plugin::CallDynGlobal(gaddrof(CSprite2d::InitPerFrame));
}

int addrof(CSprite2d::SetMaskVertices) = ADDRESS_BY_VERSION(0x51F490, 0x51F6C0, 0x51F650);
int gaddrof(CSprite2d::SetMaskVertices) = GLOBAL_ADDRESS_BY_VERSION(0x51F490, 0x51F6C0, 0x51F650);

void CSprite2d::SetMaskVertices(int numVerts, float *pos) {
    plugin::CallDynGlobal<int, float *>(gaddrof(CSprite2d::SetMaskVertices), numVerts, pos);
}

int addrof(CSprite2d::SetRecipNearClip) = ADDRESS_BY_VERSION(0x51EA20, 0x51EC50, 0x51EBE0);
int gaddrof(CSprite2d::SetRecipNearClip) = GLOBAL_ADDRESS_BY_VERSION(0x51EA20, 0x51EC50, 0x51EBE0);

void CSprite2d::SetRecipNearClip() {
    plugin::CallDynGlobal(gaddrof(CSprite2d::SetRecipNearClip));
}

int addrof_o(CSprite2d::SetVertices, void (*)(CRect const &, CRGBA const &, CRGBA const &, CRGBA const &, CRGBA const &, unsigned int)) = ADDRESS_BY_VERSION(0x51EE90, 0x51F0C0, 0x51F050);
int gaddrof_o(CSprite2d::SetVertices, void (*)(CRect const &, CRGBA const &, CRGBA const &, CRGBA const &, CRGBA const &, unsigned int)) = GLOBAL_ADDRESS_BY_VERSION(0x51EE90, 0x51F0C0, 0x51F050);

void CSprite2d::SetVertices(CRect const &rect, CRGBA const &color1, CRGBA const &color2, CRGBA const &color3, CRGBA const &color4, unsigned int bFar) {
    plugin::CallDynGlobal<CRect const &, CRGBA const &, CRGBA const &, CRGBA const &, CRGBA const &, unsigned int>(gaddrof_o(CSprite2d::SetVertices, void (*)(CRect const &, CRGBA const &, CRGBA const &, CRGBA const &, CRGBA const &, unsigned int)), rect, color1, color2, color3, color4, bFar);
}

int addrof_o(CSprite2d::SetVertices, void (*)(float, float, float, float, float, float, float, float, CRGBA const &, CRGBA const &, CRGBA const &, CRGBA const &)) = ADDRESS_BY_VERSION(0x51F070, 0x51F2A0, 0x51F230);
int gaddrof_o(CSprite2d::SetVertices, void (*)(float, float, float, float, float, float, float, float, CRGBA const &, CRGBA const &, CRGBA const &, CRGBA const &)) = GLOBAL_ADDRESS_BY_VERSION(0x51F070, 0x51F2A0, 0x51F230);

void CSprite2d::SetVertices(float x1, float y1, float x2, float y2, float x3, float y3, float x4, float y4, CRGBA const &color1, CRGBA const &color2, CRGBA const &color3, CRGBA const &color4) {
    plugin::CallDynGlobal<float, float, float, float, float, float, float, float, CRGBA const &, CRGBA const &, CRGBA const &, CRGBA const &>(gaddrof_o(CSprite2d::SetVertices, void (*)(float, float, float, float, float, float, float, float, CRGBA const &, CRGBA const &, CRGBA const &, CRGBA const &)), x1, y1, x2, y2, x3, y3, x4, y4, color1, color2, color3, color4);
}

int addrof_o(CSprite2d::SetVertices, void (*)(CRect const &, CRGBA const &, CRGBA const &, CRGBA const &, CRGBA const &, float, float, float, float, float, float, float, float)) = ADDRESS_BY_VERSION(0x51F220, 0x51F450, 0x51F3E0);
int gaddrof_o(CSprite2d::SetVertices, void (*)(CRect const &, CRGBA const &, CRGBA const &, CRGBA const &, CRGBA const &, float, float, float, float, float, float, float, float)) = GLOBAL_ADDRESS_BY_VERSION(0x51F220, 0x51F450, 0x51F3E0);

void CSprite2d::SetVertices(CRect const &rect, CRGBA const &color1, CRGBA const &color2, CRGBA const &color3, CRGBA const &color4, float u1, float v1, float u2, float v2, float u3, float v3, float u4, float v4) {
    plugin::CallDynGlobal<CRect const &, CRGBA const &, CRGBA const &, CRGBA const &, CRGBA const &, float, float, float, float, float, float, float, float>(gaddrof_o(CSprite2d::SetVertices, void (*)(CRect const &, CRGBA const &, CRGBA const &, CRGBA const &, CRGBA const &, float, float, float, float, float, float, float, float)), rect, color1, color2, color3, color4, u1, v1, u2, v2, u3, v3, u4, v4);
}

int addrof_o(CSprite2d::SetVertices, void (*)(int, float *, float *, CRGBA const &)) = ADDRESS_BY_VERSION(0x51F3E0, 0x51F610, 0x51F5A0);
int gaddrof_o(CSprite2d::SetVertices, void (*)(int, float *, float *, CRGBA const &)) = GLOBAL_ADDRESS_BY_VERSION(0x51F3E0, 0x51F610, 0x51F5A0);

void CSprite2d::SetVertices(int numVerts, float *pos, float *texCoors, CRGBA const &color) {
    plugin::CallDynGlobal<int, float *, float *, CRGBA const &>(gaddrof_o(CSprite2d::SetVertices, void (*)(int, float *, float *, CRGBA const &)), numVerts, pos, texCoors, color);
}

int addrof_o(CSprite2d::SetVertices, void (*)(RwIm2DVertex *, CRect const &, CRGBA const &, CRGBA const &, CRGBA const &, CRGBA const &, float, float, float, float, float, float, float, float)) = ADDRESS_BY_VERSION(0x51F720, 0x51F950, 0x51F8E0);
int gaddrof_o(CSprite2d::SetVertices, void (*)(RwIm2DVertex *, CRect const &, CRGBA const &, CRGBA const &, CRGBA const &, CRGBA const &, float, float, float, float, float, float, float, float)) = GLOBAL_ADDRESS_BY_VERSION(0x51F720, 0x51F950, 0x51F8E0);

void CSprite2d::SetVertices(RwIm2DVertex *vertices, CRect const &rect, CRGBA const &color1, CRGBA const &color2, CRGBA const &color3, CRGBA const &color4, float u1, float v1, float u2, float v2, float u3, float v3, float u4, float v4) {
    plugin::CallDynGlobal<RwIm2DVertex *, CRect const &, CRGBA const &, CRGBA const &, CRGBA const &, CRGBA const &, float, float, float, float, float, float, float, float>(gaddrof_o(CSprite2d::SetVertices, void (*)(RwIm2DVertex *, CRect const &, CRGBA const &, CRGBA const &, CRGBA const &, CRGBA const &, float, float, float, float, float, float, float, float)), vertices, rect, color1, color2, color3, color4, u1, v1, u2, v2, u3, v3, u4, v4);
}
