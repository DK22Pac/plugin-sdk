/*
    Plugin-SDK (Grand Theft Auto 3) source file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/
#include "CProjectile.h"

PLUGIN_SOURCE_FILE

int ctor_addr_o(CProjectile, void(int)) = ADDRESS_BY_VERSION(0x4BFE30, 0x4BFF20, 0x4BFEB0);
int ctor_gaddr_o(CProjectile, void(int)) = GLOBAL_ADDRESS_BY_VERSION(0x4BFE30, 0x4BFF20, 0x4BFEB0);

int dtor_addr(CProjectile) = ADDRESS_BY_VERSION(0x4BFED0, 0x4BFFC0, 0x4BFF50);
int dtor_gaddr(CProjectile) = GLOBAL_ADDRESS_BY_VERSION(0x4BFED0, 0x4BFFC0, 0x4BFF50);

int del_dtor_addr(CProjectile) = ADDRESS_BY_VERSION(0x4BFEF0, 0x4BFFE0, 0x4BFF70);
int del_dtor_gaddr(CProjectile) = GLOBAL_ADDRESS_BY_VERSION(0x4BFEF0, 0x4BFFE0, 0x4BFF70);
