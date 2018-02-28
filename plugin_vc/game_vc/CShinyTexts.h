/*
    Plugin-SDK (Grand Theft Auto Vice City) header file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/
#pragma once

#include "PluginBase.h"
#include "CVector.h"

class CRegisteredShinyText {
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
    RwRGBA m_color;

    CRegisteredShinyText();
};

VALIDATE_SIZE(CRegisteredShinyText, 0x58);

class CShinyTexts {
public:
    static CRegisteredShinyText *aShinyTexts; // static CRegisteredShinyText aShinyTexts[MAX_SHINYTEXTS];
    static unsigned int &NumShinyTexts;

    //funcs
    static void Render();
};

extern unsigned int MAX_SHINYTEXTS; // default = 32
