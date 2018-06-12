/*
    Plugin-SDK (Grand Theft Auto San Andreas) header file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/
#pragma once

#include "PluginBase.h"
#include "CPedTaskPair.h"
#include "CPed.h"
#include "CTask.h"

class CGroupEventHandler;
class CPedGroupDefaultTaskAllocator;
class CTaskAllocator;
class CEvent;
class CPedGroup;

class PLUGIN_API CPedGroupIntelligence {
    PLUGIN_NO_DEFAULT_CONSTRUCTION(CPedGroupIntelligence)

public:
    CPedGroup *m_pPedGroup;
    CGroupEventHandler *m_pGroupEventHandler;
    int m_pEventGroupEvent;
    CPedTaskPair m_groupTasks[53];
    unsigned char gap288[4];
    CPedGroupDefaultTaskAllocator *m_pPedGroupDefaultTaskAllocator;
    CTaskAllocator *m_pPrimaryTaskAllocator;
    CTaskAllocator *m_pEventResponseTaskAllocator;
    int m_dwDecisionMakerType;
    char field_29C;

    SUPPORTED_10US bool AddEvent(CEvent *event);
    SUPPORTED_10US void ComputeDefaultTasks(CPed *ped);
    SUPPORTED_10US void *ComputeEventResponseTasks();
    SUPPORTED_10US void ComputeScriptCommandTasks();
    SUPPORTED_10US void FlushTasks(CPedTaskPair *taskpair, CPed *ped);
    SUPPORTED_10US CTask *GetTask(CPed *ped, CPedTaskPair const *taskpair);
    SUPPORTED_10US CTask *GetTaskDefault(CPed *ped);
    SUPPORTED_10US CTask *GetTaskScriptCommand(CPed *ped);
    SUPPORTED_10US CTask *GetTaskSecondary(CPed *ped);
    SUPPORTED_10US signed int GetTaskSecondarySlot(CPed *ped);
    SUPPORTED_10US bool IsCurrentEventValid();
    SUPPORTED_10US bool IsGroupResponding();
    SUPPORTED_10US void Process();
    SUPPORTED_10US void ProcessIgnorePlayerGroup();
    SUPPORTED_10US void ReportAllBarScriptTasksFinished();
    SUPPORTED_10US void ReportAllTasksFinished(CPedTaskPair *taskpair);
    SUPPORTED_10US void ReportAllTasksFinished();
    SUPPORTED_10US bool ReportFinishedTask(CPed const *ped, CTask const *task, CPedTaskPair *taskpair);
    SUPPORTED_10US bool ReportFinishedTask(CPed const *ped, CTask const *task);
    SUPPORTED_10US void SetDefaultTask(CPed *ped, CTask const *task);
    SUPPORTED_10US void SetDefaultTaskAllocator(CPedGroupDefaultTaskAllocator const *PedGroupDefaultTaskAllocator);
    //! see ePedGroupTaskAllocator
    SUPPORTED_10US void SetDefaultTaskAllocatorType(int nPedGroupTaskAllocator);
    //! arg3 always true
    //! arg5 always false
    //! arg7 always  -1
    SUPPORTED_10US void SetEventResponseTask(CPed *ped, bool arg3, CTask const *task1, bool arg5, CTask const *task2, int arg7);
    SUPPORTED_10US int SetEventResponseTaskAllocator(int a2);
    SUPPORTED_10US int SetGroupDecisionMakerType(int a2);
    SUPPORTED_10US void SetPrimaryTaskAllocator(CTaskAllocator *taskAllocator);
    SUPPORTED_10US void SetScriptCommandTask(CPed *ped, CTask const *task);
    SUPPORTED_10US void SetTask(CPed *ped, CTask const *task, CPedTaskPair *taskpair, int arg5, bool arg6);
};

VALIDATE_SIZE(CPedGroupIntelligence, 0x2A0);

#include "meta/meta.CPedGroupIntelligence.h"
