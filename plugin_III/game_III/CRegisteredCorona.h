/*
    Plugin-SDK (Grand Theft Auto 3) header file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/
#pragma once

#include "PluginBase.h"
#include "RenderWare.h"
#include "CVector.h"

class PLUGIN_API CRegisteredCorona {
    PLUGIN_NO_DEFAULT_CONSTRUCTION(CRegisteredCorona)

public:
    unsigned int m_nUniqueID;
    unsigned int m_nLastLOScheck;
    RwTexture *m_pTexture;
    unsigned char m_nRed;
    unsigned char m_nGreen;
    unsigned char m_nBlue;
    unsigned char m_nAlpha; //!< alpha when fully visible
    unsigned char m_nFadeAlpha; //!< actual value used for rendering, faded
    CVector m_vecPos;
    float m_fSize;
    float m_fSomeAngle;
    bool m_bRegisteredThisFrame;
    float m_fDrawDist;
    char m_nFlareType;
    char m_nReflection;
    struct {
        unsigned char bLOScheck : 1;
        unsigned char bOffScreen : 1;
        unsigned char bFirstUpdate : 1;
        unsigned char bDrawStreak : 1;
        unsigned char bSightClear : 1;
    } m_nFlags;
    bool m_bRenderReflection;
    float m_fHeightAboveRoad;
    float m_afPrevX[6];
    float m_afPrevY[6];
    unsigned char m_anPrevRed[6];
    unsigned char m_anPrevGreen[6];
    unsigned char m_anPrevBlue[6];
    bool m_abHasValue[6];

    SUPPORTED_10EN_11EN_STEAM void Update();
};

VALIDATE_SIZE(CRegisteredCorona, 0x80);

#include "meta/meta.CRegisteredCorona.h"
