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

public:
    void ForAllFrames(void (*cb)(AnimBlendFrameData*, void*), void* arg) {
        for (int i = 0; i < this->m_nNumFrames; i++)
            cb(&this->m_pFrames[i], arg);
    }

};
VALIDATE_OFFSET(CAnimBlendClumpData, m_associationsList, 0x0);
VALIDATE_OFFSET(CAnimBlendClumpData, m_nNumFrames, 0x8);
VALIDATE_OFFSET(CAnimBlendClumpData, m_pvecPedPosition, 0xC);
VALIDATE_OFFSET(CAnimBlendClumpData, m_pFrames, 0x10);
VALIDATE_SIZE(CAnimBlendClumpData, 0x14);