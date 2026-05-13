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
VALIDATE_OFFSET(CZone, m_aName, 0x0);
VALIDATE_OFFSET(CZone, m_vecMin, 0x8);
VALIDATE_OFFSET(CZone, m_vecMax, 0x14);
VALIDATE_OFFSET(CZone, m_eZoneType, 0x20);
VALIDATE_OFFSET(CZone, m_eLevel, 0x24);
VALIDATE_OFFSET(CZone, m_nZoneDay, 0x28);
VALIDATE_OFFSET(CZone, m_nZoneNight, 0x2A);
VALIDATE_OFFSET(CZone, m_pChild, 0x2C);
VALIDATE_OFFSET(CZone, m_pParent, 0x30);
VALIDATE_OFFSET(CZone, m_pNext, 0x34);
VALIDATE_SIZE(CZone, 0x38);

#include "meta/meta.CZone.h"
