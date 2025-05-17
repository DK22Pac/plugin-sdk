/*
    Plugin-SDK (Grand Theft Auto Vice City) header file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/
#pragma once

#include "PluginBase.h"
#include "CRunningScript.h"
#include "CObject.h"
#include "CVehicle.h"
#include "CPed.h"
#include "CPlayerInfo.h"
#include "CFont.h"
#include "CRGBA.h"

enum class eUseTextCommandState : char
{
    DISABLED,
    DISABLE_NEXT_FRAME,
    ENABLED_BY_SCRIPT
};

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
    bool backgroundOnly = false;
    float wrapWidth = 182.0f;
    float centerWidth = float(RsGlobal.maximumWidth);
    CRGBA backgroundBoxColor = { 128, 128, 128, 128 };
    bool proportional = true;
    bool drawBeforeFade = false;
    bool rightJustify = false;
    char _pad = 0;
    int font = FONT_STANDARD;
    float xPosition = 0.0f;
    float yPosition = 0.0f;
    wchar_t text[100] = { 0 };
};
#pragma pack(pop)
VALIDATE_SIZE(tScriptText, 0xF4);

#pragma pack(push,1)
struct tScriptRectangle
{
    // defaults from CTheScripts::Init()
    bool isUsed = false;
    bool drawBeforeFade = false;
    short spriteIdx = -1;
    CRect rect;
    CRGBA color = { 255, 255, 255, 255 };
};
#pragma pack(pop)
VALIDATE_SIZE(tScriptRectangle, 0x18);




class PLUGIN_API CTheScripts {
public:
    static tScriptParam *ScriptParams; // [32]
    static CRunningScript*& pActiveScripts;

    SUPPORTED_10EN_11EN_STEAM static unsigned char(&ScriptSpace)[260512]; // static unsigned char ScriptSpace[260512]

    // script drawing
    SUPPORTED_10EN_11EN_STEAM static eUseTextCommandState& UseTextCommands;
    SUPPORTED_10EN_11EN_STEAM static unsigned short& NumberOfIntroTextLinesThisFrame;
    SUPPORTED_10EN_11EN_STEAM static tScriptText (&IntroTextLines)[48];
    SUPPORTED_10EN_11EN_STEAM static unsigned short& NumberOfIntroRectanglesThisFrame;
    SUPPORTED_10EN_11EN_STEAM static tScriptRectangle (&IntroRectangles)[16];
    SUPPORTED_10EN_11EN_STEAM static CSprite2d (&ScriptSprites)[16];

    SUPPORTED_10EN_11EN_STEAM static void CleanUpThisObject(CObject *pObject);
    SUPPORTED_10EN_11EN_STEAM static void CleanUpThisPed(CPed *pPed);
    SUPPORTED_10EN_11EN_STEAM static void CleanUpThisVehicle(CVehicle *pVehicle);
    SUPPORTED_10EN_11EN_STEAM static void DrawScriptSpheres();
    SUPPORTED_10EN_11EN_STEAM static void Init();
    SUPPORTED_10EN_11EN_STEAM static bool IsPlayerOnAMission();
    SUPPORTED_10EN_11EN_STEAM static bool IsPlayerStopped(CPlayerInfo *pPlayerIfo);
    SUPPORTED_10EN_11EN_STEAM static bool IsVehicleStopped(CVehicle *pPlayer);
    SUPPORTED_10EN_11EN_STEAM static void Process();
    SUPPORTED_10EN_11EN_STEAM static void ReadMultiScriptFileOffsetsFromScript();
    SUPPORTED_10EN_11EN_STEAM static void ReadObjectNamesFromScript();
    SUPPORTED_10EN_11EN_STEAM static void RemoveScriptTextureDictionary();
    SUPPORTED_10EN_11EN_STEAM static void RemoveThisPed(CPed *pPed);
    SUPPORTED_10EN_11EN_STEAM static CRunningScript *StartNewScript(int addr);
    SUPPORTED_10EN_11EN_STEAM static CRunningScript *StartTestScript();
    SUPPORTED_10EN_11EN_STEAM static void UndoBuildingSwaps();
    SUPPORTED_10EN_11EN_STEAM static void UndoEntityInvisibilitySettings();
    SUPPORTED_10EN_11EN_STEAM static void UpdateObjectIndices();

    static void ClearSpaceForMissionEntity(CVector const& position, CEntity* entity);
};

#include "meta/meta.CTheScripts.h"
