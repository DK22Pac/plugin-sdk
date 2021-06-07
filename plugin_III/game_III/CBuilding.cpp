/*
    Plugin-SDK (Grand Theft Auto 3) source file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/
#include "CBuilding.h"

PLUGIN_SOURCE_FILE

int ctor_addr(CBuilding) = ADDRESS_BY_VERSION(0x4057D0, 0x4057D0, 0x4057D0);
int ctor_gaddr(CBuilding) = GLOBAL_ADDRESS_BY_VERSION(0x4057D0, 0x4057D0, 0x4057D0);

int dtor_addr(CBuilding) = ADDRESS_BY_VERSION(0x405800, 0x405800, 0x405800);
int dtor_gaddr(CBuilding) = GLOBAL_ADDRESS_BY_VERSION(0x405800, 0x405800, 0x405800);

int op_new_addr(CBuilding) = ADDRESS_BY_VERSION(0x405820, 0x405820, 0x405820);
int op_new_gaddr(CBuilding) = GLOBAL_ADDRESS_BY_VERSION(0x405820, 0x405820, 0x405820);

int op_delete_addr_o(CBuilding, void (CBuilding *)) = ADDRESS_BY_VERSION(0x405830, 0x405830, 0x405830);
int op_delete_gaddr_o(CBuilding, void (CBuilding *)) = GLOBAL_ADDRESS_BY_VERSION(0x405830, 0x405830, 0x405830);

int del_dtor_addr(CBuilding) = ADDRESS_BY_VERSION(0x4058B0, 0x4058B0, 0x4058B0);
int del_dtor_gaddr(CBuilding) = GLOBAL_ADDRESS_BY_VERSION(0x4058B0, 0x4058B0, 0x4058B0);

int addrof(CBuilding::GetIsATreadable) = ADDRESS_BY_VERSION(0x4058F0, 0x4058F0, 0x4058F0);
int gaddrof(CBuilding::GetIsATreadable) = GLOBAL_ADDRESS_BY_VERSION(0x4058F0, 0x4058F0, 0x4058F0);

bool CBuilding::GetIsATreadable() {
    return plugin::CallVirtualMethodAndReturn<bool, 17, CBuilding *>(this);
}

int addrof(CBuilding::ReplaceWithNewModel) = ADDRESS_BY_VERSION(0x405850, 0x405850, 0x405850);
int gaddrof(CBuilding::ReplaceWithNewModel) = GLOBAL_ADDRESS_BY_VERSION(0x405850, 0x405850, 0x405850);

void CBuilding::ReplaceWithNewModel(int modelIndex) {
    plugin::CallMethodDynGlobal<CBuilding *, int>(gaddrof(CBuilding::ReplaceWithNewModel), this, modelIndex);
}
