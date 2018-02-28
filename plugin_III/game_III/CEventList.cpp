/*
    Plugin-SDK (Grand Theft Auto 3) source file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/
#include "CEventList.h"

int &CEventList::ms_nFirstFreeSlotIndex = *(int *)0x8F31CC;
CEvent *gaEvent = (CEvent *)0x6EF830;

// Converted from thiscall void CEvent::CEvent(void) 0x761C0
CEvent::CEvent() {
    plugin::CallMethod<0x761C0, CEvent *>(this);
}

// Converted from cdecl void CEventList::ClearEvent(int index) 0x75F70 
void CEventList::ClearEvent(int index) {
    plugin::Call<0x75F70, int>(index);
}

// Converted from cdecl bool CEventList::FindClosestEvent(eEventType type,CVector posn,int *index) 0x75F90 
bool CEventList::FindClosestEvent(eEventType type, CVector posn, int* index) {
    return plugin::CallAndReturn<bool, 0x75F90, eEventType, CVector, int*>(type, posn, index);
}

// Converted from cdecl bool CEventList::GetEvent(eEventType type,int *index) 0x75F40
bool CEventList::GetEvent(eEventType type, int* index) {
    return plugin::CallAndReturn<bool, 0x75F40, eEventType, int*>(type, index);
}

// Converted from cdecl void CEventList::Initialise(void) 0x75B60
void CEventList::Initialise() {
    plugin::Call<0x75B60>();
}

// Converted from cdecl void CEventList::RegisterEvent(eEventType type,CVector posn,int time) 0x75E10
void CEventList::RegisterEvent(eEventType type, CVector posn, int time) {
    plugin::Call<0x75E10, eEventType, CVector, int>(type, posn, time);
}

// Converted from cdecl void CEventList::RegisterEvent(eEventType type,eEventEntity entityType,CEntity *entity,CPed *ped,int time) 0x75C50
void CEventList::RegisterEvent(eEventType type, eEventEntity entityType, CEntity* entity, CPed* ped, int time) {
    plugin::Call<0x75C50, eEventType, eEventEntity, CEntity*, CPed*, int>(type, entityType, entity, ped, time);
}

// Converted from cdecl void CEventList::ReportCrimeForEvent(eEventType type,int crimeId,bool bPoliceDontReallyCare) 0x76070
void CEventList::ReportCrimeForEvent(eEventType type, int crimeId, bool bPoliceDontReallyCare) {
    plugin::Call<0x76070, eEventType, int, bool>(type, crimeId, bPoliceDontReallyCare);
}

// Converted from cdecl void CEventList::Update(void) 0x75BE0
void CEventList::Update() {
    plugin::Call<0x75BE0>();
}
