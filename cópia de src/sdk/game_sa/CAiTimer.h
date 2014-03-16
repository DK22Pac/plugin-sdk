#pragma once

#include "plugin/plugin.h"

#pragma pack(push, 4)
class PLUGIN_API CAiTimer
{
public:
	__int32 m_nStartTime;
	__int32 m_nInterval;
	__int8 m_bStarted;
	__int8 field_9;
};
#pragma pack(pop)

VALIDATE_SIZE(CAiTimer, 0xC);