/*
    Plugin-SDK (Grand Theft Auto IV) header file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/
#pragma once
#include "PluginBase.h"
#include "Rage.h"

class CSprite2d {
public:
    rage::pgRef<rage::grcTexturePC> m_pTexture;

public:
    void SetTexture(const char* name);
    void Delete();
    void SetRenderState();

public:
    CSprite2d() = default;

    static void ClearRenderState();
    static void Draw(rage::Vector2 const& leftBottom, rage::Vector2 const& leftTop, rage::Vector2 const& rightBottom, rage::Vector2 const& rightTop, rage::Color32 const& col);
    static void Draw(rage::fwRect const& rect, float z, rage::fwRect const& uv, rage::Color32 const& color, int subShader = 0);
    static void Draw(rage::fwRect const& rect, rage::Color32 const& color);
    static void Draw(float x1, float y1, float x2, float y2, float x3, float y3, float x4, float y4, float z, float u1, float v1, float u2, float v2, float u3, float v3, float u4, float v4, rage::Color32 const& color, int subShader = 0);
    static void Draw(rage::Vector3 const& pos1, rage::Vector3 const& pos2, rage::Vector3 const& pos3, rage::Vector3 const& pos4, rage::Color32 const& color);
    static void Draw(rage::fwRect const& rect, rage::fwRect const& uv, rage::Color32 const& color);

    static void Draw(float x, float y, float w, float h, rage::Color32 const& color) {
        Draw({ x, y, x + w, y + h }, color);
    }

    static void DrawRect(rage::fwRect const& rect, rage::Color32 const& col);
    static void DrawRect(rage::fwRect const& rect, float z, rage::Color32 const& col);
    static void DrawCircle(rage::Vector2 const& center, rage::Vector2 const& scale, int radius, rage::Color32 const& col, float z);
};

VALIDATE_SIZE(CSprite2d, 0x4);
