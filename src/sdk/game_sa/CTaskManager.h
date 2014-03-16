#pragma once

#include <plugin/plugin.h>
#include "CTask.h"

#pragma pack(push, 4)
class PLUGIN_API CTaskManager
{
public:
	CTask *m_aPrimaryTasks[5];
	CTask *m_aSecondaryTasks[6];
	class CPed *m_pPed;
};
#pragma pack(pop)

VALIDATE_SIZE(CTaskManager, 0x30);