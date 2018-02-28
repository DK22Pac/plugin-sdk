/*
    Plugin-SDK (Grand Theft Auto San Andreas) source file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/
#include "CTheScripts.h"

// VARIABLES
char* CTheScripts::ScriptSpace = (char*)VAR_CTheScripts__ScriptSpace;

tScriptParam *CTheScripts::ScriptParams = (tScriptParam *)0xA43C78;

CRunningScript *&CTheScripts::pIdleScripts = *(CRunningScript **)0xA8B428;
CRunningScript *&CTheScripts::pActiveScripts = *(CRunningScript **)0xA8B42C;

// Converted from cdecl bool CTheScripts::IsPedStopped(CPed *ped) 0x486110
bool CTheScripts::IsPedStopped(CPed* ped) {
    return ((bool(__cdecl *)(CPed*))0x486110)(ped);
}

// Converted from cdecl bool CTheScripts::IsVehicleStopped(CVehicle *vehicle) 0x4861F0
bool CTheScripts::IsVehicleStopped(CVehicle* vehicle) {
    return ((bool(__cdecl *)(CVehicle*))0x4861F0)(vehicle);
}

// Converted from cdecl void CTheScripts::RemoveThisPed(CPed *ped) 0x486240
void CTheScripts::RemoveThisPed(CPed* ped) {
    ((void(__cdecl *)(CPed*))0x486240)(ped);
}

// Converted from cdecl void CTheScripts::CleanUpThisPed(CPed *ped) 0x486300
void CTheScripts::CleanUpThisPed(CPed* ped) {
    ((void(__cdecl *)(CPed*))0x486300)(ped);
}

// Converted from cdecl void CTheScripts::CleanUpThisVehicle(CVehicle *vehicle) 0x486670
void CTheScripts::CleanUpThisVehicle(CVehicle* vehicle) {
    ((void(__cdecl *)(CVehicle*))0x486670)(vehicle);
}

// Converted from cdecl void CTheScripts::CleanUpThisObject(CObject *object) 0x4866C0
void CTheScripts::CleanUpThisObject(CObject* object) {
    ((void(__cdecl *)(CObject*))0x4866C0)(object);
}

// Converted from cdecl void CTheScripts::ClearSpaceForMissionEntity(CVector const& position,CEntity *entity) 0x486B00
void CTheScripts::ClearSpaceForMissionEntity(CVector const&position, CEntity* entity) {
    ((void(__cdecl *)(CVector const&, CEntity*))0x486B00)(position, entity);
}

// Converted from cdecl bool CTheScripts::IsPlayerOnAMission(void) 0x464D50
bool CTheScripts::IsPlayerOnAMission() {
    return ((bool(__cdecl *)())0x464D50)();
}