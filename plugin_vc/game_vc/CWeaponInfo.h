/*
Plugin-SDK (Grand Theft Auto) header file
Authors: GTA Community. See more here
https://github.com/DK22Pac/plugin-sdk
Do not delete this comment block. Respect others' work!
*/
#pragma once
#include "plbase/PluginBase_VC.h"
#include "eWeaponType.h"
#include "eWeaponFire.h"

class CWeaponInfo {
public:

    //vtable
    CWeaponInfo();

    //funcs
    // get weapon fire type by name
    static eWeaponFire FindWeaponFireType(char* name);
    // get weapon info for this type 
    static CWeaponInfo* GetWeaponInfo(eWeaponType weaponType);
    // initialisation
    static void Initialise();
    // load weapon data file
    static void LoadWeaponData();
    // closing
    static void Shutdown();
};