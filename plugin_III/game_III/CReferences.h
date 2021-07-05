/*
    Plugin-SDK (Grand Theft Auto 3) header file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/
#pragma once

#include "PluginBase.h"
#include "CReference.h"

class PLUGIN_API CReferences {
public:
    SUPPORTED_10EN_11EN_STEAM static CReference(&aRefs)[800]; // static CReference aRefs[800]
    SUPPORTED_10EN_11EN_STEAM static CReference *&pEmptyList;

    SUPPORTED_10EN_11EN_STEAM static void Init();
    SUPPORTED_10EN_11EN_STEAM static void PruneAllReferencesInWorld();
    SUPPORTED_10EN_11EN_STEAM static void RemoveReferencesToPlayer();
};

#include "meta/meta.CReferences.h"
