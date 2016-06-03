#pragma once

#include "plbase/PluginBase.h"
#include "CTaskComplexCarDriveMission.h"

class PLUGIN_API CTaskComplexCarDriveMissionKillPed : public CTaskComplexCarDriveMission {
protected:
    CTaskComplexCarDriveMissionKillPed(plugin::dummy_func_t a) : CTaskComplexCarDriveMission(a) {}
public:
    
};

//VALIDATE_SIZE(CTaskComplexCarDriveMissionKillPed, 0x);