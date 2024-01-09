/*
    Plugin-SDK (Grand Theft Auto IV) header file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/
#pragma once
#include "PluginBase.h"
#include "Rage.h"
#include "CVehicleFactory.h"

class CVehicleFactoryNY : public CVehicleFactory {
private:
    static CVehicleFactoryNY*& ms_pInstance;

public:
    CVehicle* CreateVehicle(int32_t modelId, int32_t createdBy, rage::Matrix44* matrix, bool arg4) {
        return plugin::CallVirtualMethodAndReturn<CVehicle*, 1>(this, modelId, createdBy, matrix, arg4);
    }

public:
    static CVehicleFactoryNY* GetInstance() {
        return ms_pInstance;
    }
};

