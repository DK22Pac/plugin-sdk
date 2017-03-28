/*
Plugin-SDK (Grand Theft Auto) header file
Authors: GTA Community. See more here
https://github.com/DK22Pac/plugin-sdk
Do not delete this comment block. Respect others' work!
*/
#pragma once

#include "plbase/PluginBase_III.h"
#include "CClumpModelInfo.h"

class CPedModelInfo : public CClumpModelInfo {
public:

    //funcs

    CPedModelInfo();
    void CreateHitColModel();
    void SetLowDetailClump(RpClump* clump);
    ~CPedModelInfo();
};
