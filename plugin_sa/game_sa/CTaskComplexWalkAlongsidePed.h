#pragma once

#include "plbase/PluginBase_SA.h"
#include "CTaskComplex.h"

class PLUGIN_API CTaskComplexWalkAlongsidePed : public CTaskComplex {
protected:
    CTaskComplexWalkAlongsidePed(plugin::dummy_func_t a) : CTaskComplex(a) {}
public:
    
};

//VALIDATE_SIZE(CTaskComplexWalkAlongsidePed, 0x);