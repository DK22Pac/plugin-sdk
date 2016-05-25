#pragma once

#include "plbase/PluginBase.h"

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
    
    bool IsOutOfTime();
};

VALIDATE_SIZE(CTaskTimer, 0xC);