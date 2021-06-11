/*
    Plugin-SDK (Grand Theft Auto 3) source file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/
#include "CFire.h"

PLUGIN_SOURCE_FILE

int ctor_addr(CFire) = ADDRESS_BY_VERSION(0x479220, 0x479220, 0x479220);
int ctor_gaddr(CFire) = GLOBAL_ADDRESS_BY_VERSION(0x479220, 0x479220, 0x479220);

int dtor_addr(CFire) = ADDRESS_BY_VERSION(0x479280, 0x479280, 0x479280);
int dtor_gaddr(CFire) = GLOBAL_ADDRESS_BY_VERSION(0x479280, 0x479280, 0x479280);

int addrof(CFire::Extinguish) = ADDRESS_BY_VERSION(0x479D40, 0x479D40, 0x479D40);
int gaddrof(CFire::Extinguish) = GLOBAL_ADDRESS_BY_VERSION(0x479D40, 0x479D40, 0x479D40);

void CFire::Extinguish() {
    plugin::CallMethodDynGlobal<CFire *>(gaddrof(CFire::Extinguish), this);
}

int addrof(CFire::ProcessFire) = ADDRESS_BY_VERSION(0x4798D0, 0x4798D0, 0x4798D0);
int gaddrof(CFire::ProcessFire) = GLOBAL_ADDRESS_BY_VERSION(0x4798D0, 0x4798D0, 0x4798D0);

void CFire::ProcessFire() {
    plugin::CallMethodDynGlobal<CFire *>(gaddrof(CFire::ProcessFire), this);
}

int addrof(CFire::ReportThisFire) = ADDRESS_BY_VERSION(0x4798B0, 0x4798B0, 0x4798B0);
int gaddrof(CFire::ReportThisFire) = GLOBAL_ADDRESS_BY_VERSION(0x4798B0, 0x4798B0, 0x4798B0);

void CFire::ReportThisFire() {
    plugin::CallMethodDynGlobal<CFire *>(gaddrof(CFire::ReportThisFire), this);
}
