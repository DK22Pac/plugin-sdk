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

class CSprite2d {
public:
    RwTexture *m_pTexture;

    //variables
    static int &mBankStart;
    static RwIm2DVertex *maBankVertices;
    static int &mCurrentBank;
    static CSprite2d *mCurrentSprite;
    static float &RecipNearClip;
    static RwTexture *mpBankTextures;
    static RwIm2DVertex *maVertices; // static RwIm2DVertex maVertices[8]

    //funcs

    static void AddSpriteToBank(int arg0, CRect const& posn, CRGBA const& color, float arg3, float arg4, float arg5, float arg6, float arg7, float arg8, float arg9, float arg10);
    CSprite2d();
    ~CSprite2d();
    // delete this sprite (similar to destructor)
    void Delete();
    // draws non-textured rectangle
    void Draw(CRect const& posn, CRGBA const& color);
    // draw non-textured rectangle, with setupable corners' colors.
    void Draw(CRect const& posn, CRGBA const& color1, CRGBA const& color2, CRGBA const& color3, CRGBA const& color4);
    void Draw(CRect const& posn, CRGBA const& color, float u1, float v1, float u2, float v2, float u3, float v3, float u4, float v4);
    // draw this sprite
    void Draw(float x, float y, float width, float height, CRGBA const& color);
    void Draw(float x1, float y1, float x2, float y2, float x3, float y3, float x4, float y4, CRGBA const& color);
    static void DrawBank(int arg0);
    // draws non-textured rectangle
    static void DrawRect(CRect const& posn, CRGBA const& color);
    // draw non-textured rectangle, with setupable corners' colors
    static void DrawRect(CRect const& posn, CRGBA const& color1, CRGBA const& color2, CRGBA const& color3, CRGBA const& color4);
    static int GetBank(int arg0, RwTexture* texture);
    static void InitPerFrame();
    void SetAddressing(RwTextureAddressMode modeUV);
    static void SetMaskVertices(int numVerts, float* posn);
    static void SetRecipNearClip();
    // sets sprite texture as current for device rendering
    void SetRenderState();
    // set texture by name from current txd
    void SetTexture(char* name);
    // set texture by name from current txd (+alpha mask name)
    void SetTexture(char* name, char* maskName);
    // different kinds of vertices' defining
    static void SetVertices(CRect const& posn, CRGBA const& color1, CRGBA const& color2, CRGBA const& color3, CRGBA const& color4, float u1, float v1, float u2, float v2, float u3, float v3, float u4, float v4);
    static void SetVertices(CRect const& posn, CRGBA const& color1, CRGBA const& color2, CRGBA const& color3, CRGBA const& color4, unsigned int numVerts);
    static void SetVertices(RwIm2DVertex* vertices, CRect const& posn, CRGBA const& color1, CRGBA const& color2, CRGBA const& color3, CRGBA const& color4, float u1, float v1, float u2, float v2, float u3, float v3, float u4, float v4);
    static void SetVertices(float x1, float y1, float x2, float y2, float x3, float y3, float x4, float y4, CRGBA const& color1, CRGBA const& color2, CRGBA const& color3, CRGBA const& color4);
    static void SetVertices(int numVerts, float* posn, float* texCoors, CRGBA const& color);
};

VALIDATE_SIZE(CSprite2d, 4);