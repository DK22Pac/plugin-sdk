/*
    Plugin-SDK (Grand Theft Auto 3) header file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/
#pragma once

#include "PluginBase.h"
#include "RenderWare.h"
#include "CRect.h"
#include "CRGBA.h"

class PLUGIN_API CSprite {
public:
    SUPPORTED_10EN_11EN_STEAM static float &m_f2DNearScreenZ;
    SUPPORTED_10EN_11EN_STEAM static float &m_f2DFarScreenZ;
    SUPPORTED_10EN_11EN_STEAM static int &m_bFlushSpriteBufferSwitchZTest;
    SUPPORTED_10EN_11EN_STEAM static float &m_fRecipNearClipPlane;

    SUPPORTED_10EN_11EN_STEAM static float CalcHorizonCoors();
    SUPPORTED_10EN_11EN_STEAM static bool CalcScreenCoors(RwV3d const &in, RwV3d *out, float *outW, float *outH, bool farClip);
    SUPPORTED_10EN_11EN_STEAM static void FlushSpriteBuffer();
    SUPPORTED_10EN_11EN_STEAM static void InitSpriteBuffer();
    SUPPORTED_10EN_11EN_STEAM static void InitSpriteBuffer2D();
    SUPPORTED_10EN_11EN_STEAM static void RenderBufferedOneXLUSprite(float x, float y, float z, float w, float h, unsigned char red, unsigned char green, unsigned char blue, short alpha, float rhw, unsigned char intensity);
    SUPPORTED_10EN_11EN_STEAM static void RenderBufferedOneXLUSprite2D(float x, float y, float w, float h, RwRGBA const &color, short intensity, unsigned char alpha);
    SUPPORTED_10EN_11EN_STEAM static void RenderBufferedOneXLUSprite2D_Rotate_Dimension(float x, float y, float w, float h, RwRGBA const &color, short intensity, float angle, unsigned char alpha);
    //! colx/coly is the direction in which the colour changes
    SUPPORTED_10EN_11EN_STEAM static void RenderBufferedOneXLUSprite_Rotate_2Colours(float x, float y, float z, float w, float h, unsigned char red, unsigned char green, unsigned char blue, unsigned char red2, unsigned char green2, unsigned char blue2, float colx, float coly, float rhw, float angle, unsigned char intensity);
    SUPPORTED_10EN_11EN_STEAM static void RenderBufferedOneXLUSprite_Rotate_Aspect(float x, float y, float z, float w, float h, unsigned char red, unsigned char green, unsigned char blue, short alpha, float rhw, float angle, unsigned char intensity);
    SUPPORTED_10EN_11EN_STEAM static void RenderBufferedOneXLUSprite_Rotate_Dimension(float x, float y, float z, float w, float h, unsigned char red, unsigned char green, unsigned char blue, short alpha, float rhw, float angle, unsigned char intensity);
    SUPPORTED_10EN_11EN_STEAM static void RenderOneXLUSprite(float x, float y, float z, float w, float h, unsigned char red, unsigned char green, unsigned char blue, short alpha, float rhw, unsigned char intensity);
    SUPPORTED_10EN_11EN_STEAM static void RenderOneXLUSprite_Rotate_Aspect(float x, float y, float z, float w, float h, unsigned char red, unsigned char green, unsigned char blue, short alpha, float rhw, float angle, unsigned char intensity);
    SUPPORTED_10EN_11EN_STEAM static void Set6Vertices2D(RwIm2DVertex *vertex, CRect const &rect, CRGBA const &color1, CRGBA const &color2, CRGBA const &color3, CRGBA const &color4);
    SUPPORTED_10EN_11EN_STEAM static void Set6Vertices2D(RwIm2DVertex *vertex, float x1, float y1, float x2, float y2, float x3, float y3, float x4, float y4, CRGBA const &color1, CRGBA const &color2, CRGBA const &color3, CRGBA const &color4);
};

SUPPORTED_10EN_11EN_STEAM extern int &nSpriteBufferIndex;
SUPPORTED_10EN_11EN_STEAM extern RwIm2DVertex(&SpriteBufferVerts)[384]; // RwIm2DVertex SpriteBufferVerts[384]
SUPPORTED_10EN_11EN_STEAM extern RwIm2DVertex(&verts)[4]; // RwIm2DVertex verts[4]

#include "meta/meta.CSprite.h"
