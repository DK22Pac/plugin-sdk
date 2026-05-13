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

class PLUGIN_API CTowerClock {
    PLUGIN_NO_DEFAULT_CONSTRUCTION(CTowerClock)

public:
    CVector m_vecPosition;
    CVector m_vecSize;
    float m_fDrawDistance;
    float m_fScale;
    unsigned char m_nRed;
    unsigned char m_nGreen;
    unsigned char m_nBlue;
    bool m_bVisible;
    float m_fIntensity;

    SUPPORTED_10EN_11EN_STEAM void Init(CVector pos, float sizeX, float sizeY, unsigned char red, unsigned char green, unsigned char blue, float drawDistance, float scale);
    SUPPORTED_10EN_11EN_STEAM void Render();
    SUPPORTED_10EN_11EN_STEAM void Update();
};
VALIDATE_OFFSET(CTowerClock, m_vecPosition, 0x0);
VALIDATE_OFFSET(CTowerClock, m_vecSize, 0xC);
VALIDATE_OFFSET(CTowerClock, m_fDrawDistance, 0x18);
VALIDATE_OFFSET(CTowerClock, m_fScale, 0x1C);
VALIDATE_OFFSET(CTowerClock, m_nRed, 0x20);
VALIDATE_OFFSET(CTowerClock, m_nGreen, 0x21);
VALIDATE_OFFSET(CTowerClock, m_nBlue, 0x22);
VALIDATE_OFFSET(CTowerClock, m_bVisible, 0x23);
VALIDATE_OFFSET(CTowerClock, m_fIntensity, 0x24);
VALIDATE_SIZE(CTowerClock, 0x28);

SUPPORTED_10EN_11EN_STEAM extern RwIm3DVertex(&TempV)[4]; // RwIm3DVertex TempV[4]

VALIDATE_SIZE(CTowerClock, 0x28);

#include "meta/meta.CTowerClock.h"
