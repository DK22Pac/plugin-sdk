/*
    Plugin-SDK (Grand Theft Auto San Andreas) source file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/
#include "CDecisionMakerTypes.h"

CDecisionMakerTypes* CDecisionMakerTypes::GetInstance() {
    return plugin::CallAndReturn<CDecisionMakerTypes*, 0x4684F0>();
}

eDecisionMakerType CDecisionMakerTypes::AddDecisionMaker(CDecisionMaker* templateDm, eDecisionMakerType dm, bool bDecisionMakerForMission) {
    return plugin::CallMethodAndReturn<eDecisionMakerType, 0x607050, CDecisionMakerTypes*, CDecisionMaker*, eDecisionMakerType, bool>(this, templateDm, dm, bDecisionMakerForMission);
}

void CDecisionMakerTypes::RemoveDecisionMaker(eDecisionMakerType dm) {
    return plugin::Call<0x6043A0>(dm);
}

void CDecisionMakerTypes::AddEventResponse(eDecisionMakerType dm, eEventType eventType, eTaskType taskId, DecisionChances chances, DecisionContext context) {
    float chancesF[4]; // internally converted back to byte
    chancesF[0] = chances.toNeutral;
    chancesF[1] = chances.toPlayer;
    chancesF[2] = chances.toFriend;
    chancesF[3] = chances.toEnemy;

    plugin::CallMethod<0x6044C0, CDecisionMakerTypes*, eDecisionMakerType, eEventType, eTaskType, float*, DecisionContext&>(this, dm, eventType, taskId, chancesF, context);
}

void CDecisionMakerTypes::FlushDecisionMakerEventResponse(eDecisionMakerType dm, eEventType eventId) {
    plugin::CallMethod<0x604490>(this, dm, eventId);
}

eTaskType CDecisionMakerTypes::MakeDecision(CPedGroup* pedGroup, eEventType eventType, int eventSourceType, bool bIsPedInVehicle, eTaskType taskId1, eTaskType taskId2, eTaskType taskId3, eTaskType taskId4) {
    return plugin::CallMethodAndReturn<eTaskType, 0x606F80, CDecisionMakerTypes*, CPedGroup*, int, int, bool, int, int, int, int>(
        this, pedGroup, eventType, eventSourceType, bIsPedInVehicle, taskId1, taskId2, taskId3, taskId4);
}

void CDecisionMakerTypes::MakeDecision(CPed* ped, eEventType eventType, int eventSourceType, bool bIsPedInVehicle, eTaskType taskTypeToAvoid1, eTaskType taskTypeToAvoid2, eTaskType taskTypeToAvoid3, eTaskType taskTypeToSeek, bool bUseInGroupDecisionMaker, short& taskType, short& facialTaskType) {
    plugin::CallMethod<0x606E70>(this, ped, eventType, eventSourceType, bIsPedInVehicle, taskTypeToAvoid1, taskTypeToAvoid2, taskTypeToAvoid3, taskTypeToSeek, bUseInGroupDecisionMaker, &taskType, &facialTaskType);
}

void CDecisionMakerTypes::LoadEventIndices() {
    plugin::CallMethod<0x600840>(this);
}
