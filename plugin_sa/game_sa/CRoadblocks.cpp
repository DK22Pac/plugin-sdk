/*
    Plugin-SDK (Grand Theft Auto San Andreas) source file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/

#include "CRoadBlocks.h"

PLUGIN_SOURCE_FILE
tScriptRoadBlocks(&CRoadBlocks::aScriptRoadBlocks)[16] = *reinterpret_cast<tScriptRoadBlocks(*)[16]>(GLOBAL_ADDRESS_BY_VERSION(0xA913E8, 0, 0, 0, 0, 0));
tRoadbloxDat(&CRoadBlocks::roadbloxDat)[325] = *reinterpret_cast<tRoadbloxDat(*)[325]>(GLOBAL_ADDRESS_BY_VERSION(0xA435A0, 0, 0, 0, 0, 0));
PLUGIN_VARIABLE unsigned int &CRoadBlocks::roadbloxFlags = *reinterpret_cast<unsigned int *>(GLOBAL_ADDRESS_BY_VERSION(0xA43438, 0, 0, 0, 0, 0));
PLUGIN_VARIABLE unsigned int &CRoadBlocks::roadbloxDatSize = *reinterpret_cast<unsigned int *>(GLOBAL_ADDRESS_BY_VERSION(0xA43580, 0, 0, 0, 0, 0));

int addrof(CRoadBlocks::RegisterScriptRoadBlock) = ADDRESS_BY_VERSION(0x460DF0, 0x45ADCF, 0, 0, 0, 0);
int gaddrof(CRoadBlocks::RegisterScriptRoadBlock) = GLOBAL_ADDRESS_BY_VERSION(0x460DF0, 0x45ADCF, 0, 0, 0, 0);

void CRoadBlocks::RegisterScriptRoadBlock(CVector *cornerA, CVector *cornerB, byte type) {      
    plugin::CallDynGlobal<CVector *, CVector *, byte>(gaddrof(CRoadBlocks::RegisterScriptRoadBlock), cornerA, cornerB, type);
}

int addrof(CRoadBlocks::ClearScriptRoadBlocks) = ADDRESS_BY_VERSION(0x460EC0, 0x460F40, 0, 0, 0, 0);
int gaddrof(CRoadBlocks::ClearScriptRoadBlocks) = GLOBAL_ADDRESS_BY_VERSION(0x460EC0, 0x460F40, 0, 0, 0, 0);

void CRoadBlocks::ClearScriptRoadBlocks() {
    plugin::CallDynGlobal<>(gaddrof(CRoadBlocks::ClearScriptRoadBlocks));
}

int addrof(CRoadBlocks::Init) = ADDRESS_BY_VERSION(0x461100, 0, 0, 0, 0, 0);
int gaddrof(CRoadBlocks::Init) = GLOBAL_ADDRESS_BY_VERSION(0x461100, 0, 0, 0, 0, 0);

void CRoadBlocks::Init() {
    plugin::CallDynGlobal<>(gaddrof(CRoadBlocks::Init));
}

int addrof(CRoadBlocks::GenerateRoadBlockCopsForCar) = ADDRESS_BY_VERSION(0x461170, 0x4611F0, 0, 0, 0, 0);
int gaddrof(CRoadBlocks::GenerateRoadBlockCopsForCar) = GLOBAL_ADDRESS_BY_VERSION(0x461170, 0x4611F0, 0, 0, 0, 0);

void CRoadBlocks::GenerateRoadBlockCopsForCar(CVehicle * car, int pedsPositionsType, byte type) {      
    plugin::CallDynGlobal<CVehicle *, int, byte>(gaddrof(CRoadBlocks::GenerateRoadBlockCopsForCar), car, pedsPositionsType, type);
}

int addrof(CRoadBlocks::CreateRoadBlockBetween2Points) = ADDRESS_BY_VERSION(0x4619C0, 0x461A40, 0, 0, 0, 0);
int gaddrof(CRoadBlocks::CreateRoadBlockBetween2Points) = GLOBAL_ADDRESS_BY_VERSION(0x4619C0, 0x461A40, 0, 0, 0, 0);

void CRoadBlocks::CreateRoadBlockBetween2Points(CVector *a, CVector *b, byte type) {      
    plugin::CallDynGlobal<CVector *, CVector *, byte>(gaddrof(CRoadBlocks::CreateRoadBlockBetween2Points), a, b, type);
}

int addrof(CRoadBlocks::GenerateRoadBlocks) = ADDRESS_BY_VERSION(0x4629E0, 0x462A60, 0, 0, 0, 0);
int gaddrof(CRoadBlocks::GenerateRoadBlocks) = GLOBAL_ADDRESS_BY_VERSION(0x4629E0, 0x462A60, 0, 0, 0, 0);

void CRoadBlocks::GenerateRoadBlocks() {      
    plugin::CallDynGlobal<>(gaddrof(CRoadBlocks::GenerateRoadBlocks));
}
