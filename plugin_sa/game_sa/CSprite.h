/*
    Plugin-SDK (Grand Theft Auto San Andreas) header file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/
#pragma once

#include "PluginBase.h"
#include "RenderWare.h"
#include "plugin.h"

class PLUGIN_API CSprite
{
public:
    static inline float& m_f2DNearScreenZ      = *(float*)0xC4B8D8;
    static inline float& m_f2DFarScreenZ       = *(float*)0xC4B8D4;
    static inline float& m_fRecipNearClipPlane = *(float*)0xC4B8D0;
    static inline uint32_t& m_bFlushSpriteBufferSwitchZTest = *(uint32_t*)0xC6A15C;

    static float GetNearScreenZ(void) { return m_f2DNearScreenZ; }
    static float GetFarScreenZ(void) { return m_f2DFarScreenZ; }
	
	static void RenderOneXLUSprite(float x, float y, float z, float halfWidth, float halfHeight, 
		unsigned char red, unsigned char green, unsigned char blue, short alpha, float rhw, 
		unsigned char intensity, unsigned char udir, unsigned char vdir);
	static void FlushSpriteBuffer(void);
	static void InitSpriteBuffer(void);
	static void RenderBufferedOneXLUSprite_Rotate_2Colours(float x, float y, float z, float w, float h, uint8_t r1, uint8_t g1, uint8_t b1, uint8_t r2, uint8_t g2, uint8_t b2, float cx, float cy, float recipz, float rotation, uint8_t a);
	static void RenderBufferedOneXLUSprite_Rotate_Aspect(float x, float y, float z, float w, float h, uint8_t r, uint8_t g, uint8_t b, int16_t intens, float recipz, float roll, uint8_t a);
	static bool CalcScreenCoors(RwV3d const &posn, RwV3d *out, float *w, float *h, bool checkMaxVisible, bool checkMinVisible);
    static void InitSpriteBuffer2D();

    static float CalcHorizonCoors();

    static void Set4Vertices2D(RwIm2DVertex* verts, const CRect& rt, const CRGBA& topLeftColor, const CRGBA& topRightColor, const CRGBA& bottomLeftColor, const CRGBA& bottomRightColor);
    static void Set4Vertices2D(RwIm2DVertex* verts, float x1, float y1, float x2, float y2, float x3, float y3, float x4, float y4,
        const CRGBA& c0, const CRGBA& c1, const CRGBA& c2, const CRGBA& c3);

    static void RenderOneXLUSprite_Triangle(float x, float y, float z, float w, float h, float unk1, float unk2, uint8_t r, uint8_t g, uint8_t b, int16_t intens, float recipz, uint8_t a);
    static void RenderOneXLUSprite_Rotate_Aspect(float x, float y, float z, float w, float h, uint8_t r, uint8_t g, uint8_t b, int16_t intens, float recipz, float roll, uint8_t a);
    static void RenderOneXLUSprite2D(CVector2D screen, CVector2D size, const CRGBA& color, int16_t intensity, uint8_t alpha);
    static void RenderOneXLUSprite2D_Rotate_Dimension(float x, float y, float w, float h, const RwRGBA& colour, int16_t intens, float rotation, uint8_t alpha);

    static void RenderBufferedOneXLUSprite(CVector pos, CVector2D size, uint8_t r, uint8_t g, uint8_t b, int16_t intensity, float recipNearZ, uint8_t a11);
    static void RenderBufferedOneXLUSprite_Rotate_Dimension(CVector pos, CVector2D size, uint8_t r, uint8_t g, uint8_t b, int16_t intensity, float rz, float rotation, uint8_t a);
    static void RenderBufferedOneXLUSprite2D(float x, float y, float w, float h, const RwRGBA& colour, int16_t intens, float rotation, uint8_t alpha);
    static void RenderBufferedOneXLUSprite2D_Rotate_Dimension(float x, float y, float w, float h, const RwRGBA& colour, int16_t intens, float rotation, uint8_t alpha);
};