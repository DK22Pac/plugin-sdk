/*
    Plugin-SDK (Grand Theft Auto San Andreas) header file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/
#pragma once

#include "PluginBase.h"
#include "RenderWare.h"

class CAnimBlendSequence;
class CAnimBlendHierarchy;

class PLUGIN_API CAnimBlendStaticAssociation {
    PLUGIN_NO_DEFAULT_CONSTRUCTION_VIRTUALBASE(CAnimBlendStaticAssociation)

public:
    unsigned short m_nNumBlendNodes;
    short m_nAnimId;
    unsigned short m_nAnimGroup;
    unsigned short m_nFlags;
    CAnimBlendSequence **m_pSequenceArray;
    CAnimBlendHierarchy *m_pHeirarchy;

    // vtable function #0 (destructor)

    SUPPORTED_10US void AllocateSequenceArray(int count);
    SUPPORTED_10US void FreeSequenceArray();
    SUPPORTED_10US void Init(RpClump *clump, CAnimBlendHierarchy *hierarchy);
};

VTABLE_DESC(CAnimBlendStaticAssociation, 0x85C6CC, 1);
VALIDATE_SIZE(CAnimBlendStaticAssociation, 0x14);

#include "meta/meta.CAnimBlendStaticAssociation.h"
