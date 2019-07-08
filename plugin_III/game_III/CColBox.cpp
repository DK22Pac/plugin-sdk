/*
    Plugin-SDK (Grand Theft Auto 3) source file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/
#include "CColBox.h"

PLUGIN_SOURCE_FILE

int addrof(CColBox::operator=) = ADDRESS_BY_VERSION(0x40B2E0, 0x40B2E0, 0x40B2E0);
int gaddrof(CColBox::operator=) = GLOBAL_ADDRESS_BY_VERSION(0x40B2E0, 0x40B2E0, 0x40B2E0);

void CColBox::operator=(CColBox &right) {
    plugin::CallMethodDynGlobal<CColBox *, CColBox &>(gaddrof(CColBox::operator=), this, right);
}

int addrof(CColBox::Set) = ADDRESS_BY_VERSION(0x40B2A0, 0x40B2A0, 0x40B2A0);
int gaddrof(CColBox::Set) = GLOBAL_ADDRESS_BY_VERSION(0x40B2A0, 0x40B2A0, 0x40B2A0);

void CColBox::Set(CVector &min, CVector &max, unsigned char material, unsigned char flag) {
    plugin::CallMethodDynGlobal<CColBox *, CVector &, CVector &, unsigned char, unsigned char>(gaddrof(CColBox::Set), this, min, max, material, flag);
}
