/*
    Plugin-SDK (Grand Theft Auto 2) header file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/

#pragma once
#include "PluginBase.h"
#include "CRGBA.h"
#include "CRect.h"
#include "GBH.h"
#include "tTexture.h"

class PLUGIN_API CSprite2d {
public:
    static tVertex ms_aVertices[8];
    static float ms_fCamZ;

public:
    LPDIRECT3DTEXTURE2 m_pTexture;
    TCHAR m_cPath[MAX_PATH];

public:
    CSprite2d();
    ~CSprite2d();
    void Delete();
    bool SetTexture(const TCHAR* name);
    bool SetTexture(const TCHAR* name, unsigned short width, unsigned short height, unsigned int bitCount, unsigned char* pixels);

    void Reset();
    static void DrawLine(float x1, float y1, float x2, float y2, CRGBA const& color);
    static void DrawRect(CRect const& rect, CRGBA const& color);
    static void Draw2DPolygon(float x1, float y1, float x2, float y2, float x3, float y3, float x4, float y4, const CRGBA& color);
    
    static void SetMaskVertices(int n, float* positions);

    static void SetVertices(int n, float* positions, float* uvs, CRGBA const& color);
    static void SetVertices(CRect const& rect, CRGBA const& c0, CRGBA const& c1, CRGBA const& c2, CRGBA const& c3);
    static void SetVertices(float x1, float y1, float x2, float y2, float x3, float y3, float x4, float y4, CRGBA const& c0, CRGBA const& c1, CRGBA const& c2, CRGBA const& c3);
    static void SetVertices(const CRect& rect, const CRGBA& c0, const CRGBA& c1, const CRGBA& c2, const CRGBA& c3, float u0, float v0, float u1, float v1, float u3, float v3, float u2, float v2);

public:
    void Draw(float x, float y, float w, float h, CRGBA const& color);
    void Draw(CRect const& rect, CRGBA const& color);
    void Draw(CRect const& rect, CRGBA const& color, float u0, float v0, float u1, float v1, float u3, float v3, float u2, float v2);
    void Draw(float x1, float y1, float x2, float y2, float x3, float y3, float x4, float y4, CRGBA const& color);
};
