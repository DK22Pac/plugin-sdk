#pragma once
#include "plbase/PluginBase.h"

#pragma pack(push, 4)
struct PLUGIN_API RwObjectNameIdAssocation
{
	char *m_pName;
	unsigned int m_dwHierarchyId;
	unsigned int m_dwFlags;
};
#pragma pack(pop)

VALIDATE_SIZE(RwObjectNameIdAssocation, 0xC);