/*
    Plugin-SDK (Grand Theft Auto Vice City) header file
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

    static unsigned int& nextBufferIndex;
    static unsigned int& nextBufferVertex;
    static float& NearScreenZ;
    static float& RecipNearClip;
    static RwIm2DVertex *maVertices; // static RwIm2DVertex maVertices[8]

    static void DrawAnyRect(float x1, float y1, float x2, float y2, float x3, float y3, float x4, float y4, CRGBA const& color1, CRGBA const& color2, CRGBA const& color3, CRGBA const& color4);
    static void DrawRect(CRect const& rect, CRGBA const& color1, CRGBA const& color2, CRGBA const& color3, CRGBA const& color4);
    static void DrawRect(CRect const& rect, CRGBA const& color);
    void SetRenderState();
    static void SetVertices(RwIm2DVertex* vertices, CRect const& rect, CRGBA const& color1, CRGBA const& color2, CRGBA const& color3, CRGBA const& color4, float u1, float v1, float u2, float v2, float u3, float v3, float u4, float v4);
    static void SetMaskVertices(int numVerts, float* posn);
    static void SetVertices(int numVerts, float* posn, float* texCoors, CRGBA const& color);
    static void SetVertices(CRect const& arg0, CRGBA const& arg1, CRGBA const& arg2, CRGBA const& arg3, CRGBA const& arg4, float arg5, float arg6, float arg7, float arg8, float arg9, float arg10, float arg11, float arg12);
    static void SetVertices(float x1, float y1, float x2, float y2, float x3, float y3, float x4, float y4, CRGBA const& color1, CRGBA const& color2, CRGBA const& color3, CRGBA const& color4);
    static void SetVertices(CRect const& rect, CRGBA const& color1, CRGBA const& color2, CRGBA const& color3, CRGBA const& color4);
    static void Draw2DPolygon(float x1, float y1, float x2, float y2, float x3, float y3, float x4, float y4, CRGBA const& color);
    void Draw(float x1, float y1, float x2, float y2, float x3, float y3, float x4, float y4, CRGBA const& color);
    void Draw(CRect const& rect, CRGBA const& color1, CRGBA const& color2, CRGBA const& color3, CRGBA const& color4);
    void Draw(CRect const& rect, CRGBA const& color, float u1, float v1, float u2, float v2, float u3, float v3, float u4, float v4);
    void Draw(CRect const& rect, CRGBA const& color);
    void DrawRectXLU(CRect const& rect, CRGBA const& color1, CRGBA const& color2, CRGBA const& color3, CRGBA const& color4);
    static void RenderVertexBuffer();
    static void AddToBuffer(CRect const& rect, CRGBA const& color, float u1, float v1, float u2, float v2, float u3, float v3, float u4, float v4);
    static void InitPerFrame();
    void SetAddressing(RwTextureAddressMode addressing);
    void SetTexture(char* name, char* maskName);
    void SetTexture(char* name);
    static void SetRecipNearClip(); // dummy function
    void Delete();
    ~CSprite2d();
    CSprite2d();
};