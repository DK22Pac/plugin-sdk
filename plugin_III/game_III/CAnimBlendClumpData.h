/*
    Plugin-SDK (Grand Theft Auto 3) header file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/
#pragma once

#include "PluginBase.h"
#include "CAnimBlendLink.h"
#include "CVector.h"
#include "CVector2D.h"
#include "AnimBlendFrameData.h"

class PLUGIN_API CAnimBlendClumpData {
    PLUGIN_NO_DEFAULT_CONSTRUCTION(CAnimBlendClumpData)

public:
    CAnimBlendLink link;
    int m_nNumFrames;
    union {
        CVector2D *m_vecVelocity2d;
        CVector *m_vecVelocity3d;
    };
    AnimBlendFrameData *m_pFrames; //!< order of frames is determined by RW hierarchy

    SUPPORTED_10EN_11EN_STEAM void ForAllFrames(void(*func)(AnimBlendFrameData *, void *), void *data);
    SUPPORTED_10EN_11EN_STEAM void SetNumberOfBones(int n);
};

VALIDATE_SIZE(CAnimBlendClumpData, 0x14);

#include "meta/meta.CAnimBlendClumpData.h"
