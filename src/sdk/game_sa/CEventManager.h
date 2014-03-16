#pragma once

#include <plugin/plugin.h>

#pragma pack(push, 4)
class PLUGIN_API CEventManager
{
protected:
	void *vtable;
public:
	class CPed *m_pPed;
	unsigned __int32 m_dwCount;
	void *m_apEvents[16];
};
#pragma pack(pop)

VALIDATE_SIZE(CEventManager, 0x4C);