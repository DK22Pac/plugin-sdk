#pragma once

#include <plugin/plugin.h>

#pragma pack(push, 4)
class PLUGIN_API CNodeAddress
{
public:
	int16_t m_wAreaId;
	int16_t m_wNodeId;
};
#pragma pack(pop)

VALIDATE_SIZE(CNodeAddress, 4);