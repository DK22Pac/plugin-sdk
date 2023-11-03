/*
    Plugin-SDK (Grand Theft Auto IV) header file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/
#pragma once
#include "PluginBase.h"
#include "Rage.h"
#include "CBaseDC.h"
#include "CSprite2d.h"

class CDrawSpriteDC : public CBaseDC {
public:
    rage::Vector2 m_aVertices[4];
    rage::grcTexture* m_pTexture;
    rage::Color32 m_nColor;

public:
    CDrawSpriteDC(rage::Vector2 const& leftBottom, rage::Vector2 const& leftTop, rage::Vector2 const& rightBottom, rage::Vector2 const& rightTop, rage::Color32 const& col, rage::grcTexturePC* texture);
};

VALIDATE_SIZE(CDrawSpriteDC, 0x30);
