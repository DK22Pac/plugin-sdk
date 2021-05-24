/*
    Plugin-SDK (Grand Theft Auto 3) source file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/
#include "CMissionCleanup.h"

PLUGIN_SOURCE_FILE

int ctor_addr(CMissionCleanup) = ADDRESS_BY_VERSION(0x437AD0, 0x437AD0, 0x437AD0);
int ctor_gaddr(CMissionCleanup) = GLOBAL_ADDRESS_BY_VERSION(0x437AD0, 0x437AD0, 0x437AD0);

int addrof(CMissionCleanup::AddEntityToList) = ADDRESS_BY_VERSION(0x437BA0, 0x437BA0, 0x437BA0);
int gaddrof(CMissionCleanup::AddEntityToList) = GLOBAL_ADDRESS_BY_VERSION(0x437BA0, 0x437BA0, 0x437BA0);

void CMissionCleanup::AddEntityToList(int id, unsigned char type) {
    plugin::CallMethodDynGlobal<CMissionCleanup *, int, unsigned char>(gaddrof(CMissionCleanup::AddEntityToList), this, id, type);
}

int addrof(CMissionCleanup::FindFree) = ADDRESS_BY_VERSION(0x437B80, 0x437B80, 0x437B80);
int gaddrof(CMissionCleanup::FindFree) = GLOBAL_ADDRESS_BY_VERSION(0x437B80, 0x437B80, 0x437B80);

tCleanupEntity *CMissionCleanup::FindFree() {
    return plugin::CallMethodAndReturnDynGlobal<tCleanupEntity *, CMissionCleanup *>(gaddrof(CMissionCleanup::FindFree), this);
}

int addrof(CMissionCleanup::Init) = ADDRESS_BY_VERSION(0x437AE0, 0x437AE0, 0x437AE0);
int gaddrof(CMissionCleanup::Init) = GLOBAL_ADDRESS_BY_VERSION(0x437AE0, 0x437AE0, 0x437AE0);

void CMissionCleanup::Init() {
    plugin::CallMethodDynGlobal<CMissionCleanup *>(gaddrof(CMissionCleanup::Init), this);
}

int addrof(CMissionCleanup::Process) = ADDRESS_BY_VERSION(0x437C10, 0x437C10, 0x437C10);
int gaddrof(CMissionCleanup::Process) = GLOBAL_ADDRESS_BY_VERSION(0x437C10, 0x437C10, 0x437C10);

void CMissionCleanup::Process() {
    plugin::CallMethodDynGlobal<CMissionCleanup *>(gaddrof(CMissionCleanup::Process), this);
}

int addrof(CMissionCleanup::RemoveEntityFromList) = ADDRESS_BY_VERSION(0x437BD0, 0x437BD0, 0x437BD0);
int gaddrof(CMissionCleanup::RemoveEntityFromList) = GLOBAL_ADDRESS_BY_VERSION(0x437BD0, 0x437BD0, 0x437BD0);

void CMissionCleanup::RemoveEntityFromList(int id, unsigned char type) {
    plugin::CallMethodDynGlobal<CMissionCleanup *, int, unsigned char>(gaddrof(CMissionCleanup::RemoveEntityFromList), this, id, type);
}
