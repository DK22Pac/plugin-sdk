/*
    Plugin-SDK (Grand Theft Auto Vice City) header file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/
#pragma once

#include "PluginBase.h"
#include "RenderWare.h"
#include "CSprite2d.h"

class PLUGIN_API CGame {
public:
    SUPPORTED_10EN_11EN_STEAM static bool &bDemoMode; // true
    SUPPORTED_10EN_11EN_STEAM static bool &nastyGame; // true
    SUPPORTED_10EN_11EN_STEAM static char(&aDatFile)[32]; // static char aDatFile[32]
    SUPPORTED_10EN_11EN_STEAM static int &currArea;
    SUPPORTED_10EN_11EN_STEAM static int &currLevel;
    SUPPORTED_10EN_11EN_STEAM static bool &germanGame;
    SUPPORTED_10EN_11EN_STEAM static bool &playingIntro;
    SUPPORTED_10EN_11EN_STEAM static bool &frenchGame;
    SUPPORTED_10EN_11EN_STEAM static bool &noProstitutes;

    SUPPORTED_10EN_11EN_STEAM static bool CanSeeOutSideFromCurrArea();
    SUPPORTED_10EN_11EN_STEAM static bool CanSeeWaterFromCurrArea();
    SUPPORTED_10EN_11EN_STEAM static void DrasticTidyUpMemory();
    SUPPORTED_10EN_11EN_STEAM static void FinalShutdown();
    SUPPORTED_10EN_11EN_STEAM static void InitAfterLostFocus();
    SUPPORTED_10EN_11EN_STEAM static bool Initialise(char const *datFile);
    SUPPORTED_10EN_11EN_STEAM static bool InitialiseOnceAfterRW();
    SUPPORTED_10EN_11EN_STEAM static bool InitialiseOnceBeforeRW();
    SUPPORTED_10EN_11EN_STEAM static bool InitialiseRenderWare();
    SUPPORTED_10EN_11EN_STEAM static void InitialiseWhenRestarting();
    SUPPORTED_10EN_11EN_STEAM static void Process();
    SUPPORTED_10EN_11EN_STEAM static void ReInitGameObjectVariables();
    SUPPORTED_10EN_11EN_STEAM static void ShutDownForRestart();
    SUPPORTED_10EN_11EN_STEAM static bool Shutdown();
    SUPPORTED_10EN_11EN_STEAM static void ShutdownRenderWare();
    SUPPORTED_10EN_11EN_STEAM static void TidyUpMemory(bool a1, bool clearD3Dmem);
};

SUPPORTED_10EN_11EN_STEAM extern int &splashTxdId;
SUPPORTED_10EN_11EN_STEAM extern bool &g_SlowMode;

SUPPORTED_10EN_11EN_STEAM void ValidateVersion();
SUPPORTED_10EN_11EN_STEAM RsEventStatus AppEventHandler(RsEvent event, void *param);
SUPPORTED_10EN_11EN_STEAM bool InitialiseGame();
SUPPORTED_10EN_11EN_STEAM void FrontendIdle();
SUPPORTED_10EN_11EN_STEAM void Idle(void *param);
SUPPORTED_10EN_11EN_STEAM void Render2dStuff();
SUPPORTED_10EN_11EN_STEAM void RenderEffects();
SUPPORTED_10EN_11EN_STEAM void RenderScene();
SUPPORTED_10EN_11EN_STEAM void ProcessSlowMode();
SUPPORTED_10EN_11EN_STEAM void LoadingScreen(char const *title, char const *message, char const *screenName);
SUPPORTED_10EN_11EN_STEAM void ResetLoadingScreenBar();
SUPPORTED_10EN_11EN_STEAM char const *GetLevelSplashScreen(int screenId);
SUPPORTED_10EN_11EN_STEAM char const *GetRandomSplashScreen();
SUPPORTED_10EN_11EN_STEAM void DestroySplashScreen();
SUPPORTED_10EN_11EN_STEAM CSprite2d *LoadSplash(char const *splashName);
SUPPORTED_10EN_11EN_STEAM bool PluginAttach();
SUPPORTED_10EN_11EN_STEAM void DoRWStuffEndOfFrame();
SUPPORTED_10EN_11EN_STEAM void DoFade();
SUPPORTED_10EN_11EN_STEAM bool DoRWStuffStartOfFrame(short topR, short topG, short topB, short bottomR, short bottomG, short bottomB, short alpha);
//! dummy function
SUPPORTED_10EN_11EN_STEAM void TestModelIndices();
SUPPORTED_10EN_11EN_STEAM void MatchModelString(char *modelName, int modelIndex);
SUPPORTED_10EN_11EN_STEAM void InitModelIndices();
SUPPORTED_10EN_11EN_STEAM void LittleTest();

#include "meta/meta.CGame.h"
