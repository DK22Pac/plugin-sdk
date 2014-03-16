#pragma once
#include <plugin/plugin.h>
#include "CEntity.h"

#pragma pack(push, 4)
class PLUGIN_API CDummy : public CEntity
{
protected:
    CDummy(plugin::dummy_func_t a) : CEntity(a) {}
    
public:
	CDummy();
	~CDummy();

	void *operator new(unsigned int size);
	void operator delete(void *object);
};
#pragma pack(pop)

VALIDATE_SIZE(CDummy, 0x38);