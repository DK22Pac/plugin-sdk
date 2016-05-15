#pragma once
#include "plbase/PluginBase.h"
#include "CEntity.h"

#pragma pack(push, 4)
class PLUGIN_API CBuilding : public CEntity {
public:
	void ReplaceWithNewModel(int newModelIndex);
};
#pragma pack(pop)

VALIDATE_SIZE(CBuilding, 0x38);