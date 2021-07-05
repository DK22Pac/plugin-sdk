/*
    Plugin-SDK (Grand Theft Auto 3) source file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/
#include "CRestart.h"

PLUGIN_SOURCE_FILE

PLUGIN_VARIABLE float(&CRestart::PoliceRestartHeadings)[8] = *reinterpret_cast<float(*)[8]>(GLOBAL_ADDRESS_BY_VERSION(0x6F1D20, 0x6F1D20, 0x701E60));
PLUGIN_VARIABLE float(&CRestart::HospitalRestartHeadings)[8] = *reinterpret_cast<float(*)[8]>(GLOBAL_ADDRESS_BY_VERSION(0x6F1D40, 0x6F1D40, 0x701E80));
PLUGIN_VARIABLE CVector(&CRestart::PoliceRestartPoints)[8] = *reinterpret_cast<CVector(*)[8]>(GLOBAL_ADDRESS_BY_VERSION(0x846228, 0x846228, 0x856368));
PLUGIN_VARIABLE CVector(&CRestart::HospitalRestartPoints)[8] = *reinterpret_cast<CVector(*)[8]>(GLOBAL_ADDRESS_BY_VERSION(0x87F9B0, 0x87F960, 0x88FAA0));
PLUGIN_VARIABLE CVector &CRestart::OverridePosition = *reinterpret_cast<CVector *>(GLOBAL_ADDRESS_BY_VERSION(0x8E2C00, 0x8E2CB4, 0x8F2DF4));
PLUGIN_VARIABLE float &CRestart::OverrideHeading = *reinterpret_cast<float *>(GLOBAL_ADDRESS_BY_VERSION(0x8F2A18, 0x8F2ACC, 0x902C0C));
PLUGIN_VARIABLE unsigned short &CRestart::NumberOfPoliceRestarts = *reinterpret_cast<unsigned short *>(GLOBAL_ADDRESS_BY_VERSION(0x95CC44, 0x95CDFC, 0x96CF3C));
PLUGIN_VARIABLE unsigned short &CRestart::NumberOfHospitalRestarts = *reinterpret_cast<unsigned short *>(GLOBAL_ADDRESS_BY_VERSION(0x95CC46, 0x95CDFE, 0x96CF3E));
PLUGIN_VARIABLE unsigned char &CRestart::OverrideHospitalLevel = *reinterpret_cast<unsigned char *>(GLOBAL_ADDRESS_BY_VERSION(0x95CD4C, 0x95CF04, 0x96D044));
PLUGIN_VARIABLE unsigned char &CRestart::OverridePoliceStationLevel = *reinterpret_cast<unsigned char *>(GLOBAL_ADDRESS_BY_VERSION(0x95CD50, 0x95CF08, 0x96D048));
PLUGIN_VARIABLE bool &CRestart::bOverrideRestart = *reinterpret_cast<bool *>(GLOBAL_ADDRESS_BY_VERSION(0x95CD5D, 0x95CF15, 0x96D055));
PLUGIN_VARIABLE bool &CRestart::bFadeInAfterNextArrest = *reinterpret_cast<bool *>(GLOBAL_ADDRESS_BY_VERSION(0x95CD69, 0x95CF21, 0x96D061));
PLUGIN_VARIABLE bool &CRestart::bFadeInAfterNextDeath = *reinterpret_cast<bool *>(GLOBAL_ADDRESS_BY_VERSION(0x95CD9D, 0x95CF56, 0x96D096));

int addrof(CRestart::AddHospitalRestartPoint) = ADDRESS_BY_VERSION(0x436100, 0x436100, 0x436100);
int gaddrof(CRestart::AddHospitalRestartPoint) = GLOBAL_ADDRESS_BY_VERSION(0x436100, 0x436100, 0x436100);

void CRestart::AddHospitalRestartPoint(CVector const &pos, float heading) {
    plugin::CallDynGlobal<CVector const &, float>(gaddrof(CRestart::AddHospitalRestartPoint), pos, heading);
}

int addrof(CRestart::AddPoliceRestartPoint) = ADDRESS_BY_VERSION(0x436150, 0x436150, 0x436150);
int gaddrof(CRestart::AddPoliceRestartPoint) = GLOBAL_ADDRESS_BY_VERSION(0x436150, 0x436150, 0x436150);

void CRestart::AddPoliceRestartPoint(CVector const &pos, float heading) {
    plugin::CallDynGlobal<CVector const &, float>(gaddrof(CRestart::AddPoliceRestartPoint), pos, heading);
}

int addrof(CRestart::CancelOverrideRestart) = ADDRESS_BY_VERSION(0x4366F0, 0x4366F0, 0x4366F0);
int gaddrof(CRestart::CancelOverrideRestart) = GLOBAL_ADDRESS_BY_VERSION(0x4366F0, 0x4366F0, 0x4366F0);

void CRestart::CancelOverrideRestart() {
    plugin::CallDynGlobal(gaddrof(CRestart::CancelOverrideRestart));
}

int addrof(CRestart::FindClosestHospitalRestartPoint) = ADDRESS_BY_VERSION(0x4361A0, 0x4361A0, 0x4361A0);
int gaddrof(CRestart::FindClosestHospitalRestartPoint) = GLOBAL_ADDRESS_BY_VERSION(0x4361A0, 0x4361A0, 0x4361A0);

void CRestart::FindClosestHospitalRestartPoint(CVector const &pos, CVector *outPos, float *outHeading) {
    plugin::CallDynGlobal<CVector const &, CVector *, float *>(gaddrof(CRestart::FindClosestHospitalRestartPoint), pos, outPos, outHeading);
}

int addrof(CRestart::FindClosestPoliceRestartPoint) = ADDRESS_BY_VERSION(0x436450, 0x436450, 0x436450);
int gaddrof(CRestart::FindClosestPoliceRestartPoint) = GLOBAL_ADDRESS_BY_VERSION(0x436450, 0x436450, 0x436450);

void CRestart::FindClosestPoliceRestartPoint(CVector const &pos, CVector *outPos, float *outHeading) {
    plugin::CallDynGlobal<CVector const &, CVector *, float *>(gaddrof(CRestart::FindClosestPoliceRestartPoint), pos, outPos, outHeading);
}

int addrof(CRestart::Initialise) = ADDRESS_BY_VERSION(0x435E20, 0x435E20, 0x435E20);
int gaddrof(CRestart::Initialise) = GLOBAL_ADDRESS_BY_VERSION(0x435E20, 0x435E20, 0x435E20);

void CRestart::Initialise() {
    plugin::CallDynGlobal(gaddrof(CRestart::Initialise));
}

int addrof(CRestart::LoadAllRestartPoints) = ADDRESS_BY_VERSION(0x436B20, 0x436B20, 0x436B20);
int gaddrof(CRestart::LoadAllRestartPoints) = GLOBAL_ADDRESS_BY_VERSION(0x436B20, 0x436B20, 0x436B20);

void CRestart::LoadAllRestartPoints(unsigned char *buf, unsigned int size) {
    plugin::CallDynGlobal<unsigned char *, unsigned int>(gaddrof(CRestart::LoadAllRestartPoints), buf, size);
}

int addrof(CRestart::OverrideNextRestart) = ADDRESS_BY_VERSION(0x4366C0, 0x4366C0, 0x4366C0);
int gaddrof(CRestart::OverrideNextRestart) = GLOBAL_ADDRESS_BY_VERSION(0x4366C0, 0x4366C0, 0x4366C0);

void CRestart::OverrideNextRestart(CVector const &pos, float heading) {
    plugin::CallDynGlobal<CVector const &, float>(gaddrof(CRestart::OverrideNextRestart), pos, heading);
}

int addrof(CRestart::SaveAllRestartPoints) = ADDRESS_BY_VERSION(0x436700, 0x436700, 0x436700);
int gaddrof(CRestart::SaveAllRestartPoints) = GLOBAL_ADDRESS_BY_VERSION(0x436700, 0x436700, 0x436700);

void CRestart::SaveAllRestartPoints(unsigned char *buf, unsigned int *size) {
    plugin::CallDynGlobal<unsigned char *, unsigned int *>(gaddrof(CRestart::SaveAllRestartPoints), buf, size);
}
