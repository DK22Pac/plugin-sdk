/*
    Plugin-SDK (Grand Theft Auto IV) header file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/
#pragma once
#include "PluginBase.h"
#include "CTask.h"

class CTaskComplex : public CTask {
public:
    CTask* m_pSubTask;
};
VALIDATE_OFFSET(CTaskComplex, m_pSubTask, 0x8);
VALIDATE_SIZE(CTaskComplex, 0xC);
