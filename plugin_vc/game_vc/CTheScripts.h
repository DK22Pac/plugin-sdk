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
#include "CRGBA.h"

struct PLUGIN_API tIntroText
{
    float m_fWidth;
    float m_fHeight;
    CRGBA m_Color;
    bool m_bJustify;
    bool m_bCenter;
    bool m_bBackground;
    bool m_bBackgroundOnlyText;
    float m_fSize;
    float m_fCentreSize;
    CRGBA m_BackgroundColor;
    bool m_bProportional;
    bool m_bDisable;
    bool m_bRightJustify;
    char __pad;
    unsigned int m_nFontStyle;
    float m_fX;
    float m_fY;
    wchar_t m_Text[100];
};
VALIDATE_SIZE(tIntroText, 0xF4);

class PLUGIN_API CTheScripts {
public:
    static tScriptParam *ScriptParams; // [32]

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

    static void ClearSpaceForMissionEntity(CVector const& position, CEntity* entity);
};

#include "meta/meta.CTheScripts.h"
