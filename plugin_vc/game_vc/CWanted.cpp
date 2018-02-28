/*
Plugin-SDK (Grand Theft Auto Vice City) header file
Authors: GTA Community. See more here
https://github.com/DK22Pac/plugin-sdk
Do not delete this comment block. Respect others' work!
*/
#include "CWanted.h"

int &CWanted::nMaximumWantedLevel = *(int *)0x6910DC; 
int &CWanted::MaximumWantedLevel = *(int *)0x6910D8;  

// Converted from thiscall bool CWanted::AddCrimeToQ(eCrimeType crimeType,int,CVector const&,bool,bool) 0x4D1990
bool CWanted::AddCrimeToQ(eCrimeType crimeType, int arg1, CVector const& arg2, bool arg3, bool arg4) {
    return plugin::CallMethodAndReturn<bool, 0x4D1990, CWanted *, eCrimeType, int, CVector const&, bool, bool>(this, crimeType, arg1, arg2, arg3, arg4);
}

// Converted from thiscall bool CWanted::AreArmyRequired(void) 0x4D1E20
bool CWanted::AreArmyRequired() {
    return plugin::CallMethodAndReturn<bool, 0x4D1E20, CWanted *>(this);
}

// Converted from thiscall bool CWanted::AreFbiRequired(void) 0x4D1E40 
bool CWanted::AreFbiRequired() {
    return plugin::CallMethodAndReturn<bool, 0x4D1E40, CWanted *>(this);
}

// Converted from thiscall bool CWanted::AreMiamiViceRequired(void) 0x4D1E80 
bool CWanted::AreMiamiViceRequired() {
    return plugin::CallMethodAndReturn<bool, 0x4D1E80, CWanted *>(this);
}

// Converted from thiscall bool CWanted::AreSwatRequired(void) 0x4D1E60 
bool CWanted::AreSwatRequired() {
    return plugin::CallMethodAndReturn<bool, 0x4D1E60, CWanted *>(this);
}

// Converted from thiscall void CWanted::CheatWantedLevel(int) 0x4D1F80
void CWanted::CheatWantedLevel(int arg0) {
    plugin::CallMethod<0x4D1F80, CWanted *, int>(this, arg0);
}

// Converted from thiscall void CWanted::ClearQdCrimes(void) 0x4D1A50
void CWanted::ClearQdCrimes() {
    plugin::CallMethod<0x4D1A50, CWanted *>(this);
}

// Converted from thiscall void CWanted::Initialise(void) 0x4D2440
void CWanted::Initialise() {
    plugin::CallMethod<0x4D2440, CWanted *>(this);
}

// Converted from thiscall bool CWanted::NumOfHelisRequired(void) 0x4D1DE0
bool CWanted::NumOfHelisRequired() {
    return plugin::CallMethodAndReturn<bool, 0x4D1DE0, CWanted *>(this);
}

// Converted from thiscall void CWanted::RegisterCrime(eCrimeType crimeType,CVector const&,uint,bool) 0x4D20F0
void CWanted::RegisterCrime(eCrimeType crimeType, CVector const& arg1, unsigned int arg2, bool arg3) {
    plugin::CallMethod<0x4D20F0, CWanted *, eCrimeType, CVector const&, unsigned int, bool>(this, crimeType, arg1, arg2, arg3);
}

// Converted from thiscall void CWanted::RegisterCrime_Immediately(eCrimeType crimeType,CVector const&,uint,bool) 0x4D20B0
void CWanted::RegisterCrime_Immediately(eCrimeType crimeType, CVector const& arg1, unsigned int arg2, bool arg3) {
    plugin::CallMethod<0x4D20B0, CWanted *, eCrimeType, CVector const&, unsigned int, bool>(this, crimeType, arg1, arg2, arg3);
}

// Converted from thiscall void CWanted::ReportCrimeNow(eCrimeType crimeType,CVector const&,bool) 0x4D1610
void CWanted::ReportCrimeNow(eCrimeType crimeType, CVector const& arg1, bool arg2) {
    plugin::CallMethod<0x4D1610, CWanted *, eCrimeType, CVector const&, bool>(this, crimeType, arg1, arg2);
}

// Converted from thiscall void CWanted::Reset(void) 0x4D2420 
void CWanted::Reset() {
    plugin::CallMethod<0x4D2420, CWanted *>(this);
}

// Converted from thiscall void CWanted::ResetPolicePursuit(void) 0x4D1D20 
void CWanted::ResetPolicePursuit() {
    plugin::CallMethod<0x4D1D20, CWanted *>(this);
}

// Converted from cdecl void CWanted::SetMaximumWantedLevel(int level) 0x4D1E90
void CWanted::SetMaximumWantedLevel(int level) {
    plugin::Call<0x4D1E90, int>(level);
}

// Converted from thiscall void CWanted::SetWantedLevel(int level) 0x4D1FA0
void CWanted::SetWantedLevel(int level) {
    plugin::CallMethod<0x4D1FA0, CWanted *, int>(this, level);
}

// Converted from thiscall void CWanted::SetWantedLevelNoDrop(int) 0x4D1F50
void CWanted::SetWantedLevelNoDrop(int arg0) {
    plugin::CallMethod<0x4D1F50, CWanted *, int>(this, arg0);
}

// Converted from thiscall void CWanted::Update(void) 0x4D2260 
void CWanted::Update() {
    plugin::CallMethod<0x4D2260, CWanted *>(this);
}

// Converted from thiscall void CWanted::UpdateWantedLevel(void) 0x4D2110 
void CWanted::UpdateWantedLevel() {
    plugin::CallMethod<0x4D2110, CWanted *>(this);
}

// Converted from cdecl void CWanted::WorkOutPolicePresence(CVector,float) 0x4D1B00 
void CWanted::WorkOutPolicePresence(CVector arg0, float arg1) {
    plugin::Call<0x4D1B00, CVector, float>(arg0, arg1);
}