/*
    Plugin-SDK (Grand Theft Auto) header file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/
#pragma once

#include "plbase\PluginBase_III.h"
#include "CMatrix.h"

class CPlaceable : public CMatrix {
public:
    CPlaceable(plugin::dummy_func_t) : CMatrix(plugin::dummy) {}
    CPlaceable();
    bool IsWithinArea(float x1, float y1, float z1, float x2, float y2, float z2);
    bool IsWithinArea(float x1, float y1, float x2, float y2);
    void SetHeading(float heading);

    // CPlaceable virtual table: destructor only

    virtual ~CPlaceable();
};

VALIDATE_SIZE(CPlaceable, 0x4C);