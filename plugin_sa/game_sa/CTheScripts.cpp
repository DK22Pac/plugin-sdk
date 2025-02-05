/*
Plugin-SDK (Grand Theft Auto San Andreas) source file
Authors: GTA Community. See more here
https://github.com/DK22Pac/plugin-sdk
Do not delete this comment block. Respect others' work!
*/
#include "CTheScripts.h"

PLUGIN_SOURCE_FILE

PLUGIN_VARIABLE int* ScriptParams = reinterpret_cast<int*>(GLOBAL_ADDRESS_BY_VERSION(0xA43C78, 0, 0, 0, 0, 0));

PLUGIN_VARIABLE bool &CTheScripts::DbgFlag = *reinterpret_cast<bool *>(GLOBAL_ADDRESS_BY_VERSION(0x859CF8, 0, 0, 0, 0, 0));
PLUGIN_VARIABLE tScriptSwitchCase *CTheScripts::SwitchJumpTable = reinterpret_cast<tScriptSwitchCase *>(GLOBAL_ADDRESS_BY_VERSION(0xA43CF8, 0, 0, 0, 0, 0));
PLUGIN_VARIABLE unsigned short &CTheScripts::NumberOfEntriesInSwitchTable = *reinterpret_cast<unsigned short *>(GLOBAL_ADDRESS_BY_VERSION(0xA43F50, 0, 0, 0, 0, 0));
PLUGIN_VARIABLE void *&CTheScripts::SwitchDefaultAddress = *reinterpret_cast<void **>(GLOBAL_ADDRESS_BY_VERSION(0xA43F54, 0, 0, 0, 0, 0));
PLUGIN_VARIABLE bool &CTheScripts::SwitchDefaultExists = *reinterpret_cast<bool *>(GLOBAL_ADDRESS_BY_VERSION(0xA43F58, 0, 0, 0, 0, 0));
PLUGIN_VARIABLE int &CTheScripts::ValueToCheckInSwitchStatement = *reinterpret_cast<int *>(GLOBAL_ADDRESS_BY_VERSION(0xA43F5C, 0, 0, 0, 0, 0));
PLUGIN_VARIABLE unsigned short &CTheScripts::NumberOfEntriesStillToReadForSwitch = *reinterpret_cast<unsigned short *>(GLOBAL_ADDRESS_BY_VERSION(0xA43F60, 0, 0, 0, 0, 0));
PLUGIN_VARIABLE tScriptSequence *CTheScripts::ScriptSequenceTaskArray = reinterpret_cast<tScriptSequence *>(GLOBAL_ADDRESS_BY_VERSION(0xA43F68, 0, 0, 0, 0, 0));
PLUGIN_VARIABLE unsigned short &CTheScripts::NumberOfScriptCheckpoints = *reinterpret_cast<unsigned short *>(GLOBAL_ADDRESS_BY_VERSION(0xA44068, 0, 0, 0, 0, 0));
PLUGIN_VARIABLE tScriptCheckpoint *CTheScripts::ScriptCheckpointArray = reinterpret_cast<tScriptCheckpoint *>(GLOBAL_ADDRESS_BY_VERSION(0xA44070, 0, 0, 0, 0, 0));
PLUGIN_VARIABLE tScriptEffectSystem *CTheScripts::ScriptEffectSystemArray = reinterpret_cast<tScriptEffectSystem *>(GLOBAL_ADDRESS_BY_VERSION(0xA44110, 0, 0, 0, 0, 0));
PLUGIN_VARIABLE short &CTheScripts::CardStackPosition = *reinterpret_cast<short *>(GLOBAL_ADDRESS_BY_VERSION(0xA44210, 0, 0, 0, 0, 0));
PLUGIN_VARIABLE short *CTheScripts::CardStack = reinterpret_cast<short *>(GLOBAL_ADDRESS_BY_VERSION(0xA44218, 0, 0, 0, 0, 0));
PLUGIN_VARIABLE bool &CTheScripts::bDrawSubtitlesBeforeFade = *reinterpret_cast<bool *>(GLOBAL_ADDRESS_BY_VERSION(0xA44488, 0, 0, 0, 0, 0));
PLUGIN_VARIABLE bool &CTheScripts::bDrawOddJobTitleBeforeFade = *reinterpret_cast<bool *>(GLOBAL_ADDRESS_BY_VERSION(0xA44489, 0, 0, 0, 0, 0));
PLUGIN_VARIABLE bool &CTheScripts::bScriptHasFadedOut = *reinterpret_cast<bool *>(GLOBAL_ADDRESS_BY_VERSION(0xA4448A, 0, 0, 0, 0, 0));
PLUGIN_VARIABLE bool &CTheScripts::bAddNextMessageToPreviousBriefs = *reinterpret_cast<bool *>(GLOBAL_ADDRESS_BY_VERSION(0xA4448B, 0, 0, 0, 0, 0));
PLUGIN_VARIABLE int &CTheScripts::ForceRandomCarModel = *reinterpret_cast<int *>(GLOBAL_ADDRESS_BY_VERSION(0xA4448C, 0, 0, 0, 0, 0));
PLUGIN_VARIABLE bool &CTheScripts::bDrawCrossHair = *reinterpret_cast<bool *>(GLOBAL_ADDRESS_BY_VERSION(0xA44490, 0, 0, 0, 0, 0));
PLUGIN_VARIABLE bool &CTheScripts::bEnableCraneRelease = *reinterpret_cast<bool *>(GLOBAL_ADDRESS_BY_VERSION(0xA44494, 0, 0, 0, 0, 0));
PLUGIN_VARIABLE bool &CTheScripts::bEnableCraneLower = *reinterpret_cast<bool *>(GLOBAL_ADDRESS_BY_VERSION(0xA44495, 0, 0, 0, 0, 0));
PLUGIN_VARIABLE bool &CTheScripts::bEnableCraneRaise = *reinterpret_cast<bool *>(GLOBAL_ADDRESS_BY_VERSION(0xA44496, 0, 0, 0, 0, 0));
PLUGIN_VARIABLE float &CTheScripts::fCameraHeadingStepWhenPlayerIsAttached = *reinterpret_cast<float *>(GLOBAL_ADDRESS_BY_VERSION(0xA44498, 0, 0, 0, 0, 0));
PLUGIN_VARIABLE float &CTheScripts::fCameraHeadingWhenPlayerIsAttached = *reinterpret_cast<float *>(GLOBAL_ADDRESS_BY_VERSION(0xA4449C, 0, 0, 0, 0, 0));
PLUGIN_VARIABLE bool &CTheScripts::bDisplayHud = *reinterpret_cast<bool *>(GLOBAL_ADDRESS_BY_VERSION(0xA444A0, 0, 0, 0, 0, 0));
PLUGIN_VARIABLE bool &CTheScripts::HideAllFrontEndMapBlips = *reinterpret_cast<bool *>(GLOBAL_ADDRESS_BY_VERSION(0xA444A1, 0, 0, 0, 0, 0));
PLUGIN_VARIABLE bool &CTheScripts::RadarShowBlipOnAllLevels = *reinterpret_cast<bool *>(GLOBAL_ADDRESS_BY_VERSION(0xA444A2, 0, 0, 0, 0, 0));
PLUGIN_VARIABLE unsigned char &CTheScripts::RadarZoomValue = *reinterpret_cast<unsigned char *>(GLOBAL_ADDRESS_BY_VERSION(0xA444A3, 0, 0, 0, 0, 0));
PLUGIN_VARIABLE bool &CTheScripts::bPlayerIsOffTheMap = *reinterpret_cast<bool *>(GLOBAL_ADDRESS_BY_VERSION(0xA444A4, 0, 0, 0, 0, 0));
PLUGIN_VARIABLE char &CTheScripts::RiotIntensity = *reinterpret_cast<char *>(GLOBAL_ADDRESS_BY_VERSION(0xA444A5, 0, 0, 0, 0, 0));
PLUGIN_VARIABLE bool &CTheScripts::bPlayerHasMetDebbieHarry = *reinterpret_cast<bool *>(GLOBAL_ADDRESS_BY_VERSION(0xA444A6, 0, 0, 0, 0, 0));
PLUGIN_VARIABLE bool &CTheScripts::bDisplayNonMiniGameHelpMessages = *reinterpret_cast<bool *>(GLOBAL_ADDRESS_BY_VERSION(0xA444A7, 0, 0, 0, 0, 0));
PLUGIN_VARIABLE bool &CTheScripts::bMiniGameInProgress = *reinterpret_cast<bool *>(GLOBAL_ADDRESS_BY_VERSION(0xA444A8, 0, 0, 0, 0, 0));
PLUGIN_VARIABLE int &CTheScripts::ScriptPickupCycleIndex = *reinterpret_cast<int *>(GLOBAL_ADDRESS_BY_VERSION(0xA444AC, 0, 0, 0, 0, 0));
PLUGIN_VARIABLE char &CTheScripts::FailCurrentMission = *reinterpret_cast<char *>(GLOBAL_ADDRESS_BY_VERSION(0xA444B0, 0, 0, 0, 0, 0));
PLUGIN_VARIABLE bool &CTheScripts::bAlreadyRunningAMissionScript = *reinterpret_cast<bool *>(GLOBAL_ADDRESS_BY_VERSION(0xA444B1, 0, 0, 0, 0, 0));
PLUGIN_VARIABLE unsigned int &CTheScripts::LargestNumberOfMissionScriptLocalVariables = *reinterpret_cast<unsigned int *>(GLOBAL_ADDRESS_BY_VERSION(0xA444B4, 0, 0, 0, 0, 0));
PLUGIN_VARIABLE unsigned short &CTheScripts::NumberOfExclusiveMissionScripts = *reinterpret_cast<unsigned short *>(GLOBAL_ADDRESS_BY_VERSION(0xA444B8, 0, 0, 0, 0, 0));
PLUGIN_VARIABLE unsigned short &CTheScripts::NumberOfMissionScripts = *reinterpret_cast<unsigned short *>(GLOBAL_ADDRESS_BY_VERSION(0xA444BC, 0, 0, 0, 0, 0));
PLUGIN_VARIABLE unsigned int &CTheScripts::LargestMissionScriptSize = *reinterpret_cast<unsigned int *>(GLOBAL_ADDRESS_BY_VERSION(0xA444C0, 0, 0, 0, 0, 0));
PLUGIN_VARIABLE unsigned int &CTheScripts::MainScriptSize = *reinterpret_cast<unsigned int *>(GLOBAL_ADDRESS_BY_VERSION(0xA444C4, 0, 0, 0, 0, 0));
PLUGIN_VARIABLE char *CTheScripts::MultiScriptArray = reinterpret_cast<char *>(GLOBAL_ADDRESS_BY_VERSION(0xA444C8, 0, 0, 0, 0, 0));
PLUGIN_VARIABLE bool &CTheScripts::bUsingAMultiScriptFile = *reinterpret_cast<bool *>(GLOBAL_ADDRESS_BY_VERSION(0xA447E8, 0, 0, 0, 0, 0));
PLUGIN_VARIABLE int &CTheScripts::StoreVehicleIndex = *reinterpret_cast<int *>(GLOBAL_ADDRESS_BY_VERSION(0xA447EC, 0, 0, 0, 0, 0));
PLUGIN_VARIABLE bool &CTheScripts::StoreVehicleWasRandom = *reinterpret_cast<bool *>(GLOBAL_ADDRESS_BY_VERSION(0xA447F0, 0, 0, 0, 0, 0));
PLUGIN_VARIABLE unsigned short &CTheScripts::CommandsExecuted = *reinterpret_cast<unsigned short *>(GLOBAL_ADDRESS_BY_VERSION(0xA447F4, 0, 0, 0, 0, 0));
PLUGIN_VARIABLE unsigned short &CTheScripts::ScriptsUpdated = *reinterpret_cast<unsigned short *>(GLOBAL_ADDRESS_BY_VERSION(0xA447F8, 0, 0, 0, 0, 0));
PLUGIN_VARIABLE int *CTheScripts::ScriptConnectLodsObjects = reinterpret_cast<int *>(GLOBAL_ADDRESS_BY_VERSION(0xA44800, 0, 0, 0, 0, 0));
PLUGIN_VARIABLE tScriptAttachedAnimGroup *CTheScripts::ScriptAttachedAnimGroups = reinterpret_cast<tScriptAttachedAnimGroup *>(GLOBAL_ADDRESS_BY_VERSION(0xA44850, 0, 0, 0, 0, 0));
PLUGIN_VARIABLE int *CTheScripts::VehicleModelsBlockedByScript = reinterpret_cast<int *>(GLOBAL_ADDRESS_BY_VERSION(0xA448F0, 0, 0, 0, 0, 0));
PLUGIN_VARIABLE int *CTheScripts::SuppressedVehicleModels = reinterpret_cast<int *>(GLOBAL_ADDRESS_BY_VERSION(0xA44940, 0, 0, 0, 0, 0));
PLUGIN_VARIABLE CEntity **CTheScripts::InvisibilitySettingArray = reinterpret_cast<CEntity **>(GLOBAL_ADDRESS_BY_VERSION(0xA449E0, 0, 0, 0, 0, 0));
PLUGIN_VARIABLE tBuildingSwap *CTheScripts::BuildingSwapArray = reinterpret_cast<tBuildingSwap *>(GLOBAL_ADDRESS_BY_VERSION(0xA44A30, 0, 0, 0, 0, 0));
PLUGIN_VARIABLE unsigned short &CTheScripts::NumberOfIntroRectanglesThisFrame = *reinterpret_cast<unsigned short *>(GLOBAL_ADDRESS_BY_VERSION(0xA44B5C, 0, 0, 0, 0, 0));
PLUGIN_VARIABLE unsigned short &CTheScripts::MessageWidth = *reinterpret_cast<unsigned short *>(GLOBAL_ADDRESS_BY_VERSION(0xA44B60, 0, 0, 0, 0, 0));
PLUGIN_VARIABLE unsigned short &CTheScripts::MessageCentre = *reinterpret_cast<unsigned short *>(GLOBAL_ADDRESS_BY_VERSION(0xA44B64, 0, 0, 0, 0, 0));
PLUGIN_VARIABLE bool &CTheScripts::bUseMessageFormatting = *reinterpret_cast<bool *>(GLOBAL_ADDRESS_BY_VERSION(0xA44B66, 0, 0, 0, 0, 0));
PLUGIN_VARIABLE bool &CTheScripts::UseTextCommands = *reinterpret_cast<bool *>(GLOBAL_ADDRESS_BY_VERSION(0xA44B67, 0, 0, 0, 0, 0));
PLUGIN_VARIABLE unsigned short &CTheScripts::NumberOfIntroTextLinesThisFrame = *reinterpret_cast<unsigned short *>(GLOBAL_ADDRESS_BY_VERSION(0xA44B68, 0, 0, 0, 0, 0));
PLUGIN_VARIABLE unsigned short &CTheScripts::NumberOfUsedObjects = *reinterpret_cast<unsigned short *>(GLOBAL_ADDRESS_BY_VERSION(0xA44B6C, 0, 0, 0, 0, 0));
PLUGIN_VARIABLE tUsedObject *CTheScripts::UsedObjectArray = reinterpret_cast<tUsedObject *>(GLOBAL_ADDRESS_BY_VERSION(0xA44B70, 0, 0, 0, 0, 0));
PLUGIN_VARIABLE int &CTheScripts::LastRandomPedId = *reinterpret_cast<int *>(GLOBAL_ADDRESS_BY_VERSION(0xA476A4, 0, 0, 0, 0, 0));
PLUGIN_VARIABLE unsigned int &CTheScripts::LastMissionPassedTime = *reinterpret_cast<unsigned int *>(GLOBAL_ADDRESS_BY_VERSION(0xA476A8, 0, 0, 0, 0, 0));
PLUGIN_VARIABLE int &CTheScripts::OnAMissionFlag = *reinterpret_cast<int *>(GLOBAL_ADDRESS_BY_VERSION(0xA476AC, 0, 0, 0, 0, 0));
PLUGIN_VARIABLE CEntity *&CTheScripts::EntitiesWaitingForScriptBrain = *reinterpret_cast<CEntity **>(GLOBAL_ADDRESS_BY_VERSION(0xA476B0, 0, 0, 0, 0, 0));
PLUGIN_VARIABLE CStreamedScripts &CTheScripts::StreamedScripts = *reinterpret_cast<CStreamedScripts *>(GLOBAL_ADDRESS_BY_VERSION(0xA47B60, 0, 0, 0, 0, 0));
PLUGIN_VARIABLE CScriptResourceManager &CTheScripts::ScriptResourceManager = *reinterpret_cast<CScriptResourceManager *>(GLOBAL_ADDRESS_BY_VERSION(0xA485A8, 0, 0, 0, 0, 0));
PLUGIN_VARIABLE CUpsideDownCarCheck &CTheScripts::UpsideDownCars = *reinterpret_cast<CUpsideDownCarCheck *>(GLOBAL_ADDRESS_BY_VERSION(0xA4892C, 0, 0, 0, 0, 0));
PLUGIN_VARIABLE tScriptParam *CTheScripts::LocalVariablesForCurrentMission = reinterpret_cast<tScriptParam *>(GLOBAL_ADDRESS_BY_VERSION(0xA48960, 0, 0, 0, 0, 0));
PLUGIN_VARIABLE char *CTheScripts::ScriptSpace = reinterpret_cast<char *>(GLOBAL_ADDRESS_BY_VERSION(0xA49960, 0, 0, 0, 0, 0));
PLUGIN_VARIABLE char *CTheScripts::MissionBlock = reinterpret_cast<char *>(GLOBAL_ADDRESS_BY_VERSION(0xA7A6A0, 0, 0, 0, 0, 0));
PLUGIN_VARIABLE CRunningScript *&CTheScripts::pIdleScripts = *reinterpret_cast<CRunningScript **>(GLOBAL_ADDRESS_BY_VERSION(0xA8B428, 0, 0, 0, 0, 0));
PLUGIN_VARIABLE CRunningScript *&CTheScripts::pActiveScripts = *reinterpret_cast<CRunningScript **>(GLOBAL_ADDRESS_BY_VERSION(0xA8B42C, 0, 0, 0, 0, 0));
PLUGIN_VARIABLE CRunningScript *CTheScripts::ScriptsArray = reinterpret_cast<CRunningScript *>(GLOBAL_ADDRESS_BY_VERSION(0xA8B430, 0, 0, 0, 0, 0));
PLUGIN_VARIABLE unsigned short &CTheScripts::NumberOfScriptSearchLights = *reinterpret_cast<unsigned short *>(GLOBAL_ADDRESS_BY_VERSION(0xA90830, 0, 0, 0, 0, 0));
PLUGIN_VARIABLE CMissionCleanup &CTheScripts::MissionCleanUp = *reinterpret_cast<CMissionCleanup *>(GLOBAL_ADDRESS_BY_VERSION(0xA90850, 0, 0, 0, 0, 0));
PLUGIN_VARIABLE CStuckCarCheck &CTheScripts::StuckCars = *reinterpret_cast<CStuckCarCheck *>(GLOBAL_ADDRESS_BY_VERSION(0xA90AB0, 0, 0, 0, 0, 0));
PLUGIN_VARIABLE CScriptsForBrains &CTheScripts::ScriptsForBrains = *reinterpret_cast<CScriptsForBrains *>(GLOBAL_ADDRESS_BY_VERSION(0xA90CF0, 0, 0, 0, 0, 0));
PLUGIN_VARIABLE tScriptSphere *CTheScripts::ScriptSphereArray = reinterpret_cast<tScriptSphere *>(GLOBAL_ADDRESS_BY_VERSION(0xA91268, 0, 0, 0, 0, 0));
PLUGIN_VARIABLE tScriptText *CTheScripts::IntroTextLines = reinterpret_cast<tScriptText *>(GLOBAL_ADDRESS_BY_VERSION(0xA913E8, 0, 0, 0, 0, 0));
PLUGIN_VARIABLE tScriptRectangle *CTheScripts::IntroRectangles = reinterpret_cast<tScriptRectangle *>(GLOBAL_ADDRESS_BY_VERSION(0xA92D68, 0, 0, 0, 0, 0));
PLUGIN_VARIABLE CSprite2d *CTheScripts::ScriptSprites = reinterpret_cast<CSprite2d *>(GLOBAL_ADDRESS_BY_VERSION(0xA94B68, 0, 0, 0, 0, 0));
PLUGIN_VARIABLE tScriptSearchlight *CTheScripts::ScriptSearchLightArray = reinterpret_cast<tScriptSearchlight *>(GLOBAL_ADDRESS_BY_VERSION(0xA94D68, 0, 0, 0, 0, 0));

