/*
    Plugin-SDK (Grand Theft Auto 3) header file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/
#pragma once

#include "PluginBase.h"

class PLUGIN_API CCredits {
public:
    SUPPORTED_10EN_11EN_STEAM static unsigned int &CreditsStartTime;
    SUPPORTED_10EN_11EN_STEAM static bool &bCreditsGoing;

    SUPPORTED_10EN_11EN_STEAM static bool AreCreditsDone();
    SUPPORTED_10EN_11EN_STEAM static void Init();
    SUPPORTED_10EN_11EN_STEAM static void PrintCreditSpace(float space, unsigned int *line);
    SUPPORTED_10EN_11EN_STEAM static void PrintCreditText(float scaleX, float scaleY, wchar_t *text, unsigned int *lineOffset, float scrollOffset);
    SUPPORTED_10EN_11EN_STEAM static void Render();
    SUPPORTED_10EN_11EN_STEAM static void Start();
    SUPPORTED_10EN_11EN_STEAM static void Stop();
};

#include "meta/meta.CCredits.h"
