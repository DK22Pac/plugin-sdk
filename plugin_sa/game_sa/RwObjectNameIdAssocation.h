/*
    Plugin-SDK (Grand Theft Auto) header file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/
#pragma once
#include "plbase/PluginBase_SA.h"

#pragma pack(push, 4)
struct PLUGIN_API RwObjectNameIdAssocation
{
	char *m_pName;
	unsigned int m_dwHierarchyId;
	unsigned int m_dwFlags;
};
#pragma pack(pop)

VALIDATE_SIZE(RwObjectNameIdAssocation, 0xC);