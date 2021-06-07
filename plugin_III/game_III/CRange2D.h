/*
    Plugin-SDK (Grand Theft Auto 3) header file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/
#pragma once

#include "PluginBase.h"
#include "CVector2D.h"

class PLUGIN_API CRange2D {
public:
    CVector2D m_vec2dMin;
    CVector2D m_vec2dMax;

    SUPPORTED_10EN_11EN_STEAM CVector2D *GetRandomPointInRange();
};

VALIDATE_SIZE(CRange2D, 0x10);

#include "meta/meta.CRange2D.h"
