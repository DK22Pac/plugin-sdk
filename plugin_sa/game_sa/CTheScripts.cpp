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

static bool& DbgFlag = *(bool*)0x859CF8;
static unsigned short& NumberOfEntriesInSwitchTable=*(unsigned short*)0xA43F50; 
static void* SwitchDefaultAddress = (void*)0x0A43F54;     
static bool& SwitchDefaultExists = *(bool*)0xA43F58;
static int& ValueToCheckInSwitchStatement = *(int*)0xA43F5C;
static unsigned short& NumberOfEntriesStillToReadForSwitch = *(unsigned short*)0xA43F60;	  
static unsigned short& NumberOfScriptCheckpoints = *(unsigned short*)0xA44068;	               
static bool& bDrawSubtitlesBeforeFade = *(bool*)0xA44488;                    
static bool& bDrawOddJobTitleBeforeFade = *(bool*)0xA44489;           
static bool& bScriptHasFadedOut = *(bool*)0xA4448A;               
static bool& bAddNextMessageToPreviousBriefs = *(bool*)0xA4448B;   
static int& ForceRandomCarModel =*(int*)0xA4448C;	               
static bool& bDrawCrossHair = *(bool*)0xA44490;                    
static bool& bEnableCraneRelease = *(bool*)0xA44494;               
static bool& bEnableCraneLower = *(bool*)0xA44495;                 
static bool& bEnableCraneRaise = *(bool*)0xA44496;                 
static float& fCameraHeadingStepWhenPlayerIsAttached = *(float*)0xA44498;   
static float& fCameraHeadingWhenPlayerIsAttached = *(float*)0xA4449C;        
static bool& bDisplayHud = *(bool*)0xA444A0;	                               
static bool& HideAllFrontEndMapBlips = *(bool*)0xA444A1;                       
static bool& RadarShowBlipOnAllLevels = *(bool*)0xA444A2;                      
static unsigned char& RadarZoomValue = *(unsigned char*)0xA444A3;
static bool& bPlayerIsOffTheMap = *(bool*)0xA444A4;	                           
static char& RiotIntensity = *(char*)0xA444A5;    
static bool& bPlayerHasMetDebbieHarry = *(bool*)0xA444A6;       
static bool& bDisplayNonMiniGameHelpMessages = *(bool*)0xA444A7;     
static bool& bMiniGameInProgress = *(bool*)0xA444A8;                 
static int& ScriptPickupCycleIndex = *(int*)0xA444AC;	
static char& FailCurrentMission =*(char*)0xA444B0;	    
static bool& bAlreadyRunningAMissionScript = *(bool*)0xA444B1;	    
static int& LargestNumberOfMissionScriptLocalVariables = *(int*)0xA444B4;
static unsigned short& NumberOfExclusiveMissionScripts = *(unsigned short*)0xA444B8;   
static unsigned short& NumberOfMissionScripts = *(unsigned short*)0xA444BC;             
static unsigned int& LargestMissionScriptSize = *(unsigned int*)0xA444C0; 
static unsigned int& MainScriptSize=*(unsigned int*)0xA444C4;             
static bool& bUsingAMultiScriptFile = *(bool*)0xA447E8;            
static int& StoreVehicleIndex = *(int*)0xA447EC;
static bool& StoreVehicleWasRandom = *(bool*)0xA447F0;             
static unsigned short& CommandsExecuted = *(unsigned short*)0xA447F4;  
static unsigned short& ScriptsUpdated = *(unsigned short*)0xA447F8;    
static int* VehicleModelsBlockedByScript = (int*)0xA448F0;            // int VehicleModelsBlockedByScript[20]
static int* InvisibilitySettingArray = (int*)0xA449E0;               // int InvisibilitySettingArray[20]
static CVector* BuildingSwapArray = (CVector*)0xA44A30;              // CVector BuildingSwapArray[25]
static unsigned short& NumberOfIntroRectanglesThisFrame = *(unsigned short*)0xA44B5C;     
static unsigned short& MessageWidth = *(unsigned short*)0xA44B60;                         
static unsigned short& MessageCentre = *(unsigned short*)0xA44B64;                        
static bool& bUseMessageFormatting = *(bool*)0xA44B66;
static bool& UseTextCommands = *(bool*)0xA44B67;      
static unsigned short& NumberOfIntroTextLinesThisFrame = *(unsigned short*)0xA44B68;      
static unsigned short& NumberOfUsedObjects = *(unsigned short*)0xA44B6C;                  
static int& LastRandomPedId = *(int*)0xA476A4;            
static int& LastMissionPassedTime = *(int*)0xA476A8;      
static int& OnAMissionFlag = *(int*)0xA476AC;             
static tScriptVarValue* LocalVariablesForCurrentMission = (tScriptVarValue*)0xA48960;  // tScriptVar LocalVariablesForCurrentMission[1024]
static CRunningScript* ScriptsArray = (CRunningScript*)0xA8B430;       // CRunningScript ScriptsArray[96]
static unsigned short& NumberOfScriptSearchLights = *(unsigned short*)0xA90830;
static CMissionCleanup& MissionCleanUp = *(CMissionCleanup*)0xA90850;                    

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

void CTheScripts::HighlightImportantArea(unsigned int markerID, float x1, float y1, float x2, float y2, float z) {
    ((void(__cdecl *)(unsigned int, float, float, float, float, float))0x485E00)(markerID, x1, y1, x2, y2, z);
}