int addrof(CTheScripts::AddScriptCheckpoint) = ADDRESS_BY_VERSION(0x4935A0, 0, 0, 0, 0, 0);
int gaddrof(CTheScripts::AddScriptCheckpoint) = GLOBAL_ADDRESS_BY_VERSION(0x4935A0, 0, 0, 0, 0, 0);

int CTheScripts::AddScriptCheckpoint(float at_X, float at_Y, float at_Z, float PointTo_X, float PointTo_Y, float PointTo_Z, float radius, int type) {
    return plugin::CallAndReturnDynGlobal<int, float, float, float, float, float, float, float, int>(gaddrof(CTheScripts::AddScriptCheckpoint), at_X, at_Y, at_Z, PointTo_X, PointTo_Y, PointTo_Z, radius, type);
}

int addrof(CTheScripts::AddScriptEffectSystem) = ADDRESS_BY_VERSION(0x492F90, 0, 0, 0, 0, 0);
int gaddrof(CTheScripts::AddScriptEffectSystem) = GLOBAL_ADDRESS_BY_VERSION(0x492F90, 0, 0, 0, 0, 0);

int CTheScripts::AddScriptEffectSystem(FxSystem_c *a1) {
    return plugin::CallAndReturnDynGlobal<int, FxSystem_c *>(gaddrof(CTheScripts::AddScriptEffectSystem), a1);
}

