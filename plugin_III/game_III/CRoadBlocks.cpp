/*
    Plugin-SDK (Grand Theft Auto 3) source file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/
#include "CRoadBlocks.h"

PLUGIN_SOURCE_FILE

PLUGIN_VARIABLE short(&CRoadBlocks::RoadBlockObject)[600] = *reinterpret_cast<short(*)[600]>(GLOBAL_ADDRESS_BY_VERSION(0x72B3A8, 0x72B3A8, 0x73B4E8));
PLUGIN_VARIABLE bool(&CRoadBlocks::InOrOut)[600] = *reinterpret_cast<bool(*)[600]>(GLOBAL_ADDRESS_BY_VERSION(0x733810, 0x733810, 0x743950));
PLUGIN_VARIABLE short &CRoadBlocks::NumRoadBlocks = *reinterpret_cast<short *>(GLOBAL_ADDRESS_BY_VERSION(0x95CC34, 0x95CDEC, 0x96CF2C));

int addrof(CRoadBlocks::GenerateRoadBlockCopsForCar) = ADDRESS_BY_VERSION(0x4376A0, 0x4376A0, 0x4376A0);
int gaddrof(CRoadBlocks::GenerateRoadBlockCopsForCar) = GLOBAL_ADDRESS_BY_VERSION(0x4376A0, 0x4376A0, 0x4376A0);

void CRoadBlocks::GenerateRoadBlockCopsForCar(CVehicle *vehicle, int roadBlockType, short roadBlockNode) {
    plugin::CallDynGlobal<CVehicle *, int, short>(gaddrof(CRoadBlocks::GenerateRoadBlockCopsForCar), vehicle, roadBlockType, roadBlockNode);
}

int addrof(CRoadBlocks::GenerateRoadBlocks) = ADDRESS_BY_VERSION(0x436FA0, 0x436FA0, 0x436FA0);
int gaddrof(CRoadBlocks::GenerateRoadBlocks) = GLOBAL_ADDRESS_BY_VERSION(0x436FA0, 0x436FA0, 0x436FA0);

void CRoadBlocks::GenerateRoadBlocks() {
    plugin::CallDynGlobal(gaddrof(CRoadBlocks::GenerateRoadBlocks));
}

int addrof(CRoadBlocks::Init) = ADDRESS_BY_VERSION(0x436F50, 0x436F50, 0x436F50);
int gaddrof(CRoadBlocks::Init) = GLOBAL_ADDRESS_BY_VERSION(0x436F50, 0x436F50, 0x436F50);

void CRoadBlocks::Init() {
    plugin::CallDynGlobal(gaddrof(CRoadBlocks::Init));
}
