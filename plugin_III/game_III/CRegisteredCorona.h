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
VALIDATE_OFFSET(CRegisteredCorona, m_nUniqueID, 0x0);
VALIDATE_OFFSET(CRegisteredCorona, m_nLastLOScheck, 0x4);
VALIDATE_OFFSET(CRegisteredCorona, m_pTexture, 0x8);
VALIDATE_OFFSET(CRegisteredCorona, m_nRed, 0xC);
VALIDATE_OFFSET(CRegisteredCorona, m_nGreen, 0xD);
VALIDATE_OFFSET(CRegisteredCorona, m_nBlue, 0xE);
VALIDATE_OFFSET(CRegisteredCorona, m_nAlpha, 0xF);
VALIDATE_OFFSET(CRegisteredCorona, m_nFadeAlpha, 0x10);
VALIDATE_OFFSET(CRegisteredCorona, m_vecPos, 0x14);
VALIDATE_OFFSET(CRegisteredCorona, m_fSize, 0x20);
VALIDATE_OFFSET(CRegisteredCorona, m_fSomeAngle, 0x24);
VALIDATE_OFFSET(CRegisteredCorona, m_bRegisteredThisFrame, 0x28);
VALIDATE_OFFSET(CRegisteredCorona, m_fDrawDist, 0x2C);
VALIDATE_OFFSET(CRegisteredCorona, m_nFlareType, 0x30);
VALIDATE_OFFSET(CRegisteredCorona, m_nReflection, 0x31);
VALIDATE_OFFSET(CRegisteredCorona, m_nFlags, 0x32);
VALIDATE_OFFSET(CRegisteredCorona, m_bRenderReflection, 0x33);
VALIDATE_OFFSET(CRegisteredCorona, m_fHeightAboveRoad, 0x34);
VALIDATE_OFFSET(CRegisteredCorona, m_afPrevX, 0x38);
VALIDATE_OFFSET(CRegisteredCorona, m_afPrevY, 0x50);
VALIDATE_OFFSET(CRegisteredCorona, m_anPrevRed, 0x68);
VALIDATE_OFFSET(CRegisteredCorona, m_anPrevGreen, 0x6E);
VALIDATE_OFFSET(CRegisteredCorona, m_anPrevBlue, 0x74);
VALIDATE_OFFSET(CRegisteredCorona, m_abHasValue, 0x7A);
VALIDATE_SIZE(CRegisteredCorona, 0x80);

#include "meta/meta.CRegisteredCorona.h"
