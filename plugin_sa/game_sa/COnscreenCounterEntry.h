/*
    Plugin-SDK (Grand Theft Auto San Andreas) header file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/
#pragma once

#include "PluginBase.h"

class PLUGIN_API COnscreenCounterEntry {
public:
    unsigned int   m_nVarId;
    unsigned int   m_nMaxVarValue;
    char           m_szDescriptionTextKey[10];
    unsigned short m_nType; // 0 - counter (%), 1 - line, 2 - conter counter (%/%)
    char           m_szDisplayedText[42]; // possibly 2b padding?
    bool           m_bEnabled;
    bool           m_bFlashWhenFirstDisplayed;
    unsigned char  m_nColourId; // color index from HudColours

    //! unused
    SUPPORTED_10US void ProcessForDisplayCounter(int type);
    //! unused
    SUPPORTED_10US void SetColourID(unsigned char ColourID);
};
VALIDATE_OFFSET(COnscreenCounterEntry, m_nVarId, 0x0);
VALIDATE_OFFSET(COnscreenCounterEntry, m_nMaxVarValue, 0x4);
VALIDATE_OFFSET(COnscreenCounterEntry, m_szDescriptionTextKey, 0x8);
VALIDATE_OFFSET(COnscreenCounterEntry, m_nType, 0x12);
VALIDATE_OFFSET(COnscreenCounterEntry, m_szDisplayedText, 0x14);
VALIDATE_OFFSET(COnscreenCounterEntry, m_bEnabled, 0x3E);
VALIDATE_OFFSET(COnscreenCounterEntry, m_bFlashWhenFirstDisplayed, 0x3F);
VALIDATE_OFFSET(COnscreenCounterEntry, m_nColourId, 0x40);
VALIDATE_SIZE(COnscreenCounterEntry, 0x44);

#include "meta/meta.COnscreenCounterEntry.h"
