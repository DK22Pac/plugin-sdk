/*
    Plugin-SDK (Grand Theft Auto Vice City) source file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/
#include "CPhone.h"

PLUGIN_SOURCE_FILE

int ctor_addr(CPhone) = ADDRESS_BY_VERSION(0x43CD40, 0x43CD40, 0);
int ctor_gaddr(CPhone) = GLOBAL_ADDRESS_BY_VERSION(0x43CD40, 0x43CD40, 0);

int dtor_addr(CPhone) = ADDRESS_BY_VERSION(0x43CD30, 0x43CD30, 0);
int dtor_gaddr(CPhone) = GLOBAL_ADDRESS_BY_VERSION(0x43CD30, 0x43CD30, 0);
