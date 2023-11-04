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

bool CSprite::CalcScreenCoors(RwV3d const &posn, RwV3d *out, float *w, float *h, bool checkMaxVisible, bool checkMinVisible)
{
	return ((bool (__cdecl *)(RwV3d const &, RwV3d *, float *, float *, bool, bool))0x70CE30)
		(posn, out, w, h, checkMaxVisible, checkMinVisible);
}