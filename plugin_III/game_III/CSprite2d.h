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

class PLUGIN_API CSprite2d {
    PLUGIN_NO_DEFAULT_CONSTRUCTION(CSprite2d)

public:
    RwTexture *m_pTexture;

    SUPPORTED_10EN_11EN_STEAM static RwIm2DVertex(&maVertices)[8]; // static RwIm2DVertex maVertices[8]
    SUPPORTED_10EN_11EN_STEAM static CSprite2d(&mCurrentSprite)[10]; // static CSprite2d mCurrentSprite[10]
    SUPPORTED_10EN_11EN_STEAM static int(&mBankStart)[10]; // static int mBankStart[10]
    SUPPORTED_10EN_11EN_STEAM static RwTexture *(&mpBankTextures)[10]; // static RwTexture *mpBankTextures[10]
    SUPPORTED_10EN_11EN_STEAM static RwIm2DVertex(&maBankVertices)[500]; // static RwIm2DVertex maBankVertices[500]
    SUPPORTED_10EN_11EN_STEAM static float &RecipNearClip;
    SUPPORTED_10EN_11EN_STEAM static int &mCurrentBank;

    //! delete this sprite (similar to destructor)
    SUPPORTED_10EN_11EN_STEAM void Delete();
    SUPPORTED_10EN_11EN_STEAM void Draw(float x, float y, float w, float h, CRGBA const &color);
    //! draws non-textured rectangle
    SUPPORTED_10EN_11EN_STEAM void Draw(CRect const &rect, CRGBA const &color);
    SUPPORTED_10EN_11EN_STEAM void Draw(CRect const &rect, CRGBA const &color, float u1, float v1, float u2, float v2, float u3, float v3, float u4, float v4);
    SUPPORTED_10EN_11EN_STEAM void Draw(CRect const &rect, CRGBA const &color1, CRGBA const &color2, CRGBA const &color3, CRGBA const &color4);
    SUPPORTED_10EN_11EN_STEAM void Draw(float x1, float y1, float x2, float y2, float x3, float y3, float x4, float y4, CRGBA const &color);
    SUPPORTED_10EN_11EN_STEAM void SetAddressing(RwTextureAddressMode modeUV);
    //! sets sprite texture as current for device rendering
    SUPPORTED_10EN_11EN_STEAM void SetRenderState();
    //! set texture by name from current txd
    SUPPORTED_10EN_11EN_STEAM void SetTexture(char *name);
    //! set texture by name from current txd (+alpha mask name)
    SUPPORTED_10EN_11EN_STEAM void SetTexture(char *name, char *maskName);

    SUPPORTED_10EN_11EN_STEAM static void AddSpriteToBank(int bank, CRect const &rect, CRGBA const &color, float u1, float v1, float u2, float v2, float u3, float v3, float u4, float v4);
    SUPPORTED_10EN_11EN_STEAM static void DrawBank(int bank);
    SUPPORTED_10EN_11EN_STEAM static void DrawRect(CRect const &rect, CRGBA const &color);
    SUPPORTED_10EN_11EN_STEAM static void DrawRect(CRect const &rect, CRGBA const &color1, CRGBA const &color2, CRGBA const &color3, CRGBA const &color4);
    SUPPORTED_10EN_11EN_STEAM static void DrawRectXLU(CRect const &rect, CRGBA const &color1, CRGBA const &color2, CRGBA const &color3, CRGBA const &color4);
    SUPPORTED_10EN_11EN_STEAM static int GetBank(int n, RwTexture *texture);
    SUPPORTED_10EN_11EN_STEAM static void InitPerFrame();
    SUPPORTED_10EN_11EN_STEAM static void SetMaskVertices(int numVerts, float *pos);
    SUPPORTED_10EN_11EN_STEAM static void SetRecipNearClip();
    SUPPORTED_10EN_11EN_STEAM static void SetVertices(CRect const &rect, CRGBA const &color1, CRGBA const &color2, CRGBA const &color3, CRGBA const &color4, unsigned int bFar);
    SUPPORTED_10EN_11EN_STEAM static void SetVertices(float x1, float y1, float x2, float y2, float x3, float y3, float x4, float y4, CRGBA const &color1, CRGBA const &color2, CRGBA const &color3, CRGBA const &color4);
    SUPPORTED_10EN_11EN_STEAM static void SetVertices(CRect const &rect, CRGBA const &color1, CRGBA const &color2, CRGBA const &color3, CRGBA const &color4, float u1, float v1, float u2, float v2, float u3, float v3, float u4, float v4);
    SUPPORTED_10EN_11EN_STEAM static void SetVertices(int numVerts, float *pos, float *texCoors, CRGBA const &color);
    SUPPORTED_10EN_11EN_STEAM static void SetVertices(RwIm2DVertex *vertices, CRect const &rect, CRGBA const &color1, CRGBA const &color2, CRGBA const &color3, CRGBA const &color4, float u1, float v1, float u2, float v2, float u3, float v3, float u4, float v4);
};

VALIDATE_SIZE(CSprite2d, 0x4);

#include "meta/meta.CSprite2d.h"