int addrof(CTheScripts::AddScriptSearchLight) = ADDRESS_BY_VERSION(0x493000, 0, 0, 0, 0, 0);
int gaddrof(CTheScripts::AddScriptSearchLight) = GLOBAL_ADDRESS_BY_VERSION(0x493000, 0, 0, 0, 0, 0);

int CTheScripts::AddScriptSearchLight(float startX, float startY, float startZ, CEntity *entity, float targetX, float targetY, float targetZ, float targetRadius, float baseRadius) {
    return plugin::CallAndReturnDynGlobal<int, float, float, float, CEntity *, float, float, float, float, float>(gaddrof(CTheScripts::AddScriptSearchLight), startX, startY, startZ, entity, targetX, targetY, targetZ, targetRadius, baseRadius);
}

int addrof(CTheScripts::AddScriptSphere) = ADDRESS_BY_VERSION(0x483B30, 0, 0, 0, 0, 0);
int gaddrof(CTheScripts::AddScriptSphere) = GLOBAL_ADDRESS_BY_VERSION(0x483B30, 0, 0, 0, 0, 0);

unsigned int CTheScripts::AddScriptSphere(unsigned int id, CVector posn, float radius) {
    return plugin::CallAndReturnDynGlobal<unsigned int, unsigned int, CVector, float>(gaddrof(CTheScripts::AddScriptSphere), id, posn, radius);
}

int addrof(CTheScripts::AddToBuildingSwapArray) = ADDRESS_BY_VERSION(0x481140, 0, 0, 0, 0, 0);
int gaddrof(CTheScripts::AddToBuildingSwapArray) = GLOBAL_ADDRESS_BY_VERSION(0x481140, 0, 0, 0, 0, 0);

