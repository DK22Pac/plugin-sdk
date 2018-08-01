/*
Plugin-SDK (Grand Theft Auto) header file
Authors: GTA Community. See more here
https://github.com/DK22Pac/plugin-sdk
Do not delete this comment block. Respect others' work!
*/
#pragma once

#include "PluginBase.h"
#include "CTaskComplex.h"

class PLUGIN_API CTaskComplexStuckInAir : public CTaskComplex {
protected:
    CTaskComplexStuckInAir(plugin::dummy_func_t a) : CTaskComplex(a) {}
public:


    CTaskComplexStuckInAir();
};

VALIDATE_SIZE(CTaskComplexStuckInAir, 0xC);

