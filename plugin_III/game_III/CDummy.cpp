/*
    Plugin-SDK (Grand Theft Auto 3) source file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/
#include "CDummy.h"

PLUGIN_SOURCE_FILE

int ctor_addr(CDummy) = ADDRESS_BY_VERSION(0x4737E0, 0x4737E0, 0x4737E0);
int ctor_gaddr(CDummy) = GLOBAL_ADDRESS_BY_VERSION(0x4737E0, 0x4737E0, 0x4737E0);

int dtor_addr(CDummy) = ADDRESS_BY_VERSION(0x473810, 0x473810, 0x473810);
int dtor_gaddr(CDummy) = GLOBAL_ADDRESS_BY_VERSION(0x473810, 0x473810, 0x473810);

int op_new_addr(CDummy) = ADDRESS_BY_VERSION(0x473830, 0x473830, 0x473830);
int op_new_gaddr(CDummy) = GLOBAL_ADDRESS_BY_VERSION(0x473830, 0x473830, 0x473830);

int op_delete_addr(CDummy) = ADDRESS_BY_VERSION(0x473840, 0x473840, 0x473840);
int op_delete_gaddr(CDummy) = GLOBAL_ADDRESS_BY_VERSION(0x473840, 0x473840, 0x473840);

int del_dtor_addr(CDummy) = ADDRESS_BY_VERSION(0x473B50, 0x473B50, 0x473B50);
int del_dtor_gaddr(CDummy) = GLOBAL_ADDRESS_BY_VERSION(0x473B50, 0x473B50, 0x473B50);

int addrof(CDummy::Add) = ADDRESS_BY_VERSION(0x473860, 0x473860, 0x473860);
int gaddrof(CDummy::Add) = GLOBAL_ADDRESS_BY_VERSION(0x473860, 0x473860, 0x473860);

void CDummy::Add() {
    plugin::CallVirtualMethod<1, CDummy *>(this);
}

int addrof(CDummy::Remove) = ADDRESS_BY_VERSION(0x473AD0, 0x473AD0, 0x473AD0);
int gaddrof(CDummy::Remove) = GLOBAL_ADDRESS_BY_VERSION(0x473AD0, 0x473AD0, 0x473AD0);

void CDummy::Remove() {
    plugin::CallVirtualMethod<2, CDummy *>(this);
}
