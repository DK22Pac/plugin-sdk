/*
    Plugin-SDK (Grand Theft Auto 3) source file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/
#include "CCurrentVehicle.h"

PLUGIN_SOURCE_FILE

int ctor_addr(CCurrentVehicle) = ADDRESS_BY_VERSION(0x4AD5E0, 0x4AD6D0, 0x4AD660);
int ctor_gaddr(CCurrentVehicle) = GLOBAL_ADDRESS_BY_VERSION(0x4AD5E0, 0x4AD6D0, 0x4AD660);

int addrof(CCurrentVehicle::Display) = ADDRESS_BY_VERSION(0x4AD630, 0x4AD720, 0x4AD6B0);
int gaddrof(CCurrentVehicle::Display) = GLOBAL_ADDRESS_BY_VERSION(0x4AD630, 0x4AD720, 0x4AD6B0);

void CCurrentVehicle::Display() {
    plugin::CallMethodDynGlobal<CCurrentVehicle *>(gaddrof(CCurrentVehicle::Display), this);
}

int addrof(CCurrentVehicle::Init) = ADDRESS_BY_VERSION(0x4AD5F0, 0x4AD6E0, 0x4AD670);
int gaddrof(CCurrentVehicle::Init) = GLOBAL_ADDRESS_BY_VERSION(0x4AD5F0, 0x4AD6E0, 0x4AD670);

void CCurrentVehicle::Init() {
    plugin::CallMethodDynGlobal<CCurrentVehicle *>(gaddrof(CCurrentVehicle::Init), this);
}

int addrof(CCurrentVehicle::Process) = ADDRESS_BY_VERSION(0x4AD600, 0x4AD6F0, 0x4AD680);
int gaddrof(CCurrentVehicle::Process) = GLOBAL_ADDRESS_BY_VERSION(0x4AD600, 0x4AD6F0, 0x4AD680);

void CCurrentVehicle::Process() {
    plugin::CallMethodDynGlobal<CCurrentVehicle *>(gaddrof(CCurrentVehicle::Process), this);
}
