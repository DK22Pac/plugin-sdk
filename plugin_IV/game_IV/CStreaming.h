/*
    Plugin-SDK (Grand Theft Auto IV) header file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/
#pragma once
#include "PluginBase.h"
#include "CModelInfo.h"
#include "CFileType.h"

enum eStreamingFlags {
    GAME_REQUIRED = 0x2,
    MISSION_REQUIRED = 0x4,
    KEEP_IN_MEMORY = 0x8,
    PRIORITY_REQUEST = 0x10
};

class CStreaming {
public:
    static int32_t& ms_scriptFlags;

public:
    static void LoadAllRequestedModels(int32_t onlyPriorityRequests);
    static void RequestModel(int32_t model, int32_t fileTypeId, int32_t flags);
    static void ScriptRequestModel(int32_t hash, uint32_t* unused);
    static bool ScriptHasModelLoaded(int32_t hash);
    static void RequestScript(int32_t hash, int32_t flags);
    static void SetIsModelDeletable(int32_t model, int32_t fileTypeId);
};
