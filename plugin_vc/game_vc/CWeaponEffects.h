/*
Plugin-SDK (Grand Theft Auto) header file
Authors: GTA Community. See more here
https://github.com/DK22Pac/plugin-sdk
Do not delete this comment block. Respect others' work!
*/
#pragma once
#include "plbase\PluginBase_VC.h"
#include "CVector.h"

class CWeaponEffects {
public:
    
    //vtable
     CWeaponEffects();

    //funcs
    static void ClearCrossHair();
    static void Init();
    static void MarkTarget(CVector arg0, unsigned char arg1, unsigned char arg2, unsigned char arg3, unsigned char arg4, float arg5);
    static void Render();
    static void Shutdown();
};