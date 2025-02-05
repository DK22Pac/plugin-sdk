/*
    Plugin-SDK (Grand Theft Auto Vice City) header file
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
    unsigned int m_nCreationTime;
    unsigned int m_nLifeTime;
    float m_fRadius;
    unsigned char m_nTransparency;
};

//! RwImVertexIndex TraceIndexList[48] = { 0, 5, 7, 0, 7, 2, 0, 7, 5, 0, 2, 7, 0, 4, 9, 0,
//!                   9, 5, 0, 9, 4, 0, 5, 9, 0, 1, 6, 0, 6, 5, 0, 6,
//!                   1, 0, 5, 6, 0, 3, 8, 0, 8, 5, 0, 8, 3, 0, 5, 8 };
SUPPORTED_10EN_11EN_STEAM extern RwImVertexIndex(&TraceIndexList)[48]; // RwImVertexIndex TraceIndexList[48]
SUPPORTED_10EN_11EN_STEAM extern RwIm3DVertex(&TraceVertices)[10]; // RwIm3DVertex TraceVertices[10]

VALIDATE_SIZE(CBulletTrace, 0x2C);

#include "meta/meta.CBulletTrace.h"
