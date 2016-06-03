#pragma once

#include "plbase/PluginBase.h"
#include "CTaskComplex.h"

class PLUGIN_API CTaskComplexTurnToFaceEntityOrCoord : public CTaskComplex {
protected:
    CTaskComplexTurnToFaceEntityOrCoord(plugin::dummy_func_t a) : CTaskComplex(a) {}
public:
    
};

//VALIDATE_SIZE(CTaskComplexTurnToFaceEntityOrCoord, 0x);