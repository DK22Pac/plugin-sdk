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

class PLUGIN_API CWaterCannon {
    PLUGIN_NO_DEFAULT_CONSTRUCTION(CWaterCannon)

public:
    int m_nId;
    short m_nCur;
    unsigned int m_nTimeCreated;
    CVector m_avecPosition[16];
    CVector m_avecVelocity[16];
    bool m_abUsed[16];

    SUPPORTED_10EN_11EN_STEAM void Init();
    SUPPORTED_10EN_11EN_STEAM void PushPeds();
    SUPPORTED_10EN_11EN_STEAM void Render();
    SUPPORTED_10EN_11EN_STEAM void Update_NewInput(CVector *pos, CVector *dir);
    SUPPORTED_10EN_11EN_STEAM void Update_OncePerFrame(short index);
};

SUPPORTED_10EN_11EN_STEAM extern RwImVertexIndex(&WaterCannonIndexList)[12]; // RwImVertexIndex WaterCannonIndexList[12]
SUPPORTED_10EN_11EN_STEAM extern RwIm3DVertex(&WaterCannonVertices)[4]; // RwIm3DVertex WaterCannonVertices[4]

VALIDATE_SIZE(CWaterCannon, 0x19C);

#include "meta/meta.CWaterCannon.h"