void CTheScripts::AddToBuildingSwapArray(CBuilding *a1, int newModelId, int oldModelId) {
    plugin::CallDynGlobal<CBuilding *, int, int>(gaddrof(CTheScripts::AddToBuildingSwapArray), a1, newModelId, oldModelId);
}

int addrof(CTheScripts::AddToInvisibilitySwapArray) = ADDRESS_BY_VERSION(0x481200, 0, 0, 0, 0, 0);
int gaddrof(CTheScripts::AddToInvisibilitySwapArray) = GLOBAL_ADDRESS_BY_VERSION(0x481200, 0, 0, 0, 0, 0);

void CTheScripts::AddToInvisibilitySwapArray(CEntity *a2, bool bVisible) {
    plugin::CallDynGlobal<CEntity *, bool>(gaddrof(CTheScripts::AddToInvisibilitySwapArray), a2, bVisible);
}

int addrof(CTheScripts::AddToListOfConnectedLodObjects) = ADDRESS_BY_VERSION(0x470980, 0, 0, 0, 0, 0);
int gaddrof(CTheScripts::AddToListOfConnectedLodObjects) = GLOBAL_ADDRESS_BY_VERSION(0x470980, 0, 0, 0, 0, 0);

void CTheScripts::AddToListOfConnectedLodObjects(CObject *pObject1, CObject *pObject2) {
    plugin::CallDynGlobal<CObject *, CObject *>(gaddrof(CTheScripts::AddToListOfConnectedLodObjects), pObject1, pObject2);
}

int addrof(CTheScripts::AddToListOfSpecialAnimGroupsAttachedToCharModels) = ADDRESS_BY_VERSION(0x474750, 0, 0, 0, 0, 0);
int gaddrof(CTheScripts::AddToListOfSpecialAnimGroupsAttachedToCharModels) = GLOBAL_ADDRESS_BY_VERSION(0x474750, 0, 0, 0, 0, 0);

void CTheScripts::AddToListOfSpecialAnimGroupsAttachedToCharModels(int modelid, char *ifpName) {
    plugin::CallDynGlobal<int, char *>(gaddrof(CTheScripts::AddToListOfSpecialAnimGroupsAttachedToCharModels), modelid, ifpName);
}

int addrof(CTheScripts::AddToSwitchJumpTable) = ADDRESS_BY_VERSION(0x470390, 0, 0, 0, 0, 0);
int gaddrof(CTheScripts::AddToSwitchJumpTable) = GLOBAL_ADDRESS_BY_VERSION(0x470390, 0, 0, 0, 0, 0);

double CTheScripts::AddToSwitchJumpTable(int switchValue, int switchLabelLocalAddress) {
    return plugin::CallAndReturnDynGlobal<double, int, int>(gaddrof(CTheScripts::AddToSwitchJumpTable), switchValue, switchLabelLocalAddress);
}

int addrof(CTheScripts::AddToVehicleModelsBlockedByScript) = ADDRESS_BY_VERSION(0x46B200, 0, 0, 0, 0, 0);
int gaddrof(CTheScripts::AddToVehicleModelsBlockedByScript) = GLOBAL_ADDRESS_BY_VERSION(0x46B200, 0, 0, 0, 0, 0);

void CTheScripts::AddToVehicleModelsBlockedByScript(int modelindex) {
    plugin::CallDynGlobal<int>(gaddrof(CTheScripts::AddToVehicleModelsBlockedByScript), modelindex);
}

int addrof(CTheScripts::AddToWaitingForScriptBrainArray) = ADDRESS_BY_VERSION(0x46AB60, 0, 0, 0, 0, 0);
int gaddrof(CTheScripts::AddToWaitingForScriptBrainArray) = GLOBAL_ADDRESS_BY_VERSION(0x46AB60, 0, 0, 0, 0, 0);

void CTheScripts::AddToWaitingForScriptBrainArray(CEntity *pEntity, short arg2) {
    plugin::CallDynGlobal<CEntity *, short>(gaddrof(CTheScripts::AddToWaitingForScriptBrainArray), pEntity, arg2);
}

int addrof(CTheScripts::AttachSearchlightToSearchlightObject) = ADDRESS_BY_VERSION(0x4934F0, 0, 0, 0, 0, 0);
int gaddrof(CTheScripts::AttachSearchlightToSearchlightObject) = GLOBAL_ADDRESS_BY_VERSION(0x4934F0, 0, 0, 0, 0, 0);

void CTheScripts::AttachSearchlightToSearchlightObject(int searchlightid, CObject *tower, CObject *housing, CObject *bulb, float offsetX, float offsetY, float offsetZ) {
    plugin::CallDynGlobal<int, CObject *, CObject *, CObject *, float, float, float>(gaddrof(CTheScripts::AttachSearchlightToSearchlightObject), searchlightid, tower, housing, bulb, offsetX, offsetY, offsetZ);
}

int addrof(CTheScripts::CheckStreamedScriptVersion) = ADDRESS_BY_VERSION(0x464FF0, 0, 0, 0, 0, 0);
int gaddrof(CTheScripts::CheckStreamedScriptVersion) = GLOBAL_ADDRESS_BY_VERSION(0x464FF0, 0, 0, 0, 0, 0);

char CTheScripts::CheckStreamedScriptVersion(RwStream *arg1, char *arg2) {
    return plugin::CallAndReturnDynGlobal<char, RwStream *, char *>(gaddrof(CTheScripts::CheckStreamedScriptVersion), arg1, arg2);
}

int addrof(CTheScripts::CleanUpThisObject) = ADDRESS_BY_VERSION(0x4866C0, 0, 0, 0, 0, 0);
int gaddrof(CTheScripts::CleanUpThisObject) = GLOBAL_ADDRESS_BY_VERSION(0x4866C0, 0, 0, 0, 0, 0);

void CTheScripts::CleanUpThisObject(CObject *pObject) {
    plugin::CallDynGlobal<CObject *>(gaddrof(CTheScripts::CleanUpThisObject), pObject);
}

int addrof(CTheScripts::CleanUpThisPed) = ADDRESS_BY_VERSION(0x486300, 0, 0, 0, 0, 0);
int gaddrof(CTheScripts::CleanUpThisPed) = GLOBAL_ADDRESS_BY_VERSION(0x486300, 0, 0, 0, 0, 0);

void CTheScripts::CleanUpThisPed(CPed *ped) {
    plugin::CallDynGlobal<CPed *>(gaddrof(CTheScripts::CleanUpThisPed), ped);
}

int addrof(CTheScripts::CleanUpThisVehicle) = ADDRESS_BY_VERSION(0x486670, 0, 0, 0, 0, 0);
int gaddrof(CTheScripts::CleanUpThisVehicle) = GLOBAL_ADDRESS_BY_VERSION(0x486670, 0, 0, 0, 0, 0);

void CTheScripts::CleanUpThisVehicle(CVehicle *pVehicle) {
    plugin::CallDynGlobal<CVehicle *>(gaddrof(CTheScripts::CleanUpThisVehicle), pVehicle);
}

int addrof(CTheScripts::ClearAllSuppressedCarModels) = ADDRESS_BY_VERSION(0x46A7C0, 0, 0, 0, 0, 0);
int gaddrof(CTheScripts::ClearAllSuppressedCarModels) = GLOBAL_ADDRESS_BY_VERSION(0x46A7C0, 0, 0, 0, 0, 0);

void CTheScripts::ClearAllSuppressedCarModels() {
    plugin::CallDynGlobal(gaddrof(CTheScripts::ClearAllSuppressedCarModels));
}

int addrof(CTheScripts::ClearAllVehicleModelsBlockedByScript) = ADDRESS_BY_VERSION(0x46A840, 0, 0, 0, 0, 0);
int gaddrof(CTheScripts::ClearAllVehicleModelsBlockedByScript) = GLOBAL_ADDRESS_BY_VERSION(0x46A840, 0, 0, 0, 0, 0);

