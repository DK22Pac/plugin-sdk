/*
    Plugin-SDK (Grand Theft Auto 3) source file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/
#include "CShinyTexts.h"

PLUGIN_SOURCE_FILE

PLUGIN_VARIABLE CRegisteredShinyText(&CShinyTexts::aShinyTexts)[32] = *reinterpret_cast<CRegisteredShinyText(*)[32]>(GLOBAL_ADDRESS_BY_VERSION(0x87B2D8, 0x87B288, 0x88B3C8));
PLUGIN_VARIABLE int &CShinyTexts::NumShinyTexts = *reinterpret_cast<int *>(GLOBAL_ADDRESS_BY_VERSION(0x8F1AAC, 0x8F1B60, 0x901CA0));

int addrof(CShinyTexts::Init) = ADDRESS_BY_VERSION(0x51A5A0, 0x51A7D0, 0x51A760);
int gaddrof(CShinyTexts::Init) = GLOBAL_ADDRESS_BY_VERSION(0x51A5A0, 0x51A7D0, 0x51A760);

void CShinyTexts::Init() {
    plugin::CallDynGlobal(gaddrof(CShinyTexts::Init));
}

int addrof(CShinyTexts::RegisterOne) = ADDRESS_BY_VERSION(0x51AAB0, 0x51ACE0, 0x51AC70);
int gaddrof(CShinyTexts::RegisterOne) = GLOBAL_ADDRESS_BY_VERSION(0x51AAB0, 0x51ACE0, 0x51AC70);

void CShinyTexts::RegisterOne(CVector cornerAA, CVector cornerAB, CVector cornerBA, CVector cornerBB, float u1, float v1, float u2, float v2, float u3, float v3, float u4, float v4, unsigned char type, unsigned char red, unsigned char green, unsigned char blue, float maxDistance) {
    plugin::CallDynGlobal<CVector, CVector, CVector, CVector, float, float, float, float, float, float, float, float, unsigned char, unsigned char, unsigned char, unsigned char, float>(gaddrof(CShinyTexts::RegisterOne), cornerAA, cornerAB, cornerBA, cornerBB, u1, v1, u2, v2, u3, v3, u4, v4, type, red, green, blue, maxDistance);
}

int addrof(CShinyTexts::Render) = ADDRESS_BY_VERSION(0x51A5B0, 0x51A7E0, 0x51A770);
int gaddrof(CShinyTexts::Render) = GLOBAL_ADDRESS_BY_VERSION(0x51A5B0, 0x51A7E0, 0x51A770);

void CShinyTexts::Render() {
    plugin::CallDynGlobal(gaddrof(CShinyTexts::Render));
}

int addrof(CShinyTexts::RenderOutGeometryBuffer) = ADDRESS_BY_VERSION(0x51AA50, 0x51AC80, 0x51AC10);
int gaddrof(CShinyTexts::RenderOutGeometryBuffer) = GLOBAL_ADDRESS_BY_VERSION(0x51AA50, 0x51AC80, 0x51AC10);

void CShinyTexts::RenderOutGeometryBuffer() {
    plugin::CallDynGlobal(gaddrof(CShinyTexts::RenderOutGeometryBuffer));
}
