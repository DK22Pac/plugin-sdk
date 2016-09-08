/*
    Plugin-SDK (Grand Theft Auto) header file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/
#pragma once

#include "plbase/PluginBase_SA.h"
#include "CQuaternion.h"

#pragma pack(push, 4)
class PLUGIN_API IFrame
{
public:
    CVector m_qOrientation;
    CQuaternion m_vTranslation;
};
#pragma pack(pop)

VALIDATE_SIZE(IFrame, 0x1C);