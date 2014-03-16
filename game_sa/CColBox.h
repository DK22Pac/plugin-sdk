#pragma once

#include "plugin\plugin.h"
#include "CBox.h"

#pragma pack(push, 1)
class PLUGIN_API CColBox : public CBox
{
public:
	unsigned __int8 m_nMaterial;
	unsigned __int8 m_nFlags;
	unsigned __int8 m_nLighting;
	unsigned __int8 m_nLight;

	void Set(CVector  const& sup, CVector  const& inf, unsigned char material , unsigned char flags, unsigned char lighting);
	void operator=(CColBox const& right);
};
#pragma pack(pop)

VALIDATE_SIZE(CColBox, 0x1C);