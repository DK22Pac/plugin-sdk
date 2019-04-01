/*
    Plugin-SDK (Grand Theft Auto 3) header file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/
#pragma once
#include "PluginBase.h"
#include "CVehicle.h"
#include "CAutomobile.h"

struct CZoneInfo;

class CCarCtrl {
public:
    static bool JoinCarWithRoadSystemGotoCoors(CVehicle* vehicle, CVector arg1, bool arg2);
};
