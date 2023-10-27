/*
    Plugin-SDK (Grand Theft Auto IV) source file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/
#include "CVehicleFactoryNY.h"
#include "Patch.h"

static CVehicleFactoryNY** VehicleFactoryAddr;
CVehicleFactoryNY** VehicleFactory = (CVehicleFactoryNY**)VehicleFactoryAddr;

CVehicleFactoryNY* GetVehicleFactory() {
    return *VehicleFactory;
}

template<>
void plugin::InitPatterns<CVehicleFactoryNY>() {
    VehicleFactoryAddr = (CVehicleFactoryNY**)plugin::patch::GetPointer(plugin::GetPattern("8B 0D ? ? ? ? 6A 00 8B 01 8D 54 24 34 8B 40 04", 2));
}
