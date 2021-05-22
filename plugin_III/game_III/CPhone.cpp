/*
    Plugin-SDK (Grand Theft Auto 3) source file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/
#include "CPhone.h"

PLUGIN_SOURCE_FILE

int ctor_addr(CPhone) = ADDRESS_BY_VERSION(0x42F620, 0x42F620, 0x42F620);
int ctor_gaddr(CPhone) = GLOBAL_ADDRESS_BY_VERSION(0x42F620, 0x42F620, 0x42F620);

int dtor_addr(CPhone) = ADDRESS_BY_VERSION(0x42F630, 0x42F630, 0x42F630);
int dtor_gaddr(CPhone) = GLOBAL_ADDRESS_BY_VERSION(0x42F630, 0x42F630, 0x42F630);
