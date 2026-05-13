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
#include "CFont.h"
#include "CStreamedScripts.h"
#include "CScriptResourceManager.h"
#include "CStuckCarCheck.h"
#include "CUpsideDownCarCheck.h"
#include "CScriptsForBrains.h"

enum class eUseTextCommandState : char
{
    DISABLED,
    DISABLE_NEXT_FRAME,
    ENABLED_BY_SCRIPT
};

enum class eScriptRectangleType : int
{
    NONE,
    HEADER_AND_TEXT,
    HEADER_NO_TEXT,
    SOLID_COLOUR,
    SPRITE_NO_ROTATION,
    SPRITE_WITH_ROTATION,
};

struct tBuildingSwap
{
    CBuilding *m_pCBuilding;
    int m_nOldModelIndex;
    int m_nNewModelIndex;
};
VALIDATE_OFFSET(tBuildingSwap, m_pCBuilding, 0x0);
VALIDATE_OFFSET(tBuildingSwap, m_nOldModelIndex, 0x4);
VALIDATE_OFFSET(tBuildingSwap, m_nNewModelIndex, 0x8);
VALIDATE_SIZE(tBuildingSwap, 0xC);

struct tScriptSwitchCase
{
    int m_nSwitchValue;
    int m_nSwitchLabelAddress;
};
VALIDATE_OFFSET(tScriptSwitchCase, m_nSwitchValue, 0x0);
VALIDATE_OFFSET(tScriptSwitchCase, m_nSwitchLabelAddress, 0x4);
VALIDATE_SIZE(tScriptSwitchCase, 0x8);

struct tScriptCheckpoint
{
    char bUsed;
    char field_1;
    short wUniqueID;
    void *field_4;
};
VALIDATE_OFFSET(tScriptCheckpoint, bUsed, 0x0);
VALIDATE_OFFSET(tScriptCheckpoint, field_1, 0x1);
VALIDATE_OFFSET(tScriptCheckpoint, wUniqueID, 0x2);
VALIDATE_OFFSET(tScriptCheckpoint, field_4, 0x4);
VALIDATE_SIZE(tScriptCheckpoint, 0x8);
struct tScriptEffectSystem
{
    char bUsed;
    short wUniqueID;
    void *m_pFxSystem;
};
VALIDATE_OFFSET(tScriptEffectSystem, bUsed, 0x0);
VALIDATE_OFFSET(tScriptEffectSystem, wUniqueID, 0x2);
VALIDATE_OFFSET(tScriptEffectSystem, m_pFxSystem, 0x4);
VALIDATE_SIZE(tScriptEffectSystem, 0x8);

struct tScriptSequence
{
    char bUsed;
    short wUniqueID;
};
VALIDATE_OFFSET(tScriptSequence, bUsed, 0x0);
VALIDATE_OFFSET(tScriptSequence, wUniqueID, 0x2);
VALIDATE_SIZE(tScriptSequence, 0x4);

