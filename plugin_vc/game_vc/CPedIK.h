/*
    Plugin-SDK (Grand Theft Auto) header file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/
#pragma once

#include "plbase/PluginBase_VC.h"

class CPed;

class CPedIK {
public:
    CPed *m_pPed;
    char field_4[32];
    unsigned int m_dwFlags;
};

VALIDATE_SIZE(CPedIK, 0x28);