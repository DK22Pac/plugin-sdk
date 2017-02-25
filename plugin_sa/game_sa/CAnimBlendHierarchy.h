/*
    Plugin-SDK (Grand Theft Auto) header file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/
#pragma once

#include "plbase/PluginBase_SA.h"

class CAnimBlendSequence;

class CAnimBlendHierarchy {
public:
    unsigned int m_hashKey;
    CAnimBlendSequence *m_pSequences;
    unsigned short m_nSeqCount;
    bool m_bRunningCompressed;
    char field_B;
    int m_nAnimBlockId;
    float m_fTotalTime;
    int field_14;
};

VALIDATE_SIZE(CAnimBlendHierarchy, 0x18);