void CTheScripts::ClearAllVehicleModelsBlockedByScript() {
    plugin::CallDynGlobal(gaddrof(CTheScripts::ClearAllVehicleModelsBlockedByScript));
}

int addrof(CTheScripts::ClearSpaceForMissionEntity) = ADDRESS_BY_VERSION(0x486B00, 0, 0, 0, 0, 0);
int gaddrof(CTheScripts::ClearSpaceForMissionEntity) = GLOBAL_ADDRESS_BY_VERSION(0x486B00, 0, 0, 0, 0, 0);

void CTheScripts::ClearSpaceForMissionEntity(CVector const &pos, CEntity *pEntity) {
    plugin::CallDynGlobal<CVector const &, CEntity *>(gaddrof(CTheScripts::ClearSpaceForMissionEntity), pos, pEntity);
}

int addrof(CTheScripts::DoScriptSetupAfterPoolsHaveLoaded) = ADDRESS_BY_VERSION(0x5D3390, 0, 0, 0, 0, 0);
int gaddrof(CTheScripts::DoScriptSetupAfterPoolsHaveLoaded) = GLOBAL_ADDRESS_BY_VERSION(0x5D3390, 0, 0, 0, 0, 0);

void CTheScripts::DoScriptSetupAfterPoolsHaveLoaded() {
    plugin::CallDynGlobal(gaddrof(CTheScripts::DoScriptSetupAfterPoolsHaveLoaded));
}

int addrof(CTheScripts::DrawDebugAngledSquare) = ADDRESS_BY_VERSION(0x486990, 0, 0, 0, 0, 0);
int gaddrof(CTheScripts::DrawDebugAngledSquare) = GLOBAL_ADDRESS_BY_VERSION(0x486990, 0, 0, 0, 0, 0);

void CTheScripts::DrawDebugAngledSquare(float x1, float y1, float x2, float y2, float x3, float y3, float x4, float y4) {
    plugin::CallDynGlobal<float, float, float, float, float, float, float, float>(gaddrof(CTheScripts::DrawDebugAngledSquare), x1, y1, x2, y2, x3, y3, x4, y4);
}

int addrof(CTheScripts::DrawDebugCube) = ADDRESS_BY_VERSION(0x486840, 0, 0, 0, 0, 0);
int gaddrof(CTheScripts::DrawDebugCube) = GLOBAL_ADDRESS_BY_VERSION(0x486840, 0, 0, 0, 0, 0);

void CTheScripts::DrawDebugCube(float x1, float y1, float x2, float y2) {
    plugin::CallDynGlobal<float, float, float, float>(gaddrof(CTheScripts::DrawDebugCube), x1, y1, x2, y2);
}

int addrof(CTheScripts::DrawScriptSpheres) = ADDRESS_BY_VERSION(0x4810E0, 0, 0, 0, 0, 0);
int gaddrof(CTheScripts::DrawScriptSpheres) = GLOBAL_ADDRESS_BY_VERSION(0x4810E0, 0, 0, 0, 0, 0);

void CTheScripts::DrawScriptSpheres() {
    plugin::CallDynGlobal(gaddrof(CTheScripts::DrawScriptSpheres));
}

int addrof(CTheScripts::DrawScriptSpritesAndRectangles) = ADDRESS_BY_VERSION(0x464980, 0, 0, 0, 0, 0);
int gaddrof(CTheScripts::DrawScriptSpritesAndRectangles) = GLOBAL_ADDRESS_BY_VERSION(0x464980, 0, 0, 0, 0, 0);

void CTheScripts::DrawScriptSpritesAndRectangles(char bDrawBeforeFade) {
    plugin::CallDynGlobal<char>(gaddrof(CTheScripts::DrawScriptSpritesAndRectangles), bDrawBeforeFade);
}

int addrof(CTheScripts::GetActualScriptThingIndex) = ADDRESS_BY_VERSION(0x4839A0, 0, 0, 0, 0, 0);
int gaddrof(CTheScripts::GetActualScriptThingIndex) = GLOBAL_ADDRESS_BY_VERSION(0x4839A0, 0, 0, 0, 0, 0);

signed int CTheScripts::GetActualScriptThingIndex(int index, unsigned char type) {
    return plugin::CallAndReturnDynGlobal<signed int, int, unsigned char>(gaddrof(CTheScripts::GetActualScriptThingIndex), index, type);
}

int addrof(CTheScripts::GetNewUniqueScriptThingIndex) = ADDRESS_BY_VERSION(0x483720, 0, 0, 0, 0, 0);
int gaddrof(CTheScripts::GetNewUniqueScriptThingIndex) = GLOBAL_ADDRESS_BY_VERSION(0x483720, 0, 0, 0, 0, 0);

unsigned int CTheScripts::GetNewUniqueScriptThingIndex(unsigned int index, char type) {
    return plugin::CallAndReturnDynGlobal<unsigned int, unsigned int, char>(gaddrof(CTheScripts::GetNewUniqueScriptThingIndex), index, type);
}

int addrof(CTheScripts::GetScriptIndexFromPointer) = ADDRESS_BY_VERSION(0x464D20, 0, 0, 0, 0, 0);
int gaddrof(CTheScripts::GetScriptIndexFromPointer) = GLOBAL_ADDRESS_BY_VERSION(0x464D20, 0, 0, 0, 0, 0);

int CTheScripts::GetScriptIndexFromPointer(CRunningScript *thread) {
    return plugin::CallAndReturnDynGlobal<int, CRunningScript *>(gaddrof(CTheScripts::GetScriptIndexFromPointer), thread);
}

int addrof(CTheScripts::GetUniqueScriptThingIndex) = ADDRESS_BY_VERSION(0x4810C0, 0, 0, 0, 0, 0);
int gaddrof(CTheScripts::GetUniqueScriptThingIndex) = GLOBAL_ADDRESS_BY_VERSION(0x4810C0, 0, 0, 0, 0, 0);

unsigned int CTheScripts::GetUniqueScriptThingIndex(int playergroup, unsigned char type) {
    return plugin::CallAndReturnDynGlobal<unsigned int, int, unsigned char>(gaddrof(CTheScripts::GetUniqueScriptThingIndex), playergroup, type);
}

int addrof(CTheScripts::HasVehicleModelBeenBlockedByScript) = ADDRESS_BY_VERSION(0x46A890, 0, 0, 0, 0, 0);
int gaddrof(CTheScripts::HasVehicleModelBeenBlockedByScript) = GLOBAL_ADDRESS_BY_VERSION(0x46A890, 0, 0, 0, 0, 0);

bool CTheScripts::HasVehicleModelBeenBlockedByScript(int modelindex) {
    return plugin::CallAndReturnDynGlobal<bool, int>(gaddrof(CTheScripts::HasVehicleModelBeenBlockedByScript), modelindex);
}

int addrof(CTheScripts::HighlightImportantAngledArea) = ADDRESS_BY_VERSION(0x485EF0, 0, 0, 0, 0, 0);
int gaddrof(CTheScripts::HighlightImportantAngledArea) = GLOBAL_ADDRESS_BY_VERSION(0x485EF0, 0, 0, 0, 0, 0);

void CTheScripts::HighlightImportantAngledArea(unsigned int markerid, float from_X, float from_Y, float to_X, float to_Y, float angledTo_X, float angledTo_Y, float angledFrom_X, float angledFrom_Y, float height) {
    plugin::CallDynGlobal<unsigned int, float, float, float, float, float, float, float, float, float>(gaddrof(CTheScripts::HighlightImportantAngledArea), markerid, from_X, from_Y, to_X, to_Y, angledTo_X, angledTo_Y, angledFrom_X, angledFrom_Y, height);
}

int addrof(CTheScripts::HighlightImportantArea) = ADDRESS_BY_VERSION(0x485E00, 0, 0, 0, 0, 0);
int gaddrof(CTheScripts::HighlightImportantArea) = GLOBAL_ADDRESS_BY_VERSION(0x485E00, 0, 0, 0, 0, 0);

