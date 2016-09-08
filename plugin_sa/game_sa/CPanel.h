/*
    Plugin-SDK (Grand Theft Auto) header file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/
#pragma once

#include "plbase/PluginBase_SA.h"
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