/*
    Plugin-SDK (Grand Theft Auto 3) header file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/
#pragma once

#include "PluginBase.h"
#include "AnimBlendFrameData.h"

class CAnimBlendClumpData {
public:
    RwLinkList m_associationsList;
    int m_nNumBones;
    CVector *m_pvecPedPosition;
    AnimBlendFrameData *m_pBones;
        
    //funcs
    CAnimBlendClumpData();
    ~CAnimBlendClumpData();
    void SetNumberOfBones(int numBones);
    void ForAllFrames(void(*callback)(AnimBlendFrameData *, void *), void *data);
};

VALIDATE_SIZE(CAnimBlendClumpData, 0x14);