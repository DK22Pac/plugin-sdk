/*
    Plugin-SDK (Grand Theft Auto 3) source file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/
#include "CGangs.h"

PLUGIN_SOURCE_FILE

PLUGIN_VARIABLE CGangInfo(&CGangs::Gang)[9] = *reinterpret_cast<CGangInfo(*)[9]>(GLOBAL_ADDRESS_BY_VERSION(0x6EDF78, 0x6EDF78, 0x6FE0B8));

int addrof(CGangs::GetGangPedModelOverride) = ADDRESS_BY_VERSION(0x4C4070, 0x4C4110, 0x4C40A0);
int gaddrof(CGangs::GetGangPedModelOverride) = GLOBAL_ADDRESS_BY_VERSION(0x4C4070, 0x4C4110, 0x4C40A0);

char CGangs::GetGangPedModelOverride(short gang) {
    return plugin::CallAndReturnDynGlobal<char, short>(gaddrof(CGangs::GetGangPedModelOverride), gang);
}

int addrof(CGangs::Initialise) = ADDRESS_BY_VERSION(0x4C3FB0, 0x4C4050, 0x4C3FE0);
int gaddrof(CGangs::Initialise) = GLOBAL_ADDRESS_BY_VERSION(0x4C3FB0, 0x4C4050, 0x4C3FE0);

void CGangs::Initialise() {
    plugin::CallDynGlobal(gaddrof(CGangs::Initialise));
}

int addrof(CGangs::LoadAllGangData) = ADDRESS_BY_VERSION(0x4C4100, 0x4C41A0, 0x4C4130);
int gaddrof(CGangs::LoadAllGangData) = GLOBAL_ADDRESS_BY_VERSION(0x4C4100, 0x4C41A0, 0x4C4130);

void CGangs::LoadAllGangData(unsigned char *buf, unsigned int size) {
    plugin::CallDynGlobal<unsigned char *, unsigned int>(gaddrof(CGangs::LoadAllGangData), buf, size);
}

int addrof(CGangs::SaveAllGangData) = ADDRESS_BY_VERSION(0x4C4080, 0x4C4120, 0x4C40B0);
int gaddrof(CGangs::SaveAllGangData) = GLOBAL_ADDRESS_BY_VERSION(0x4C4080, 0x4C4120, 0x4C40B0);

void CGangs::SaveAllGangData(unsigned char *buf, unsigned int *size) {
    plugin::CallDynGlobal<unsigned char *, unsigned int *>(gaddrof(CGangs::SaveAllGangData), buf, size);
}

int addrof(CGangs::SetGangPedModelOverride) = ADDRESS_BY_VERSION(0x4C4050, 0x4C40F0, 0x4C4080);
int gaddrof(CGangs::SetGangPedModelOverride) = GLOBAL_ADDRESS_BY_VERSION(0x4C4050, 0x4C40F0, 0x4C4080);

void CGangs::SetGangPedModelOverride(short gang, char ovrd) {
    plugin::CallDynGlobal<short, char>(gaddrof(CGangs::SetGangPedModelOverride), gang, ovrd);
}

int addrof(CGangs::SetGangVehicleModel) = ADDRESS_BY_VERSION(0x4C4010, 0x4C40B0, 0x4C4040);
int gaddrof(CGangs::SetGangVehicleModel) = GLOBAL_ADDRESS_BY_VERSION(0x4C4010, 0x4C40B0, 0x4C4040);

void CGangs::SetGangVehicleModel(short gang, int model) {
    plugin::CallDynGlobal<short, int>(gaddrof(CGangs::SetGangVehicleModel), gang, model);
}

int addrof(CGangs::SetGangWeapons) = ADDRESS_BY_VERSION(0x4C4030, 0x4C40D0, 0x4C4060);
int gaddrof(CGangs::SetGangWeapons) = GLOBAL_ADDRESS_BY_VERSION(0x4C4030, 0x4C40D0, 0x4C4060);

void CGangs::SetGangWeapons(short gang, int weaponOne, int weaponTwo) {
    plugin::CallDynGlobal<short, int, int>(gaddrof(CGangs::SetGangWeapons), gang, weaponOne, weaponTwo);
}
