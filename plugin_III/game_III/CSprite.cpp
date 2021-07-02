/*
    Plugin-SDK (Grand Theft Auto 3) source file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/
#include "CSprite.h"

PLUGIN_SOURCE_FILE

PLUGIN_VARIABLE float &CSprite::m_f2DNearScreenZ = *reinterpret_cast<float *>(GLOBAL_ADDRESS_BY_VERSION(0x8F1ABC, 0x8F1B70, 0x901CB0));
PLUGIN_VARIABLE float &CSprite::m_f2DFarScreenZ = *reinterpret_cast<float *>(GLOBAL_ADDRESS_BY_VERSION(0x8F2C94, 0x8F2D48, 0x902E88));
PLUGIN_VARIABLE int &CSprite::m_bFlushSpriteBufferSwitchZTest = *reinterpret_cast<int *>(GLOBAL_ADDRESS_BY_VERSION(0x8F5FB0, 0x8F6064, 0x9061A4));
PLUGIN_VARIABLE float &CSprite::m_fRecipNearClipPlane = *reinterpret_cast<float *>(GLOBAL_ADDRESS_BY_VERSION(0x8F5FFC, 0x8F60B0, 0x9061F0));
PLUGIN_VARIABLE int &nSpriteBufferIndex = *reinterpret_cast<int *>(GLOBAL_ADDRESS_BY_VERSION(0x649A80, 0x649A80, 0x659A80));
PLUGIN_VARIABLE RwIm2DVertex(&SpriteBufferVerts)[384] = *reinterpret_cast<RwIm2DVertex(*)[384]>(GLOBAL_ADDRESS_BY_VERSION(0x649A84, 0x649A84, 0x659A84));
PLUGIN_VARIABLE RwIm2DVertex(&verts)[4] = *reinterpret_cast<RwIm2DVertex(*)[4]>(GLOBAL_ADDRESS_BY_VERSION(0x64C484, 0x64C484, 0x65C484));

int addrof(CSprite::CalcHorizonCoors) = ADDRESS_BY_VERSION(0x51C4A0, 0x51C6D0, 0x51C660);
int gaddrof(CSprite::CalcHorizonCoors) = GLOBAL_ADDRESS_BY_VERSION(0x51C4A0, 0x51C6D0, 0x51C660);

float CSprite::CalcHorizonCoors() {
    return plugin::CallAndReturnDynGlobal<float>(gaddrof(CSprite::CalcHorizonCoors));
}

int addrof(CSprite::CalcScreenCoors) = ADDRESS_BY_VERSION(0x51C3A0, 0x51C5D0, 0x51C560);
int gaddrof(CSprite::CalcScreenCoors) = GLOBAL_ADDRESS_BY_VERSION(0x51C3A0, 0x51C5D0, 0x51C560);

bool CSprite::CalcScreenCoors(RwV3d const &in, RwV3d *out, float *outW, float *outH, bool farClip) {
    return plugin::CallAndReturnDynGlobal<bool, RwV3d const &, RwV3d *, float *, float *, bool>(gaddrof(CSprite::CalcScreenCoors), in, out, outW, outH, farClip);
}

int addrof(CSprite::FlushSpriteBuffer) = ADDRESS_BY_VERSION(0x51C520, 0x51C750, 0x51C6E0);
int gaddrof(CSprite::FlushSpriteBuffer) = GLOBAL_ADDRESS_BY_VERSION(0x51C520, 0x51C750, 0x51C6E0);

void CSprite::FlushSpriteBuffer() {
    plugin::CallDynGlobal(gaddrof(CSprite::FlushSpriteBuffer));
}

int addrof(CSprite::InitSpriteBuffer) = ADDRESS_BY_VERSION(0x51C590, 0x51C7C0, 0x51C750);
int gaddrof(CSprite::InitSpriteBuffer) = GLOBAL_ADDRESS_BY_VERSION(0x51C590, 0x51C7C0, 0x51C750);

void CSprite::InitSpriteBuffer() {
    plugin::CallDynGlobal(gaddrof(CSprite::InitSpriteBuffer));
}

int addrof(CSprite::InitSpriteBuffer2D) = ADDRESS_BY_VERSION(0x51C5B0, 0x51C7E0, 0x51C770);
int gaddrof(CSprite::InitSpriteBuffer2D) = GLOBAL_ADDRESS_BY_VERSION(0x51C5B0, 0x51C7E0, 0x51C770);

void CSprite::InitSpriteBuffer2D() {
    plugin::CallDynGlobal(gaddrof(CSprite::InitSpriteBuffer2D));
}

int addrof(CSprite::RenderBufferedOneXLUSprite) = ADDRESS_BY_VERSION(0x51C5D0, 0x51C800, 0x51C790);
int gaddrof(CSprite::RenderBufferedOneXLUSprite) = GLOBAL_ADDRESS_BY_VERSION(0x51C5D0, 0x51C800, 0x51C790);

void CSprite::RenderBufferedOneXLUSprite(float x, float y, float z, float w, float h, unsigned char red, unsigned char green, unsigned char blue, short alpha, float rhw, unsigned char intensity) {
    plugin::CallDynGlobal<float, float, float, float, float, unsigned char, unsigned char, unsigned char, short, float, unsigned char>(gaddrof(CSprite::RenderBufferedOneXLUSprite), x, y, z, w, h, red, green, blue, alpha, rhw, intensity);
}

int addrof(CSprite::RenderBufferedOneXLUSprite2D) = ADDRESS_BY_VERSION(0x51E3C0, 0x51E5F0, 0x51E580);
int gaddrof(CSprite::RenderBufferedOneXLUSprite2D) = GLOBAL_ADDRESS_BY_VERSION(0x51E3C0, 0x51E5F0, 0x51E580);

void CSprite::RenderBufferedOneXLUSprite2D(float x, float y, float w, float h, RwRGBA const &color, short intensity, unsigned char alpha) {
    plugin::CallDynGlobal<float, float, float, float, RwRGBA const &, short, unsigned char>(gaddrof(CSprite::RenderBufferedOneXLUSprite2D), x, y, w, h, color, intensity, alpha);
}

int addrof(CSprite::RenderBufferedOneXLUSprite2D_Rotate_Dimension) = ADDRESS_BY_VERSION(0x51E490, 0x51E6C0, 0x51E650);
int gaddrof(CSprite::RenderBufferedOneXLUSprite2D_Rotate_Dimension) = GLOBAL_ADDRESS_BY_VERSION(0x51E490, 0x51E6C0, 0x51E650);

void CSprite::RenderBufferedOneXLUSprite2D_Rotate_Dimension(float x, float y, float w, float h, RwRGBA const &color, short intensity, float angle, unsigned char alpha) {
    plugin::CallDynGlobal<float, float, float, float, RwRGBA const &, short, float, unsigned char>(gaddrof(CSprite::RenderBufferedOneXLUSprite2D_Rotate_Dimension), x, y, w, h, color, intensity, angle, alpha);
}

int addrof(CSprite::RenderBufferedOneXLUSprite_Rotate_2Colours) = ADDRESS_BY_VERSION(0x51D9E0, 0x51DC10, 0x51DBA0);
int gaddrof(CSprite::RenderBufferedOneXLUSprite_Rotate_2Colours) = GLOBAL_ADDRESS_BY_VERSION(0x51D9E0, 0x51DC10, 0x51DBA0);

void CSprite::RenderBufferedOneXLUSprite_Rotate_2Colours(float x, float y, float z, float w, float h, unsigned char red, unsigned char green, unsigned char blue, unsigned char red2, unsigned char green2, unsigned char blue2, float colx, float coly, float rhw, float angle, unsigned char intensity) {
    plugin::CallDynGlobal<float, float, float, float, float, unsigned char, unsigned char, unsigned char, unsigned char, unsigned char, unsigned char, float, float, float, float, unsigned char>(gaddrof(CSprite::RenderBufferedOneXLUSprite_Rotate_2Colours), x, y, z, w, h, red, green, blue, red2, green2, blue2, colx, coly, rhw, angle, intensity);
}

int addrof(CSprite::RenderBufferedOneXLUSprite_Rotate_Aspect) = ADDRESS_BY_VERSION(0x51CCD0, 0x51CF00, 0x51CE90);
int gaddrof(CSprite::RenderBufferedOneXLUSprite_Rotate_Aspect) = GLOBAL_ADDRESS_BY_VERSION(0x51CCD0, 0x51CF00, 0x51CE90);

void CSprite::RenderBufferedOneXLUSprite_Rotate_Aspect(float x, float y, float z, float w, float h, unsigned char red, unsigned char green, unsigned char blue, short alpha, float rhw, float angle, unsigned char intensity) {
    plugin::CallDynGlobal<float, float, float, float, float, unsigned char, unsigned char, unsigned char, short, float, float, unsigned char>(gaddrof(CSprite::RenderBufferedOneXLUSprite_Rotate_Aspect), x, y, z, w, h, red, green, blue, alpha, rhw, angle, intensity);
}

int addrof(CSprite::RenderBufferedOneXLUSprite_Rotate_Dimension) = ADDRESS_BY_VERSION(0x51D5B0, 0x51D7E0, 0x51D770);
int gaddrof(CSprite::RenderBufferedOneXLUSprite_Rotate_Dimension) = GLOBAL_ADDRESS_BY_VERSION(0x51D5B0, 0x51D7E0, 0x51D770);

void CSprite::RenderBufferedOneXLUSprite_Rotate_Dimension(float x, float y, float z, float w, float h, unsigned char red, unsigned char green, unsigned char blue, short alpha, float rhw, float angle, unsigned char intensity) {
    plugin::CallDynGlobal<float, float, float, float, float, unsigned char, unsigned char, unsigned char, short, float, float, unsigned char>(gaddrof(CSprite::RenderBufferedOneXLUSprite_Rotate_Dimension), x, y, z, w, h, red, green, blue, alpha, rhw, angle, intensity);
}

int addrof(CSprite::RenderOneXLUSprite) = ADDRESS_BY_VERSION(0x51C960, 0x51CB90, 0x51CB20);
int gaddrof(CSprite::RenderOneXLUSprite) = GLOBAL_ADDRESS_BY_VERSION(0x51C960, 0x51CB90, 0x51CB20);

void CSprite::RenderOneXLUSprite(float x, float y, float z, float w, float h, unsigned char red, unsigned char green, unsigned char blue, short alpha, float rhw, unsigned char intensity) {
    plugin::CallDynGlobal<float, float, float, float, float, unsigned char, unsigned char, unsigned char, short, float, unsigned char>(gaddrof(CSprite::RenderOneXLUSprite), x, y, z, w, h, red, green, blue, alpha, rhw, intensity);
}

int addrof(CSprite::RenderOneXLUSprite_Rotate_Aspect) = ADDRESS_BY_VERSION(0x51D110, 0x51D340, 0x51D2D0);
int gaddrof(CSprite::RenderOneXLUSprite_Rotate_Aspect) = GLOBAL_ADDRESS_BY_VERSION(0x51D110, 0x51D340, 0x51D2D0);

void CSprite::RenderOneXLUSprite_Rotate_Aspect(float x, float y, float z, float w, float h, unsigned char red, unsigned char green, unsigned char blue, short alpha, float rhw, float angle, unsigned char intensity) {
    plugin::CallDynGlobal<float, float, float, float, float, unsigned char, unsigned char, unsigned char, short, float, float, unsigned char>(gaddrof(CSprite::RenderOneXLUSprite_Rotate_Aspect), x, y, z, w, h, red, green, blue, alpha, rhw, angle, intensity);
}

int addrof_o(CSprite::Set6Vertices2D, void (*)(RwIm2DVertex *, CRect const &, CRGBA const &, CRGBA const &, CRGBA const &, CRGBA const &)) = ADDRESS_BY_VERSION(0x51E5F0, 0x51E820, 0x51E7B0);
int gaddrof_o(CSprite::Set6Vertices2D, void (*)(RwIm2DVertex *, CRect const &, CRGBA const &, CRGBA const &, CRGBA const &, CRGBA const &)) = GLOBAL_ADDRESS_BY_VERSION(0x51E5F0, 0x51E820, 0x51E7B0);

void CSprite::Set6Vertices2D(RwIm2DVertex *vertex, CRect const &rect, CRGBA const &color1, CRGBA const &color2, CRGBA const &color3, CRGBA const &color4) {
    plugin::CallDynGlobal<RwIm2DVertex *, CRect const &, CRGBA const &, CRGBA const &, CRGBA const &, CRGBA const &>(gaddrof_o(CSprite::Set6Vertices2D, void (*)(RwIm2DVertex *, CRect const &, CRGBA const &, CRGBA const &, CRGBA const &, CRGBA const &)), vertex, rect, color1, color2, color3, color4);
}

int addrof_o(CSprite::Set6Vertices2D, void (*)(RwIm2DVertex *, float, float, float, float, float, float, float, float, CRGBA const &, CRGBA const &, CRGBA const &, CRGBA const &)) = ADDRESS_BY_VERSION(0x51E7F0, 0x51EA20, 0x51E9B0);
int gaddrof_o(CSprite::Set6Vertices2D, void (*)(RwIm2DVertex *, float, float, float, float, float, float, float, float, CRGBA const &, CRGBA const &, CRGBA const &, CRGBA const &)) = GLOBAL_ADDRESS_BY_VERSION(0x51E7F0, 0x51EA20, 0x51E9B0);

void CSprite::Set6Vertices2D(RwIm2DVertex *vertex, float x1, float y1, float x2, float y2, float x3, float y3, float x4, float y4, CRGBA const &color1, CRGBA const &color2, CRGBA const &color3, CRGBA const &color4) {
    plugin::CallDynGlobal<RwIm2DVertex *, float, float, float, float, float, float, float, float, CRGBA const &, CRGBA const &, CRGBA const &, CRGBA const &>(gaddrof_o(CSprite::Set6Vertices2D, void (*)(RwIm2DVertex *, float, float, float, float, float, float, float, float, CRGBA const &, CRGBA const &, CRGBA const &, CRGBA const &)), vertex, x1, y1, x2, y2, x3, y3, x4, y4, color1, color2, color3, color4);
}
