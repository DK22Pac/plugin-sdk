/*
    Plugin-SDK (Grand Theft Auto 3) source file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/
#include "CSprite2d.h"

int &CSprite2d::mBankStart     = *(int *)0x774BE8;
RwIm2DVertex *CSprite2d::maBankVertices = (RwIm2DVertex *)0x8429F8;
int &CSprite2d::mCurrentBank   = *(int *)0x8F1AF4;
CSprite2d *CSprite2d::mCurrentSprite = (CSprite2d *)0x6F4500;
float &CSprite2d::RecipNearClip = *(float *)0x880DB4;
RwTexture *CSprite2d::mpBankTextures = (RwTexture *)0x774DC0;
RwIm2DVertex *CSprite2d::maVertices = (RwIm2DVertex *)0x6E9168;

// Converted from cdecl void CSprite2d::AddSpriteToBank(int,CRect const& posn,CRGBA const& color,float,float,float,float,float,float,float,float) 0x51EBC0 
void CSprite2d::AddSpriteToBank(int arg0, CRect const& posn, CRGBA const& color, float arg3, float arg4, float arg5, float arg6, float arg7, float arg8, float arg9, float arg10) {
    plugin::Call<0x51EBC0, int, CRect const&, CRGBA const&, float, float, float, float, float, float, float, float>(arg0, posn, color, arg3, arg4, arg5, arg6, arg7, arg8, arg9, arg10);
}

// Converted from thiscall void CSprite2d::CSprite2d(void) 0x51E9E0 
CSprite2d::CSprite2d() {
    plugin::CallMethod<0x51E9E0, CSprite2d *>(this);
}

// Converted from thiscall void CSprite2d::~CSprite2d() 0x51E9F0
CSprite2d::~CSprite2d() {
    plugin::CallMethod<0x51E9F0, CSprite2d *>(this);
}

// Converted from thiscall void CSprite2d::Delete(void) 0x51EA00 
void CSprite2d::Delete() {
    plugin::CallMethod<0x51EA00, CSprite2d *>(this);
}

// Converted from thiscall void CSprite2d::Draw(CRect const& posn,CRGBA const& color) 0x51ED50 
void CSprite2d::Draw(CRect const& posn, CRGBA const& color) {
    plugin::CallMethod<0x51ED50, CSprite2d *, CRect const&, CRGBA const&>(this, posn, color);
}

// Converted from thiscall void CSprite2d::Draw(CRect const& posn,CRGBA const& color1,CRGBA const& color2,CRGBA const& color3,CRGBA const& color4) 0x51EDF0 
void CSprite2d::Draw(CRect const& posn, CRGBA const& color1, CRGBA const& color2, CRGBA const& color3, CRGBA const& color4) {
    plugin::CallMethod<0x51EDF0, CSprite2d *, CRect const&, CRGBA const&, CRGBA const&, CRGBA const&, CRGBA const&>(this, posn, color1, color2, color3, color4);
}

// Converted from thiscall void CSprite2d::Draw(CRect const& posn,CRGBA const& color,float u1,float v1,float u2,float v2,float u3,float v3,float u4,float v4) 0x51ED90 
void CSprite2d::Draw(CRect const& posn, CRGBA const& color, float u1, float v1, float u2, float v2, float u3, float v3, float u4, float v4) {
    plugin::CallMethod<0x51ED90, CSprite2d *, CRect const&, CRGBA const&, float, float, float, float, float, float, float, float>(this, posn, color, u1, v1, u2, v2, u3, v3, u4, v4);
}

// Converted from thiscall void CSprite2d::Draw(float x,float y,float width,float height,CRGBA const& color) 0x51ECE0
void CSprite2d::Draw(float x, float y, float width, float height, CRGBA const& color) {
    plugin::CallMethod<0x51ECE0, CSprite2d *, float, float, float, float, CRGBA const&>(this, x, y, width, height, color);
}

// Converted from thiscall void CSprite2d::Draw(float x1,float y1,float x2,float y2,float x3,float y3,float x4,float y4,CRGBA const& color) 0x51EE40 
void CSprite2d::Draw(float x1, float y1, float x2, float y2, float x3, float y3, float x4, float y4, CRGBA const& color) {
    plugin::CallMethod<0x51EE40, CSprite2d *, float, float, float, float, float, float, float, float, CRGBA const&>(this, x1, y1, x2, y2, x3, y3, x4, y4, color);
}

// Converted from cdecl void CSprite2d::DrawBank(int) 0x51EC50
void CSprite2d::DrawBank(int arg0) {
    plugin::Call<0x51EC50, int>(arg0);
}

// Converted from cdecl void CSprite2d::DrawRect(CRect const& posn,CRGBA const& color) 0x51F970 
void CSprite2d::DrawRect(CRect const& posn, CRGBA const& color) {
    plugin::Call<0x51F970, CRect const&, CRGBA const&>(posn, color);
}

// Converted from cdecl void CSprite2d::DrawRect(CRect const& posn,CRGBA const& color1,CRGBA const& color2,CRGBA const& color3,CRGBA const& color4) 0x51FA00 
void CSprite2d::DrawRect(CRect const& posn, CRGBA const& color1, CRGBA const& color2, CRGBA const& color3, CRGBA const& color4) {
    plugin::Call<0x51FA00, CRect const&, CRGBA const&, CRGBA const&, CRGBA const&, CRGBA const&>(posn, color1, color2, color3, color4);
}

// Converted from cdecl int CSprite2d::GetBank(int,RwTexture *texture) 0x51EB70
int CSprite2d::GetBank(int arg0, RwTexture* texture) {
    return plugin::CallAndReturn<int, 0x51EB70, int, RwTexture*>(arg0, texture);
}

// Converted from cdecl void CSprite2d::InitPerFrame(void) 0x51EAE0 
void CSprite2d::InitPerFrame() {
    plugin::Call<0x51EAE0>();
}

// Converted from thiscall void CSprite2d::SetAddressing(RwTextureAddressMode modeUV) 0x51EAA0
void CSprite2d::SetAddressing(RwTextureAddressMode modeUV) {
    plugin::CallMethod<0x51EAA0, CSprite2d *, RwTextureAddressMode>(this, modeUV);
}

// Converted from cdecl void CSprite2d::SetMaskVertices(int numVerts,float *posn) 0x51F490
void CSprite2d::SetMaskVertices(int numVerts, float* posn) {
    plugin::Call<0x51F490, int, float*>(numVerts, posn);
}

// Converted from cdecl void CSprite2d::SetRecipNearClip(void) 0x51EA20 
void CSprite2d::SetRecipNearClip() {
    plugin::Call<0x51EA20>();
}

// Converted from thiscall void CSprite2d::SetRenderState(void) 0x51F950 
void CSprite2d::SetRenderState() {
    plugin::CallMethod<0x51F950, CSprite2d *>(this);
}

// Converted from thiscall void CSprite2d::SetTexture(char *name) 0x51EA40 
void CSprite2d::SetTexture(char* name) {
    plugin::CallMethod<0x51EA40, CSprite2d *, char*>(this, name);
}

// Converted from thiscall void CSprite2d::SetTexture(char *name,char *maskName) 0x51EA70
void CSprite2d::SetTexture(char* name, char* maskName) {
    plugin::CallMethod<0x51EA70, CSprite2d *, char*, char*>(this, name, maskName);
}

// Converted from cdecl void CSprite2d::SetVertices(CRect const& posn,CRGBA const& color1,CRGBA const& color2,CRGBA const& color3,CRGBA const& color4,float u1,float v1,float u2,float v2,float u3,float v3,float u4,float v4) 0x51F220 
void CSprite2d::SetVertices(CRect const& posn, CRGBA const& color1, CRGBA const& color2, CRGBA const& color3, CRGBA const& color4, float u1, float v1, float u2, float v2, float u3, float v3, float u4, float v4) {
    plugin::Call<0x51F220, CRect const&, CRGBA const&, CRGBA const&, CRGBA const&, CRGBA const&, float, float, float, float, float, float, float, float>(posn, color1, color2, color3, color4, u1, v1, u2, v2, u3, v3, u4, v4);
}

// Converted from cdecl void CSprite2d::SetVertices(CRect const& posn,CRGBA const& color1,CRGBA const& color2,CRGBA const& color3,CRGBA const& color4,uint numVerts) 0x51EE90
void CSprite2d::SetVertices(CRect const& posn, CRGBA const& color1, CRGBA const& color2, CRGBA const& color3, CRGBA const& color4, unsigned int numVerts) {
    plugin::Call<0x51EE90, CRect const&, CRGBA const&, CRGBA const&, CRGBA const&, CRGBA const&, unsigned int>(posn, color1, color2, color3, color4, numVerts);
}

// Converted from cdecl void CSprite2d::SetVertices(RwIm2DVertex *vertices,CRect const& posn,CRGBA const& color1,CRGBA const& color2,CRGBA const& color3,CRGBA const& color4,float u1,float v1,float u2,float v2,float u3,float v3,float u4,float v4) 0x51F720 
void CSprite2d::SetVertices(RwIm2DVertex* vertices, CRect const& posn, CRGBA const& color1, CRGBA const& color2, CRGBA const& color3, CRGBA const& color4, float u1, float v1, float u2, float v2, float u3, float v3, float u4, float v4) {
    plugin::Call<0x51F720, RwIm2DVertex*, CRect const&, CRGBA const&, CRGBA const&, CRGBA const&, CRGBA const&, float, float, float, float, float, float, float, float>(vertices, posn, color1, color2, color3, color4, u1, v1, u2, v2, u3, v3, u4, v4);
}

// Converted from cdecl void CSprite2d::SetVertices(float x1,float y1,float x2,float y2,float x3,float y3,float x4,float y4,CRGBA const& color1,CRGBA const& color2,CRGBA const& color3,CRGBA const& color4) 0x51F070 
void CSprite2d::SetVertices(float x1, float y1, float x2, float y2, float x3, float y3, float x4, float y4, CRGBA const& color1, CRGBA const& color2, CRGBA const& color3, CRGBA const& color4) {
    plugin::Call<0x51F070, float, float, float, float, float, float, float, float, CRGBA const&, CRGBA const&, CRGBA const&, CRGBA const&>(x1, y1, x2, y2, x3, y3, x4, y4, color1, color2, color3, color4);
}

// Converted from cdecl void CSprite2d::SetVertices(int numVerts,float *posn,float *texCoors,CRGBA const& color) 0x51F3E0
void CSprite2d::SetVertices(int numVerts, float* posn, float* texCoors, CRGBA const& color) {
    plugin::Call<0x51F3E0, int, float*, float*, CRGBA const&>(numVerts, posn, texCoors, color);
}