void CTheScripts::HighlightImportantArea(int markerid, float from_X, float from_Y, float to_X, float to_Y, float height) {
    plugin::CallDynGlobal<int, float, float, float, float, float>(gaddrof(CTheScripts::HighlightImportantArea), markerid, from_X, from_Y, to_X, to_Y, height);
}

int addrof(CTheScripts::Init) = ADDRESS_BY_VERSION(0x468D50, 0, 0, 0, 0, 0);
int gaddrof(CTheScripts::Init) = GLOBAL_ADDRESS_BY_VERSION(0x468D50, 0, 0, 0, 0, 0);

void CTheScripts::Init() {
    plugin::CallDynGlobal(gaddrof(CTheScripts::Init));
}

int addrof(CTheScripts::InitialiseAllConnectLodObjects) = ADDRESS_BY_VERSION(0x470960, 0, 0, 0, 0, 0);
int gaddrof(CTheScripts::InitialiseAllConnectLodObjects) = GLOBAL_ADDRESS_BY_VERSION(0x470960, 0, 0, 0, 0, 0);

void CTheScripts::InitialiseAllConnectLodObjects() {
    plugin::CallDynGlobal(gaddrof(CTheScripts::InitialiseAllConnectLodObjects));
}

int addrof(CTheScripts::InitialiseConnectLodObjects) = ADDRESS_BY_VERSION(0x470940, 0, 0, 0, 0, 0);
int gaddrof(CTheScripts::InitialiseConnectLodObjects) = GLOBAL_ADDRESS_BY_VERSION(0x470940, 0, 0, 0, 0, 0);

void CTheScripts::InitialiseConnectLodObjects(unsigned short a1) {
    plugin::CallDynGlobal<unsigned short>(gaddrof(CTheScripts::InitialiseConnectLodObjects), a1);
}

int addrof(CTheScripts::InitialiseSpecialAnimGroup) = ADDRESS_BY_VERSION(0x474710, 0, 0, 0, 0, 0);
int gaddrof(CTheScripts::InitialiseSpecialAnimGroup) = GLOBAL_ADDRESS_BY_VERSION(0x474710, 0, 0, 0, 0, 0);

void CTheScripts::InitialiseSpecialAnimGroup(unsigned short a1) {
    plugin::CallDynGlobal<unsigned short>(gaddrof(CTheScripts::InitialiseSpecialAnimGroup), a1);
}

int addrof(CTheScripts::InitialiseSpecialAnimGroupsAttachedToCharModels) = ADDRESS_BY_VERSION(0x474730, 0, 0, 0, 0, 0);
int gaddrof(CTheScripts::InitialiseSpecialAnimGroupsAttachedToCharModels) = GLOBAL_ADDRESS_BY_VERSION(0x474730, 0, 0, 0, 0, 0);

void CTheScripts::InitialiseSpecialAnimGroupsAttachedToCharModels() {
    plugin::CallDynGlobal(gaddrof(CTheScripts::InitialiseSpecialAnimGroupsAttachedToCharModels));
}

int addrof(CTheScripts::IsEntityWithinAnySearchLight) = ADDRESS_BY_VERSION(0x493960, 0, 0, 0, 0, 0);
int gaddrof(CTheScripts::IsEntityWithinAnySearchLight) = GLOBAL_ADDRESS_BY_VERSION(0x493960, 0, 0, 0, 0, 0);

bool CTheScripts::IsEntityWithinAnySearchLight(CEntity *pEntity, int *pIndex) {
    return plugin::CallAndReturnDynGlobal<bool, CEntity *, int *>(gaddrof(CTheScripts::IsEntityWithinAnySearchLight), pEntity, pIndex);
}

int addrof(CTheScripts::IsEntityWithinSearchLight) = ADDRESS_BY_VERSION(0x493900, 0, 0, 0, 0, 0);
int gaddrof(CTheScripts::IsEntityWithinSearchLight) = GLOBAL_ADDRESS_BY_VERSION(0x493900, 0, 0, 0, 0, 0);

bool CTheScripts::IsEntityWithinSearchLight(unsigned int index, CEntity *pEntity) {
    return plugin::CallAndReturnDynGlobal<bool, unsigned int, CEntity *>(gaddrof(CTheScripts::IsEntityWithinSearchLight), index, pEntity);
}

int addrof(CTheScripts::IsPedStopped) = ADDRESS_BY_VERSION(0x486110, 0, 0, 0, 0, 0);
int gaddrof(CTheScripts::IsPedStopped) = GLOBAL_ADDRESS_BY_VERSION(0x486110, 0, 0, 0, 0, 0);

bool CTheScripts::IsPedStopped(CPed *ped) {
    return plugin::CallAndReturnDynGlobal<bool, CPed *>(gaddrof(CTheScripts::IsPedStopped), ped);
}

int addrof(CTheScripts::IsPlayerOnAMission) = ADDRESS_BY_VERSION(0x464D50, 0, 0, 0, 0, 0);
int gaddrof(CTheScripts::IsPlayerOnAMission) = GLOBAL_ADDRESS_BY_VERSION(0x464D50, 0, 0, 0, 0, 0);

bool CTheScripts::IsPlayerOnAMission() {
    return plugin::CallAndReturnDynGlobal<bool>(gaddrof(CTheScripts::IsPlayerOnAMission));
}

int addrof(CTheScripts::IsPointWithinSearchLight) = ADDRESS_BY_VERSION(0x493280, 0, 0, 0, 0, 0);
int gaddrof(CTheScripts::IsPointWithinSearchLight) = GLOBAL_ADDRESS_BY_VERSION(0x493280, 0, 0, 0, 0, 0);

bool CTheScripts::IsPointWithinSearchLight(CVector *pointPosn, int index) {
    return plugin::CallAndReturnDynGlobal<bool, CVector *, int>(gaddrof(CTheScripts::IsPointWithinSearchLight), pointPosn, index);
}

int addrof(CTheScripts::IsVehicleStopped) = ADDRESS_BY_VERSION(0x4861F0, 0, 0, 0, 0, 0);
int gaddrof(CTheScripts::IsVehicleStopped) = GLOBAL_ADDRESS_BY_VERSION(0x4861F0, 0, 0, 0, 0, 0);

bool CTheScripts::IsVehicleStopped(CVehicle *pVehicle) {
    return plugin::CallAndReturnDynGlobal<bool, CVehicle *>(gaddrof(CTheScripts::IsVehicleStopped), pVehicle);
}

int addrof(CTheScripts::Load) = ADDRESS_BY_VERSION(0x5D4FD0, 0, 0, 0, 0, 0);
int gaddrof(CTheScripts::Load) = GLOBAL_ADDRESS_BY_VERSION(0x5D4FD0, 0, 0, 0, 0, 0);

void CTheScripts::Load() {
    plugin::CallDynGlobal(gaddrof(CTheScripts::Load));
}

int addrof(CTheScripts::MoveSearchLightBetweenTwoPoints) = ADDRESS_BY_VERSION(0x493360, 0, 0, 0, 0, 0);
int gaddrof(CTheScripts::MoveSearchLightBetweenTwoPoints) = GLOBAL_ADDRESS_BY_VERSION(0x493360, 0, 0, 0, 0, 0);

void CTheScripts::MoveSearchLightBetweenTwoPoints(int index, float x1, float y1, float z1, float x2, float y2, float z2, float pathSpeed) {
    plugin::CallDynGlobal<int, float, float, float, float, float, float, float>(gaddrof(CTheScripts::MoveSearchLightBetweenTwoPoints), index, x1, y1, z1, x2, y2, z2, pathSpeed);
}

int addrof(CTheScripts::MoveSearchLightToEntity) = ADDRESS_BY_VERSION(0x493420, 0, 0, 0, 0, 0);
int gaddrof(CTheScripts::MoveSearchLightToEntity) = GLOBAL_ADDRESS_BY_VERSION(0x493420, 0, 0, 0, 0, 0);

