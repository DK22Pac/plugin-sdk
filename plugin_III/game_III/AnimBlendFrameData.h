/*
    Plugin-SDK (Grand Theft Auto 3) header file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/
#pragma once

#include "PluginBase.h"
#include "CVector.h"
#include "RenderWare.h"

struct PLUGIN_API IFrame {
    RtQuat m_qOrientation;
    RwV3d m_vecTranslation;
};

VALIDATE_SIZE(IFrame, 0x1C);

struct PLUGIN_API AnimBlendFrameData {
    unsigned int m_nFlags;
    CVector m_vecOffset;
    IFrame *m_pIFrame;
    unsigned int m_nNodeId;
};

VALIDATE_SIZE(AnimBlendFrameData, 0x18);
