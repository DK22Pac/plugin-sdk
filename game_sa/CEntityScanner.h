#pragma once

#include "plugin\plugin.h"

#pragma pack(push, 4)
class PLUGIN_API CEntityScanner
{
protected:
	void *vtable;
public:
	__int32 field_4;
	unsigned __int32 m_dwCount;
	class CEntity *m_apEntities[16];
	__int32 field_4C;
};
#pragma pack(pop)

VALIDATE_SIZE(CEntityScanner, 0x50);