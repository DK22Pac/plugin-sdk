/*
    Plugin-SDK (Grand Theft Auto 3) source file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/
#include "CWanted.h"

PLUGIN_SOURCE_FILE

PLUGIN_VARIABLE int &CWanted::MaximumWantedLevel = *reinterpret_cast<int *>(GLOBAL_ADDRESS_BY_VERSION(0x5F7714, 0x5F74FC, 0x6044F4));
PLUGIN_VARIABLE int &CWanted::nMaximumWantedLevel = *reinterpret_cast<int *>(GLOBAL_ADDRESS_BY_VERSION(0x5F7718, 0x5F7500, 0x6044F8));

int ctor_addr(CCrimeBeingQd) = ADDRESS_BY_VERSION(0x4EFB20, 0x4EFBD0, 0x4EFB60);
int ctor_gaddr(CCrimeBeingQd) = GLOBAL_ADDRESS_BY_VERSION(0x4EFB20, 0x4EFBD0, 0x4EFB60);

int addrof_o(CCrimeBeingQd::operator=, void (CCrimeBeingQd::*)(CCrimeBeingQd const &)) = ADDRESS_BY_VERSION(0x5966A0, 0x596950, 0x596840);
int gaddrof_o(CCrimeBeingQd::operator=, void (CCrimeBeingQd::*)(CCrimeBeingQd const &)) = GLOBAL_ADDRESS_BY_VERSION(0x5966A0, 0x596950, 0x596840);

void CCrimeBeingQd::operator=(CCrimeBeingQd const &right) {
    plugin::CallMethodDynGlobal<CCrimeBeingQd *, CCrimeBeingQd const &>(gaddrof_o(CCrimeBeingQd::operator=, void (CCrimeBeingQd::*)(CCrimeBeingQd const &)), this, right);
}

int addrof(CWanted::AddCrimeToQ) = ADDRESS_BY_VERSION(0x4ADFD0, 0x4AE0C0, 0x4AE050);
int gaddrof(CWanted::AddCrimeToQ) = GLOBAL_ADDRESS_BY_VERSION(0x4ADFD0, 0x4AE0C0, 0x4AE050);

bool CWanted::AddCrimeToQ(eCrimeType crimeType, int crimeId, CVector const &pos, bool bAlreadyReported, bool bPoliceDontReallyCare) {
    return plugin::CallMethodAndReturnDynGlobal<bool, CWanted *, eCrimeType, int, CVector const &, bool, bool>(gaddrof(CWanted::AddCrimeToQ), this, crimeType, crimeId, pos, bAlreadyReported, bPoliceDontReallyCare);
}

int addrof(CWanted::AreArmyRequired) = ADDRESS_BY_VERSION(0x4ADBE0, 0x4ADCD0, 0x4ADC60);
int gaddrof(CWanted::AreArmyRequired) = GLOBAL_ADDRESS_BY_VERSION(0x4ADBE0, 0x4ADCD0, 0x4ADC60);

bool CWanted::AreArmyRequired() {
    return plugin::CallMethodAndReturnDynGlobal<bool, CWanted *>(gaddrof(CWanted::AreArmyRequired), this);
}

int addrof(CWanted::AreFbiRequired) = ADDRESS_BY_VERSION(0x4ADBC0, 0x4ADCB0, 0x4ADC40);
int gaddrof(CWanted::AreFbiRequired) = GLOBAL_ADDRESS_BY_VERSION(0x4ADBC0, 0x4ADCB0, 0x4ADC40);

bool CWanted::AreFbiRequired() {
    return plugin::CallMethodAndReturnDynGlobal<bool, CWanted *>(gaddrof(CWanted::AreFbiRequired), this);
}

int addrof(CWanted::AreSwatRequired) = ADDRESS_BY_VERSION(0x4ADBA0, 0x4ADC90, 0x4ADC20);
int gaddrof(CWanted::AreSwatRequired) = GLOBAL_ADDRESS_BY_VERSION(0x4ADBA0, 0x4ADC90, 0x4ADC20);

bool CWanted::AreSwatRequired() {
    return plugin::CallMethodAndReturnDynGlobal<bool, CWanted *>(gaddrof(CWanted::AreSwatRequired), this);
}

int addrof(CWanted::ClearQdCrimes) = ADDRESS_BY_VERSION(0x4ADF20, 0x4AE010, 0x4ADFA0);
int gaddrof(CWanted::ClearQdCrimes) = GLOBAL_ADDRESS_BY_VERSION(0x4ADF20, 0x4AE010, 0x4ADFA0);

void CWanted::ClearQdCrimes() {
    plugin::CallMethodDynGlobal<CWanted *>(gaddrof(CWanted::ClearQdCrimes), this);
}

int addrof(CWanted::Initialise) = ADDRESS_BY_VERSION(0x4AD6E0, 0x4AD7D0, 0x4AD760);
int gaddrof(CWanted::Initialise) = GLOBAL_ADDRESS_BY_VERSION(0x4AD6E0, 0x4AD7D0, 0x4AD760);

void CWanted::Initialise() {
    plugin::CallMethodDynGlobal<CWanted *>(gaddrof(CWanted::Initialise), this);
}

int addrof(CWanted::NumOfHelisRequired) = ADDRESS_BY_VERSION(0x4ADC00, 0x4ADCF0, 0x4ADC80);
int gaddrof(CWanted::NumOfHelisRequired) = GLOBAL_ADDRESS_BY_VERSION(0x4ADC00, 0x4ADCF0, 0x4ADC80);

int CWanted::NumOfHelisRequired() {
    return plugin::CallMethodAndReturnDynGlobal<int, CWanted *>(gaddrof(CWanted::NumOfHelisRequired), this);
}

int addrof(CWanted::RegisterCrime) = ADDRESS_BY_VERSION(0x4AD9F0, 0x4ADAE0, 0x4ADA70);
int gaddrof(CWanted::RegisterCrime) = GLOBAL_ADDRESS_BY_VERSION(0x4AD9F0, 0x4ADAE0, 0x4ADA70);

void CWanted::RegisterCrime(eCrimeType crimeType, CVector const &pos, unsigned int crimeId, bool bPoliceDontReallyCare) {
    plugin::CallMethodDynGlobal<CWanted *, eCrimeType, CVector const &, unsigned int, bool>(gaddrof(CWanted::RegisterCrime), this, crimeType, pos, crimeId, bPoliceDontReallyCare);
}

int addrof(CWanted::RegisterCrime_Immediately) = ADDRESS_BY_VERSION(0x4ADA10, 0x4ADB00, 0x4ADA90);
int gaddrof(CWanted::RegisterCrime_Immediately) = GLOBAL_ADDRESS_BY_VERSION(0x4ADA10, 0x4ADB00, 0x4ADA90);

void CWanted::RegisterCrime_Immediately(eCrimeType crimeType, CVector const &pos, unsigned int crimeId, bool bPoliceDontReallyCare) {
    plugin::CallMethodDynGlobal<CWanted *, eCrimeType, CVector const &, unsigned int, bool>(gaddrof(CWanted::RegisterCrime_Immediately), this, crimeType, pos, crimeId, bPoliceDontReallyCare);
}

int addrof(CWanted::ReportCrimeNow) = ADDRESS_BY_VERSION(0x4AE110, 0x4AE200, 0x4AE190);
int gaddrof(CWanted::ReportCrimeNow) = GLOBAL_ADDRESS_BY_VERSION(0x4AE110, 0x4AE200, 0x4AE190);

void CWanted::ReportCrimeNow(eCrimeType crimeType, CVector const &pos, bool bPoliceDontReallyCare) {
    plugin::CallMethodDynGlobal<CWanted *, eCrimeType, CVector const &, bool>(gaddrof(CWanted::ReportCrimeNow), this, crimeType, pos, bPoliceDontReallyCare);
}

int addrof(CWanted::Reset) = ADDRESS_BY_VERSION(0x4AD790, 0x4AD880, 0x4AD810);
int gaddrof(CWanted::Reset) = GLOBAL_ADDRESS_BY_VERSION(0x4AD790, 0x4AD880, 0x4AD810);

void CWanted::Reset() {
    plugin::CallMethodDynGlobal<CWanted *>(gaddrof(CWanted::Reset), this);
}

int addrof(CWanted::ResetPolicePursuit) = ADDRESS_BY_VERSION(0x4ADC40, 0x4ADD30, 0x4ADCC0);
int gaddrof(CWanted::ResetPolicePursuit) = GLOBAL_ADDRESS_BY_VERSION(0x4ADC40, 0x4ADD30, 0x4ADCC0);

void CWanted::ResetPolicePursuit() {
    plugin::CallMethodDynGlobal<CWanted *>(gaddrof(CWanted::ResetPolicePursuit), this);
}

int addrof(CWanted::SetWantedLevel) = ADDRESS_BY_VERSION(0x4ADA50, 0x4ADB40, 0x4ADAD0);
int gaddrof(CWanted::SetWantedLevel) = GLOBAL_ADDRESS_BY_VERSION(0x4ADA50, 0x4ADB40, 0x4ADAD0);

void CWanted::SetWantedLevel(int level) {
    plugin::CallMethodDynGlobal<CWanted *, int>(gaddrof(CWanted::SetWantedLevel), this, level);
}

int addrof(CWanted::SetWantedLevelNoDrop) = ADDRESS_BY_VERSION(0x4ADAC0, 0x4ADBB0, 0x4ADB40);
int gaddrof(CWanted::SetWantedLevelNoDrop) = GLOBAL_ADDRESS_BY_VERSION(0x4ADAC0, 0x4ADBB0, 0x4ADB40);

void CWanted::SetWantedLevelNoDrop(int level) {
    plugin::CallMethodDynGlobal<CWanted *, int>(gaddrof(CWanted::SetWantedLevelNoDrop), this, level);
}

int addrof(CWanted::Update) = ADDRESS_BY_VERSION(0x4AD7B0, 0x4AD8A0, 0x4AD830);
int gaddrof(CWanted::Update) = GLOBAL_ADDRESS_BY_VERSION(0x4AD7B0, 0x4AD8A0, 0x4AD830);

void CWanted::Update() {
    plugin::CallMethodDynGlobal<CWanted *>(gaddrof(CWanted::Update), this);
}

int addrof(CWanted::UpdateCrimesQ) = ADDRESS_BY_VERSION(0x4AE090, 0x4AE180, 0x4AE110);
int gaddrof(CWanted::UpdateCrimesQ) = GLOBAL_ADDRESS_BY_VERSION(0x4AE090, 0x4AE180, 0x4AE110);

void CWanted::UpdateCrimesQ() {
    plugin::CallMethodDynGlobal<CWanted *>(gaddrof(CWanted::UpdateCrimesQ), this);
}

int addrof(CWanted::UpdateWantedLevel) = ADDRESS_BY_VERSION(0x4AD900, 0x4AD9F0, 0x4AD980);
int gaddrof(CWanted::UpdateWantedLevel) = GLOBAL_ADDRESS_BY_VERSION(0x4AD900, 0x4AD9F0, 0x4AD980);

void CWanted::UpdateWantedLevel() {
    plugin::CallMethodDynGlobal<CWanted *>(gaddrof(CWanted::UpdateWantedLevel), this);
}

int addrof(CWanted::SetMaximumWantedLevel) = ADDRESS_BY_VERSION(0x4ADAE0, 0x4ADBD0, 0x4ADB60);
int gaddrof(CWanted::SetMaximumWantedLevel) = GLOBAL_ADDRESS_BY_VERSION(0x4ADAE0, 0x4ADBD0, 0x4ADB60);

void CWanted::SetMaximumWantedLevel(int level) {
    plugin::CallDynGlobal<int>(gaddrof(CWanted::SetMaximumWantedLevel), level);
}

int addrof(CWanted::WorkOutPolicePresence) = ADDRESS_BY_VERSION(0x4ADD00, 0x4ADDF0, 0x4ADD80);
int gaddrof(CWanted::WorkOutPolicePresence) = GLOBAL_ADDRESS_BY_VERSION(0x4ADD00, 0x4ADDF0, 0x4ADD80);

int CWanted::WorkOutPolicePresence(CVector pos, float radius) {
    return plugin::CallAndReturnDynGlobal<int, CVector, float>(gaddrof(CWanted::WorkOutPolicePresence), pos, radius);
}
