#pragma once

#include "plbase/PluginBase.h"
#include "CPed.h"

class PLUGIN_API CCivilianPed : public CPed {
public:
    CCivilianPed(ePedType pedType, unsigned int modelIndex);
};

VALIDATE_SIZE(CCivilianPed, 0x79C);