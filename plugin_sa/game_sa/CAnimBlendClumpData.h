/*
    Plugin-SDK (Grand Theft Auto San Andreas) header file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/
#pragma once

#include "PluginBase.h"
#include "AnimBlendFrameData.h"

class PLUGIN_API CAnimBlendClumpData {
public:
    void               *m_pLastAssociationLink;
    int field_4;
    unsigned int        m_nNumBones;
    int field_C;
    AnimBlendFrameData *m_pBones;
};

VALIDATE_SIZE(CAnimBlendClumpData, 0x14);
