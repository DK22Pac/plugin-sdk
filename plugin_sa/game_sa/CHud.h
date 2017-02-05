/*
    Plugin-SDK (Grand Theft Auto) header file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/
#pragma once

#include "plbase/PluginBase_SA.h"

enum DRAW_FADE_STATE {

};

class CPed;

class CHud {
public:
	static char (*m_BigMessage)[128]; // static char m_BigMessage[7][128];
	static Bool &bScriptForceDisplayWithCounters;

    // called each frame from Render2dStuff()
    static void Draw();
    static void DrawAfterFade();
    static void DrawAreaName();
    static void DrawBustedWastedMessage();
    static void DrawCrossHairs();
    static float DrawFadeState(DRAW_FADE_STATE fadeState, int arg1);
    static void DrawHelpText();
    static void DrawMissionTimers();
    static void DrawMissionTitle();
    static void DrawOddJobMessage(unsigned char priority);
    static void DrawRadar();
    static void DrawScriptText(unsigned char priority);
    static void DrawSubtitles();
    static void DrawSuccessFailedMessage();
    static void DrawVehicleName();
    static void DrawVitalStats();
    static void GetRidOfAllHudMessages(unsigned char arg0);
    static float GetYPosBasedOnHealth(unsigned char playerId, float pos, char offset);
    static void Initialise();
    static void ReInitialise();
    static void ResetWastedText();
    static void SetBigMessage(char* text, unsigned short style);
    static void SetHelpMessage(char const* text, bool quickMessage, bool permanent, bool addToBrief);
    // for 'state', see enum eStatUpdateState (CStats.h)
    static void SetHelpMessageStatUpdate(unsigned char state, unsigned short statId, float diff, float max);
    static void SetMessage(char* text);
    static void SetVehicleName(char* name);
    static void SetZoneName(char* name, unsigned char displayState);
    static void Shutdown();
    static void DrawAmmo(CPed* ped, int x, int y, float alpha);
    static void DrawPlayerInfo();
    static void DrawTripSkip();
    static void DrawWanted();
    static void DrawWeaponIcon(CPed* ped, int x, int y, float alpha);
    static void RenderArmorBar(int playerId, int x, int y);
    static void RenderBreathBar(int playerId, int x, int y);
    static void RenderHealthBar(int playerId, int x, int y);
};