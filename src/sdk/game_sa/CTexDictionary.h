#pragma once

#include <plugin/plugin.h>
#include "RenderWareTypes.h"

#pragma pack (push, 1)
class PLUGIN_API CTexDictionary
{
public:
	// class variables
	RwTexDictionary *m_pRwDictionary;
	unsigned __int16 m_dwRefsCount;
	__int16 m_dwParentIndex;
	unsigned __int32 hash;
};
#pragma pack (pop)

VALIDATE_SIZE(CTexDictionary, 0xC);