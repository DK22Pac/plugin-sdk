/*
Plugin-SDK (Grand Theft Auto) header file
Authors: GTA Community. See more here
https://github.com/DK22Pac/plugin-sdk
Do not delete this comment block. Respect others' work!
*/
#pragma once

#include "plbase/PluginBase_VC.h"

// Internal character type used by Rockstar* for UI text.
// There is no advantage to using GtaChar instead of char, but Rockstar* used it so we have to
// deal with it.
// HACK: It is recommended to (carefully) use const wchar_t*/std::wstring and reinterpret_cast it/.c_str() into GtaChar*.
//  Russian or Chinese characters are known to hang the game, because GtaChar is not wchar_t.
typedef unsigned short GtaChar;

enum DRAW_FADE_STATE {

};

class CHud {
public:
    //variables
    static __int64(*m_HelpMessageToPrint)[];
    static __int64(*m_LastHelpMessage)[];
    static __int64(*m_Message)[];
    static __int64(*m_HelpMessage)[];
    static int &m_HelpMessageState;
    static int &m_pZoneName;
    static int &m_pVehicleName;
    static char &m_Wants_To_Draw_3dMarkers;
    static char &m_Wants_To_Draw_Hud;
    
    //funcs
    static void Draw();
    static void DrawAfterFade();
    static float DrawFadeState(DRAW_FADE_STATE fadeState, int arg1);
    static void GetRidOfAllHudMessages();
    static void Initialise();
    static bool IsHelpMessageBeingDisplayed();
    static void ReInitialise();
    static void ResetWastedText();
    static void SetBigMessage(const GtaChar* text, unsigned short style);
    static void SetHelpMessage(const GtaChar* text, bool quickMessage, bool permanent, bool addToBrief);
    static void SetMessage(const GtaChar* text);
    static void SetPagerMessage(const GtaChar* text);
    static void SetVehicleName(const GtaChar* text);
    static void SetZoneName(const GtaChar* text);
    static void Shutdown();
};
