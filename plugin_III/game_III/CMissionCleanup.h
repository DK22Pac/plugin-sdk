/*
    Plugin-SDK (Grand Theft Auto 3) header file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/
#pragma once

#include "PluginBase.h"

enum PLUGIN_API eCleanupEntityType : unsigned char {
    CLEANUP_UNUSED = 0,
    CLEANUP_CAR = 1,
    CLEANUP_CHAR = 2,
    CLEANUP_OBJECT = 3
};

struct PLUGIN_API tCleanupEntity {
    unsigned char m_nType; //!< see eCleanupEntityType
    int m_nEntityIndex;
};

class PLUGIN_API CMissionCleanup {
    PLUGIN_NO_DEFAULT_CONSTRUCTION(CMissionCleanup)

public:
    tCleanupEntity m_sEntities[50];
    unsigned char m_nCount;

    SUPPORTED_10EN_11EN_STEAM void AddEntityToList(int id, unsigned char type);
    SUPPORTED_10EN_11EN_STEAM tCleanupEntity *FindFree();
    SUPPORTED_10EN_11EN_STEAM void Init();
    SUPPORTED_10EN_11EN_STEAM void Process();
    SUPPORTED_10EN_11EN_STEAM void RemoveEntityFromList(int id, unsigned char type);
};

VALIDATE_SIZE(tCleanupEntity, 0x8);
VALIDATE_SIZE(CMissionCleanup, 0x194);

#include "meta/meta.CMissionCleanup.h"
