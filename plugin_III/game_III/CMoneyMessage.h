/*
    Plugin-SDK (Grand Theft Auto 3) header file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/
#pragma once

#include "PluginBase.h"
#include "CVector.h"
#include "CRGBA.h"

class PLUGIN_API CMoneyMessage {
    PLUGIN_NO_DEFAULT_CONSTRUCTION(CMoneyMessage)

public:
    unsigned int m_nTimeRegistered;
    CVector m_vecPos;
    wchar_t m_aText[16];
    CRGBA m_Color;
    float m_fSize;
    float m_fOpacity;

    SUPPORTED_10EN_11EN_STEAM void Render();
};

VALIDATE_SIZE(CMoneyMessage, 0x3C);

#include "meta/meta.CMoneyMessage.h"
