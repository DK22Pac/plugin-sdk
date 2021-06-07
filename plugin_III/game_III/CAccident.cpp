/*
    Plugin-SDK (Grand Theft Auto 3) source file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/
#include "CAccident.h"

PLUGIN_SOURCE_FILE

int ctor_addr(CAccident) = ADDRESS_BY_VERSION(0x456530, 0x456530, 0x456530);
int ctor_gaddr(CAccident) = GLOBAL_ADDRESS_BY_VERSION(0x456530, 0x456530, 0x456530);

int dtor_addr(CAccident) = ADDRESS_BY_VERSION(0x456550, 0x456550, 0x456550);
int dtor_gaddr(CAccident) = GLOBAL_ADDRESS_BY_VERSION(0x456550, 0x456550, 0x456550);
