/*
    Plugin-SDK (Grand Theft Auto Vice City) header file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/
#pragma once

#include "PluginBase.h"
#include "RenderWare.h"
#include "CVector.h"
#include "AnimBlendFrameData.h"

class PLUGIN_API CAnimBlendClumpData {
public:
    RwLinkList m_associationsList;
    int m_nNumFrames;
    CVector *m_pvecPedPosition;
    AnimBlendFrameData *m_pFrames;
};

VALIDATE_SIZE(CAnimBlendClumpData, 0x14);