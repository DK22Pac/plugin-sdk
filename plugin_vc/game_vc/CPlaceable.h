/*
    Plugin-SDK (Grand Theft Auto Vice City) header file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/
#pragma once

#include "PluginBase.h"
#include "CMatrix.h"

class CPlaceable : public CMatrix {
public:
    CPlaceable(plugin::dummy_func_t) : CMatrix(plugin::dummy) {}
    CPlaceable();
    bool IsWithinArea(float x1, float y1, float z1, float x2, float y2, float z2);
    bool IsWithinArea(float x1, float y1, float x2, float y2);
    void SetHeading(float heading);
    void SetOrientation(float x, float y, float z);
    void GetOrientation(float& x, float& y, float& z);
};