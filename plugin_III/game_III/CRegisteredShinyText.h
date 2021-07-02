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

class PLUGIN_API CRegisteredShinyText {
    PLUGIN_NO_DEFAULT_CONSTRUCTION(CRegisteredShinyText)

public:
    CVector m_vecCornerAA;
    CVector m_vecCornerAB;
    CVector m_vecCornerBA;
    CVector m_vecCornerBB;
    RwTexCoords m_texCoorsAA;
    RwTexCoords m_texCoorsAB;
    RwTexCoords m_texCoorsBA;
    RwTexCoords m_texCoorsBB;
    float m_fDistanceToCamera;
    unsigned char m_nType;
    unsigned char m_nRed;
    unsigned char m_nGreen;
    unsigned char m_nBlue;
};

VALIDATE_SIZE(CRegisteredShinyText, 0x58);

#include "meta/meta.CRegisteredShinyText.h"
