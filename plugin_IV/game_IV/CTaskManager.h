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

VALIDATE_SIZE(CTaskManager, 0x30);
