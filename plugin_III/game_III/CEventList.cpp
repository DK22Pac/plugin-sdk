/*
    Plugin-SDK (Grand Theft Auto 3) source file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/
#include "CEventList.h"

PLUGIN_SOURCE_FILE

PLUGIN_VARIABLE int &CEventList::ms_nFirstFreeSlotIndex = *reinterpret_cast<int *>(GLOBAL_ADDRESS_BY_VERSION(0x8F31CC, 0x8F3280, 0x9033C0));
PLUGIN_VARIABLE CEvent(&gaEvent)[64] = *reinterpret_cast<CEvent(*)[64]>(GLOBAL_ADDRESS_BY_VERSION(0x6EF830, 0x6EF830, 0x6FF970));

int addrof(CEventList::ClearEvent) = ADDRESS_BY_VERSION(0x475F70, 0x475F70, 0x475F70);
int gaddrof(CEventList::ClearEvent) = GLOBAL_ADDRESS_BY_VERSION(0x475F70, 0x475F70, 0x475F70);

void CEventList::ClearEvent(int event) {
    plugin::CallDynGlobal<int>(gaddrof(CEventList::ClearEvent), event);
}

int addrof(CEventList::FindClosestEvent) = ADDRESS_BY_VERSION(0x475F90, 0x475F90, 0x475F90);
int gaddrof(CEventList::FindClosestEvent) = GLOBAL_ADDRESS_BY_VERSION(0x475F90, 0x475F90, 0x475F90);

bool CEventList::FindClosestEvent(eEventType type, CVector pos, int *event) {
    return plugin::CallAndReturnDynGlobal<bool, eEventType, CVector, int *>(gaddrof(CEventList::FindClosestEvent), type, pos, event);
}

int addrof(CEventList::GetEvent) = ADDRESS_BY_VERSION(0x475F40, 0x475F40, 0x475F40);
int gaddrof(CEventList::GetEvent) = GLOBAL_ADDRESS_BY_VERSION(0x475F40, 0x475F40, 0x475F40);

bool CEventList::GetEvent(eEventType type, int *event) {
    return plugin::CallAndReturnDynGlobal<bool, eEventType, int *>(gaddrof(CEventList::GetEvent), type, event);
}

int addrof(CEventList::Initialise) = ADDRESS_BY_VERSION(0x475B60, 0x475B60, 0x475B60);
int gaddrof(CEventList::Initialise) = GLOBAL_ADDRESS_BY_VERSION(0x475B60, 0x475B60, 0x475B60);

void CEventList::Initialise() {
    plugin::CallDynGlobal(gaddrof(CEventList::Initialise));
}

int addrof_o(CEventList::RegisterEvent, void (*)(eEventType, eEventEntity, CEntity *, CPed *, int)) = ADDRESS_BY_VERSION(0x475C50, 0x475C50, 0x475C50);
int gaddrof_o(CEventList::RegisterEvent, void (*)(eEventType, eEventEntity, CEntity *, CPed *, int)) = GLOBAL_ADDRESS_BY_VERSION(0x475C50, 0x475C50, 0x475C50);

void CEventList::RegisterEvent(eEventType type, eEventEntity entityType, CEntity *entity, CPed *criminal, int time) {
    plugin::CallDynGlobal<eEventType, eEventEntity, CEntity *, CPed *, int>(gaddrof_o(CEventList::RegisterEvent, void (*)(eEventType, eEventEntity, CEntity *, CPed *, int)), type, entityType, entity, criminal, time);
}

int addrof_o(CEventList::RegisterEvent, void (*)(eEventType, CVector, int)) = ADDRESS_BY_VERSION(0x475E10, 0x475E10, 0x475E10);
int gaddrof_o(CEventList::RegisterEvent, void (*)(eEventType, CVector, int)) = GLOBAL_ADDRESS_BY_VERSION(0x475E10, 0x475E10, 0x475E10);

void CEventList::RegisterEvent(eEventType type, CVector pos, int time) {
    plugin::CallDynGlobal<eEventType, CVector, int>(gaddrof_o(CEventList::RegisterEvent, void (*)(eEventType, CVector, int)), type, pos, time);
}

int addrof(CEventList::ReportCrimeForEvent) = ADDRESS_BY_VERSION(0x476070, 0x476070, 0x476070);
int gaddrof(CEventList::ReportCrimeForEvent) = GLOBAL_ADDRESS_BY_VERSION(0x476070, 0x476070, 0x476070);

void CEventList::ReportCrimeForEvent(eEventType type, int crimeId, bool bPoliceDontReallyCare) {
    plugin::CallDynGlobal<eEventType, int, bool>(gaddrof(CEventList::ReportCrimeForEvent), type, crimeId, bPoliceDontReallyCare);
}

int addrof(CEventList::Update) = ADDRESS_BY_VERSION(0x475BE0, 0x475BE0, 0x475BE0);
int gaddrof(CEventList::Update) = GLOBAL_ADDRESS_BY_VERSION(0x475BE0, 0x475BE0, 0x475BE0);

void CEventList::Update() {
    plugin::CallDynGlobal(gaddrof(CEventList::Update));
}

int ctor_addr(CEvent) = ADDRESS_BY_VERSION(0x4761C0, 0x4761C0, 0x4761C0);
int ctor_gaddr(CEvent) = GLOBAL_ADDRESS_BY_VERSION(0x4761C0, 0x4761C0, 0x4761C0);
