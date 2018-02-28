/*
    Plugin-SDK (Grand Theft Auto 3) source file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/
#include "CRestart.h"

CVector *CRestart::HospitalRestartPoints = (CVector *)0x87F9B0;
float &CRestart::HospitalRestartHeadings = *(float *)0x6F1D40;
unsigned short &CRestart::NumberOfHospitalRestarts = *(unsigned short *)0x95CC46;
bool &CRestart::bFadeInAfterNextDeath = *(bool *)0x95CD9D;

CVector *CRestart::PoliceRestartPoints = (CVector *)0x846228;
float &CRestart::PoliceRestartHeadings = *(float *)0x6F1D20;
unsigned short &CRestart::NumberOfPoliceRestarts = *(unsigned short *)0x95CC44;
bool &CRestart::bFadeInAfterNextArrest = *(bool *)0x95CD69;

CVector *CRestart::OverridePosition = (CVector *)0x8E2C00;
float &CRestart::OverrideHeading = *(float *)0x8F2A18;
bool &CRestart::bOverrideRestart = *(bool *)0x95CD5D;
unsigned char &CRestart::OverrideHospitalLevel = *(unsigned char *)0x95CD4C;
unsigned char &CRestart::OverridePoliceStationLevel = *(unsigned char *)0x95CD50;

// Converted from cdecl void CRestart::Initialise(void) 0x435E20 
void CRestart::Initialise() {
    plugin::Call<0x435E20>();
}

// Converted from cdecl void CRestart::AddHospitalRestartPoint(CVector const& point,float angle) 0x436100
void CRestart::AddHospitalRestartPoint(CVector const& point, float angle) {
    plugin::Call<0x436100, CVector const&, float>(point, angle);
}

// Converted from cdecl void CRestart::AddPoliceRestartPoint(CVector const& point,float angle) 0x436150
void CRestart::AddPoliceRestartPoint(CVector const& point, float angle) {
    plugin::Call<0x436150, CVector const&, float>(point, angle);
}

// Converted from cdecl void CRestart::FindClosestHospitalRestartPoint(CVector const& point,CVector* storedPoint,float *storedAngle) 0x4361A0
void CRestart::FindClosestHospitalRestartPoint(CVector const& point, CVector* storedPoint, float* storedAngle) {
    plugin::Call<0x4361A0, CVector const&, CVector*, float*>(point, storedPoint, storedAngle);
}

// Converted from cdecl void CRestart::FindClosestPoliceRestartPoint(CVector const& point,CVector* storedPoint,float *storedAngle) 0x436450
void CRestart::FindClosestPoliceRestartPoint(CVector const& point, CVector* storedPoint, float* storedAngle) {
    plugin::Call<0x436450, CVector const&, CVector*, float*>(point, storedPoint, storedAngle);
}

// Converted from cdecl void CRestart::OverrideNextRestart(CVector const& point,float angle) 0x4366C0
void CRestart::OverrideNextRestart(CVector const& point, float angle) {
    plugin::Call<0x4366C0, CVector const&, float>(point, angle);
}

// Converted from cdecl void CRestart::CancelOverrideRestart(void) 0x4366F0 
void CRestart::CancelOverrideRestart() {
    plugin::Call<0x4366F0>();
}

// Converted from cdecl void CRestart::SaveAllRestartPoints(uchar *bufferPointer,uint *structSize) 0x436700
void CRestart::SaveAllRestartPoints(unsigned char* bufferPointer, unsigned int* structSize) {
    plugin::Call<0x436700, unsigned char*, unsigned int*>(bufferPointer, structSize);
}

// Converted from cdecl void CRestart::LoadAllRestartPoints(uchar *bufferPointer,uint structSize) 0x436B20
void CRestart::LoadAllRestartPoints(unsigned char* bufferPointer, unsigned int structSize) {
    plugin::Call<0x436B20, unsigned char*, unsigned int>(bufferPointer, structSize);
}
