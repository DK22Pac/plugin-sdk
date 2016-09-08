/*
    Plugin-SDK (Grand Theft Auto) header file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/
#pragma once

#include "plbase/PluginBase_SA.h"
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