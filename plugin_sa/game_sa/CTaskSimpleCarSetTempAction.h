/*
    Plugin-SDK (Grand Theft Auto) header file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/
#pragma once

#include "plbase/PluginBase_SA.h"
#include "CTaskSimpleCarDrive.h"

class PLUGIN_API CTaskSimpleCarSetTempAction : public CTaskSimpleCarDrive {
protected:
    CTaskSimpleCarSetTempAction(plugin::dummy_func_t a) : CTaskSimpleCarDrive(a) {}
public:
    
};

//VALIDATE_SIZE(CTaskSimpleCarSetTempAction, 0x);