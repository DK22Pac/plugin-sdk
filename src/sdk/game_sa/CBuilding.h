#pragma once
#include <plugin/plugin.h>
#include "CEntity.h"

#pragma pack(push, 4)
class PLUGIN_API CBuilding : public CEntity
{
public:
	CBuilding();
	~CBuilding();

	void ReplaceWithNewModel(int newModelIndex);

	void *operator new(unsigned int size);
	void operator delete(void *object);
};
#pragma pack(pop)

VALIDATE_SIZE(CBuilding, 0x38);