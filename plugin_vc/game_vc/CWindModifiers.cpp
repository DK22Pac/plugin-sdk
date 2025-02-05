/*
    Plugin-SDK (Grand Theft Auto Vice City) source file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/
#include "CWindModifiers.h"

PLUGIN_SOURCE_FILE

PLUGIN_VARIABLE CWindModifier(&CWindModifiers::Array)[16] = *reinterpret_cast<CWindModifier(*)[16]>(GLOBAL_ADDRESS_BY_VERSION(0x7FFD38, 0x7FFD40, 0x7FED40));
PLUGIN_VARIABLE int &CWindModifiers::Number = *reinterpret_cast<int *>(GLOBAL_ADDRESS_BY_VERSION(0xA0D1F0, 0xA0D1F8, 0xA0C1F8));

int addrof_o(CWindModifiers::FindWindModifier, bool (*)(CVector, float *, float *)) = ADDRESS_BY_VERSION(0x629C90, 0x629CE0, 0x629950);
int gaddrof_o(CWindModifiers::FindWindModifier, bool (*)(CVector, float *, float *)) = GLOBAL_ADDRESS_BY_VERSION(0x629C90, 0x629CE0, 0x629950);

bool CWindModifiers::FindWindModifier(CVector pos, float *x, float *y) {
    return plugin::CallAndReturnDynGlobal<bool, CVector, float *, float *>(gaddrof_o(CWindModifiers::FindWindModifier, bool (*)(CVector, float *, float *)), pos, x, y);
}

int addrof_o(CWindModifiers::RegisterOne, void (*)(CVector, int)) = ADDRESS_BY_VERSION(0x629E90, 0x629EE0, 0x629B50);
int gaddrof_o(CWindModifiers::RegisterOne, void (*)(CVector, int)) = GLOBAL_ADDRESS_BY_VERSION(0x629E90, 0x629EE0, 0x629B50);

void CWindModifiers::RegisterOne(CVector pos, int type) {
    plugin::CallDynGlobal<CVector, int>(gaddrof_o(CWindModifiers::RegisterOne, void (*)(CVector, int)), pos, type);
}

int ctor_addr(CWindModifier) = ADDRESS_BY_VERSION(0x629F70, 0x629FC0, 0x629C30);
int ctor_gaddr(CWindModifier) = GLOBAL_ADDRESS_BY_VERSION(0x629F70, 0x629FC0, 0x629C30);