void CTheScripts::MoveSearchLightToEntity(int index, CEntity *pEntity, float pathSpeed) {
    plugin::CallDynGlobal<int, CEntity *, float>(gaddrof(CTheScripts::MoveSearchLightToEntity), index, pEntity, pathSpeed);
}

int addrof(CTheScripts::MoveSearchLightToPointAndStop) = ADDRESS_BY_VERSION(0x493480, 0, 0, 0, 0, 0);
int gaddrof(CTheScripts::MoveSearchLightToPointAndStop) = GLOBAL_ADDRESS_BY_VERSION(0x493480, 0, 0, 0, 0, 0);

void CTheScripts::MoveSearchLightToPointAndStop(int index, float x, float y, float z, float pathSpeed) {
    plugin::CallDynGlobal<int, float, float, float, float>(gaddrof(CTheScripts::MoveSearchLightToPointAndStop), index, x, y, z, pathSpeed);
}

int addrof(CTheScripts::PrintListSizes) = ADDRESS_BY_VERSION(0x4646D0, 0, 0, 0, 0, 0);
int gaddrof(CTheScripts::PrintListSizes) = GLOBAL_ADDRESS_BY_VERSION(0x4646D0, 0, 0, 0, 0, 0);

void CTheScripts::PrintListSizes() {
    plugin::CallDynGlobal(gaddrof(CTheScripts::PrintListSizes));
}

int addrof(CTheScripts::Process) = ADDRESS_BY_VERSION(0x46A000, 0, 0, 0, 0, 0);
int gaddrof(CTheScripts::Process) = GLOBAL_ADDRESS_BY_VERSION(0x46A000, 0, 0, 0, 0, 0);

void CTheScripts::Process() {
    plugin::CallDynGlobal(gaddrof(CTheScripts::Process));
}

int addrof(CTheScripts::ProcessAllSearchLights) = ADDRESS_BY_VERSION(0x4939F0, 0, 0, 0, 0, 0);
int gaddrof(CTheScripts::ProcessAllSearchLights) = GLOBAL_ADDRESS_BY_VERSION(0x4939F0, 0, 0, 0, 0, 0);

void CTheScripts::ProcessAllSearchLights() {
    plugin::CallDynGlobal(gaddrof(CTheScripts::ProcessAllSearchLights));
}

int addrof(CTheScripts::ProcessWaitingForScriptBrainArray) = ADDRESS_BY_VERSION(0x46CF00, 0, 0, 0, 0, 0);
int gaddrof(CTheScripts::ProcessWaitingForScriptBrainArray) = GLOBAL_ADDRESS_BY_VERSION(0x46CF00, 0, 0, 0, 0, 0);

void CTheScripts::ProcessWaitingForScriptBrainArray() {
    plugin::CallDynGlobal(gaddrof(CTheScripts::ProcessWaitingForScriptBrainArray));
}

int addrof(CTheScripts::ReadMultiScriptFileOffsetsFromScript) = ADDRESS_BY_VERSION(0x4867C0, 0, 0, 0, 0, 0);
int gaddrof(CTheScripts::ReadMultiScriptFileOffsetsFromScript) = GLOBAL_ADDRESS_BY_VERSION(0x4867C0, 0, 0, 0, 0, 0);

void CTheScripts::ReadMultiScriptFileOffsetsFromScript() {
    plugin::CallDynGlobal(gaddrof(CTheScripts::ReadMultiScriptFileOffsetsFromScript));
}

int addrof(CTheScripts::ReadObjectNamesFromScript) = ADDRESS_BY_VERSION(0x486720, 0, 0, 0, 0, 0);
int gaddrof(CTheScripts::ReadObjectNamesFromScript) = GLOBAL_ADDRESS_BY_VERSION(0x486720, 0, 0, 0, 0, 0);

void CTheScripts::ReadObjectNamesFromScript() {
    plugin::CallDynGlobal(gaddrof(CTheScripts::ReadObjectNamesFromScript));
}

int addrof(CTheScripts::ReinitialiseSwitchStatementData) = ADDRESS_BY_VERSION(0x470370, 0, 0, 0, 0, 0);
int gaddrof(CTheScripts::ReinitialiseSwitchStatementData) = GLOBAL_ADDRESS_BY_VERSION(0x470370, 0, 0, 0, 0, 0);

void CTheScripts::ReinitialiseSwitchStatementData() {
    plugin::CallDynGlobal(gaddrof(CTheScripts::ReinitialiseSwitchStatementData));
}

int addrof(CTheScripts::RemoveFromVehicleModelsBlockedByScript) = ADDRESS_BY_VERSION(0x46A860, 0, 0, 0, 0, 0);
int gaddrof(CTheScripts::RemoveFromVehicleModelsBlockedByScript) = GLOBAL_ADDRESS_BY_VERSION(0x46A860, 0, 0, 0, 0, 0);

void CTheScripts::RemoveFromVehicleModelsBlockedByScript(int modelindex) {
    plugin::CallDynGlobal<int>(gaddrof(CTheScripts::RemoveFromVehicleModelsBlockedByScript), modelindex);
}

int addrof(CTheScripts::RemoveFromWaitingForScriptBrainArray) = ADDRESS_BY_VERSION(0x46ABC0, 0, 0, 0, 0, 0);
int gaddrof(CTheScripts::RemoveFromWaitingForScriptBrainArray) = GLOBAL_ADDRESS_BY_VERSION(0x46ABC0, 0, 0, 0, 0, 0);

int CTheScripts::RemoveFromWaitingForScriptBrainArray(CEntity *a1, short modelIndex) {
    return plugin::CallAndReturnDynGlobal<int, CEntity *, short>(gaddrof(CTheScripts::RemoveFromWaitingForScriptBrainArray), a1, modelIndex);
}

int addrof(CTheScripts::RemoveScriptCheckpoint) = ADDRESS_BY_VERSION(0x4936C0, 0, 0, 0, 0, 0);
int gaddrof(CTheScripts::RemoveScriptCheckpoint) = GLOBAL_ADDRESS_BY_VERSION(0x4936C0, 0, 0, 0, 0, 0);

void CTheScripts::RemoveScriptCheckpoint(int arg1) {
    plugin::CallDynGlobal<int>(gaddrof(CTheScripts::RemoveScriptCheckpoint), arg1);
}

int addrof(CTheScripts::RemoveScriptEffectSystem) = ADDRESS_BY_VERSION(0x492FD0, 0, 0, 0, 0, 0);
int gaddrof(CTheScripts::RemoveScriptEffectSystem) = GLOBAL_ADDRESS_BY_VERSION(0x492FD0, 0, 0, 0, 0, 0);

void CTheScripts::RemoveScriptEffectSystem(int arg1) {
    plugin::CallDynGlobal<int>(gaddrof(CTheScripts::RemoveScriptEffectSystem), arg1);
}

int addrof(CTheScripts::RemoveScriptSearchLight) = ADDRESS_BY_VERSION(0x493160, 0, 0, 0, 0, 0);
int gaddrof(CTheScripts::RemoveScriptSearchLight) = GLOBAL_ADDRESS_BY_VERSION(0x493160, 0, 0, 0, 0, 0);

void CTheScripts::RemoveScriptSearchLight(unsigned int index) {
    plugin::CallDynGlobal<unsigned int>(gaddrof(CTheScripts::RemoveScriptSearchLight), index);
}

int addrof(CTheScripts::RemoveScriptSphere) = ADDRESS_BY_VERSION(0x483BA0, 0, 0, 0, 0, 0);
int gaddrof(CTheScripts::RemoveScriptSphere) = GLOBAL_ADDRESS_BY_VERSION(0x483BA0, 0, 0, 0, 0, 0);

void CTheScripts::RemoveScriptSphere(int index) {
    plugin::CallDynGlobal<int>(gaddrof(CTheScripts::RemoveScriptSphere), index);
}

int addrof(CTheScripts::RemoveScriptTextureDictionary) = ADDRESS_BY_VERSION(0x465A40, 0, 0, 0, 0, 0);
int gaddrof(CTheScripts::RemoveScriptTextureDictionary) = GLOBAL_ADDRESS_BY_VERSION(0x465A40, 0, 0, 0, 0, 0);