#pragma pack(push,1)
struct tScriptText
{
    // defaults from CTheScripts::Init()
    float letterWidth = 0.48f;
    float letterHeight = 1.12f;
    CRGBA color = { 255, 255, 255, 255 };
    bool justify = false;
    bool centered = false;
    bool withBackground = false;
    char _pad = 0;
    float wrapWidth = float(RsGlobal.maximumWidth);
    float centerWidth = float(RsGlobal.maximumWidth);
    CRGBA backgroundBoxColor = { 128, 128, 128, 128 };
    bool proportional = true;
    CRGBA backgroundColor = { 0, 0, 0, 255 };
    char shadowType = 2; // drop shadow offset
    char outlineType = 0; // outline thickness
    bool drawBeforeFade = false;
    bool rightJustify = false;
    char _pad_25 = 0;
    char _pad_26 = 0;
    char _pad_27 = 0;
    int font = FONT_SUBTITLES;
    float xPosition = 0.0f;
    float yPosition = 0.0f;
    char text[8] = { 0 }; // gxt
    int param1 = -1;
    int param2 = -1;
};
VALIDATE_OFFSET(tScriptText, letterWidth, 0x0);
VALIDATE_OFFSET(tScriptText, letterHeight, 0x4);
VALIDATE_OFFSET(tScriptText, color, 0x8);
VALIDATE_OFFSET(tScriptText, justify, 0xC);
VALIDATE_OFFSET(tScriptText, centered, 0xD);
VALIDATE_OFFSET(tScriptText, withBackground, 0xE);
VALIDATE_OFFSET(tScriptText, _pad, 0xF);
VALIDATE_OFFSET(tScriptText, wrapWidth, 0x10);
VALIDATE_OFFSET(tScriptText, centerWidth, 0x14);
VALIDATE_OFFSET(tScriptText, backgroundBoxColor, 0x18);
VALIDATE_OFFSET(tScriptText, proportional, 0x1C);
VALIDATE_OFFSET(tScriptText, backgroundColor, 0x1D);
VALIDATE_OFFSET(tScriptText, shadowType, 0x21);
VALIDATE_OFFSET(tScriptText, outlineType, 0x22);
VALIDATE_OFFSET(tScriptText, drawBeforeFade, 0x23);
VALIDATE_OFFSET(tScriptText, rightJustify, 0x24);
VALIDATE_OFFSET(tScriptText, _pad_25, 0x25);
VALIDATE_OFFSET(tScriptText, _pad_26, 0x26);
VALIDATE_OFFSET(tScriptText, _pad_27, 0x27);
VALIDATE_OFFSET(tScriptText, font, 0x28);
VALIDATE_OFFSET(tScriptText, xPosition, 0x2C);
VALIDATE_OFFSET(tScriptText, yPosition, 0x30);
VALIDATE_OFFSET(tScriptText, text, 0x34);
VALIDATE_OFFSET(tScriptText, param1, 0x3C);
VALIDATE_OFFSET(tScriptText, param2, 0x40);
VALIDATE_SIZE(tScriptText, 0x44);
#pragma pack(pop)

#pragma pack(push,1)
struct tScriptRectangle
{
    // defaults from CTheScripts::Init()
    eScriptRectangleType type = eScriptRectangleType::NONE;
    bool drawBeforeFade = false;
    char _pad_5 = 0;
    short spriteIdx = -1;
    CRect rect = { 0.0f, 0.0f, 0.0f, 0.0f };
    float angle = 0.0f;
    CRGBA color = { 255, 255, 255, 255 };
    char title[8] = { 0 }; // gxt
    char _pad_28 = 0;
    char _pad_29 = 0;
    char message[8] = { 0 }; // gxt
    char _pad_32 = 0;
    char _pad_33 = 0;
    eFontAlignment alignment = eFontAlignment::ALIGN_CENTER;
    char _pad_36 = 0;
    char _pad_37 = 0;
    char _pad_38 = 0;
    int textboxStyle = 3;
};
VALIDATE_OFFSET(tScriptRectangle, type, 0x0);
VALIDATE_OFFSET(tScriptRectangle, drawBeforeFade, 0x4);
VALIDATE_OFFSET(tScriptRectangle, _pad_5, 0x5);
VALIDATE_OFFSET(tScriptRectangle, spriteIdx, 0x6);
VALIDATE_OFFSET(tScriptRectangle, rect, 0x8);
VALIDATE_OFFSET(tScriptRectangle, angle, 0x18);
VALIDATE_OFFSET(tScriptRectangle, color, 0x1C);
VALIDATE_OFFSET(tScriptRectangle, title, 0x20);
VALIDATE_OFFSET(tScriptRectangle, _pad_28, 0x28);
VALIDATE_OFFSET(tScriptRectangle, _pad_29, 0x29);
VALIDATE_OFFSET(tScriptRectangle, message, 0x2A);
VALIDATE_OFFSET(tScriptRectangle, _pad_32, 0x32);
VALIDATE_OFFSET(tScriptRectangle, _pad_33, 0x33);
VALIDATE_OFFSET(tScriptRectangle, alignment, 0x34);
VALIDATE_OFFSET(tScriptRectangle, _pad_36, 0x35);
VALIDATE_OFFSET(tScriptRectangle, _pad_37, 0x36);
VALIDATE_OFFSET(tScriptRectangle, _pad_38, 0x37);
VALIDATE_OFFSET(tScriptRectangle, textboxStyle, 0x38);
VALIDATE_SIZE(tScriptRectangle, 0x3C);
#pragma pack(pop)


