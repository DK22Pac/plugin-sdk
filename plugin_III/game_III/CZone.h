/*
    Plugin-SDK (Grand Theft Auto 3) header file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/
#pragma once

#include "PluginBase.h"
#include "CVector.h"
#include "eZoneType.h"
#include "eLevelName.h"

class PLUGIN_API CZone {
public:
    char m_aName[8];
    CVector m_vecMin;
    CVector m_vecMax;
    eZoneType m_eZoneType;
    eLevelName m_eLevel;
    short m_nZoneDay;
    short m_nZoneNight;
    CZone *m_pChild;
    CZone *m_pParent;
    CZone *m_pNext;

    SUPPORTED_10EN_11EN_STEAM wchar_t *GetTranslatedName();
};

VALIDATE_SIZE(CZone, 0x38);

#include "meta/meta.CZone.h"
