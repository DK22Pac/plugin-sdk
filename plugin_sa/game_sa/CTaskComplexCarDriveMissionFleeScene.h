#pragma once

#include "plbase/PluginBase.h"
#include "CTaskComplexCarDriveMission.h"

class PLUGIN_API CTaskComplexCarDriveMissionFleeScene : public CTaskComplexCarDriveMission {
protected:
    CTaskComplexCarDriveMissionFleeScene(plugin::dummy_func_t a) : CTaskComplexCarDriveMission(a) {}
public:
    
};

//VALIDATE_SIZE(CTaskComplexCarDriveMissionFleeScene, 0x);