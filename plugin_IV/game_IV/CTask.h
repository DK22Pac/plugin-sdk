/*
    Plugin-SDK (Grand Theft Auto IV) header file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/
#pragma once
#include "PluginBase.h"
#include "eTasks.h"

enum eAbortPriority {
    ABORT_PRIORITY_LEISURE = 0,
    ABORT_PRIORITY_URGENT,
    ABORT_PRIORITY_IMMEDIATE
};

class CTask {
public:
    CTask* m_pParentTask;

public:
    virtual ~CTask() {}

};

VALIDATE_SIZE(CTask, 0x8);
