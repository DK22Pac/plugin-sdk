/*
Plugin-SDK (Grand Theft Auto 3) header file
Authors: GTA Community. See more here
https://github.com/DK22Pac/plugin-sdk
Do not delete this comment block. Respect others' work!
*/
#pragma once

#include "PluginBase.h"
#include "CReference.h"

class CReferences {
public:
    CReference m_aRefs[800];
    CReference **m_pEmptyList;
    
    //variables
    static CReference *aRefs;
    static CReference **pEmptyList;

    //funcs
    static void Init();
    static void PruneAllReferencesInWorld();
    static void RemoveReferencesToPlayer();
};

VALIDATE_SIZE(CReferences, 0x1904);