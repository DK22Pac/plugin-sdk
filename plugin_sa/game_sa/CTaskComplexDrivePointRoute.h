#pragma once

#include "plbase/PluginBase_SA.h"
#include "CTaskComplex.h"

class PLUGIN_API CTaskComplexDrivePointRoute : public CTaskComplex {
protected:
    CTaskComplexDrivePointRoute(plugin::dummy_func_t a) : CTaskComplex(a) {}
public:
    
};

//VALIDATE_SIZE(CTaskComplexDrivePointRoute, 0x);