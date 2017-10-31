/*
Plugin-SDK (Grand Theft Auto) header file
Authors: GTA Community. See more here
https://github.com/DK22Pac/plugin-sdk
Do not delete this comment block. Respect others' work!
*/
#pragma once

#include "plbase/PluginBase_VC.h"

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
    static void SetBigMessage(const wchar_t* text, unsigned short style);
    static void SetHelpMessage(const wchar_t* text, bool quickMessage, bool permanent, bool addToBrief);
    static void SetMessage(const wchar_t* text);
    static void SetPagerMessage(const wchar_t* text);
    static void SetVehicleName(const wchar_t* text);
    static void SetZoneName(const wchar_t* text);
    static void Shutdown();

    static void SetBigMessage(const char* text, unsigned short style);
    static void SetHelpMessage(const char* text, bool quickMessage, bool permanent, bool addToBrief);
    static void SetMessage(const char* text);
    static void SetPagerMessage(const char* text);
    static void SetVehicleName(const char* text);
    static void SetZoneName(const char* text);
};
