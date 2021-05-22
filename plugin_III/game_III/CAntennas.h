/*
    Plugin-SDK (Grand Theft Auto 3) header file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/
#pragma once

#include "PluginBase.h"
#include "CVector.h"
#include "CAntenna.h"

class PLUGIN_API CAntennas {
public:
    SUPPORTED_10EN_11EN_STEAM static CAntenna(&aAntennas)[8]; // static CAntenna aAntennas[8]

    SUPPORTED_10EN_11EN_STEAM static void Init();
    SUPPORTED_10EN_11EN_STEAM static void RegisterOne(unsigned int id, CVector dir, CVector pos, float length);
    SUPPORTED_10EN_11EN_STEAM static void Render();
    SUPPORTED_10EN_11EN_STEAM static void Update();
};

#include "meta/meta.CAntennas.h"
