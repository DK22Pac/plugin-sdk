/*
    Plugin-SDK (Grand Theft Auto 3) header file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/
#pragma once

#include "PluginBase.h"
#include "CVector.h"
#include "RenderWare.h"

class PLUGIN_API CBrightLight {
    PLUGIN_NO_DEFAULT_CONSTRUCTION(CBrightLight)

public:
    CVector m_vecPosition;
    CVector m_vecRight;
    CVector m_vecUp;
    CVector m_vecAt;
    float m_fDistanceToCamera;
    RwRGBA m_color;
};

VALIDATE_SIZE(CBrightLight, 0x38);

#include "meta/meta.CBrightLight.h"
