/*
Plugin-SDK (Grand Theft Auto) header file
Authors: GTA Community. See more here
https://github.com/DK22Pac/plugin-sdk
Do not delete this comment block. Respect others' work!
*/
#pragma once

#include "plbase/PluginBase_III.h"
#include "CZone.h"

#pragma pack(push, 2)
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
#pragma pack(pop)

VALIDATE_SIZE(CPlaceName, 0xA);