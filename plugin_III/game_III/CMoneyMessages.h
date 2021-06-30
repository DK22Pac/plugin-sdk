/*
    Plugin-SDK (Grand Theft Auto 3) header file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/
#pragma once

#include "PluginBase.h"
#include "CMoneyMessage.h"

class PLUGIN_API CMoneyMessages {
public:
    SUPPORTED_10EN_11EN_STEAM static CMoneyMessage(&aMoneyMessages)[16]; // static CMoneyMessage aMoneyMessages[16]

    SUPPORTED_10EN_11EN_STEAM static void Init();
    SUPPORTED_10EN_11EN_STEAM static void Render();
};

#include "meta/meta.CMoneyMessages.h"
