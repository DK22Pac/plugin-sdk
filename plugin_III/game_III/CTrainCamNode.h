/*
    Plugin-SDK (Grand Theft Auto 3) header file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/
#pragma once

#include "PluginBase.h"
#include "CVector.h"

class PLUGIN_API CTrainCamNode {
    PLUGIN_NO_DEFAULT_CONSTRUCTION(CTrainCamNode)

public:
    CVector m_vecCamPosition;
    CVector m_vecPointToLookAt;
    CVector m_vecMinPointInRange;
    CVector m_vecMaxPointInRange;
    float m_fDesiredFOV;
    float m_fNearClip;
};
VALIDATE_OFFSET(CTrainCamNode, m_vecCamPosition, 0x0);
VALIDATE_OFFSET(CTrainCamNode, m_vecPointToLookAt, 0xC);
VALIDATE_OFFSET(CTrainCamNode, m_vecMinPointInRange, 0x18);
VALIDATE_OFFSET(CTrainCamNode, m_vecMaxPointInRange, 0x24);
VALIDATE_OFFSET(CTrainCamNode, m_fDesiredFOV, 0x30);
VALIDATE_OFFSET(CTrainCamNode, m_fNearClip, 0x34);
VALIDATE_SIZE(CTrainCamNode, 0x38);

#include "meta/meta.CTrainCamNode.h"
