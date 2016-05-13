#pragma once

#include "plbase/PluginBase.h"

#pragma pack(push, 4)
class PLUGIN_API LimbOrienation
{
public:
	float m_fYaw;
	float m_fPitch;
};
#pragma pack(pop)

VALIDATE_SIZE(LimbOrienation, 8);