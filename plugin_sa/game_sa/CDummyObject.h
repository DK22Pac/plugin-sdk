#pragma once
#include "plbase/PluginBase.h"
#include "CDummy.h"

#pragma pack(push, 4)
class PLUGIN_API CDummyObject : public CDummy {
public:
};
#pragma pack(pop)

VALIDATE_SIZE(CDummyObject, 0x38);