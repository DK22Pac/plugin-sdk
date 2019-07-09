/*
    Plugin-SDK (Grand Theft Auto 3) header file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/
#pragma once

#include "PluginBase.h"
#include "CVector.h"
#include "CRegisteredMotionBlurStreak.h"

class PLUGIN_API CMotionBlurStreaks {
public:
    SUPPORTED_10EN_11EN_STEAM static CRegisteredMotionBlurStreak(&aStreaks)[4]; // static CRegisteredMotionBlurStreak aStreaks[4]

    SUPPORTED_10EN_11EN_STEAM static void Init();
    SUPPORTED_10EN_11EN_STEAM static void RegisterStreak(unsigned int id, unsigned char red, unsigned char green, unsigned char blue, CVector leftPoint, CVector rightPoint);
    SUPPORTED_10EN_11EN_STEAM static void Render();
    SUPPORTED_10EN_11EN_STEAM static void Update();
};

#include "meta/meta.CMotionBlurStreaks.h"
