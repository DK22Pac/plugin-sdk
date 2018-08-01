/*
Plugin-SDK (Grand Theft Auto San Andreas) header file
Authors: GTA Community. See more here
https://github.com/DK22Pac/plugin-sdk
Do not delete this comment block. Respect others' work!
*/
#pragma once

#include "PluginBase.h"
#include "CTaskComplexJump.h"

class PLUGIN_API CTaskComplexClimb : public CTaskComplexJump {
protected:
    CTaskComplexClimb(plugin::dummy_func_t a) : CTaskComplexJump(a) {}
public:

    CTaskComplexClimb();
};

VALIDATE_SIZE(CTaskComplexClimb, 0x14);

