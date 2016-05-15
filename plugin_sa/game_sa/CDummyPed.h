#pragma once
#include "plbase/PluginBase.h"
#include "CDummy.h"

#pragma pack(push, 4)
class PLUGIN_API CDummyPed : public CDummy {
public:
};
#pragma pack(pop)

VALIDATE_SIZE(CDummyPed, 0x38);