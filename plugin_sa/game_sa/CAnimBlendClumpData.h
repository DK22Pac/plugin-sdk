/*
    Plugin-SDK (Grand Theft Auto San Andreas) header file
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

    SUPPORTED_10US CAnimBlendClumpData();

    SUPPORTED_10US ~CAnimBlendClumpData();

    SUPPORTED_10US void ForAllFrames(void(*callback)(AnimBlendFrameData *, void *), void *data);
    //! dummy function
    SUPPORTED_10US void ForAllFramesInSPR(void(*callback)(AnimBlendFrameData *, void *), void *data, unsigned int a3);
    //! dummy function
    SUPPORTED_10US void LoadFramesIntoSPR();
    SUPPORTED_10US void SetNumberOfBones(int numBones);
};

VALIDATE_SIZE(CAnimBlendClumpData, 0x14);

#include "meta/meta.CAnimBlendClumpData.h"