struct tScriptAttachedAnimGroup
{
    int m_nModelID;
    char m_IfpName[16];
};
VALIDATE_OFFSET(tScriptAttachedAnimGroup, m_nModelID, 0x0);
VALIDATE_OFFSET(tScriptAttachedAnimGroup, m_IfpName, 0x4);
VALIDATE_SIZE(tScriptAttachedAnimGroup, 0x14);

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
VALIDATE_OFFSET(tScriptSearchlight, bUsed, 0x0);
VALIDATE_OFFSET(tScriptSearchlight, field_1, 0x1);
VALIDATE_OFFSET(tScriptSearchlight, bEnableShadow, 0x2);
VALIDATE_OFFSET(tScriptSearchlight, field_3, 0x3);
VALIDATE_OFFSET(tScriptSearchlight, wUniqueID, 0x4);
VALIDATE_OFFSET(tScriptSearchlight, field_6, 0x6);
VALIDATE_OFFSET(tScriptSearchlight, position, 0x8);
VALIDATE_OFFSET(tScriptSearchlight, target, 0x14);
VALIDATE_OFFSET(tScriptSearchlight, targetRadius, 0x20);
VALIDATE_OFFSET(tScriptSearchlight, baseRadius, 0x24);
VALIDATE_OFFSET(tScriptSearchlight, pathCoord1, 0x28);
VALIDATE_OFFSET(tScriptSearchlight, pathCoord2, 0x34);
VALIDATE_OFFSET(tScriptSearchlight, pathSpeed, 0x40);
VALIDATE_OFFSET(tScriptSearchlight, attachedEntity, 0x44);
VALIDATE_OFFSET(tScriptSearchlight, followingEntity, 0x48);
VALIDATE_OFFSET(tScriptSearchlight, tower, 0x4C);
VALIDATE_OFFSET(tScriptSearchlight, housing, 0x50);
VALIDATE_OFFSET(tScriptSearchlight, bulb, 0x54);
VALIDATE_OFFSET(tScriptSearchlight, targetSpot, 0x58);
VALIDATE_OFFSET(tScriptSearchlight, field_64, 0x64);
VALIDATE_OFFSET(tScriptSearchlight, field_70, 0x70);
VALIDATE_SIZE(tScriptSearchlight, 0x7C);

struct tUsedObject
{
    char szModelName[24];
    int dwModelIndex;
};
VALIDATE_OFFSET(tUsedObject, szModelName, 0x0);
VALIDATE_OFFSET(tUsedObject, dwModelIndex, 0x18);
VALIDATE_SIZE(tUsedObject, 0x1C);

struct tScriptSphere
{
    char bUsed;
    char field_1;
    short wUniqueID;
    int field_4;
    RwV3d vCoords;
    int fRadius;
};
VALIDATE_OFFSET(tScriptSphere, bUsed, 0x0);
VALIDATE_OFFSET(tScriptSphere, field_1, 0x1);
VALIDATE_OFFSET(tScriptSphere, wUniqueID, 0x2);
VALIDATE_OFFSET(tScriptSphere, field_4, 0x4);
VALIDATE_OFFSET(tScriptSphere, vCoords, 0x8);
VALIDATE_OFFSET(tScriptSphere, fRadius, 0x14);
VALIDATE_SIZE(tScriptSphere, 0x18);



class PLUGIN_API CTheScripts
{
public:
    SUPPORTED_10US static bool &DbgFlag;
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
    SUPPORTED_10US static int(&MultiScriptArray)[200]; // mission offsets in scm file
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
    SUPPORTED_10US static unsigned short &MessageWidth;
    SUPPORTED_10US static unsigned short &MessageCentre;
    SUPPORTED_10US static bool &bUseMessageFormatting;
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
    SUPPORTED_10US static tScriptSearchlight *ScriptSearchLightArray; // static tScriptSearchlight ScriptSearchLightArray[8]

    // script drawing
    SUPPORTED_10US static eUseTextCommandState& UseTextCommands;
    SUPPORTED_10US static unsigned short& NumberOfIntroTextLinesThisFrame;
    SUPPORTED_10US static tScriptText (&IntroTextLines)[96];
    SUPPORTED_10US static unsigned short& NumberOfIntroRectanglesThisFrame;
    SUPPORTED_10US static tScriptRectangle (&IntroRectangles)[128];
    SUPPORTED_10US static CSprite2d (&ScriptSprites)[128];

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
VALIDATE_SIZE(CTheScripts, 0x1);

#include "meta/meta.CTheScripts.h"

SUPPORTED_10US extern int (&ScriptParams)[32];
