/*
Plugin-SDK (Grand Theft Auto) header file
Authors: GTA Community. See more here
https://github.com/DK22Pac/plugin-sdk
Do not delete this comment block. Respect others' work!
*/
#pragma once
#include "plbase/PluginBase_VC.h"
#include "COnscreenTimer.h"
#include "CVehicle.h"

class CUserDisplay {
public:
    //variables
    static COnscreenTimer &OnscnTimer;
    static CVehicle &CurrentVehicle;

    //funcs
    static void Init();
    static void Process();
};