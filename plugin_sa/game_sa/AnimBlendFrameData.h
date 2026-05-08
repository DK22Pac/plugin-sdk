/*
    Plugin-SDK (Grand Theft Auto San Andreas) header file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/
#pragma once

#include "PluginBase.h"
#include "CVector.h"

class PLUGIN_API AnimBlendFrameData {
public:
    unsigned int   m_nFlags;
    CVector        m_vecOffset;
    class IFrame  *m_pIFrame;
    unsigned int   m_nNodeId;
};
VALIDATE_OFFSET(AnimBlendFrameData, m_nFlags, 0x0);
VALIDATE_OFFSET(AnimBlendFrameData, m_vecOffset, 0x4);
VALIDATE_OFFSET(AnimBlendFrameData, m_pIFrame, 0x10);
VALIDATE_OFFSET(AnimBlendFrameData, m_nNodeId, 0x14);
VALIDATE_SIZE(AnimBlendFrameData, 0x18);
