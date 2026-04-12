/*
    Plugin-SDK (Grand Theft Auto 3) source file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/
#include "CCivilianPed.h"

PLUGIN_SOURCE_FILE

int ctor_addr_o(CCivilianPed, void(ePedType, unsigned int)) = ADDRESS_BY_VERSION(0x4BFF30, 0x4C0020, 0x4BFFB0);
int ctor_gaddr_o(CCivilianPed, void(ePedType, unsigned int)) = GLOBAL_ADDRESS_BY_VERSION(0x4BFF30, 0x4C0020, 0x4BFFB0);

int dtor_addr(CCivilianPed) = ADDRESS_BY_VERSION(0x4BFFC0, 0x4C00B0, 0x4C0040);
int dtor_gaddr(CCivilianPed) = GLOBAL_ADDRESS_BY_VERSION(0x4BFFC0, 0x4C00B0, 0x4C0040);

int del_dtor_addr(CCivilianPed) = ADDRESS_BY_VERSION(0x4C1170, 0x4C1260, 0x4C11F0);
int del_dtor_gaddr(CCivilianPed) = GLOBAL_ADDRESS_BY_VERSION(0x4C1170, 0x4C1260, 0x4C11F0);

void* CCivilianPed::operator new(size_t size) {
    return plugin::CallAndReturnDynGlobal<void*, size_t>(op_new_gaddr(CPed), size);
}

void CCivilianPed::operator delete(void* data) {
    return plugin::CallDynGlobal<void*>(op_delete_gaddr(CPed), data);
}

int addrof(CCivilianPed::ProcessControl) = ADDRESS_BY_VERSION(0x4BFFE0, 0x4C00D0, 0x4C0060);
int gaddrof(CCivilianPed::ProcessControl) = GLOBAL_ADDRESS_BY_VERSION(0x4BFFE0, 0x4C00D0, 0x4C0060);

CCivilianPed::CCivilianPed(ePedType pedType, unsigned int modelIndex) {
    plugin::CallMethodDynGlobal<CCivilianPed*, ePedType, unsigned int>(ctor_gaddr_o(CCivilianPed, void(ePedType, unsigned int)), this, pedType, modelIndex);
}

void CCivilianPed::ProcessControl() {
    plugin::CallVirtualMethod<8, CCivilianPed *>(this);
}

int addrof(CCivilianPed::CivilianAI) = ADDRESS_BY_VERSION(0x4C07A0, 0x4C0890, 0x4C0820);
int gaddrof(CCivilianPed::CivilianAI) = GLOBAL_ADDRESS_BY_VERSION(0x4C07A0, 0x4C0890, 0x4C0820);

void CCivilianPed::CivilianAI() {
    plugin::CallMethodDynGlobal<CCivilianPed *>(gaddrof(CCivilianPed::CivilianAI), this);
}
