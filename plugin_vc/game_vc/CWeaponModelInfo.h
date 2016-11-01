/*
Plugin-SDK (Grand Theft Auto) header file
Authors: GTA Community. See more here
https://github.com/DK22Pac/plugin-sdk
Do not delete this comment block. Respect others' work!
*/
#pragma once
#include "plbase/PluginBase_VC.h"
#include "CClumpModelInfo.h"
#include "eWeaponType.h"

class PLUGIN_API CWeaponModelInfo : public CClumpModelInfo {
public:
    
    //vtable

    void SetAtomic(int arg0, RpAtomic* arg1);

    //funcs

    int GetWeaponInfo();
    void Init();
    int SetWeaponInfo(int arg0);
};
