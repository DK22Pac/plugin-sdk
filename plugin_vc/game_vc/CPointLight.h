/*
    Plugin-SDK (Grand Theft Auto Vice City) header file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/
#pragma once

#include "PluginBase.h"
#include "CVector.h"

class PLUGIN_API CPointLight {
    PLUGIN_NO_DEFAULT_CONSTRUCTION(CPointLight)

public:
    CVector m_vecPosn;
    CVector m_vecDirection;
    float m_fRange;
    float m_fColorRed;
    float m_fColorGreen;
    float m_fColorBlue;
    unsigned char m_nType;
    unsigned char m_nFogType;
    bool m_bGenerateShadows;
private:
    char _pad2B;
public:
};
VALIDATE_OFFSET(CPointLight, m_vecPosn, 0x0);
VALIDATE_OFFSET(CPointLight, m_vecDirection, 0xC);
VALIDATE_OFFSET(CPointLight, m_fRange, 0x18);
VALIDATE_OFFSET(CPointLight, m_fColorRed, 0x1C);
VALIDATE_OFFSET(CPointLight, m_fColorGreen, 0x20);
VALIDATE_OFFSET(CPointLight, m_fColorBlue, 0x24);
VALIDATE_OFFSET(CPointLight, m_nType, 0x28);
VALIDATE_OFFSET(CPointLight, m_nFogType, 0x29);
VALIDATE_OFFSET(CPointLight, m_bGenerateShadows, 0x2A);
VALIDATE_SIZE(CPointLight, 0x2C);

#include "meta/meta.CPointLight.h"
