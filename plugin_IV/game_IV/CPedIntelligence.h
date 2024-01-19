/*
    Plugin-SDK (Grand Theft Auto IV) header file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/
#pragma once
#include "PluginBase.h"
#include "CEntityScanner.h"
#include "CEventGroup.h"
#include "CTaskManager.h"
#include "CTaskTimer.h"
#include "CEventScanner.h"
#include "CEventHandler.h"

class CPedIntelligence {
public:
    char gap_4[64];
    CTaskManager m_TaskMgr;
    uint8_t field_100[636];

public:
    virtual ~CPedIntelligence() {}

    bool IsSwimming();
    bool IsClimbing();
    void ClearTasks(bool arg1);
};

VALIDATE_SIZE(CPedIntelligence, 0x2F0);
