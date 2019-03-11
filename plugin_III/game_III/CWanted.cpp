/*
    Plugin-SDK (Grand Theft Auto 3) header file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/
#include "CWanted.h"

unsigned int &CWanted::MaximumWantedLevel = *(unsigned int *)0x5F7714;
unsigned int &CWanted::nMaximumWantedLevel = *(unsigned int *)0x5F7718;

// Converted from thiscall void CCrimeBeingQd::CCrimeBeingQd(void) 0x4EFB20
CCrimeBeingQd::CCrimeBeingQd() {
    plugin::CallMethod<0x4EFB20, CCrimeBeingQd *>(this);
}

// Converted from thiscall CCrimeBeingQd* CCrimeBeingQd::operator=(CCrimeBeingQd const& crime) 0x5966A0
CCrimeBeingQd* CCrimeBeingQd::operator=(CCrimeBeingQd const& crime) {
    return plugin::CallMethodAndReturn<CCrimeBeingQd*, 0x5966A0, CCrimeBeingQd *, CCrimeBeingQd const&>(this, crime);
}

// Converted from thiscall void CWanted::Initialise(void) 0x4AD6E0 
void CWanted::Initialise() {
    plugin::CallMethod<0x4AD6E0, CWanted *>(this);
}

// Converted from thiscall void CWanted::Reset(void) 0x4AD790 
void CWanted::Reset() {
    plugin::CallMethod<0x4AD790, CWanted *>(this);
}

// Converted from thiscall void CWanted::Update(void) 0x4AD7B0 
void CWanted::Update() {
    plugin::CallMethod<0x4AD7B0, CWanted *>(this);
}

// Converted from thiscall void CWanted::UpdateWantedLevel(void) 0x4AD900 
void CWanted::UpdateWantedLevel() {
    plugin::CallMethod<0x4AD900, CWanted *>(this);
}

// Converted from thiscall void CWanted::RegisterCrime(eCrimeType crimeType,CVector const& posn,uint crimeId,bool bPoliceDontReallyCare) 0x4AD9F0
void CWanted::RegisterCrime(eCrimeType crimeType, CVector const& posn, unsigned int crimeId, bool bPoliceDontReallyCare) {
    plugin::CallMethod<0x4AD9F0, CWanted *, eCrimeType, CVector const&, unsigned int, bool>(this, crimeType, posn, crimeId, bPoliceDontReallyCare);
}

// Converted from thiscall void CWanted::RegisterCrime_Immediately(eCrimeType crimeType,CVector const& posn,uint crimeId,bool bPoliceDontReallyCare) 0x4ADA10
void CWanted::RegisterCrime_Immediately(eCrimeType crimeType, CVector const& posn, unsigned int crimeId, bool bPoliceDontReallyCare) {
    plugin::CallMethod<0x4ADA10, CWanted *, eCrimeType, CVector const&, unsigned int, bool>(this, crimeType, posn, crimeId, bPoliceDontReallyCare);
}

// Converted from thiscall void CWanted::SetWantedLevel(int level) 0x4ADA50
void CWanted::SetWantedLevel(int level) {
    plugin::CallMethod<0x4ADA50, CWanted *, int>(this, level);
}

// Converted from thiscall void CWanted::SetWantedLevelNoDrop(int level) 0x4ADAC0
void CWanted::SetWantedLevelNoDrop(int level) {
    plugin::CallMethod<0x4ADAC0, CWanted *, int>(this, level);
}

// Converted from cdecl void CWanted::SetMaximumWantedLevel(int level) 0x4ADAE0
void CWanted::SetMaximumWantedLevel(int level) {
    plugin::Call<0x4ADAE0, int>(level);
}

// Converted from thiscall bool CWanted::AreSwatRequired(void) 0x4ADBA0 
bool CWanted::AreSwatRequired() {
    return plugin::CallMethodAndReturn<bool, 0x4ADBA0, CWanted *>(this);
}

// Converted from thiscall bool CWanted::AreFbiRequired(void) 0x4ADBC0 
bool CWanted::AreFbiRequired() {
    return plugin::CallMethodAndReturn<bool, 0x4ADBC0, CWanted *>(this);
}

// Converted from thiscall bool CWanted::AreArmyRequired(void) 0x4ADBE0 
bool CWanted::AreArmyRequired() {
    return plugin::CallMethodAndReturn<bool, 0x4ADBE0, CWanted *>(this);
}

// Converted from thiscall int CWanted::NumOfHelisRequired(void) 0x4ADC00 
int CWanted::NumOfHelisRequired() {
    return plugin::CallMethodAndReturn<int, 0x4ADC00, CWanted *>(this);
}

// Converted from thiscall void CWanted::ResetPolicePursuit(void) 0x4ADC40 
void CWanted::ResetPolicePursuit() {
    plugin::CallMethod<0x4ADC40, CWanted *>(this);
}

// Converted from cdecl void CWanted::WorkOutPolicePresence(CVector posn,float radius) 0x4ADD00
void CWanted::WorkOutPolicePresence(CVector posn, float radius) {
    plugin::Call<0x4ADD00, CVector, float>(posn, radius);
}

// Converted from thiscall void CWanted::ClearQdCrimes(void) 0x4ADF20 
void CWanted::ClearQdCrimes() {
    plugin::CallMethod<0x4ADF20, CWanted *>(this);
}

// Converted from thiscall bool CWanted::AddCrimeToQ(eCrimeType crimeType,int crimeId,CVector const& posn,bool bAlreadyReported,bool bPoliceDontReallyCare) 0x4ADFD0
bool CWanted::AddCrimeToQ(eCrimeType crimeType, int crimeId, CVector const& posn, bool bAlreadyReported, bool bPoliceDontReallyCare) {
    return plugin::CallMethodAndReturn<bool, 0x4ADFD0, CWanted *, eCrimeType, int, CVector const&, bool, bool>(this, crimeType, crimeId, posn, bAlreadyReported, bPoliceDontReallyCare);
}

// Converted from thiscall void CWanted::UpdateCrimesQ(void) 0x4AE090 
void CWanted::UpdateCrimesQ() {
    plugin::CallMethod<0x4AE090, CWanted *>(this);
}

// Converted from thiscall void CWanted::ReportCrimeNow(eCrimeType crimeType,CVector const& posn,bool bPoliceDontReallyCare) 0x4AE110
void CWanted::ReportCrimeNow(eCrimeType crimeType, CVector const& posn, bool bPoliceDontReallyCare) {
    plugin::CallMethod<0x4AE110, CWanted *, eCrimeType, CVector const&, bool>(this, crimeType, posn, bPoliceDontReallyCare);
}
