/*
    Plugin-SDK (Grand Theft Auto) header file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/
#pragma once
#include "plbase/PluginBase_SA.h"

class CAnimBlendStaticAssociation;

class CAnimBlendAssocGroup {
public:
    void *m_pAnimBlock;
    CAnimBlendStaticAssociation *m_pAssociations;
    unsigned int m_nNumAnimations;
    int m_nIdOffset;
    int m_nGroupID;
};

VALIDATE_SIZE(CAnimBlendAssocGroup, 0x14);