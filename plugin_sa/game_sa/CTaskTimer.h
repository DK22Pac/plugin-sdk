/*
    Plugin-SDK (Grand Theft Auto) header file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/
#pragma once

#include "plbase/PluginBase_SA.h"

class PLUGIN_API CTaskTimer {
public:
    int  m_nStartTime;
    int  m_nInterval;
    bool m_bStarted;
    bool m_bStopped;
    char _pad[2];
    
    inline CTaskTimer(int start, int interval) { // @420E10
        m_nStartTime = start;
        m_nInterval = interval;
        m_bStarted = true;
    }

    inline CTaskTimer() {
        m_nStartTime = 0;
        m_nInterval = 0;
        m_bStarted = false;
        m_bStopped = false;
    }

    CTaskTimer(plugin::dummy_func_t) {}
    
    bool IsOutOfTime();
};

VALIDATE_SIZE(CTaskTimer, 0xC);