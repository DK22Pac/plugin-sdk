#pragma once

#include "plbase/PluginBase.h"

#pragma pack(push, 4)
struct PLUGIN_API tTransmissionGear
{
	float m_fMaxVelocity;
	float m_fChangeUpVelocity;
	float m_fChangeDownVelocity;
};
#pragma pack(pop)

VALIDATE_SIZE(tTransmissionGear, 0xC);