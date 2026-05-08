/*
    Plugin-SDK (Grand Theft Auto San Andreas) header file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/
#pragma once

#include "PluginBase.h"
#include "CDecisionMakerTypes.h"
#include "CTaskManager.h"
#include "CEventHandler.h"
#include "CEventGroup.h"
#include "CEntityScanner.h"
#include "CMentalState.h"
#include "CEventScanner.h"
#include "CCollisionEventScanner.h"
#include "CPedStuckChecker.h"
#include "CTaskSimpleUseGun.h"
#include "CTaskSimpleJetpack.h"
#include "CTaskSimpleFight.h"
#include "CTaskSimpleHoldEntity.h"
#include "CTaskSimpleThrowProjectile.h"
#include "CTaskSimpleSwim.h"
#include "CTaskSimpleDuck.h"
#include "CTaskSimpleClimb.h"
#include "CTaskSimpleJetpack.h"
#include "CTaskSimpleInAir.h"

class PLUGIN_API CPedIntelligence {
public:
    class CPed*        m_pPed;
    CTaskManager       m_TaskMgr;
    CEventHandler      m_eventHandler;
    CEventGroup        m_eventGroup;
    eDecisionMakerType m_nDecisionMakerType;
    eDecisionMakerType m_nDecisionMakerTypeInGroup;
    float              m_fHearingRange;
    float              m_fSeeingRange;
    unsigned int       m_nDmNumPedsToScan;
    float              m_fDmRadius;
    float              m_FollowNodeThresholdDistance;
    char               m_NextEventResponseSequence;
    unsigned char      m_nEventId;
    unsigned char      m_nEventPriority;
    char               field_D3;
    CEntityScanner     m_vehicleScanner;
    CEntityScanner     m_pedScanner;
    CMentalState       m_mentalState;
    char               field_188;
    CEventScanner      m_eventScanner;
    CCollisionEventScanner m_collisionScanner;
    CPedStuckChecker   m_pedStuckChecker;
    int                m_AnotherStaticCounter;
    int                m_StaticCounter;
    CVector            m_vecLastPedPosDuringDamageEntity;
    class CEntity*     m_apInterestingEntities[3];
    
    void SetPedDecisionMakerType(eDecisionMakerType dm);
    void SetPedDecisionMakerTypeInGroup(eDecisionMakerType dm);
    void RestorePedDecisionMakerType();
    void SetHearingRange(float range);
    void SetSeeingRange(float range);
    bool IsInHearingRange(CVector const& posn);
    bool IsInSeeingRange(CVector const& posn);
    bool FindRespectedFriendInInformRange();
    bool IsRespondingToEvent(int event);
    void AddTaskPhysResponse(CTask* task, bool arg2);
    void AddTaskEventResponseTemp(CTask* task, bool arg2);
    void AddTaskEventResponseNonTemp(CTask* task, bool arg2);
    void AddTaskPrimaryMaybeInGroup(CTask* task, bool arg2);
    CTask* FindTaskByType(int type);
    CTaskSimpleFight* GetTaskFighting();
    CTaskSimpleUseGun* GetTaskUseGun();
    CTaskSimpleThrowProjectile* GetTaskThrow();
    CTaskSimpleHoldEntity* GetTaskHold(bool arg1);
    CTaskSimpleSwim* GetTaskSwim();
    CTaskSimpleDuck* GetTaskDuck(bool arg1);
    CTaskSimpleJetPack* GetTaskJetPack();
    CTaskSimpleInAir* GetTaskInAir();
    CTaskSimpleClimb* GetTaskClimb();
    bool GetUsingParachute();
    void SetTaskDuckSecondary(unsigned short arg1);
    void ClearTaskDuckSecondary();
    void ClearTasks(bool arg1, bool arg2);
    void FlushImmediately(bool arg1);
    C2dEffect* GetEffectInUse();
    void SetEffectInUse(C2dEffect* arg1);
    void ProcessAfterProcCol();
    void ProcessAfterPreRender();
    void ProcessEventHandler();
    bool IsFriendlyWith(CPed const& ped);
    bool IsThreatenedBy(CPed const& ped);
    bool Respects(CPed const& ped);
    bool IsInACarOrEnteringOne();
    static bool AreFriends(CPed const& ped1, CPed const& ped2);
    bool IsPedGoingSomewhereOnFoot();
    int* GetMoveStateFromGoToTask();
    void FlushIntelligence();
    bool TestForStealthKill(CPed* pPed, bool arg2);
    void RecordEventForScript(int EventID, int EventPriority);
    bool HasInterestingEntites();
    bool IsInterestingEntity(CEntity* pEntity);
    void LookAtInterestingEntities();
    void RemoveAllInterestingEntities();
    bool IsPedGoingForCarDoor();
    float CanSeeEntityWithLights(CEntity const* pEntity, bool arg2);
    void ProcessStaticCounter();
    void ProcessFirst();
    void Process();
    static void operator delete(void* arg1);
};
VALIDATE_OFFSET(CPedIntelligence, m_pPed, 0x0);
VALIDATE_OFFSET(CPedIntelligence, m_TaskMgr, 0x4);
VALIDATE_OFFSET(CPedIntelligence, m_eventHandler, 0x34);
VALIDATE_OFFSET(CPedIntelligence, m_eventGroup, 0x68);
VALIDATE_OFFSET(CPedIntelligence, m_nDecisionMakerType, 0xB4);
VALIDATE_OFFSET(CPedIntelligence, m_nDecisionMakerTypeInGroup, 0xB8);
VALIDATE_OFFSET(CPedIntelligence, m_fHearingRange, 0xBC);
VALIDATE_OFFSET(CPedIntelligence, m_fSeeingRange, 0xC0);
VALIDATE_OFFSET(CPedIntelligence, m_nDmNumPedsToScan, 0xC4);
VALIDATE_OFFSET(CPedIntelligence, m_fDmRadius, 0xC8);
VALIDATE_OFFSET(CPedIntelligence, m_FollowNodeThresholdDistance, 0xCC);
VALIDATE_OFFSET(CPedIntelligence, m_NextEventResponseSequence, 0xD0);
VALIDATE_OFFSET(CPedIntelligence, m_nEventId, 0xD1);
VALIDATE_OFFSET(CPedIntelligence, m_nEventPriority, 0xD2);
VALIDATE_OFFSET(CPedIntelligence, field_D3, 0xD3);
VALIDATE_OFFSET(CPedIntelligence, m_vehicleScanner, 0xD4);
VALIDATE_OFFSET(CPedIntelligence, m_pedScanner, 0x124);
VALIDATE_OFFSET(CPedIntelligence, m_mentalState, 0x174);
VALIDATE_OFFSET(CPedIntelligence, field_188, 0x188);
VALIDATE_OFFSET(CPedIntelligence, m_eventScanner, 0x18C);
VALIDATE_OFFSET(CPedIntelligence, m_collisionScanner, 0x260);
VALIDATE_OFFSET(CPedIntelligence, m_pedStuckChecker, 0x264);
VALIDATE_OFFSET(CPedIntelligence, m_AnotherStaticCounter, 0x274);
VALIDATE_OFFSET(CPedIntelligence, m_StaticCounter, 0x278);
VALIDATE_OFFSET(CPedIntelligence, m_vecLastPedPosDuringDamageEntity, 0x27C);
VALIDATE_OFFSET(CPedIntelligence, m_apInterestingEntities, 0x288);
VALIDATE_SIZE(CPedIntelligence, 0x294);
