/*
    Plugin-SDK (Grand Theft Auto San Andreas) header file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/
#pragma once

#include "CDecision.h"
#include "CDecisionMaker.h"
#include "eEventType.h"
#include "eTaskType.h"

class CPed;
class CPedGroup;

enum class PLUGIN_API eDecisionMakerType : int {
    UNKNOWN = -1,

    PED_GROUPMEMBER,
    PED_COP,
    PED_RANDOM1,
    PED_RANDOM2,
    PED_RANDOM3,
    PED_FIREMAN,
    PED_EMPTY,
    PED_INDOORS,

    GROUP_RANDOM_AGGRESSIVE,
    GROUP_RANDOM_PASSIVE,

    MISSION0,
    MISSION1,
    MISSION2,
    MISSION3,
    MISSION4,
    MISSION5,
    MISSION6,
    MISSION7,
    MISSION8,
    MISSION9,

    COUNT_TOTAL,
    COUNT_GAME_DM = MISSION0, // Number of built-in decision makers
};

class CDecisionMakerTypes {
public:
    static constexpr auto NUM_TYPES = 20u;

    static inline auto& ScriptReferenceIndex = *(std::array<unsigned short, NUM_TYPES>*)0xC0AFF4;
    static inline auto& m_IsActive           = *(std::array<bool, NUM_TYPES>*)0xC0B01C;

    static CDecisionMakerTypes* GetInstance(); // get global Decision Maker manager

    eDecisionMakerType AddDecisionMaker(CDecisionMaker* templateDm, eDecisionMakerType dm = eDecisionMakerType::UNKNOWN, bool bDecisionMakerForMission = false);
    void RemoveDecisionMaker(eDecisionMakerType dm);

    void AddEventResponse(eDecisionMakerType dm, eEventType eventType, eTaskType taskId, DecisionChances chances, DecisionContext context);
    void FlushDecisionMakerEventResponse(eDecisionMakerType dm, eEventType eventId);

    eTaskType MakeDecision(CPedGroup* pedGroup, eEventType eventType, int eventSourceType, bool bIsPedInVehicle, eTaskType taskId1, eTaskType taskId2, eTaskType taskId3, eTaskType taskId4);
    void MakeDecision(CPed* ped, eEventType eventType, int eventSourceType, bool bIsPedInVehicle, eTaskType taskTypeToAvoid1, eTaskType taskTypeToAvoid2, eTaskType taskTypeToAvoid3, eTaskType taskTypeToSeek, bool bUseInGroupDecisionMaker, short& taskType, short& facialTaskType);
    
    void LoadEventIndices();

public:
    int            m_NoOfDecisionMakers;
    CDecisionMaker m_DecisionMakers[(size_t)eDecisionMakerType::COUNT_TOTAL];
    int            m_EventIndices[(size_t)eEventType::EVENT_TOTAL_NUM_EVENTS];
    CDecisionMaker m_DefaultRandomPedDecisionMaker;
    CDecisionMaker m_DefaultMissionPedDecisionMaker;
    CDecisionMaker m_DefaultPlayerPedDecisionMaker;
    CDecisionMaker m_DefaultRandomPedGroupDecisionMaker;
    CDecisionMaker m_DefaultMissionPedGroupDecisionMaker;
};
