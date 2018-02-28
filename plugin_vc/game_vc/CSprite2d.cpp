/*
    Plugin-SDK (Grand Theft Auto Vice City) source file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/
#include "CSprite2d.h"

RwIm2DVertex *CSprite2d::maVertices = (RwIm2DVertex *)0x7D4040;
float &CSprite2d::RecipNearClip    = *(float *)0x94DB54;
float &CSprite2d::NearScreenZ      = *(float *)0x97F05C;
unsigned int &CSprite2d::nextBufferIndex  = *(unsigned int *)0x97F214;
unsigned int &CSprite2d::nextBufferVertex = *(unsigned int *)0xA0CFF0;

// Converted from cdecl void CSprite2d::DrawAnyRect(float x1,float y1,float x2,float y2,float x3,float y3,float x4,float y4,CRGBA const& color1,CRGBA const& color2,CRGBA const& color3,CRGBA const& color4) 0x5779B0
void CSprite2d::DrawAnyRect(float x1, float y1, float x2, float y2, float x3, float y3, float x4, float y4, CRGBA const& color1, CRGBA const& color2, CRGBA const& color3, CRGBA const& color4) {
    ((void(__cdecl *)(float, float, float, float, float, float, float, float, CRGBA const&, CRGBA const&, CRGBA const&, CRGBA const&))0x5779B0)(x1, y1, x2, y2, x3, y3, x4, y4, color1, color2, color3, color4);
}

// Converted from cdecl void CSprite2d::DrawRect(CRect const&rect,CRGBA const&color1,CRGBA const&color2,CRGBA const&color3,CRGBA const&color4) 0x577A80
void CSprite2d::DrawRect(CRect const& rect, CRGBA const& color1, CRGBA const& color2, CRGBA const& color3, CRGBA const& color4) {
    ((void(__cdecl *)(CRect const&, CRGBA const&, CRGBA const&, CRGBA const&, CRGBA const&))0x577A80)(rect, color1, color2, color3, color4);
}

// Converted from cdecl void CSprite2d::DrawRect(CRect const&rect,CRGBA const&color) 0x577B00
void CSprite2d::DrawRect(CRect const& rect, CRGBA const& color) {
    ((void(__cdecl *)(CRect const&, CRGBA const&))0x577B00)(rect, color);
}

// Converted from thiscall void CSprite2d::SetRenderState(void) 0x577B90
void CSprite2d::SetRenderState() {
    ((void(__thiscall *)(CSprite2d*))0x577B90)(this);
}

// Converted from cdecl void CSprite2d::SetVertices(RwIm2DVertex *vertices,CRect const&rect,CRGBA const&color1,CRGBA const&color2,CRGBA const&color3,CRGBA const&color4,float u1,float v1,float u2,float v2,float u3,float v3,float u4,float v4) 0x577BB0
void CSprite2d::SetVertices(RwIm2DVertex* vertices, CRect const& rect, CRGBA const& color1, CRGBA const& color2, CRGBA const& color3, CRGBA const& color4, float u1, float v1, float u2, float v2, float u3, float v3, float u4, float v4) {
    ((void(__cdecl *)(RwIm2DVertex*, CRect const&, CRGBA const&, CRGBA const&, CRGBA const&, CRGBA const&, float, float, float, float, float, float, float, float))0x577BB0)(vertices, rect, color1, color2, color3, color4, u1, v1, u2, v2, u3, v3, u4, v4);
}

// Converted from cdecl void CSprite2d::SetMaskVertices(int numVerts,float *posn) 0x577D10
void CSprite2d::SetMaskVertices(int numVerts, float* posn) {
    ((void(__cdecl *)(int, float*))0x577D10)(numVerts, posn);
}

// Converted from cdecl void CSprite2d::SetVertices(int numVerts,float *posn,float *texCoors,CRGBA const&color) 0x577F70
void CSprite2d::SetVertices(int numVerts, float* posn, float* texCoors, CRGBA const& color) {
    ((void(__cdecl *)(int, float*, float*, CRGBA const&))0x577F70)(numVerts, posn, texCoors, color);
}

// Converted from cdecl void CSprite2d::SetVertices(CRect const&,CRGBA const&,CRGBA const&,CRGBA const&,CRGBA const&,float,float,float,float,float,float,float,float) 0x578010
void CSprite2d::SetVertices(CRect const& arg0, CRGBA const& arg1, CRGBA const& arg2, CRGBA const& arg3, CRGBA const& arg4, float arg5, float arg6, float arg7, float arg8, float arg9, float arg10, float arg11, float arg12) {
    ((void(__cdecl *)(CRect const&, CRGBA const&, CRGBA const&, CRGBA const&, CRGBA const&, float, float, float, float, float, float, float, float))0x578010)(arg0, arg1, arg2, arg3, arg4, arg5, arg6, arg7, arg8, arg9, arg10, arg11, arg12);
}

// Converted from cdecl void CSprite2d::SetVertices(float x1,float y1,float x2,float y2,float x3,float y3,float x4,float y4,CRGBA const&color1,CRGBA const&color2,CRGBA const&color3,CRGBA const& color4) 0x5781C0
void CSprite2d::SetVertices(float x1, float y1, float x2, float y2, float x3, float y3, float x4, float y4, CRGBA const& color1, CRGBA const& color2, CRGBA const& color3, CRGBA const& color4) {
    ((void(__cdecl *)(float, float, float, float, float, float, float, float, CRGBA const&, CRGBA const&, CRGBA const&, CRGBA const&))0x5781C0)(x1, y1, x2, y2, x3, y3, x4, y4, color1, color2, color3, color4);
}

// Converted from cdecl void CSprite2d::SetVertices(CRect const&rect,CRGBA const&color1,CRGBA const&color2,CRGBA const&color3,CRGBA const&color4) 0x578370
void CSprite2d::SetVertices(CRect const& rect, CRGBA const& color1, CRGBA const& color2, CRGBA const& color3, CRGBA const& color4) {
    ((void(__cdecl *)(CRect const&, CRGBA const&, CRGBA const&, CRGBA const&, CRGBA const&))0x578370)(rect, color1, color2, color3, color4);
}

// Converted from cdecl void CSprite2d::Draw2DPolygon(float x1,float y1,float x2,float y2,float x3,float y3,float x4,float y4,CRGBA const&color) 0x578520
void CSprite2d::Draw2DPolygon(float x1, float y1, float x2, float y2, float x3, float y3, float x4, float y4, CRGBA const& color) {
    ((void(__cdecl *)(float, float, float, float, float, float, float, float, CRGBA const&))0x578520)(x1, y1, x2, y2, x3, y3, x4, y4, color);
}

// Converted from thiscall void CSprite2d::Draw(float x1,float y1,float x2,float y2,float x3,float y3,float x4,float y4,CRGBA const&color) 0x5785D0
void CSprite2d::Draw(float x1, float y1, float x2, float y2, float x3, float y3, float x4, float y4, CRGBA const& color) {
    ((void(__thiscall *)(CSprite2d*, float, float, float, float, float, float, float, float, CRGBA const&))0x5785D0)(this, x1, y1, x2, y2, x3, y3, x4, y4, color);
}

// Converted from thiscall void CSprite2d::Draw(CRect const&rect,CRGBA const&color1,CRGBA const&color2,CRGBA const&color3,CRGBA const&color4) 0x578640
void CSprite2d::Draw(CRect const& rect, CRGBA const& color1, CRGBA const& color2, CRGBA const& color3, CRGBA const& color4) {
    ((void(__thiscall *)(CSprite2d*, CRect const&, CRGBA const&, CRGBA const&, CRGBA const&, CRGBA const&))0x578640)(this, rect, color1, color2, color3, color4);
}

// Converted from thiscall void CSprite2d::Draw(CRect const&rect,CRGBA const&color,float u1,float v1,float u2,float v2,float u3,float v3,float u4,float v4) 0x5786A0
void CSprite2d::Draw(CRect const& rect, CRGBA const& color, float u1, float v1, float u2, float v2, float u3, float v3, float u4, float v4) {
    ((void(__thiscall *)(CSprite2d*, CRect const&, CRGBA const&, float, float, float, float, float, float, float, float))0x5786A0)(this, rect, color, u1, v1, u2, v2, u3, v3, u4, v4);
}

// Converted from thiscall void CSprite2d::Draw(CRect const&rect,CRGBA const&color) 0x578710
void CSprite2d::Draw(CRect const& rect, CRGBA const& color) {
    ((void(__thiscall *)(CSprite2d*, CRect const&, CRGBA const&))0x578710)(this, rect, color);
}

// Converted from thiscall void CSprite2d::DrawRectXLU(CRect const&rect,CRGBA const&color1,CRGBA const&color2,CRGBA const&color3,CRGBA const&color4) 0x578760
void CSprite2d::DrawRectXLU(CRect const& rect, CRGBA const& color1, CRGBA const& color2, CRGBA const& color3, CRGBA const& color4) {
    ((void(__thiscall *)(CSprite2d*, CRect const&, CRGBA const&, CRGBA const&, CRGBA const&, CRGBA const&))0x578760)(this, rect, color1, color2, color3, color4);
}

// Converted from cdecl void CSprite2d::RenderVertexBuffer(void) 0x5787E0
void CSprite2d::RenderVertexBuffer() {
    ((void(__cdecl *)())0x5787E0)();
}

// Converted from cdecl void CSprite2d::AddToBuffer(CRect const&rect,CRGBA const&color,float u1,float v1,float u2,float v2,float u3,float v3,float u4,float v4) 0x578830
void CSprite2d::AddToBuffer(CRect const& rect, CRGBA const& color, float u1, float v1, float u2, float v2, float u3, float v3, float u4, float v4) {
    ((void(__cdecl *)(CRect const&, CRGBA const&, float, float, float, float, float, float, float, float))0x578830)(rect, color, u1, v1, u2, v2, u3, v3, u4, v4);
}

// Converted from cdecl void CSprite2d::InitPerFrame(void) 0x578930
void CSprite2d::InitPerFrame() {
    ((void(__cdecl *)())0x578930)();
}

// Converted from thiscall void CSprite2d::SetAddressing(RwTextureAddressMode addressing) 0x578970
void CSprite2d::SetAddressing(RwTextureAddressMode addressing) {
    ((void(__thiscall *)(CSprite2d*, RwTextureAddressMode))0x578970)(this, addressing);
}

// Converted from thiscall void CSprite2d::SetTexture(char *name,char *maskName) 0x5789B0
void CSprite2d::SetTexture(char* name, char* maskName) {
    ((void(__thiscall *)(CSprite2d*, char*, char*))0x5789B0)(this, name, maskName);
}

// Converted from thiscall void CSprite2d::SetTexture(char *name) 0x5789E0
void CSprite2d::SetTexture(char* name) {
    ((void(__thiscall *)(CSprite2d*, char*))0x5789E0)(this, name);
}

// Converted from cdecl void CSprite2d::SetRecipNearClip(void) 0x578A10
void CSprite2d::SetRecipNearClip() {
    ((void(__cdecl *)())0x578A10)();
}

// Converted from thiscall void CSprite2d::Delete(void) 0x578A20
void CSprite2d::Delete() {
    ((void(__thiscall *)(CSprite2d*))0x578A20)(this);
}

// Converted from thiscall void CSprite2d::~CSprite2d() 0x578A40
CSprite2d::~CSprite2d() {
    ((void(__thiscall *)(CSprite2d*))0x578A40)(this);
}

// Converted from thiscall void CSprite2d::CSprite2d(void) 0x578A60
CSprite2d::CSprite2d() {
    ((void(__thiscall *)(CSprite2d*))0x578A60)(this);
}