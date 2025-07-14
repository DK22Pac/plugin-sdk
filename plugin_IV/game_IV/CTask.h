/*
    Plugin-SDK (Grand Theft Auto IV) header file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/
#pragma once
#include "PluginBase.h"
#include "eTasks.h"
#include "CPools.h"

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

    static void* operator new(size_t size) {
        return CPools::ms_pTaskPool->New();
    }

    static void operator delete(void* ptr) {
        CPools::ms_pTaskPool->Delete(ptr);
    }
};

VALIDATE_SIZE(CTask, 0x8);
