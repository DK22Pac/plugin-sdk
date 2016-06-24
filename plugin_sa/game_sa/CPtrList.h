#pragma once
#include "plbase/PluginBase_SA.h"

#pragma pack(push, 4)
class PLUGIN_API CPtrList
{
public:
	void *m_pNode;
};
#pragma pack(pop)

VALIDATE_SIZE(CPtrList, 4);