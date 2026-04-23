/*
    Plugin-SDK (Grand Theft Auto San Andreas) header file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/
#pragma once
#include "PluginBase.h"
#include "eAbortPriority.h"
#include "eTaskType.h"

class CEvent;
class CPed;

class PLUGIN_API CTask {
protected:
    CTask(plugin::dummy_func_t) {}
    CTask() = delete;

public:
    CTask* m_pParentTask;

    void* operator new(unsigned int size);
    void  operator delete(void* object);

    virtual ~CTask() {}
    virtual class CTask* Clone();
    virtual class CTask* GetSubTask();
    virtual bool IsSimple();
    virtual eTaskType GetId();
    virtual void StopTimer(CEvent* event);
    virtual bool MakeAbortable(CPed* ped, eAbortPriority priority, CEvent* event);
};

VALIDATE_OFFSET(CTask, m_pParentTask, 0x4);
VALIDATE_SIZE(CTask, 0x8);