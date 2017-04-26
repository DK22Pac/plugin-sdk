/*
Plugin-SDK (Grand Theft Auto) header file
Authors: GTA Community. See more here
https://github.com/DK22Pac/plugin-sdk
Do not delete this comment block. Respect others' work!
*/
#pragma once

#include "plbase\PluginBase_III.h"
#include "RenderWare.h"

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