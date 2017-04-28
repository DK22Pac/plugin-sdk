/*
Plugin-SDK (Grand Theft Auto) header file
Authors: GTA Community. See more here
https://github.com/DK22Pac/plugin-sdk
Do not delete this comment block. Respect others' work!
*/
#pragma once

#include "plbase/PluginBase_III.h"
#include "CVector.h"
#include "RenderWare.h"

struct IFrame {
    RtQuat m_qOrientation;
    RwV3d m_vTranslation;
};
VALIDATE_SIZE(IFrame, 0x1C);

#pragma pack(push, 4)
struct AnimBlendFrameData {
    unsigned __int8 m_nFlags;
    CVector m_vOffset;
    IFrame *m_pIFrame;
    unsigned __int32 m_dwNodeId;
};
#pragma pack(pop)

VALIDATE_SIZE(AnimBlendFrameData, 0x18);