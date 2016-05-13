#pragma once

#include "plbase/PluginBase.h"
#include "CReference.h"

#define MAX_NUM_REFERENCES 3000

#pragma pack(push,4)
class PLUGIN_API CReferences
{
public:
	// count: MAX_NUM_REFERENCES (3000)
	static CReference *aRefs;
	static CReference **pEmptyList;

	void Init();
	unsigned int ListSize(CReference *ref);
	void RemoveReferencesToPlayer();
	void PruneAllReferencesInWorld();
};
#pragma pack(pop)