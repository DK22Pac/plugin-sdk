/*
    Plugin-SDK (Grand Theft Auto 3) header file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/
#pragma once

#include "PluginBase.h"
#include "CMatrix.h"
#include "CVector2D.h"

class PLUGIN_API CFallingGlassPane : public CMatrix {
    PLUGIN_NO_DEFAULT_CONSTRUCTION(CFallingGlassPane)

public:
    CVector m_vecMoveSpeed;
    CVector m_vecTurn;
    unsigned int m_nTimer;
    float m_fGroundZ;
    float m_fStep;
    unsigned char m_nTriIndex;
    bool m_bActive;
    bool m_bShattered;

    SUPPORTED_10EN_11EN_STEAM void Render();
    SUPPORTED_10EN_11EN_STEAM void Update();
};

SUPPORTED_10EN_11EN_STEAM extern CVector2D(&CoorsWithTriangle)[5][3]; // CVector2D CoorsWithTriangle[5][3]
SUPPORTED_10EN_11EN_STEAM extern CVector2D(&CentersWithTriangle)[5]; // CVector2D CentersWithTriangle[5]
SUPPORTED_10EN_11EN_STEAM extern int &TempBufferVerticesStoredReflection;
SUPPORTED_10EN_11EN_STEAM extern int &TempBufferIndicesStoredReflection;
SUPPORTED_10EN_11EN_STEAM extern int &TempBufferVerticesStoredShattered;
SUPPORTED_10EN_11EN_STEAM extern int &TempBufferVerticesStoredHiLight;
SUPPORTED_10EN_11EN_STEAM extern int &TempBufferIndicesStoredShattered;
SUPPORTED_10EN_11EN_STEAM extern int &TempBufferIndicesStoredHiLight;

VALIDATE_SIZE(CFallingGlassPane, 0x70);

#include "meta/meta.CFallingGlassPane.h"
