#pragma once
#include "plbase/PluginBase.h"

class PLUGIN_API CCheat {
public:
    // static char m_CheatString[30]
    static char *m_CheatString;

    static class CVehicle *VehicleCheat(int vehicleId);
};