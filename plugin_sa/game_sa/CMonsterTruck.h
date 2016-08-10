#pragma once

#include "plbase/PluginBase_SA.h"
#include "CAutomobile.h"

class CMonsterTruck : public CAutomobile {
protected:
    CMonsterTruck(plugin::dummy_func_t) : CAutomobile(plugin::dummy) {}
public:
    float field_988;
    float field_98C;
    float field_990;
    float field_994;
    float field_998;

    static float& DUMPER_COL_ANGLEMULT; // 0.0002

    CMonsterTruck(int modelIndex, unsigned char createdBy);

    void ExtendSuspension();
};

VALIDATE_SIZE(CMonsterTruck, 0x99C);

extern float& fWheelExtensionRate; // 0.1