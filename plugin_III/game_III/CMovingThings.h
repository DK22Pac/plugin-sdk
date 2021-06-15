/*
    Plugin-SDK (Grand Theft Auto 3) header file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/
#pragma once

#include "PluginBase.h"
#include "CMovingThing.h"
#include "CScrollBar.h"
#include "CTowerClock.h"
#include "CDigitalClock.h"

class PLUGIN_API CMovingThings {
public:
    SUPPORTED_10EN_11EN_STEAM static CMovingThing &StartCloseList;
    SUPPORTED_10EN_11EN_STEAM static CMovingThing &EndCloseList;
    SUPPORTED_10EN_11EN_STEAM static unsigned short &Num;

    SUPPORTED_10EN_11EN_STEAM static void Init();
    SUPPORTED_10EN_11EN_STEAM static void Render();
    SUPPORTED_10EN_11EN_STEAM static void Shutdown();
    SUPPORTED_10EN_11EN_STEAM static void Update();
};

SUPPORTED_10EN_11EN_STEAM extern CScrollBar(&aScrollBars)[11]; // CScrollBar aScrollBars[11]
SUPPORTED_10EN_11EN_STEAM extern CTowerClock(&aTowerClocks)[2]; // CTowerClock aTowerClocks[2]
SUPPORTED_10EN_11EN_STEAM extern CDigitalClock(&aDigitalClocks)[3]; // CDigitalClock aDigitalClocks[3]
SUPPORTED_10EN_11EN_STEAM extern CMovingThing(&aMovingThings)[128]; // CMovingThing aMovingThings[128]

#include "meta/meta.CMovingThings.h"
