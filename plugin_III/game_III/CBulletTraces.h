/*
    Plugin-SDK (Grand Theft Auto 3) header file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/
#pragma once

#include "PluginBase.h"
#include "CVector.h"
#include "CBulletTrace.h"

class PLUGIN_API CBulletTraces {
public:
    SUPPORTED_10EN_11EN_STEAM static CBulletTrace(&aTraces)[16]; // static CBulletTrace aTraces[16]

    SUPPORTED_10EN_11EN_STEAM static void AddTrace(CVector *origin, CVector *target);
    SUPPORTED_10EN_11EN_STEAM static void Init();
    SUPPORTED_10EN_11EN_STEAM static void Render();
    SUPPORTED_10EN_11EN_STEAM static void Update();
};

#include "meta/meta.CBulletTraces.h"
