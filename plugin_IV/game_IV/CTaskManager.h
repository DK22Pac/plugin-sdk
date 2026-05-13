/*
    Plugin-SDK (Grand Theft Auto IV) header file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/
#pragma once
#include "PluginBase.h"
#include "CTask.h"

class CPed;


class CTaskManager {
public:
    CTask* m_aPrimaryTasks[5];
    CTask* m_aSecondaryTasks[6];
    CPed* m_pPed;

public:
    CTask* FindActiveTaskByType(int32_t index);

    template<typename T>
    T* FindActiveTaskByType(int32_t index) {
        return (T*)FindActiveTaskByType(index);
    }
};
VALIDATE_OFFSET(CTaskManager, m_aPrimaryTasks, 0x0);
VALIDATE_OFFSET(CTaskManager, m_aSecondaryTasks, 0x14);
VALIDATE_OFFSET(CTaskManager, m_pPed, 0x2C);
VALIDATE_SIZE(CTaskManager, 0x30);
