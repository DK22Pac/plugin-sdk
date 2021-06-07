/*
    Plugin-SDK (Grand Theft Auto 3) source file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/
#include "CPed.h"

PLUGIN_SOURCE_FILE

PLUGIN_VARIABLE CVector &vecPedCarDoorAnimOffset = *reinterpret_cast<CVector *>(GLOBAL_ADDRESS_BY_VERSION(0x62E030, 0x62E030, 0x63E030));
PLUGIN_VARIABLE CVector &vecPedCarDoorLoAnimOffset = *reinterpret_cast<CVector *>(GLOBAL_ADDRESS_BY_VERSION(0x62E03C, 0x62E03C, 0x63E03C));
PLUGIN_VARIABLE CVector &vecPedVanRearDoorAnimOffset = *reinterpret_cast<CVector *>(GLOBAL_ADDRESS_BY_VERSION(0x62E048, 0x62E048, 0x63E048));
PLUGIN_VARIABLE CVector &vecPedTrainDoorAnimOffset = *reinterpret_cast<CVector *>(GLOBAL_ADDRESS_BY_VERSION(0x62E054, 0x62E054, 0x63E054));
PLUGIN_VARIABLE CVector &vecPedDraggedOutCarAnimOffset = *reinterpret_cast<CVector *>(GLOBAL_ADDRESS_BY_VERSION(0x62E060, 0x62E060, 0x63E060));
PLUGIN_VARIABLE CVector &vecPedQuickDraggedOutCarAnimOffset = *reinterpret_cast<CVector *>(GLOBAL_ADDRESS_BY_VERSION(0x62E06C, 0x62E06C, 0x63E06C));

int ctor_addr_o(CPed, void(unsigned int)) = ADDRESS_BY_VERSION(0x4C41C0, 0x4C4260, 0x4C41F0);
int ctor_gaddr_o(CPed, void(unsigned int)) = GLOBAL_ADDRESS_BY_VERSION(0x4C41C0, 0x4C4260, 0x4C41F0);

int dtor_addr(CPed) = ADDRESS_BY_VERSION(0x4C50D0, 0x4C5170, 0x4C5100);
int dtor_gaddr(CPed) = GLOBAL_ADDRESS_BY_VERSION(0x4C50D0, 0x4C5170, 0x4C5100);

int op_new_addr(CPed) = ADDRESS_BY_VERSION(0x4C5220, 0x4C52C0, 0x4C5250);
int op_new_gaddr(CPed) = GLOBAL_ADDRESS_BY_VERSION(0x4C5220, 0x4C52C0, 0x4C5250);

int op_new_addr_o(CPed, void *(unsigned int, int)) = ADDRESS_BY_VERSION(0x4C5230, 0x4C52D0, 0x4C5260);
int op_new_gaddr_o(CPed, void *(unsigned int, int)) = GLOBAL_ADDRESS_BY_VERSION(0x4C5230, 0x4C52D0, 0x4C5260);

int op_delete_addr(CPed) = ADDRESS_BY_VERSION(0x4C5250, 0x4C52F0, 0x4C5280);
int op_delete_gaddr(CPed) = GLOBAL_ADDRESS_BY_VERSION(0x4C5250, 0x4C52F0, 0x4C5280);

int del_dtor_addr(CPed) = ADDRESS_BY_VERSION(0x43D4F0, 0x43D4F0, 0x43D4F0);
int del_dtor_gaddr(CPed) = GLOBAL_ADDRESS_BY_VERSION(0x43D4F0, 0x43D4F0, 0x43D4F0);

int addrof(CPed::SetModelIndex) = ADDRESS_BY_VERSION(0x4C52A0, 0x4C5340, 0x4C52D0);
int gaddrof(CPed::SetModelIndex) = GLOBAL_ADDRESS_BY_VERSION(0x4C52A0, 0x4C5340, 0x4C52D0);

void CPed::SetModelIndex(unsigned int modelIndex) {
    plugin::CallVirtualMethod<3, CPed *, unsigned int>(this, modelIndex);
}

int addrof(CPed::SetupLighting) = ADDRESS_BY_VERSION(0x4A7D30, 0x4A7E20, 0x4A7DB0);
int gaddrof(CPed::SetupLighting) = GLOBAL_ADDRESS_BY_VERSION(0x4A7D30, 0x4A7E20, 0x4A7DB0);

bool CPed::SetupLighting() {
    return plugin::CallVirtualMethodAndReturn<bool, 14, CPed *>(this);
}

int addrof(CPed::RemoveLighting) = ADDRESS_BY_VERSION(0x4A7DC0, 0x4A7EB0, 0x4A7E40);
int gaddrof(CPed::RemoveLighting) = GLOBAL_ADDRESS_BY_VERSION(0x4A7DC0, 0x4A7EB0, 0x4A7E40);

void CPed::RemoveLighting(bool resetWorldColors) {
    plugin::CallVirtualMethod<15, CPed *, bool>(this, resetWorldColors);
}

int addrof(CPed::SetMoveAnim) = ADDRESS_BY_VERSION(0x4C5A40, 0x4C5AE0, 0x4C5A70);
int gaddrof(CPed::SetMoveAnim) = GLOBAL_ADDRESS_BY_VERSION(0x4C5A40, 0x4C5AE0, 0x4C5A70);

void CPed::SetMoveAnim() {
    plugin::CallVirtualMethod<18, CPed *>(this);
}
