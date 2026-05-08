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
VALIDATE_OFFSET(CFallingGlassPane, m_vecMoveSpeed, 0x48);
VALIDATE_OFFSET(CFallingGlassPane, m_vecTurn, 0x54);
VALIDATE_OFFSET(CFallingGlassPane, m_nTimer, 0x60);
VALIDATE_OFFSET(CFallingGlassPane, m_fGroundZ, 0x64);
VALIDATE_OFFSET(CFallingGlassPane, m_fStep, 0x68);
VALIDATE_OFFSET(CFallingGlassPane, m_nTriIndex, 0x6C);
VALIDATE_OFFSET(CFallingGlassPane, m_bActive, 0x6D);
VALIDATE_OFFSET(CFallingGlassPane, m_bShattered, 0x6E);
VALIDATE_SIZE(CFallingGlassPane, 0x70);

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
