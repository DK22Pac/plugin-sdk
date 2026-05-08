/*
    Plugin-SDK (Grand Theft Auto 3) header file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/
#pragma once

#include "PluginBase.h"
#include "CFont.h"
#include "CRunningScript.h"
#include "CPed.h"
#include "CVehicle.h"
#include "CObject.h"
#include "CPlayerInfo.h"
#include "CMissionCleanup.h"

extern unsigned int MAX_SCRIPT_SPACE_SIZE; // default 260512

class CUpsideDownCarCheck;
class CStuckCarCheck;

enum class eUseTextCommandState : char
{
    DISABLED,
    DISABLE_NEXT_FRAME,
    ENABLED_BY_SCRIPT
};

#pragma pack(push,1)
struct tScriptText
{
    // defaults from CTheScripts
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
    int font = FONT_HEADING;
    float xPosition = 0.0f;
    float yPosition = 0.0f;
    wchar_t text[500] = { 0 };
};
VALIDATE_OFFSET(tScriptText, letterWidth, 0x0);
VALIDATE_OFFSET(tScriptText, letterHeight, 0x4);
VALIDATE_OFFSET(tScriptText, color, 0x8);
VALIDATE_OFFSET(tScriptText, justify, 0xC);
VALIDATE_OFFSET(tScriptText, centered, 0xD);
VALIDATE_OFFSET(tScriptText, withBackground, 0xE);
VALIDATE_OFFSET(tScriptText, backgroundOnly, 0xF);
VALIDATE_OFFSET(tScriptText, wrapWidth, 0x10);
VALIDATE_OFFSET(tScriptText, centerWidth, 0x14);
VALIDATE_OFFSET(tScriptText, backgroundBoxColor, 0x18);
VALIDATE_OFFSET(tScriptText, proportional, 0x1C);
VALIDATE_OFFSET(tScriptText, drawBeforeFade, 0x1D);
VALIDATE_OFFSET(tScriptText, rightJustify, 0x1E);
VALIDATE_OFFSET(tScriptText, _pad, 0x1F);
VALIDATE_OFFSET(tScriptText, font, 0x20);
VALIDATE_OFFSET(tScriptText, xPosition, 0x24);
VALIDATE_OFFSET(tScriptText, yPosition, 0x28);
VALIDATE_OFFSET(tScriptText, text, 0x2C);
VALIDATE_SIZE(tScriptText, 0x414);
#pragma pack(pop)

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
VALIDATE_OFFSET(tScriptRectangle, isUsed, 0x0);
VALIDATE_OFFSET(tScriptRectangle, drawBeforeFade, 0x1);
VALIDATE_OFFSET(tScriptRectangle, spriteIdx, 0x2);
VALIDATE_OFFSET(tScriptRectangle, rect, 0x4);
VALIDATE_OFFSET(tScriptRectangle, color, 0x14);
VALIDATE_SIZE(tScriptRectangle, 0x18);
#pragma pack(pop)


class CTheScripts {
public:
    static tScriptParam (&ScriptParams)[32]; // [32]
    static unsigned char *ScriptSpace; // static unsigned char ScriptSpace[MAX_SCRIPT_SPACE_SIZE]
    static unsigned int &BaseBriefIdForContact;
    static unsigned short &CommandsExecuted;
    static unsigned char &CountdownToMakePlayerUnsafe;
    static unsigned char &DbgFlag;
    static unsigned char &FailCurrentMission;
    static int *InvisibilitySettingArray;
    static CMissionCleanup &MissionCleanUp;
    static unsigned short &NumScriptDebugLines;
    static unsigned short &NumberOfUsedObjects;
    static unsigned int &OnAMissionFlag;
    static unsigned int &OnAMissionForContactFlag;
    static unsigned short &ScriptSphereArray;
    static unsigned short &ScriptsUpdated;
    static int &StoreVehicleIndex;
    static unsigned char &StoreVehicleWasRandom;
    static CStuckCarCheck *StuckCars;
    static CUpsideDownCarCheck *UpsideDownCars;
    static bool &bAlreadyRunningAMissionScript;
    static bool &bUsingAMultiScriptFile;
    static CRunningScript *&pActiveScripts;
    static CRunningScript *&pIdleScripts;

    // script drawing
    static eUseTextCommandState& UseTextCommands;
    static unsigned short& NumberOfIntroTextLinesThisFrame;
    static tScriptText (&IntroTextLines)[2];
    static unsigned short& NumberOfIntroRectanglesThisFrame;
    static tScriptRectangle (&IntroRectangles)[16];
    static CSprite2d (&ScriptSprites)[16];

    //funcs
    static void Init();
    static bool IsPedStopped(CPed* ped);
    static bool IsPlayerOnAMission();
    static bool IsPlayerStopped(CPlayerInfo* info);
    static bool IsVehicleStopped(CVehicle* vehicle);
    static void CleanUpThisPed(CPed* ped);
    static void CleanUpThisObject(CObject* object);
    static void CleanUpThisVehicle(CVehicle* vehicle);
    static void ClearSpaceForMissionEntity(CVector const& position, CEntity* entity);
};
VALIDATE_SIZE(CTheScripts, 0x1);