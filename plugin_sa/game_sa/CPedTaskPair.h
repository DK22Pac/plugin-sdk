/*
    Plugin-SDK (Grand Theft Auto San Andreas) header file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/
#pragma once

#include "PluginBase.h"
#include "CPed.h"
#include "CTask.h"


class PLUGIN_API CPedTaskPair {
public:
    CPed *m_pPed;
    CTask *m_pTask;
    int field_8;

    SUPPORTED_10US void Flush();
};
VALIDATE_OFFSET(CPedTaskPair, m_pPed, 0x0);
VALIDATE_OFFSET(CPedTaskPair, m_pTask, 0x4);
VALIDATE_OFFSET(CPedTaskPair, field_8, 0x8);
VALIDATE_SIZE(CPedTaskPair, 0xC);

#include "meta/meta.CPedTaskPair.h"
