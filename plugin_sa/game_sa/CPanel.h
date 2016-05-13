#pragma once

#include "plbase/PluginBase.h"
#include "CVector.h"

#pragma pack(push, 4)
class PLUGIN_API CPanel
{
public:
    unsigned short m_nFrameId;
    unsigned short m_nAxis;
    float m_fAngleLimit;
    CVector m_vRotation;
    CVector m_vPos;
};
#pragma pack(pop)

VALIDATE_SIZE(CPanel, 0x20);