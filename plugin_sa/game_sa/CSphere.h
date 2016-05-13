#pragma once

#include "plbase/PluginBase.h"
#include "CVector.h"

#pragma pack(push, 4)
class PLUGIN_API CSphere
{
public:
	CVector m_vCenter;
	float m_fRadius;

	void Set(float radius, CVector  const& center);
};
#pragma pack(pop)

VALIDATE_SIZE(CSphere, 0x10);