void CTheScripts::RemoveScriptTextureDictionary() {
    plugin::CallDynGlobal(gaddrof(CTheScripts::RemoveScriptTextureDictionary));
}

int addrof(CTheScripts::RemoveThisPed) = ADDRESS_BY_VERSION(0x486240, 0, 0, 0, 0, 0);
int gaddrof(CTheScripts::RemoveThisPed) = GLOBAL_ADDRESS_BY_VERSION(0x486240, 0, 0, 0, 0, 0);

void CTheScripts::RemoveThisPed(CPed *ped) {
    plugin::CallDynGlobal<CPed *>(gaddrof(CTheScripts::RemoveThisPed), ped);
}

int addrof(CTheScripts::RenderAllSearchLights) = ADDRESS_BY_VERSION(0x493E30, 0, 0, 0, 0, 0);
int gaddrof(CTheScripts::RenderAllSearchLights) = GLOBAL_ADDRESS_BY_VERSION(0x493E30, 0, 0, 0, 0, 0);

void CTheScripts::RenderAllSearchLights() {
    plugin::CallDynGlobal(gaddrof(CTheScripts::RenderAllSearchLights));
}

int addrof(CTheScripts::Save) = ADDRESS_BY_VERSION(0x5D4C40, 0, 0, 0, 0, 0);
int gaddrof(CTheScripts::Save) = GLOBAL_ADDRESS_BY_VERSION(0x5D4C40, 0, 0, 0, 0, 0);

void CTheScripts::Save() {
    plugin::CallDynGlobal(gaddrof(CTheScripts::Save));
}

int addrof(CTheScripts::ScriptAttachAnimGroupToCharModel) = ADDRESS_BY_VERSION(0x474800, 0, 0, 0, 0, 0);
int gaddrof(CTheScripts::ScriptAttachAnimGroupToCharModel) = GLOBAL_ADDRESS_BY_VERSION(0x474800, 0, 0, 0, 0, 0);

bool CTheScripts::ScriptAttachAnimGroupToCharModel(int modelId, char *ifpName) {
    return plugin::CallAndReturnDynGlobal<bool, int, char *>(gaddrof(CTheScripts::ScriptAttachAnimGroupToCharModel), modelId, ifpName);
}

int addrof(CTheScripts::ScriptConnectLodsFunction) = ADDRESS_BY_VERSION(0x470A20, 0, 0, 0, 0, 0);
int gaddrof(CTheScripts::ScriptConnectLodsFunction) = GLOBAL_ADDRESS_BY_VERSION(0x470A20, 0, 0, 0, 0, 0);

void CTheScripts::ScriptConnectLodsFunction(int objecthandle1, int objecthandle2) {
    plugin::CallDynGlobal<int, int>(gaddrof(CTheScripts::ScriptConnectLodsFunction), objecthandle1, objecthandle2);
}

int addrof(CTheScripts::ScriptDebugCircle2D) = ADDRESS_BY_VERSION(0x485C20, 0, 0, 0, 0, 0);
int gaddrof(CTheScripts::ScriptDebugCircle2D) = GLOBAL_ADDRESS_BY_VERSION(0x485C20, 0, 0, 0, 0, 0);

void CTheScripts::ScriptDebugCircle2D(float x, float y, float width, float height, CRGBA color) {
    plugin::CallDynGlobal<float, float, float, float, CRGBA>(gaddrof(CTheScripts::ScriptDebugCircle2D), x, y, width, height, color);
}

int addrof_o(CTheScripts::StartNewScript, CRunningScript *(*)(unsigned char *)) = ADDRESS_BY_VERSION(0x464C20, 0, 0, 0, 0, 0);
int gaddrof_o(CTheScripts::StartNewScript, CRunningScript *(*)(unsigned char *)) = GLOBAL_ADDRESS_BY_VERSION(0x464C20, 0, 0, 0, 0, 0);

CRunningScript *CTheScripts::StartNewScript(unsigned char *startIP) {
    return plugin::CallAndReturnDynGlobal<CRunningScript *, unsigned char *>(gaddrof_o(CTheScripts::StartNewScript, CRunningScript *(*)(unsigned char *)), startIP);
}

int addrof_o(CTheScripts::StartNewScript, int(*)(unsigned char *, unsigned short)) = ADDRESS_BY_VERSION(0x464C90, 0, 0, 0, 0, 0);
int gaddrof_o(CTheScripts::StartNewScript, int(*)(unsigned char *, unsigned short)) = GLOBAL_ADDRESS_BY_VERSION(0x464C90, 0, 0, 0, 0, 0);

int CTheScripts::StartNewScript(unsigned char *startIP, unsigned short index) {
    return plugin::CallAndReturnDynGlobal<int, unsigned char *, unsigned short>(gaddrof_o(CTheScripts::StartNewScript, int(*)(unsigned char *, unsigned short)), startIP, index);
}

int addrof(CTheScripts::StartTestScript) = ADDRESS_BY_VERSION(0x464D40, 0, 0, 0, 0, 0);
int gaddrof(CTheScripts::StartTestScript) = GLOBAL_ADDRESS_BY_VERSION(0x464D40, 0, 0, 0, 0, 0);

void CTheScripts::StartTestScript() {
    plugin::CallDynGlobal(gaddrof(CTheScripts::StartTestScript));
}

int addrof(CTheScripts::UndoBuildingSwaps) = ADDRESS_BY_VERSION(0x481290, 0, 0, 0, 0, 0);
int gaddrof(CTheScripts::UndoBuildingSwaps) = GLOBAL_ADDRESS_BY_VERSION(0x481290, 0, 0, 0, 0, 0);

void CTheScripts::UndoBuildingSwaps() {
    plugin::CallDynGlobal(gaddrof(CTheScripts::UndoBuildingSwaps));
}

int addrof(CTheScripts::UndoEntityInvisibilitySettings) = ADDRESS_BY_VERSION(0x4812D0, 0, 0, 0, 0, 0);
int gaddrof(CTheScripts::UndoEntityInvisibilitySettings) = GLOBAL_ADDRESS_BY_VERSION(0x4812D0, 0, 0, 0, 0, 0);

void CTheScripts::UndoEntityInvisibilitySettings() {
    plugin::CallDynGlobal(gaddrof(CTheScripts::UndoEntityInvisibilitySettings));
}

int addrof(CTheScripts::UpdateObjectIndices) = ADDRESS_BY_VERSION(0x486780, 0, 0, 0, 0, 0);
int gaddrof(CTheScripts::UpdateObjectIndices) = GLOBAL_ADDRESS_BY_VERSION(0x486780, 0, 0, 0, 0, 0);

void CTheScripts::UpdateObjectIndices() {
    plugin::CallDynGlobal(gaddrof(CTheScripts::UpdateObjectIndices));
}

int addrof(CTheScripts::UseSwitchJumpTable) = ADDRESS_BY_VERSION(0x4703C0, 0, 0, 0, 0, 0);
int gaddrof(CTheScripts::UseSwitchJumpTable) = GLOBAL_ADDRESS_BY_VERSION(0x4703C0, 0, 0, 0, 0, 0);

void CTheScripts::UseSwitchJumpTable(int *pSwitchLabelAddress) {
    plugin::CallDynGlobal<int *>(gaddrof(CTheScripts::UseSwitchJumpTable), pSwitchLabelAddress);
}

int addrof(CTheScripts::WipeLocalVariableMemoryForMissionScript) = ADDRESS_BY_VERSION(0x464BB0, 0, 0, 0, 0, 0);
int gaddrof(CTheScripts::WipeLocalVariableMemoryForMissionScript) = GLOBAL_ADDRESS_BY_VERSION(0x464BB0, 0, 0, 0, 0, 0);

void CTheScripts::WipeLocalVariableMemoryForMissionScript() {
    plugin::CallDynGlobal(gaddrof(CTheScripts::WipeLocalVariableMemoryForMissionScript));
}
