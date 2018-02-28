/*
    Plugin-SDK (Grand Theft Auto San Andreas) header file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/
#pragma once

#include "PluginBase.h"
#include "CAnimBlendHierarchy.h"
#include "RenderWare.h"

class PLUGIN_API CAnimBlendStaticAssociation {
public:
    unsigned short m_nNumBlendNodes;       // +0x04
    short m_nAnimID;                       // +0x06
    short m_nAnimGroup;                    // +0x08
    short m_nFlags;                        // +0x0A
    int* m_pAnimBlendNodesSequenceArray;   // +0x0C 
    CAnimBlendHierarchy* m_pAnimBlendHier; // +0x10

    //funcs

    void AllocateSequenceArray(int size);
    CAnimBlendStaticAssociation();
    void Init(RpClump* pClump, CAnimBlendHierarchy* pAnimBlendHier);
    virtual ~CAnimBlendStaticAssociation() = 0;
};

VALIDATE_SIZE(CAnimBlendStaticAssociation, 0x14);
