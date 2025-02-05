/*
    Plugin-SDK (Grand Theft Auto 3) source file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/
#include "CPlaceable.h"

PLUGIN_SOURCE_FILE

int ctor_addr(CPlaceable) = ADDRESS_BY_VERSION(0x49F9A0, 0x49FA90, 0x49FA20);
int ctor_gaddr(CPlaceable) = GLOBAL_ADDRESS_BY_VERSION(0x49F9A0, 0x49FA90, 0x49FA20);

int dtor_addr(CPlaceable) = ADDRESS_BY_VERSION(0x49F9E0, 0x49FAD0, 0x49FA60);
int dtor_gaddr(CPlaceable) = GLOBAL_ADDRESS_BY_VERSION(0x49F9E0, 0x49FAD0, 0x49FA60);

int del_dtor_addr(CPlaceable) = ADDRESS_BY_VERSION(0x49FBD0, 0x49FCC0, 0x49FC50);
int del_dtor_gaddr(CPlaceable) = GLOBAL_ADDRESS_BY_VERSION(0x49FBD0, 0x49FCC0, 0x49FC50);

int addrof(CPlaceable::GetPosition) = ADDRESS_BY_VERSION(0x4CBAC0, 0x4CBB60, 0x4CBAF0);
int gaddrof(CPlaceable::GetPosition) = GLOBAL_ADDRESS_BY_VERSION(0x4CBAC0, 0x4CBB60, 0x4CBAF0);

CVector &CPlaceable::GetPosition() {
    return plugin::CallMethodAndReturnDynGlobal<CVector &, CPlaceable *>(gaddrof(CPlaceable::GetPosition), this);
}

int addrof_o(CPlaceable::IsWithinArea, bool (CPlaceable::*)(float, float, float, float)) = ADDRESS_BY_VERSION(0x49FA50, 0x49FB40, 0x49FAD0);
int gaddrof_o(CPlaceable::IsWithinArea, bool (CPlaceable::*)(float, float, float, float)) = GLOBAL_ADDRESS_BY_VERSION(0x49FA50, 0x49FB40, 0x49FAD0);

bool CPlaceable::IsWithinArea(float x1, float y1, float x2, float y2) {
    return plugin::CallMethodAndReturnDynGlobal<bool, CPlaceable *, float, float, float, float>(gaddrof_o(CPlaceable::IsWithinArea, bool (CPlaceable::*)(float, float, float, float)), this, x1, y1, x2, y2);
}

int addrof_o(CPlaceable::IsWithinArea, bool (CPlaceable::*)(float, float, float, float, float, float)) = ADDRESS_BY_VERSION(0x49FAF0, 0x49FBE0, 0x49FB70);
int gaddrof_o(CPlaceable::IsWithinArea, bool (CPlaceable::*)(float, float, float, float, float, float)) = GLOBAL_ADDRESS_BY_VERSION(0x49FAF0, 0x49FBE0, 0x49FB70);

bool CPlaceable::IsWithinArea(float x1, float y1, float z1, float x2, float y2, float z2) {
    return plugin::CallMethodAndReturnDynGlobal<bool, CPlaceable *, float, float, float, float, float, float>(gaddrof_o(CPlaceable::IsWithinArea, bool (CPlaceable::*)(float, float, float, float, float, float)), this, x1, y1, z1, x2, y2, z2);
}

int addrof(CPlaceable::SetHeading) = ADDRESS_BY_VERSION(0x49FA00, 0x49FAF0, 0x49FA80);
int gaddrof(CPlaceable::SetHeading) = GLOBAL_ADDRESS_BY_VERSION(0x49FA00, 0x49FAF0, 0x49FA80);

void CPlaceable::SetHeading(float angle) {
    plugin::CallMethodDynGlobal<CPlaceable *, float>(gaddrof(CPlaceable::SetHeading), this, angle);
}

int addrof(CPlaceable::SetPosition) = ADDRESS_BY_VERSION(0x4CBA50, 0x4CBAF0, 0x4CBA80);
int gaddrof(CPlaceable::SetPosition) = GLOBAL_ADDRESS_BY_VERSION(0x4CBA50, 0x4CBAF0, 0x4CBA80);

void CPlaceable::SetPosition(float x, float y, float z) {
    plugin::CallMethodDynGlobal<CPlaceable *, float, float, float>(gaddrof(CPlaceable::SetPosition), this, x, y, z);
}
