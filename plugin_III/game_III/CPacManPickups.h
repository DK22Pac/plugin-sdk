/*
    Plugin-SDK (Grand Theft Auto 3) header file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/
#pragma once

#include "PluginBase.h"
#include "CPacManPickup.h"

class PLUGIN_API CPacManPickups {
public:
    SUPPORTED_10EN_11EN_STEAM static CPacManPickup(&aPickUps)[256]; // static CPacManPickup aPickUps[256]
    SUPPORTED_10EN_11EN_STEAM static CVector &LastPickUpCoors;
    SUPPORTED_10EN_11EN_STEAM static int &PillsEatenInRace;
    SUPPORTED_10EN_11EN_STEAM static bool &bPMActive;

    SUPPORTED_10EN_11EN_STEAM static void CleanUpPacManStuff();
    SUPPORTED_10EN_11EN_STEAM static void ClearPMPickUps();
    SUPPORTED_10EN_11EN_STEAM static void GenerateOnePMPickUp(CVector pos);
    SUPPORTED_10EN_11EN_STEAM static void GeneratePMPickUps(CVector pos, float scrambleMult, short count, unsigned char type);
    SUPPORTED_10EN_11EN_STEAM static void GeneratePMPickUpsForRace(int race);
    SUPPORTED_10EN_11EN_STEAM static void Init();
    SUPPORTED_10EN_11EN_STEAM static unsigned int QueryPowerPillsCarriedByPlayer();
    SUPPORTED_10EN_11EN_STEAM static int QueryPowerPillsEatenInRace();
    SUPPORTED_10EN_11EN_STEAM static void Render();
    SUPPORTED_10EN_11EN_STEAM static void ResetPowerPillsCarriedByPlayer();
    SUPPORTED_10EN_11EN_STEAM static void ResetPowerPillsEatenInRace();
    SUPPORTED_10EN_11EN_STEAM static void StartPacManRace(int race);
    SUPPORTED_10EN_11EN_STEAM static void StartPacManRecord();
    SUPPORTED_10EN_11EN_STEAM static void StartPacManScramble(CVector pos, float scrambleMult, short count);
    SUPPORTED_10EN_11EN_STEAM static void Update();
};

SUPPORTED_10EN_11EN_STEAM extern CVector(&aRacePoints1)[107]; // CVector aRacePoints1[107]
SUPPORTED_10EN_11EN_STEAM extern short &ThingsToCollect;
SUPPORTED_10EN_11EN_STEAM extern short &CollectGameState;

#include "meta/meta.CPacManPickups.h"
