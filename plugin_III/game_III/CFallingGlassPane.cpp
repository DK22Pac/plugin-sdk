/*
    Plugin-SDK (Grand Theft Auto 3) source file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/
#include "CFallingGlassPane.h"

PLUGIN_SOURCE_FILE

PLUGIN_VARIABLE CVector2D(&CoorsWithTriangle)[5][3] = *reinterpret_cast<CVector2D(*)[5][3]>(GLOBAL_ADDRESS_BY_VERSION(0x5FD814, 0x5FD5FC, 0x60A5F4));
PLUGIN_VARIABLE CVector2D(&CentersWithTriangle)[5] = *reinterpret_cast<CVector2D(*)[5]>(GLOBAL_ADDRESS_BY_VERSION(0x86AF50, 0x86AF00, 0x87B040));
PLUGIN_VARIABLE int &TempBufferVerticesStoredReflection = *reinterpret_cast<int *>(GLOBAL_ADDRESS_BY_VERSION(0x8E2BE4, 0x8E2C98, 0x8F2DD8));
PLUGIN_VARIABLE int &TempBufferIndicesStoredReflection = *reinterpret_cast<int *>(GLOBAL_ADDRESS_BY_VERSION(0x8E2CB8, 0x8E2D6C, 0x8F2EAC));
PLUGIN_VARIABLE int &TempBufferVerticesStoredShattered = *reinterpret_cast<int *>(GLOBAL_ADDRESS_BY_VERSION(0x8F1AE8, 0x8F1B9C, 0x901CDC));
PLUGIN_VARIABLE int &TempBufferVerticesStoredHiLight = *reinterpret_cast<int *>(GLOBAL_ADDRESS_BY_VERSION(0x8F57E8, 0x8F589C, 0x9059DC));
PLUGIN_VARIABLE int &TempBufferIndicesStoredShattered = *reinterpret_cast<int *>(GLOBAL_ADDRESS_BY_VERSION(0x942FA8, 0x943160, 0x9532A0));
PLUGIN_VARIABLE int &TempBufferIndicesStoredHiLight = *reinterpret_cast<int *>(GLOBAL_ADDRESS_BY_VERSION(0x9430E0, 0x943298, 0x9533D8));

int ctor_addr(CFallingGlassPane) = ADDRESS_BY_VERSION(0x5048E0, 0x5049C0, 0x504950);
int ctor_gaddr(CFallingGlassPane) = GLOBAL_ADDRESS_BY_VERSION(0x5048E0, 0x5049C0, 0x504950);

int dtor_addr(CFallingGlassPane) = ADDRESS_BY_VERSION(0x5048D0, 0x5049B0, 0x504940);
int dtor_gaddr(CFallingGlassPane) = GLOBAL_ADDRESS_BY_VERSION(0x5048D0, 0x5049B0, 0x504940);

int addrof(CFallingGlassPane::Render) = ADDRESS_BY_VERSION(0x5024C0, 0x5025A0, 0x502530);
int gaddrof(CFallingGlassPane::Render) = GLOBAL_ADDRESS_BY_VERSION(0x5024C0, 0x5025A0, 0x502530);

void CFallingGlassPane::Render() {
    plugin::CallMethodDynGlobal<CFallingGlassPane *>(gaddrof(CFallingGlassPane::Render), this);
}

int addrof(CFallingGlassPane::Update) = ADDRESS_BY_VERSION(0x502080, 0x502160, 0x5020F0);
int gaddrof(CFallingGlassPane::Update) = GLOBAL_ADDRESS_BY_VERSION(0x502080, 0x502160, 0x5020F0);

void CFallingGlassPane::Update() {
    plugin::CallMethodDynGlobal<CFallingGlassPane *>(gaddrof(CFallingGlassPane::Update), this);
}
