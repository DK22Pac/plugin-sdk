/*
    Plugin-SDK (Grand Theft Auto 3) source file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/
#include "CAccidentManager.h"

PLUGIN_SOURCE_FILE

PLUGIN_VARIABLE CAccidentManager &gAccidentManager = *reinterpret_cast<CAccidentManager *>(GLOBAL_ADDRESS_BY_VERSION(0x87FD10, 0x87FCC0, 0x88FE00));

int ctor_addr(CAccidentManager) = ADDRESS_BY_VERSION(0x456560, 0x456560, 0x456560);
int ctor_gaddr(CAccidentManager) = GLOBAL_ADDRESS_BY_VERSION(0x456560, 0x456560, 0x456560);

int addrof(CAccidentManager::CountActiveAccidents) = ADDRESS_BY_VERSION(0x456880, 0x456880, 0x456880);
int gaddrof(CAccidentManager::CountActiveAccidents) = GLOBAL_ADDRESS_BY_VERSION(0x456880, 0x456880, 0x456880);

unsigned short CAccidentManager::CountActiveAccidents() {
    return plugin::CallMethodAndReturnDynGlobal<unsigned short, CAccidentManager *>(gaddrof(CAccidentManager::CountActiveAccidents), this);
}

int addrof(CAccidentManager::FindNearestAccident) = ADDRESS_BY_VERSION(0x456760, 0x456760, 0x456760);
int gaddrof(CAccidentManager::FindNearestAccident) = GLOBAL_ADDRESS_BY_VERSION(0x456760, 0x456760, 0x456760);

CAccident *CAccidentManager::FindNearestAccident(CVector pos, float *distance) {
    return plugin::CallMethodAndReturnDynGlobal<CAccident *, CAccidentManager *, CVector, float *>(gaddrof(CAccidentManager::FindNearestAccident), this, pos, distance);
}

int addrof(CAccidentManager::GetNextFreeAccident) = ADDRESS_BY_VERSION(0x4565A0, 0x4565A0, 0x4565A0);
int gaddrof(CAccidentManager::GetNextFreeAccident) = GLOBAL_ADDRESS_BY_VERSION(0x4565A0, 0x4565A0, 0x4565A0);

CAccident *CAccidentManager::GetNextFreeAccident() {
    return plugin::CallMethodAndReturnDynGlobal<CAccident *, CAccidentManager *>(gaddrof(CAccidentManager::GetNextFreeAccident), this);
}

int addrof(CAccidentManager::ReportAccident) = ADDRESS_BY_VERSION(0x4565D0, 0x4565D0, 0x4565D0);
int gaddrof(CAccidentManager::ReportAccident) = GLOBAL_ADDRESS_BY_VERSION(0x4565D0, 0x4565D0, 0x4565D0);

void CAccidentManager::ReportAccident(CPed *ped) {
    plugin::CallMethodDynGlobal<CAccidentManager *, CPed *>(gaddrof(CAccidentManager::ReportAccident), this, ped);
}

int addrof(CAccidentManager::UnattendedAccidents) = ADDRESS_BY_VERSION(0x4568D0, 0x4568D0, 0x4568D0);
int gaddrof(CAccidentManager::UnattendedAccidents) = GLOBAL_ADDRESS_BY_VERSION(0x4568D0, 0x4568D0, 0x4568D0);

bool CAccidentManager::UnattendedAccidents() {
    return plugin::CallMethodAndReturnDynGlobal<bool, CAccidentManager *>(gaddrof(CAccidentManager::UnattendedAccidents), this);
}

int addrof(CAccidentManager::Update) = ADDRESS_BY_VERSION(0x456710, 0x456710, 0x456710);
int gaddrof(CAccidentManager::Update) = GLOBAL_ADDRESS_BY_VERSION(0x456710, 0x456710, 0x456710);

void CAccidentManager::Update() {
    plugin::CallMethodDynGlobal<CAccidentManager *>(gaddrof(CAccidentManager::Update), this);
}

int addrof(CAccidentManager::WorkToDoForMedics) = ADDRESS_BY_VERSION(0x4568A0, 0x4568A0, 0x4568A0);
int gaddrof(CAccidentManager::WorkToDoForMedics) = GLOBAL_ADDRESS_BY_VERSION(0x4568A0, 0x4568A0, 0x4568A0);

bool CAccidentManager::WorkToDoForMedics() {
    return plugin::CallMethodAndReturnDynGlobal<bool, CAccidentManager *>(gaddrof(CAccidentManager::WorkToDoForMedics), this);
}
