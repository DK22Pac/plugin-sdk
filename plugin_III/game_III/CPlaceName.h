/*
Plugin-SDK (Grand Theft Auto 3) header file
Authors: GTA Community. See more here
https://github.com/DK22Pac/plugin-sdk
Do not delete this comment block. Respect others' work!
*/
#pragma once

#include "PluginBase.h"
#include "CZone.h"


class CPlaceName {
public:
    CZone *m_pZone;
    CZone *m_pZoneOther;
    short m_nAdditionalTimer;

    //funcs
    CPlaceName();
    void Display();
    void Init();
    void Process();
};

VALIDATE_SIZE(CPlaceName, 0xC);