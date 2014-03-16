#pragma once

#include "plugin\plugin.h"

#pragma pack(push, 4)
class PLUGIN_API CNodeAddress
{
public:
	Int16 m_wAreaId;
	Int16 m_wNodeId;
};
#pragma pack(pop)

VALIDATE_SIZE(CNodeAddress, 4);