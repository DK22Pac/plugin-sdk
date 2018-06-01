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
#include "tIntroText.h"

class PLUGIN_API CTheScripts {
public:
    SUPPORTED_10EN_11EN_STEAM static tIntroText(&IntroTextLines)[48]; // static tIntroText IntroTextLines[48]
    SUPPORTED_10EN_11EN_STEAM static unsigned char(&ScriptSpace)[260512]; // static unsigned char ScriptSpace[260512]
    SUPPORTED_10EN_11EN_STEAM static short &NumberOfIntroTextLinesThisFrame;

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
};

#include "meta/meta.CTheScripts.h"
