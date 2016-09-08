/*
    Plugin-SDK (Grand Theft Auto) header file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/
#pragma once

#include "plbase/PluginBase_SA.h"

#pragma pack(push, 4)
class PLUGIN_API LimbOrienation
{
public:
	float m_fYaw;
	float m_fPitch;
};
#pragma pack(pop)

VALIDATE_SIZE(LimbOrienation, 8);