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
    void *m_pLastAssociationLink;
    int dword4;
    int m_nNumBones;
    int dwordC;
    AnimBlendFrameData *m_pBones;
        
    //funcs
    CAnimBlendClumpData();
    void SetNumberOfBones(int arg0);
    ~CAnimBlendClumpData();
    //CAnimBlendClumpData::ForAllFrames(void (*)(AnimBlendFrameData *,void *),void *) 0x401930
};

VALIDATE_SIZE(CAnimBlendClumpData, 0x14);