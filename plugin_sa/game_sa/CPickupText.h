#pragma once
#include "plbase/PluginBase_SA.h"

#pragma pack(push, 1)
class PLUGIN_API CPickupText
{
public:
	float m_fX;
	float m_fY;
	int field_8;
	float m_fW;
	float m_fH;
	class RwRGBA m_Color;
	char flags;
	char field_19;
	char __padding[2];
	int m_dwPrice;
	int m_dwTextMessage;
};
#pragma pack(pop)

