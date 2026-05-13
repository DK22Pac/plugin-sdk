/*
    Plugin-SDK (Grand Theft Auto San Andreas) header file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/
#pragma once

#include "PluginBase.h"
#include "CTaskComplex.h"
#include "CTaskTimer.h"
#include "CPed.h"

class PLUGIN_API CTaskComplexKillPedOnFoot : public CTaskComplex {
protected:
    CTaskComplexKillPedOnFoot(plugin::dummy_func_t a) : CTaskComplex(a) , m_taskTimer(a) {}
public:
    unsigned char  m_nFlags;
    CPed    *m_pTarget;
    unsigned int   m_nAttackFlags;
    unsigned int   m_nActionDelay;
    unsigned int   m_nActionChance;
    char field_20;
    unsigned int   m_nLaunchTime;
    signed int     m_nTime;
    CTaskTimer     m_taskTimer;

    CTaskComplexKillPedOnFoot(CPed *target, int time, int specFlags, int delay, int chance, char a7);
};
VALIDATE_OFFSET(CTaskComplexKillPedOnFoot, m_nFlags, 0xC);
VALIDATE_OFFSET(CTaskComplexKillPedOnFoot, m_pTarget, 0x10);
VALIDATE_OFFSET(CTaskComplexKillPedOnFoot, m_nAttackFlags, 0x14);
VALIDATE_OFFSET(CTaskComplexKillPedOnFoot, m_nActionDelay, 0x18);
VALIDATE_OFFSET(CTaskComplexKillPedOnFoot, m_nActionChance, 0x1C);
VALIDATE_OFFSET(CTaskComplexKillPedOnFoot, field_20, 0x20);
VALIDATE_OFFSET(CTaskComplexKillPedOnFoot, m_nLaunchTime, 0x24);
VALIDATE_OFFSET(CTaskComplexKillPedOnFoot, m_nTime, 0x28);
VALIDATE_OFFSET(CTaskComplexKillPedOnFoot, m_taskTimer, 0x2C);
VALIDATE_SIZE(CTaskComplexKillPedOnFoot, 0x38);
