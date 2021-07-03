/*
    Plugin-SDK (Grand Theft Auto 3) header file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/
#pragma once

#include "PluginBase.h"
#include "RenderWare.h"

class PLUGIN_API CPlayerSkin {
public:
    SUPPORTED_10EN_11EN_STEAM static int &m_txdSlot;

    SUPPORTED_10EN_11EN_STEAM static void BeginFrontendSkinEdit();
    SUPPORTED_10EN_11EN_STEAM static void EndFrontendSkinEdit();
    SUPPORTED_10EN_11EN_STEAM static RwTexture *GetSkinTexture(char const *name);
    SUPPORTED_10EN_11EN_STEAM static void Initialise();
    SUPPORTED_10EN_11EN_STEAM static void RenderFrontendSkinEdit();
    SUPPORTED_10EN_11EN_STEAM static void Shutdown();
};

struct PLUGIN_API CPlayerSkinData {
    int m_nSkinId;
    char m_aSkinNameDisplayed[256];
    char m_aSkinNameOriginal[256];
    char m_aDateInfo[256];
    CPlayerSkinData *m_pNextSkin;
};

SUPPORTED_10EN_11EN_STEAM extern RpClump *&gpPlayerClump;
SUPPORTED_10EN_11EN_STEAM extern float &gOldFov;

SUPPORTED_10EN_11EN_STEAM void FindPlayerDff(unsigned int &offset, unsigned int &size);
SUPPORTED_10EN_11EN_STEAM void LoadPlayerDff();

VALIDATE_SIZE(CPlayerSkinData, 0x308);

#include "meta/meta.CPlayerSkin.h"
