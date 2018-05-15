/*
    Plugin-SDK (Grand Theft Auto San Andreas) header file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/
#pragma once

#include "PluginBase.h"

class PLUGIN_API COnscreenTimerEntry {
public:
    unsigned int  m_nVarId;
    char          m_szDescriptionTextKey[10];
    char          m_szDisplayedText[42]; // possibly 2b padding?
    bool          m_bEnabled;
    unsigned char m_nTimerDirection;
    unsigned int  m_nClockBeepCountdownSecs;

    SUPPORTED_10US void Process();
    //! unused
    SUPPORTED_10US void ProcessForDisplayClock();
};
VALIDATE_SIZE(COnscreenTimerEntry, 0x40);
#include "meta/meta.COnscreenTimerEntry.h"
