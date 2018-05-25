/*
    Plugin-SDK (Grand Theft Auto San Andreas) header file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/
#pragma once

#include "PluginBase.h"
#include "AnimAssociationData.h"
#include "CVector.h"
#include "AnimBlendFrameData.h"

class PLUGIN_API CAnimBlendClumpData {
public:
    AnimAssociationData *m_pFirstAssociation;
    int field_4;
    int m_nNumFrames;
    CVector *m_pvecPedPosition;
    AnimBlendFrameData *m_pFrames;

    SUPPORTED_10US CAnimBlendClumpData();

    SUPPORTED_10US ~CAnimBlendClumpData();

    SUPPORTED_10US void ForAllFrames(void(*callback)(AnimBlendFrameData *, void *), void *data);
    SUPPORTED_10US void SetNumberOfBones(int numBones);

    //! dummy function
    SUPPORTED_10US static void LoadFramesIntoSPR();
};

VALIDATE_SIZE(CAnimBlendClumpData, 0x14);

#include "meta/meta.CAnimBlendClumpData.h"
