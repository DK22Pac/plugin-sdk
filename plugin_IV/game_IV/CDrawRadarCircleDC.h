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

class CDrawRadarCircleDC : CBaseDC {
public:
    rage::Vector2 pos;
    rage::Vector2 scale;
    rage::Color32 col;

public:
    CDrawRadarCircleDC(rage::Vector2 const& pos, rage::Vector2 const& scale, rage::Color32 const& col);

    virtual void Execute() override;
    virtual int32_t GetSize() override;
};

VALIDATE_SIZE(CDrawRadarCircleDC, 0x1C);
