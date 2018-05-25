/*
    Plugin-SDK (Grand Theft Auto Vice City) header file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/
#pragma once

#include "PluginBase.h"
#include "CVehicle.h"
#include "COneSheet.h"

class PLUGIN_API CRubbish {
public:
    SUPPORTED_10EN_11EN_STEAM static COneSheet *aSheets; // static COneSheet aSheets[32]
    SUPPORTED_10EN_11EN_STEAM static COneSheet &StartMoversList;
    SUPPORTED_10EN_11EN_STEAM static COneSheet &EndMoversList;
    SUPPORTED_10EN_11EN_STEAM static COneSheet &StartEmptyList;
    SUPPORTED_10EN_11EN_STEAM static COneSheet &EndStaticsList;
    SUPPORTED_10EN_11EN_STEAM static COneSheet &EndEmptyList;
    SUPPORTED_10EN_11EN_STEAM static COneSheet &StartStaticsList;

    SUPPORTED_10EN_11EN_STEAM static void Render();
    SUPPORTED_10EN_11EN_STEAM static void SetVisibility(bool bVisibility);
    SUPPORTED_10EN_11EN_STEAM static void Shutdown();
    SUPPORTED_10EN_11EN_STEAM static void StirUp(CVehicle *pVehicle);
    SUPPORTED_10EN_11EN_STEAM static void Update();
};

SUPPORTED_10EN_11EN_STEAM extern int *gpRubbishTexture; // int gpRubbishTexture[4]


#include "meta/meta.CRubbish.h"
