/*
    Plugin-SDK (Grand Theft Auto) header file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/
#pragma once

#include "plbase\PluginBase_VC.h"
#include "CStreamingInfo.h"

class CStreaming {
public:
    static CStreamingInfo *ms_aInfoForModel; // static CStreamingInfo ms_aInfoForModel[7951]

    static void RequestModel(int modelIndex, int flags);
    static void LoadAllRequestedModels(bool onlyQuickRequests);
    static void SetModelIsDeletable(int modelIndex);
};
