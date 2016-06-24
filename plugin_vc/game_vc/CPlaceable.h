/***********************************************************************************/
/*******         This file is a part of GTA Vice City C++ SDK               ********/
/*******                                                                    ********/
/***********************************************************************************/
#pragma once

#include "plbase\PluginBase_VC.h"
#include "CMatrix.h"

class CPlaceable : public CMatrix {
public:
    CPlaceable(plugin::dummy_func_t) : CMatrix(plugin::dummy) {}
    CPlaceable();
    bool IsWithinArea(float x1, float y1, float z1, float x2, float y2, float z2);
    bool IsWithinArea(float x1, float y1, float x2, float y2);
    void SetHeading(float heading);
};