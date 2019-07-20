/*
Plugin-SDK (Grand Theft Auto 3) header file
Authors: GTA Community. See more here
https://github.com/DK22Pac/plugin-sdk
Do not delete this comment block. Respect others' work!
*/
#pragma once

#include "PluginBase.h"
#include "RenderWare.h"

class PLUGIN_API CPlayerSkinData {
public:
	int m_nId;
	char m_aName[256];
	char m_aCurrentSkinName[256];
	char m_aDateInfo[256];
	CPlayerSkinData *field_304;
};

class CPlayerSkin {
public:
    // static variables
    static int  & m_txdSlot;
    static unsigned int &LastFlash;

    //funcs
    static void BeginFrontendSkinEdit();
    static void EndFrontendSkinEdit();
    static RwTexture* GetSkinTexture(char const* name);
    static void Initialise();
    static void RenderFrontendSkinEdit();
    static void Shutdown();
};