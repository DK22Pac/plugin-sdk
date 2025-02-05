/*
    Plugin-SDK (Grand Theft Auto 3) header file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/
#include "CTheScripts.h"

unsigned int MAX_SCRIPT_SPACE_SIZE = 163840;

tScriptParam (&CTheScripts::ScriptParams)[32] = *(tScriptParam(*)[32])0x6ED460;
unsigned char *CTheScripts::ScriptSpace = (unsigned char *)0x74B248;
unsigned int &CTheScripts::BaseBriefIdForContact = *(unsigned int *)0x880200;
unsigned short &CTheScripts::CommandsExecuted = *(unsigned short *)0x95CCA6;
unsigned char &CTheScripts::CountdownToMakePlayerUnsafe = *(unsigned char *)0x95CD51;
unsigned char &CTheScripts::DbgFlag = *(unsigned char *)0x95CD87;
unsigned char &CTheScripts::FailCurrentMission = *(unsigned char *)0x95CD41;
char *CTheScripts::IntroRectangles = (char *)0x72D109;
char *CTheScripts::IntroTextLines = (char *)0x70EA74;
int *CTheScripts::InvisibilitySettingArray = (int *)0x8620F0;
CMissionCleanup &CTheScripts::MissionCleanUp = *(CMissionCleanup *)0x8F2A24;
unsigned short &CTheScripts::NumScriptDebugLines = *(unsigned short *)0x95CC42;
unsigned short &CTheScripts::NumberOfIntroTextLinesThisFrame = *(unsigned short *)0x95CC88;
unsigned short &CTheScripts::NumberOfUsedObjects = *(unsigned short *)0x95CC72;
unsigned int &CTheScripts::OnAMissionFlag = *(unsigned int *)0x8F1B64;
unsigned int &CTheScripts::OnAMissionForContactFlag = *(unsigned int *)0x8622F0;
unsigned short &CTheScripts::ScriptSphereArray = *(unsigned short *)0x727D62;
unsigned short &CTheScripts::ScriptsUpdated = *(unsigned short *)0x95CC5E;
int &CTheScripts::StoreVehicleIndex = *(int *)0x8F5F3C;
unsigned char&CTheScripts::StoreVehicleWasRandom = *(unsigned char *)0x95CDBC;
CStuckCarCheck *CTheScripts::StuckCars = (CStuckCarCheck *)0x87C588;
CUpsideDownCarCheck *CTheScripts::UpsideDownCars = (CUpsideDownCarCheck *)0x6EE450;
char &CTheScripts::UseTextCommands = *(char *)0x95CD57;
bool &CTheScripts::bAlreadyRunningAMissionScript = *(bool *)0x95CDB3;
bool &CTheScripts::bUsingAMultiScriptFile = *(bool *)0x95CD55;
CRunningScript *&CTheScripts::pActiveScripts = *(CRunningScript **)0x8E2BF4;
CRunningScript *&CTheScripts::pIdleScripts = *(CRunningScript **)0x9430D4;

// Converted from cdecl void CTheScripts::Init(void) 0x438790 
void CTheScripts::Init() {
    plugin::Call<0x438790>();
}

// Converted from cdecl bool CTheScripts::IsPedStopped(CPed *ped) 0x454670 
bool CTheScripts::IsPedStopped(CPed* ped) {
    return plugin::CallAndReturn<bool, 0x454670, CPed*>(ped);
}

// Converted from cdecl bool CTheScripts::IsPlayerOnAMission(void) 0x439410 
bool CTheScripts::IsPlayerOnAMission() {
    return plugin::CallAndReturn<bool, 0x439410>();
}

// Converted from cdecl bool CTheScripts::IsPlayerStopped(CPlayerInfo *info) 0x4546C0 
bool CTheScripts::IsPlayerStopped(CPlayerInfo* info) {
    return plugin::CallAndReturn<bool, 0x4546C0, CPlayerInfo*>(info);
}

// Converted from cdecl bool CTheScripts::IsVehicleStopped(CVehicle *vehicle) 0x454770 
bool CTheScripts::IsVehicleStopped(CVehicle* vehicle) {
    return plugin::CallAndReturn<bool, 0x454770, CVehicle*>(vehicle);
}

// Converted from cdecl void CTheScripts::CleanUpThisPed(CPed *ped) 0x4547A0 
void CTheScripts::CleanUpThisPed(CPed* ped) {
    plugin::Call<0x4547A0, CPed*>(ped);
}

// Converted from cdecl void CTheScripts::CleanUpThisObject(CObject *object) 0x454910
void CTheScripts::CleanUpThisObject(CObject* object) {
    plugin::Call<0x454910, CObject*>(object);
}

// Converted from cdecl void CTheScripts::CleanUpThisVehicle(CVehicle *vehicle) 0x4548D0 
void CTheScripts::CleanUpThisVehicle(CVehicle* vehicle) {
    plugin::Call<0x4548D0, CVehicle*>(vehicle);
}

// Converted from cdecl void CTheScripts::ClearSpaceForMissionEntity(CVector const &position, CEntity *entity) 0x454060
void CTheScripts::ClearSpaceForMissionEntity(CVector const& position, CEntity* entity) {
    plugin::Call<0x454060, CVector const&, CEntity*>(position, entity);
}
