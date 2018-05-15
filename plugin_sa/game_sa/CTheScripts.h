/*
    Plugin-SDK (Grand Theft Auto San Andreas) header file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/
#pragma once
#include "PluginBase.h"
#include "CRunningScript.h"
#include "CPed.h"
#include "CVehicle.h"
#include "CObject.h"
#include "CMissionCleanup.h"
#include "CBuilding.h"
#include "CSprite2d.h"
#include "CStreamedScripts.h"
#include "CScriptResourceManager.h"
#include "CStuckCarCheck.h"
#include "CUpsideDownCarCheck.h"
#include "CScriptsForBrains.h"

struct tBuildingSwap
{
    CBuilding *m_pCBuilding;
    int m_nOldModelIndex;
    int m_nNewModelIndex;
};

struct tScriptSwitchCase
{
    int m_nSwitchValue;
    int m_nSwitchLabelAddress;
};

struct tScriptCheckpoint
{
    char bUsed;
    char field_1;
    short wUniqueID;
    void *field_4;
};
struct tScriptEffectSystem
{
    char bUsed;
    short wUniqueID;
    void *m_pFxSystem;
};

struct tScriptSequence
{
    char bUsed;
    short wUniqueID;
};

struct tScriptText
{
    float letterWidth;
    int letterHeight;
    RwRGBA color;
    char m_bJustify;
    char centered;
    char withBackground;
    char _pad;
    int lineHeight;
    int lineWidth;
    RwRGBA backgroundBoxColor;
    char proportional;
    RwRGBA backgroundColor;
    char shadowType;
    char outlineType;
    char m_bDrawBeforeFade;
    char m_bRightJustify;
    char _pad_25;
    char _pad_26;
    char _pad_27;
    int font;
    int xPosition;
    int yPosition;
    char gxtEntry[8];
    int param1;
    int param2;
};

struct tScriptRectangle
{
    int type;
    char m_bDrawBeforeFade;
    char field_5;
    short textureID;
    int cornerA_X;
    int cornerA_Y;
    int cornerB_X;
    int cornerB_Y;
    int angle;
    int transparentColor;
    char gxt[8];
    int field_28;
    int field_2C;
    int field_30;
    int field_34;
    char textboxStyle;
    char field_39[3];
};

struct tScriptAttachedAnimGroup
{
    int m_nModelID;
    char m_IfpName[16];
};

struct tScriptSearchlight
{
    char bUsed;
    char field_1;
    char bEnableShadow;
    char field_3;
    short wUniqueID;
    short field_6;
    RwV3d position;
    RwV3d target;
    float targetRadius;
    float baseRadius;
    RwV3d pathCoord1;
    RwV3d pathCoord2;
    float pathSpeed;
    int attachedEntity;
    int followingEntity;
    int tower;
    int housing;
    int bulb;
    RwV3d targetSpot;
    RwV3d field_64;
    RwV3d field_70;
};

struct tUsedObject
{
    char szModelName[24];
    int dwModelIndex;
};

struct tScriptSphere
{
    char bUsed;
    char field_1;
    short wUniqueID;
    int field_4;
    RwV3d vCoords;
    int fRadius;
};



class PLUGIN_API CTheScripts
{
public:
    SUPPORTED_10US static bool &DbgFlag;
    SUPPORTED_10US static tScriptParam *ScriptParams; // static tScriptParam ScriptParams[10]
    SUPPORTED_10US static tScriptSwitchCase *SwitchJumpTable; // static tScriptSwitchCase SwitchJumpTable[75]
    SUPPORTED_10US static unsigned short &NumberOfEntriesInSwitchTable;
    SUPPORTED_10US static void *&SwitchDefaultAddress;
    SUPPORTED_10US static bool &SwitchDefaultExists;
    SUPPORTED_10US static int &ValueToCheckInSwitchStatement;
    SUPPORTED_10US static unsigned short &NumberOfEntriesStillToReadForSwitch;
    SUPPORTED_10US static tScriptSequence *ScriptSequenceTaskArray; // static tScriptSequence ScriptSequenceTaskArray[64]
    SUPPORTED_10US static unsigned short &NumberOfScriptCheckpoints;
    SUPPORTED_10US static tScriptCheckpoint *ScriptCheckpointArray; // static tScriptCheckpoint ScriptCheckpointArray[20]
    SUPPORTED_10US static tScriptEffectSystem *ScriptEffectSystemArray; // static tScriptEffectSystem ScriptEffectSystemArray[32]
    SUPPORTED_10US static short &CardStackPosition;
    SUPPORTED_10US static short *CardStack; // static short CardStack[312]
    SUPPORTED_10US static bool &bDrawSubtitlesBeforeFade;
    SUPPORTED_10US static bool &bDrawOddJobTitleBeforeFade;
    SUPPORTED_10US static bool &bScriptHasFadedOut;
    SUPPORTED_10US static bool &bAddNextMessageToPreviousBriefs;
    SUPPORTED_10US static int &ForceRandomCarModel;
    SUPPORTED_10US static bool &bDrawCrossHair;
    SUPPORTED_10US static bool &bEnableCraneRelease;
    SUPPORTED_10US static bool &bEnableCraneLower;
    SUPPORTED_10US static bool &bEnableCraneRaise;
    SUPPORTED_10US static float &fCameraHeadingStepWhenPlayerIsAttached;
    SUPPORTED_10US static float &fCameraHeadingWhenPlayerIsAttached;
    SUPPORTED_10US static bool &bDisplayHud;
    SUPPORTED_10US static bool &HideAllFrontEndMapBlips;
    SUPPORTED_10US static bool &RadarShowBlipOnAllLevels;
    SUPPORTED_10US static unsigned char &RadarZoomValue;
    SUPPORTED_10US static bool &bPlayerIsOffTheMap;
    SUPPORTED_10US static char &RiotIntensity;
    SUPPORTED_10US static bool &bPlayerHasMetDebbieHarry;
    SUPPORTED_10US static bool &bDisplayNonMiniGameHelpMessages;
    SUPPORTED_10US static bool &bMiniGameInProgress;
    SUPPORTED_10US static int &ScriptPickupCycleIndex;
    SUPPORTED_10US static char &FailCurrentMission;
    SUPPORTED_10US static bool &bAlreadyRunningAMissionScript;
    SUPPORTED_10US static unsigned int &LargestNumberOfMissionScriptLocalVariables;
    SUPPORTED_10US static unsigned short &NumberOfExclusiveMissionScripts;
    SUPPORTED_10US static unsigned short &NumberOfMissionScripts;
    SUPPORTED_10US static unsigned int &LargestMissionScriptSize;
    SUPPORTED_10US static unsigned int &MainScriptSize;
    SUPPORTED_10US static char *MultiScriptArray; // static char MultiScriptArray[800]
    SUPPORTED_10US static bool &bUsingAMultiScriptFile;
    SUPPORTED_10US static int &StoreVehicleIndex;
    SUPPORTED_10US static bool &StoreVehicleWasRandom;
    SUPPORTED_10US static unsigned short &CommandsExecuted;
    SUPPORTED_10US static unsigned short &ScriptsUpdated;
    SUPPORTED_10US static int *ScriptConnectLodsObjects; // static int ScriptConnectLodsObjects[20]
    SUPPORTED_10US static tScriptAttachedAnimGroup *ScriptAttachedAnimGroups; // static tScriptAttachedAnimGroup ScriptAttachedAnimGroups[8]
    SUPPORTED_10US static int *VehicleModelsBlockedByScript; // static int VehicleModelsBlockedByScript[20]
    SUPPORTED_10US static int *SuppressedVehicleModels; // static int SuppressedVehicleModels[40]
    SUPPORTED_10US static CEntity **InvisibilitySettingArray; // static CEntity *InvisibilitySettingArray[20]
    SUPPORTED_10US static tBuildingSwap *BuildingSwapArray; // static tBuildingSwap BuildingSwapArray[25]
    SUPPORTED_10US static unsigned short &NumberOfIntroRectanglesThisFrame;
    SUPPORTED_10US static unsigned short &MessageWidth;
    SUPPORTED_10US static unsigned short &MessageCentre;
    SUPPORTED_10US static bool &bUseMessageFormatting;
    SUPPORTED_10US static bool &UseTextCommands;
    SUPPORTED_10US static unsigned short &NumberOfIntroTextLinesThisFrame;
    SUPPORTED_10US static unsigned short &NumberOfUsedObjects;
    SUPPORTED_10US static tUsedObject *UsedObjectArray; // static tUsedObject UsedObjectArray[395]
    SUPPORTED_10US static int &LastRandomPedId;
    SUPPORTED_10US static unsigned int &LastMissionPassedTime;
    SUPPORTED_10US static int &OnAMissionFlag;
    SUPPORTED_10US static CEntity *&EntitiesWaitingForScriptBrain;
    SUPPORTED_10US static CStreamedScripts &StreamedScripts;
    SUPPORTED_10US static CScriptResourceManager &ScriptResourceManager;
    SUPPORTED_10US static CUpsideDownCarCheck &UpsideDownCars;
    SUPPORTED_10US static tScriptParam *LocalVariablesForCurrentMission; // static ScriptVar LocalVariablesForCurrentMission[1024]
    //! Script space, where main.scm MAIN section is loaded.
    SUPPORTED_10US static char *ScriptSpace; // static char ScriptSpace[200000]
    SUPPORTED_10US static char *MissionBlock; // static char MissionBlock[69000]
    SUPPORTED_10US static CRunningScript *&pIdleScripts;
    SUPPORTED_10US static CRunningScript *&pActiveScripts;
    SUPPORTED_10US static CRunningScript *ScriptsArray; // static CRunningScript ScriptsArray[96]
    SUPPORTED_10US static unsigned short &NumberOfScriptSearchLights;
    SUPPORTED_10US static CMissionCleanup &MissionCleanUp;
    SUPPORTED_10US static CStuckCarCheck &StuckCars;
    SUPPORTED_10US static CScriptsForBrains &ScriptsForBrains;
    SUPPORTED_10US static tScriptSphere *ScriptSphereArray; // static CScriptSphere ScriptSphereArray[16]
    SUPPORTED_10US static tScriptText *IntroTextLines; // static tScriptText IntroTextLines[96]
    SUPPORTED_10US static tScriptRectangle *IntroRectangles; // static tScriptRectangle IntroRectangles[128]
    SUPPORTED_10US static CSprite2d *ScriptSprites; // static CSprite2d ScriptSprites[128]
    SUPPORTED_10US static tScriptSearchlight *ScriptSearchLightArray; // static tScriptSearchlight ScriptSearchLightArray[8]

    SUPPORTED_10US static int AddScriptCheckpoint(float at_X, float at_Y, float at_Z, float PointTo_X, float PointTo_Y, float PointTo_Z, float radius, int type);
    SUPPORTED_10US static int AddScriptEffectSystem(FxSystem_c *a1);
    SUPPORTED_10US static int AddScriptSearchLight(float startX, float startY, float startZ, CEntity *entity, float targetX, float targetY, float targetZ, float targetRadius, float baseRadius);
    SUPPORTED_10US static unsigned int AddScriptSphere(unsigned int id, CVector posn, float radius);
    SUPPORTED_10US static void AddToBuildingSwapArray(CBuilding *a1, int newModelId, int oldModelId);
    SUPPORTED_10US static void AddToInvisibilitySwapArray(CEntity *a2, bool bVisible);
    SUPPORTED_10US static void AddToListOfConnectedLodObjects(CObject *pObject1, CObject *pObject2);
    SUPPORTED_10US static void AddToListOfSpecialAnimGroupsAttachedToCharModels(int modelid, char *ifpName);
    SUPPORTED_10US static double AddToSwitchJumpTable(int switchValue, int switchLabelLocalAddress);
    SUPPORTED_10US static void AddToVehicleModelsBlockedByScript(int modelindex);
    SUPPORTED_10US static void AddToWaitingForScriptBrainArray(CEntity *pEntity, short arg2);
    SUPPORTED_10US static void AttachSearchlightToSearchlightObject(int searchlightid, CObject *tower, CObject *housing, CObject *bulb, float offsetX, float offsetY, float offsetZ);
    SUPPORTED_10US static char CheckStreamedScriptVersion(RwStream *arg1, char *arg2);
    SUPPORTED_10US static void CleanUpThisObject(CObject *pObject);
    SUPPORTED_10US static void CleanUpThisPed(CPed *ped);
    SUPPORTED_10US static void CleanUpThisVehicle(CVehicle *pVehicle);
    SUPPORTED_10US static void ClearAllSuppressedCarModels();
    SUPPORTED_10US static void ClearAllVehicleModelsBlockedByScript();
    SUPPORTED_10US static void ClearSpaceForMissionEntity(CVector const &pos, CEntity *pEntity);
    SUPPORTED_10US static void DoScriptSetupAfterPoolsHaveLoaded();
    SUPPORTED_10US static void DrawDebugAngledSquare(float x1, float y1, float x2, float y2, float x3, float y3, float x4, float y4);
    SUPPORTED_10US static void DrawDebugCube(float x1, float y1, float x2, float y2);
    SUPPORTED_10US static void DrawScriptSpheres();
    SUPPORTED_10US static void DrawScriptSpritesAndRectangles(char bDrawBeforeFade);
    SUPPORTED_10US static signed int GetActualScriptThingIndex(int index, unsigned char type);
    SUPPORTED_10US static unsigned int GetNewUniqueScriptThingIndex(unsigned int index, char type);
    SUPPORTED_10US static int GetScriptIndexFromPointer(CRunningScript *thread);
    //! type is always 8 , which refers to PedGroups
    SUPPORTED_10US static unsigned int GetUniqueScriptThingIndex(int playergroup, unsigned char type);
    SUPPORTED_10US static bool HasVehicleModelBeenBlockedByScript(int modelindex);
    SUPPORTED_10US static void HighlightImportantAngledArea(unsigned int markerid, float from_X, float from_Y, float to_X, float to_Y, float angledTo_X, float angledTo_Y, float angledFrom_X, float angledFrom_Y, float height);
    SUPPORTED_10US static void HighlightImportantArea(int markerid, float from_X, float from_Y, float to_X, float to_Y, float height);
    SUPPORTED_10US static void Init();
    SUPPORTED_10US static void InitialiseAllConnectLodObjects();
    SUPPORTED_10US static void InitialiseConnectLodObjects(unsigned short a1);
    SUPPORTED_10US static void InitialiseSpecialAnimGroup(unsigned short a1);
    SUPPORTED_10US static void InitialiseSpecialAnimGroupsAttachedToCharModels();
    SUPPORTED_10US static bool IsEntityWithinAnySearchLight(CEntity *pEntity, int *pIndex);
    SUPPORTED_10US static bool IsEntityWithinSearchLight(unsigned int index, CEntity *pEntity);
    SUPPORTED_10US static bool IsPedStopped(CPed *ped);
    SUPPORTED_10US static bool IsPlayerOnAMission();
    SUPPORTED_10US static bool IsPointWithinSearchLight(CVector *pointPosn, int index);
    SUPPORTED_10US static bool IsVehicleStopped(CVehicle *pVehicle);
    SUPPORTED_10US static void Load();
    SUPPORTED_10US static void MoveSearchLightBetweenTwoPoints(int index, float x1, float y1, float z1, float x2, float y2, float z2, float pathSpeed);
    SUPPORTED_10US static void MoveSearchLightToEntity(int index, CEntity *pEntity, float pathSpeed);
    SUPPORTED_10US static void MoveSearchLightToPointAndStop(int index, float x, float y, float z, float pathSpeed);
    SUPPORTED_10US static void PrintListSizes();
    SUPPORTED_10US static void Process();
    SUPPORTED_10US static void ProcessAllSearchLights();
    SUPPORTED_10US static void ProcessWaitingForScriptBrainArray();
    SUPPORTED_10US static void ReadMultiScriptFileOffsetsFromScript();
    SUPPORTED_10US static void ReadObjectNamesFromScript();
    SUPPORTED_10US static void ReinitialiseSwitchStatementData();
    SUPPORTED_10US static void RemoveFromVehicleModelsBlockedByScript(int modelindex);
    SUPPORTED_10US static int RemoveFromWaitingForScriptBrainArray(CEntity *a1, short modelIndex);
    SUPPORTED_10US static void RemoveScriptCheckpoint(int arg1);
    SUPPORTED_10US static void RemoveScriptEffectSystem(int arg1);
    SUPPORTED_10US static void RemoveScriptSearchLight(unsigned int index);
    SUPPORTED_10US static void RemoveScriptSphere(int index);
    SUPPORTED_10US static void RemoveScriptTextureDictionary();
    SUPPORTED_10US static void RemoveThisPed(CPed *ped);
    SUPPORTED_10US static void RenderAllSearchLights();
    SUPPORTED_10US static void Save();
    SUPPORTED_10US static bool ScriptAttachAnimGroupToCharModel(int modelId, char *ifpName);
    SUPPORTED_10US static void ScriptConnectLodsFunction(int objecthandle1, int objecthandle2);
    SUPPORTED_10US static void ScriptDebugCircle2D(float x, float y, float width, float height, CRGBA color);
    SUPPORTED_10US static CRunningScript *StartNewScript(unsigned char *startIP);
    SUPPORTED_10US static int StartNewScript(unsigned char *startIP, unsigned short index);
    SUPPORTED_10US static void StartTestScript();
    SUPPORTED_10US static void UndoBuildingSwaps();
    SUPPORTED_10US static void UndoEntityInvisibilitySettings();
    SUPPORTED_10US static void UpdateObjectIndices();
    SUPPORTED_10US static void UseSwitchJumpTable(int *pSwitchLabelAddress);
    SUPPORTED_10US static void WipeLocalVariableMemoryForMissionScript();
};

#include "meta/meta.CTheScripts.h"