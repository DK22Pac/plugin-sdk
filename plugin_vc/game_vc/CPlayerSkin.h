/*
    Plugin-SDK (Grand Theft Auto Vice City) header file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/
#pragma once
#include "PluginBase.h"
#include "RenderWare.h"

struct PLUGIN_API CPlayerSkinData {
    int m_nSkinId;
    char m_aSkinNameDisplayed[256];
    char m_aSkinNameOriginal[256];
    char m_aDateInfo[256];
    CPlayerSkinData* m_pNextSkin;
};
VALIDATE_OFFSET(CPlayerSkinData, m_nSkinId, 0x0);
VALIDATE_OFFSET(CPlayerSkinData, m_aSkinNameDisplayed, 0x4);
VALIDATE_OFFSET(CPlayerSkinData, m_aSkinNameOriginal, 0x104);
VALIDATE_OFFSET(CPlayerSkinData, m_aDateInfo, 0x204);
VALIDATE_OFFSET(CPlayerSkinData, m_pNextSkin, 0x304);
VALIDATE_SIZE(CPlayerSkinData, 0x308);

class CPlayerSkin {
public:
    // static variables
    static int& m_txdSlot;

    //funcs
    static void BeginFrontendSkinEdit();
    static void EndFrontendSkinEdit();
    static int GetSkinTexture(char const* arg0);
    static void Initialise();
    static void RenderFrontendSkinEdit();
    static void Shutdown();
};
VALIDATE_SIZE(CPlayerSkin, 0x1);

extern RpClump*& gpPlayerClump;
