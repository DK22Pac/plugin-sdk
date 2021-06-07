/*
    Plugin-SDK (Grand Theft Auto 3) header file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/
#pragma once

#include "PluginBase.h"
class CPed;

class PLUGIN_API CAccident {
    PLUGIN_NO_DEFAULT_CONSTRUCTION(CAccident)

public:
    CPed *m_pVictim;
    unsigned int m_nMedicsAttending;
    unsigned int m_nMedicsPerformingCPR;
};

VALIDATE_SIZE(CAccident, 0xC);

#include "meta/meta.CAccident.h"
