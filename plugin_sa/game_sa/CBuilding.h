/*
    Plugin-SDK (Grand Theft Auto) header file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/
#pragma once
#include "plbase/PluginBase_SA.h"
#include "CEntity.h"

#pragma pack(push, 4)
class PLUGIN_API CBuilding : public CEntity {
public:
	void ReplaceWithNewModel(int newModelIndex);
};
#pragma pack(pop)

VALIDATE_SIZE(CBuilding, 0x38);