/*
    Plugin-SDK (Grand Theft Auto 3) source file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/
#include "CAntennas.h"

PLUGIN_SOURCE_FILE

PLUGIN_VARIABLE CAntenna(&CAntennas::aAntennas)[8] = *reinterpret_cast<CAntenna(*)[8]>(GLOBAL_ADDRESS_BY_VERSION(0x664680, 0x664680, 0x6747C0));

int addrof(CAntennas::Init) = ADDRESS_BY_VERSION(0x4F64D0, 0x4F6580, 0x4F6510);
int gaddrof(CAntennas::Init) = GLOBAL_ADDRESS_BY_VERSION(0x4F64D0, 0x4F6580, 0x4F6510);

void CAntennas::Init() {
    plugin::CallDynGlobal(gaddrof(CAntennas::Init));
}

int addrof(CAntennas::RegisterOne) = ADDRESS_BY_VERSION(0x4F66C0, 0x4F6770, 0x4F6700);
int gaddrof(CAntennas::RegisterOne) = GLOBAL_ADDRESS_BY_VERSION(0x4F66C0, 0x4F6770, 0x4F6700);

void CAntennas::RegisterOne(unsigned int id, CVector dir, CVector pos, float length) {
    plugin::CallDynGlobal<unsigned int, CVector, CVector, float>(gaddrof(CAntennas::RegisterOne), id, dir, pos, length);
}

int addrof(CAntennas::Render) = ADDRESS_BY_VERSION(0x4F6590, 0x4F6640, 0x4F65D0);
int gaddrof(CAntennas::Render) = GLOBAL_ADDRESS_BY_VERSION(0x4F6590, 0x4F6640, 0x4F65D0);

void CAntennas::Render() {
    plugin::CallDynGlobal(gaddrof(CAntennas::Render));
}

int addrof(CAntennas::Update) = ADDRESS_BY_VERSION(0x4F6550, 0x4F6600, 0x4F6590);
int gaddrof(CAntennas::Update) = GLOBAL_ADDRESS_BY_VERSION(0x4F6550, 0x4F6600, 0x4F6590);

void CAntennas::Update() {
    plugin::CallDynGlobal(gaddrof(CAntennas::Update));
}
