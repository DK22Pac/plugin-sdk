/*
    Plugin-SDK (Grand Theft Auto 3) source file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/
#include "CWaterCannons.h"

PLUGIN_SOURCE_FILE

PLUGIN_VARIABLE CWaterCannon(&CWaterCannons::aCannons)[3] = *reinterpret_cast<CWaterCannon(*)[3]>(GLOBAL_ADDRESS_BY_VERSION(0x8F2CA8, 0x8F2D5C, 0x902E9C));

int addrof(CWaterCannons::Init) = ADDRESS_BY_VERSION(0x522440, 0x522680, 0x522610);
int gaddrof(CWaterCannons::Init) = GLOBAL_ADDRESS_BY_VERSION(0x522440, 0x522680, 0x522610);

void CWaterCannons::Init() {
    plugin::CallDynGlobal(gaddrof(CWaterCannons::Init));
}

int addrof(CWaterCannons::Render) = ADDRESS_BY_VERSION(0x522550, 0x522790, 0x522720);
int gaddrof(CWaterCannons::Render) = GLOBAL_ADDRESS_BY_VERSION(0x522550, 0x522790, 0x522720);

void CWaterCannons::Render() {
    plugin::CallDynGlobal(gaddrof(CWaterCannons::Render));
}

int addrof(CWaterCannons::Update) = ADDRESS_BY_VERSION(0x522510, 0x522750, 0x5226E0);
int gaddrof(CWaterCannons::Update) = GLOBAL_ADDRESS_BY_VERSION(0x522510, 0x522750, 0x5226E0);

void CWaterCannons::Update() {
    plugin::CallDynGlobal(gaddrof(CWaterCannons::Update));
}

int addrof(CWaterCannons::UpdateOne) = ADDRESS_BY_VERSION(0x522470, 0x5226B0, 0x522640);
int gaddrof(CWaterCannons::UpdateOne) = GLOBAL_ADDRESS_BY_VERSION(0x522470, 0x5226B0, 0x522640);

void CWaterCannons::UpdateOne(unsigned int id, CVector *pos, CVector *dir) {
    plugin::CallDynGlobal<unsigned int, CVector *, CVector *>(gaddrof(CWaterCannons::UpdateOne), id, pos, dir);
}
