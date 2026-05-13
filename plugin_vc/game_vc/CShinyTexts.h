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
VALIDATE_OFFSET(CRegisteredShinyText, m_vecCornerAA, 0x0);
VALIDATE_OFFSET(CRegisteredShinyText, m_vecCornerAB, 0xC);
VALIDATE_OFFSET(CRegisteredShinyText, m_vecCornerBA, 0x18);
VALIDATE_OFFSET(CRegisteredShinyText, m_vecCornerBB, 0x24);
VALIDATE_OFFSET(CRegisteredShinyText, m_texCoorsAA, 0x30);
VALIDATE_OFFSET(CRegisteredShinyText, m_texCoorsAB, 0x38);
VALIDATE_OFFSET(CRegisteredShinyText, m_texCoorsBA, 0x40);
VALIDATE_OFFSET(CRegisteredShinyText, m_texCoorsBB, 0x48);
VALIDATE_OFFSET(CRegisteredShinyText, m_fDistanceToCamera, 0x50);
VALIDATE_OFFSET(CRegisteredShinyText, m_color, 0x54);
VALIDATE_SIZE(CRegisteredShinyText, 0x58);

class CShinyTexts {
public:
    static CRegisteredShinyText *aShinyTexts; // static CRegisteredShinyText aShinyTexts[MAX_SHINYTEXTS];
    static unsigned int &NumShinyTexts;

    //funcs
    static void Render();
};
VALIDATE_SIZE(CShinyTexts, 0x1);

extern unsigned int MAX_SHINYTEXTS; // default = 32
