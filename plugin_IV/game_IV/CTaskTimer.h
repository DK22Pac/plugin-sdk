/*
    Plugin-SDK (Grand Theft Auto IV) header file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/
#pragma once
#include "PluginBase.h"

class CTaskTimer {
public:
    char field_0[16];
    int m_nInterval;
    char m_bStarted;
    char m_bStopped;
private:
    char _pad[2];
};

VALIDATE_SIZE(CTaskTimer, 0x18);
