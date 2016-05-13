#pragma once

#include "plbase/PluginBase.h"

#pragma pack(push,4)
class PLUGIN_API CReference
{
public:
	class CReference *m_pNext;
	class CEntity **m_ppEntity;
};
#pragma pack(pop)

VALIDATE_SIZE(CReference, 8);