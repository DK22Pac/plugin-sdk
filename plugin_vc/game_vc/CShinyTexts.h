/*
    Plugin-SDK (Grand Theft Auto) header file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/
#pragma once

#include "plbase\PluginBase_VC.h"
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
};

VALIDATE_SIZE(CRegisteredShinyText, 0x58);

class CShinyTexts {
public:
    static CRegisteredShinyText *aShinyTexts; // static CRegisteredShinyText aShinyTexts[MAX_SHINYTEXTS];
    static unsigned int &NumShinyTexts;

    //funcs
    CShinyTexts();
    static void Render();
};

extern unsigned int MAX_SHINYTEXTS; // default = 32
