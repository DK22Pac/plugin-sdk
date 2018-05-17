/*
    Plugin-SDK (Grand Theft Auto Vice City) header file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/
#pragma once

#include "PluginBase.h"

class PLUGIN_API CGame {
public:
    SUPPORTED_10EN_11EN_STEAM static bool &bDemoMode; // true
    SUPPORTED_10EN_11EN_STEAM static bool &nastyGame; // true
    SUPPORTED_10EN_11EN_STEAM static char *aDatFile; // static char aDatFile[32]
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

SUPPORTED_10EN_11EN_STEAM void ValidateVersion();

#include "meta/meta.CGame.h"
