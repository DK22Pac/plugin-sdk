#pragma once
#include "plbase/PluginBase.h"
#include "CEntity.h"

#pragma pack(push, 4)
class PLUGIN_API CBuilding : public CEntity
{
protected:
    CBuilding(plugin::dummy_func_t a) : CEntity(a) {}
    
public:
	CBuilding();
	~CBuilding();

	void ReplaceWithNewModel(int newModelIndex);

	void *operator new(unsigned int size);
	void operator delete(void *object);
};
#pragma pack(pop)

VALIDATE_SIZE(CBuilding, 0x38);