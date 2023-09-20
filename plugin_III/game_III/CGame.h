/*
    Plugin-SDK (Grand Theft Auto 3) header file
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
    //! Current number of area
    SUPPORTED_10EN_11EN_STEAM static int &currLevel;
    SUPPORTED_10EN_11EN_STEAM static bool &germanGame;
    SUPPORTED_10EN_11EN_STEAM static bool &playingIntro;
    SUPPORTED_10EN_11EN_STEAM static bool &frenchGame;
    SUPPORTED_10EN_11EN_STEAM static bool &noProstitutes;

    //! dummy function
    SUPPORTED_10EN_11EN_STEAM static void DrasticTidyUpMemory(bool flushDraw);
    SUPPORTED_10EN_11EN_STEAM static void FinalShutdown();
    SUPPORTED_10EN_11EN_STEAM static bool Initialise(char const *datFile);
    SUPPORTED_10EN_11EN_STEAM static bool InitialiseOnceAfterRW();
    SUPPORTED_10EN_11EN_STEAM static bool InitialiseOnceBeforeRW();
    SUPPORTED_10EN_11EN_STEAM static bool InitialiseRenderWare();
    SUPPORTED_10EN_11EN_STEAM static void InitialiseWhenRestarting();
    SUPPORTED_10EN_11EN_STEAM static void Process();
    SUPPORTED_10EN_11EN_STEAM static void ReInitGameObjectVariables();
    SUPPORTED_10EN_11EN_STEAM static void ReloadIPLs();
    SUPPORTED_10EN_11EN_STEAM static void ShutDownForRestart();
    SUPPORTED_10EN_11EN_STEAM static bool Shutdown();
    SUPPORTED_10EN_11EN_STEAM static void ShutdownRenderWare();
    //! dummy function
    SUPPORTED_10EN_11EN_STEAM static void TidyUpMemory(bool moveTextures, bool flushDraw);
};

SUPPORTED_10EN_11EN_STEAM extern int &gameTxdSlot;
extern int &gGameState;

SUPPORTED_10EN_11EN_STEAM void ValidateVersion();

extern bool DoRwStuffStartOfFrame(short topRed, short topGreen, short topBlue, short bottomRed, short bottomGreen, short bottomBlue, short alpha);
extern void DoRwStuffEndOfFrame();
extern class CSprite2d* LoadSplash(const char* name);

#include "meta/meta.CGame.h"
