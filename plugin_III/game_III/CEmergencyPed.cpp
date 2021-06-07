/*
    Plugin-SDK (Grand Theft Auto 3) source file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/
#include "CEmergencyPed.h"

PLUGIN_SOURCE_FILE

int ctor_addr_o(CEmergencyPed, void(unsigned int)) = ADDRESS_BY_VERSION(0x4C2E40, 0x4C2EE0, 0x4C2E70);
int ctor_gaddr_o(CEmergencyPed, void(unsigned int)) = GLOBAL_ADDRESS_BY_VERSION(0x4C2E40, 0x4C2EE0, 0x4C2E70);

int dtor_addr(CEmergencyPed) = ADDRESS_BY_VERSION(0x4C2EF0, 0x4C2F90, 0x4C2F20);
int dtor_gaddr(CEmergencyPed) = GLOBAL_ADDRESS_BY_VERSION(0x4C2EF0, 0x4C2F90, 0x4C2F20);

int del_dtor_addr(CEmergencyPed) = ADDRESS_BY_VERSION(0x4C3F40, 0x4C3FE0, 0x4C3F70);
int del_dtor_gaddr(CEmergencyPed) = GLOBAL_ADDRESS_BY_VERSION(0x4C3F40, 0x4C3FE0, 0x4C3F70);

int addrof(CEmergencyPed::ProcessControl) = ADDRESS_BY_VERSION(0x4C2F10, 0x4C2FB0, 0x4C2F40);
int gaddrof(CEmergencyPed::ProcessControl) = GLOBAL_ADDRESS_BY_VERSION(0x4C2F10, 0x4C2FB0, 0x4C2F40);

void CEmergencyPed::ProcessControl() {
    plugin::CallVirtualMethod<8, CEmergencyPed *>(this);
}

int addrof(CEmergencyPed::FiremanAI) = ADDRESS_BY_VERSION(0x4C3CE0, 0x4C3D80, 0x4C3D10);
int gaddrof(CEmergencyPed::FiremanAI) = GLOBAL_ADDRESS_BY_VERSION(0x4C3CE0, 0x4C3D80, 0x4C3D10);

void CEmergencyPed::FiremanAI() {
    plugin::CallMethodDynGlobal<CEmergencyPed *>(gaddrof(CEmergencyPed::FiremanAI), this);
}

int addrof(CEmergencyPed::InRange) = ADDRESS_BY_VERSION(0x4C3EC0, 0x4C3F60, 0x4C3EF0);
int gaddrof(CEmergencyPed::InRange) = GLOBAL_ADDRESS_BY_VERSION(0x4C3EC0, 0x4C3F60, 0x4C3EF0);

bool CEmergencyPed::InRange(CPed *victim) {
    return plugin::CallMethodAndReturnDynGlobal<bool, CEmergencyPed *, CPed *>(gaddrof(CEmergencyPed::InRange), this, victim);
}

int addrof(CEmergencyPed::MedicAI) = ADDRESS_BY_VERSION(0x4C30A0, 0x4C3140, 0x4C30D0);
int gaddrof(CEmergencyPed::MedicAI) = GLOBAL_ADDRESS_BY_VERSION(0x4C30A0, 0x4C3140, 0x4C30D0);

void CEmergencyPed::MedicAI() {
    plugin::CallMethodDynGlobal<CEmergencyPed *>(gaddrof(CEmergencyPed::MedicAI), this);
}
