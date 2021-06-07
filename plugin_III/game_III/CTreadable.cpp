/*
    Plugin-SDK (Grand Theft Auto 3) source file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/
#include "CTreadable.h"

PLUGIN_SOURCE_FILE

int ctor_addr(CTreadable) = ADDRESS_BY_VERSION(0x4059F0, 0x4059F0, 0x4059F0);
int ctor_gaddr(CTreadable) = GLOBAL_ADDRESS_BY_VERSION(0x4059F0, 0x4059F0, 0x4059F0);

int dtor_addr(CTreadable) = ADDRESS_BY_VERSION(0x405A10, 0x405A10, 0x405A10);
int dtor_gaddr(CTreadable) = GLOBAL_ADDRESS_BY_VERSION(0x405A10, 0x405A10, 0x405A10);

int op_new_addr(CTreadable) = ADDRESS_BY_VERSION(0x405A30, 0x405A30, 0x405A30);
int op_new_gaddr(CTreadable) = GLOBAL_ADDRESS_BY_VERSION(0x405A30, 0x405A30, 0x405A30);

int op_delete_addr(CTreadable) = ADDRESS_BY_VERSION(0x405A40, 0x405A40, 0x405A40);
int op_delete_gaddr(CTreadable) = GLOBAL_ADDRESS_BY_VERSION(0x405A40, 0x405A40, 0x405A40);

int del_dtor_addr(CTreadable) = ADDRESS_BY_VERSION(0x405A60, 0x405A60, 0x405A60);
int del_dtor_gaddr(CTreadable) = GLOBAL_ADDRESS_BY_VERSION(0x405A60, 0x405A60, 0x405A60);

int addrof(CTreadable::GetIsATreadable) = ADDRESS_BY_VERSION(0x405AA0, 0x405AA0, 0x405AA0);
int gaddrof(CTreadable::GetIsATreadable) = GLOBAL_ADDRESS_BY_VERSION(0x405AA0, 0x405AA0, 0x405AA0);

bool CTreadable::GetIsATreadable() {
    return plugin::CallVirtualMethodAndReturn<bool, 17, CTreadable *>(this);
}
