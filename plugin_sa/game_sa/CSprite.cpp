/*
    Plugin-SDK (Grand Theft Auto San Andreas) source file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/
#include "CSprite.h"


void CSprite::InitSpriteBuffer() {
	plugin::Call<0x70CFB0>();
}

void CSprite::FlushSpriteBuffer() {
	plugin::Call<0x70CF20>();
}

void CSprite::RenderBufferedOneXLUSprite_Rotate_Aspect(float x, float y, float z, float w, float h, uint8_t r, uint8_t g, uint8_t b, int16_t intens, float recipz, float rotation, uint8_t a)
{
	((void(__cdecl*)(float, float, float, float, float, uint8_t, uint8_t, uint8_t,
		int16_t, float, float, uint8_t))0x70E780)(x, y, z, w, h,
			r, g, b, intens, recipz, rotation, a);
}

void CSprite::RenderBufferedOneXLUSprite_Rotate_2Colours(float x, float y, float z, float w, float h, uint8_t r1, uint8_t g1, uint8_t b1, uint8_t r2, uint8_t g2, uint8_t b2, float cx, float cy, float recipz, float rotation, uint8_t a) {
	((void(__cdecl*)(float, float, float, float, float, uint8_t, uint8_t, uint8_t,
		uint8_t, uint8_t, uint8_t, float, float, float, float, uint8_t))0x70EDE0)(x, y, z, w, h,
			r1, g1, b1, r2, g2, b2, cx, cy, recipz, rotation, a);
}

void CSprite::RenderOneXLUSprite(float x, float y, float z, float halfWidth, float halfHeight, 
								 unsigned char red, unsigned char green, unsigned char blue, 
								 short alpha, float rhw, unsigned char intensity, unsigned char udir, 
								 unsigned char vdir)
{
	((void (__cdecl *)(float, float, float, float, float, unsigned char, unsigned char, unsigned char, 
		short, float, unsigned char, unsigned char, unsigned char))0x70D000)(x, y, z, halfWidth, halfHeight, 
		red, green, blue, alpha, rhw, intensity, udir, vdir);
}


void CSprite::RenderBufferedOneXLUSprite(CVector pos, CVector2D size, uint8_t r, uint8_t g, uint8_t b, int16_t intensity, float recipNearZ, uint8_t a11) {
	plugin::Call<0x70E4A0>(pos, size, r, g, b, intensity, recipNearZ, a11);
}

void CSprite::RenderBufferedOneXLUSprite_Rotate_Dimension(CVector pos, CVector2D size, uint8_t r, uint8_t g, uint8_t b, int16_t intensity, float rz, float rotation, uint8_t a) {
	plugin::Call<0x70EAB0>(pos, size, r, g, b, intensity, rz, rotation, a);
}


void CSprite::RenderBufferedOneXLUSprite2D(float x, float y, float w, float h, const RwRGBA& colour, int16_t intens, float rotation, uint8_t alpha) {
	plugin::Call<0x70F440>(x, y, w, h, colour, intens, rotation, alpha);
}

void CSprite::RenderBufferedOneXLUSprite2D_Rotate_Dimension(float x, float y, float w, float h, const RwRGBA& colour, int16_t intens, float rotation, uint8_t alpha) {
	plugin::Call<0x70F600>(x, y, w, h, colour, intens, rotation, alpha);
}

void CSprite::RenderOneXLUSprite2D_Rotate_Dimension(float x, float y, float w, float h, const RwRGBA& colour, int16_t intens, float rotation, uint8_t alpha) {
	plugin::Call<0x70F760>(x, y, w, h, colour, intens, rotation, alpha);
}

void CSprite::Set4Vertices2D(RwIm2DVertex* verts, float x1, float y1, float x2, float y2, float x3, float y3, float x4, float y4,
	const CRGBA& c0, const CRGBA& c1, const CRGBA& c2, const CRGBA& c3) {
	plugin::Call<0x70E2D0>(verts, x1, y1, x2, y2, x3, y3, x4, y4, c0, c1, c2, c3);
}

float CSprite::CalcHorizonCoors() {
	return plugin::CallAndReturn<float, 0x70E3E0>();
}

void CSprite::Set4Vertices2D(RwIm2DVertex* verts, const CRect& rt, const CRGBA& topLeftColor, const CRGBA& topRightColor, const CRGBA& bottomLeftColor, const CRGBA& bottomRightColor) {
	plugin::Call<0x70E1C0>(verts, rt, topLeftColor, topRightColor, bottomLeftColor, bottomRightColor);
}

void CSprite::RenderOneXLUSprite2D(CVector2D screen, CVector2D size, const CRGBA& color, int16_t intensity, uint8_t alpha) {
	plugin::Call<0x70F540>(screen, size, color, intensity, alpha);
}

void CSprite::RenderOneXLUSprite_Rotate_Aspect(float x, float y, float z, float w, float h, uint8_t r, uint8_t g, uint8_t b, int16_t intens, float recipz, float roll, uint8_t a) {
	plugin::Call<0x70D490>(x, y, z, w, h, r, g, b, intens, recipz, roll, a);
}

void CSprite::RenderOneXLUSprite_Triangle(float x, float y, float z, float w, float h, float unk1, float unk2, uint8_t r, uint8_t g, uint8_t b, int16_t intens, float recipz, uint8_t a) {
	plugin::Call<0x70D320>(x, y, z, w, h, unk1, unk2, r, g, b, intens, recipz, a);
}

bool CSprite::CalcScreenCoors(RwV3d const &posn, RwV3d *out, float *w, float *h, bool checkMaxVisible, bool checkMinVisible)
{
	return ((bool (__cdecl *)(RwV3d const &, RwV3d *, float *, float *, bool, bool))0x70CE30)
		(posn, out, w, h, checkMaxVisible, checkMinVisible);
}