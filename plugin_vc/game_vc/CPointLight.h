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

VALIDATE_SIZE(CPointLight, 0x2C);

#include "meta/meta.CPointLight.h"
