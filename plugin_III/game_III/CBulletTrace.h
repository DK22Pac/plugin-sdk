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

class PLUGIN_API CBulletTrace {
    PLUGIN_NO_DEFAULT_CONSTRUCTION(CBulletTrace)

public:
    CVector m_vecOrigin;
    CVector m_vecTarget;
    bool m_bExist;
    unsigned char m_nTimeCounter;
    unsigned char m_nIntensity;

    SUPPORTED_10EN_11EN_STEAM void Update();
};

SUPPORTED_10EN_11EN_STEAM extern RwImVertexIndex(&TraceIndexList)[12]; // RwImVertexIndex TraceIndexList[12]
SUPPORTED_10EN_11EN_STEAM extern RwIm3DVertex(&TraceVertices)[6]; // RwIm3DVertex TraceVertices[6]

VALIDATE_SIZE(CBulletTrace, 0x1C);

#include "meta/meta.CBulletTrace.h"
