/*
Plugin-SDK (Grand Theft Auto Vice City) header file
Authors: GTA Community. See more here
https://github.com/DK22Pac/plugin-sdk
Do not delete this comment block. Respect others' work!
*/
#pragma once
#include "PluginBase.h"
#include "COnscreenTimer.h"
#include "CCurrentVehicle.h"


class CUserDisplay {
public:
    //variables
    static COnscreenTimer &OnscnTimer;
    static CCurrentVehicle &CurrentVehicle;

    //funcs
    static void Init();
    static void Process();
};