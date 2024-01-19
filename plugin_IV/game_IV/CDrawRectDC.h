/*
    Plugin-SDK (Grand Theft Auto IV) header file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/
#pragma once
#include "PluginBase.h"
#include "CBaseDC.h"
#include "Rage.h"

class CDrawRectDC : public CBaseDC {
public:
    rage::Vector4 m_rect;
    rage::Color32 m_col;

public:
    CDrawRectDC(rage::Vector4 const& rect, rage::Color32 const& col);
};

VALIDATE_SIZE(CDrawRectDC, 0x1C);
