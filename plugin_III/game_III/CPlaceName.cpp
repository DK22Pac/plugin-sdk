/*
    Plugin-SDK (Grand Theft Auto 3) source file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/
#include "CPlaceName.h"

PLUGIN_SOURCE_FILE

int ctor_addr(CPlaceName) = ADDRESS_BY_VERSION(0x4AD4B0, 0x4AD5A0, 0x4AD530);
int ctor_gaddr(CPlaceName) = GLOBAL_ADDRESS_BY_VERSION(0x4AD4B0, 0x4AD5A0, 0x4AD530);

int addrof(CPlaceName::Display) = ADDRESS_BY_VERSION(0x4AD5B0, 0x4AD6A0, 0x4AD630);
int gaddrof(CPlaceName::Display) = GLOBAL_ADDRESS_BY_VERSION(0x4AD5B0, 0x4AD6A0, 0x4AD630);

void CPlaceName::Display() {
    plugin::CallMethodDynGlobal<CPlaceName *>(gaddrof(CPlaceName::Display), this);
}

int addrof(CPlaceName::Init) = ADDRESS_BY_VERSION(0x4AD4C0, 0x4AD5B0, 0x4AD540);
int gaddrof(CPlaceName::Init) = GLOBAL_ADDRESS_BY_VERSION(0x4AD4C0, 0x4AD5B0, 0x4AD540);

void CPlaceName::Init() {
    plugin::CallMethodDynGlobal<CPlaceName *>(gaddrof(CPlaceName::Init), this);
}

int addrof(CPlaceName::Process) = ADDRESS_BY_VERSION(0x4AD4E0, 0x4AD5D0, 0x4AD560);
int gaddrof(CPlaceName::Process) = GLOBAL_ADDRESS_BY_VERSION(0x4AD4E0, 0x4AD5D0, 0x4AD560);

void CPlaceName::Process() {
    plugin::CallMethodDynGlobal<CPlaceName *>(gaddrof(CPlaceName::Process), this);
}
