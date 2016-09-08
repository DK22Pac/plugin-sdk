/*
    Plugin-SDK (Grand Theft Auto) header file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/
#pragma once

#include "plbase/PluginBase_SA.h"
#include "CTaskManager.h"
#include "CEventHandler.h"
#include "CEventGroup.h"
#include "CEntityScanner.h"
#include "CTaskTimer.h"
#include "CEventScanner.h"
#include "CTaskSimpleUseGun.h"
#include "CTaskSimpleJetpack.h"

class PLUGIN_API CPedIntelligence {
public:
    class CPed    *m_pPed;
    CTaskManager   m_TaskMgr;
    CEventHandler  m_eventHandler;
    CEventGroup    m_eventGroup;
    unsigned int   m_dwDecisionMakerType;
    unsigned int   m_dwDecisionMakerTypeInGroup;
    float          m_fHearingRange;
    float          m_fSeeingRange;
    unsigned int   m_dwDmNumPedsToScan;
    float          m_fDmRadius;
    int field_CC;
    char field_D0;
    unsigned char  m_nEventId;
    unsigned char  m_nEventPriority;
    char field_D3;
    CEntityScanner m_vehicleScanner;
    CEntityScanner m_pedScanner;
    char field_174;
    char gap_175[3];
    CTaskTimer field_178;
    int field_184;
    char field_188;
    char gap_189[3];
    CEventScanner  m_eventScanner;
    char field_260;
    char gap_261[3];
    char field_264[16];
    int field_274;
    int field_278;
    char gap_27C[12];
    class CEntity *m_apInterestingEntities[3];
    
    CTaskSimpleJetPack *GetJetpackTask();
    CTaskSimpleUseGun *GetUseGunTask();
};

VALIDATE_SIZE(CPedIntelligence, 0x294);