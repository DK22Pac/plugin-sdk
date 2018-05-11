/*
    Plugin-SDK (Grand Theft Auto San Andreas) source file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/
#include "CMatrixLink.h"

PLUGIN_SOURCE_FILE

int ctor_addr(CMatrixLink) = ADDRESS_BY_VERSION(0x54F0C0, 0, 0, 0, 0, 0);
int ctor_gaddr(CMatrixLink) = GLOBAL_ADDRESS_BY_VERSION(0x54F0C0, 0, 0, 0, 0, 0);

int dtor_addr(CMatrixLink) = ADDRESS_BY_VERSION(0x54E8E0, 0, 0, 0, 0, 0);
int dtor_gaddr(CMatrixLink) = GLOBAL_ADDRESS_BY_VERSION(0x54E8E0, 0, 0, 0, 0, 0);

int addrof(CMatrixLink::Insert) = ADDRESS_BY_VERSION(0x54E8F0, 0, 0, 0, 0, 0);
int gaddrof(CMatrixLink::Insert) = GLOBAL_ADDRESS_BY_VERSION(0x54E8F0, 0, 0, 0, 0, 0);

void CMatrixLink::Insert(CMatrixLink *where) {
    plugin::CallMethodDynGlobal<CMatrixLink *, CMatrixLink *>(gaddrof(CMatrixLink::Insert), this, where);
}

int addrof(CMatrixLink::Remove) = ADDRESS_BY_VERSION(0x54E910, 0, 0, 0, 0, 0);
int gaddrof(CMatrixLink::Remove) = GLOBAL_ADDRESS_BY_VERSION(0x54E910, 0, 0, 0, 0, 0);

void CMatrixLink::Remove() {
    plugin::CallMethodDynGlobal<CMatrixLink *>(gaddrof(CMatrixLink::Remove), this);
}
