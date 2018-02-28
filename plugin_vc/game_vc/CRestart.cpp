/*
    Plugin-SDK (Grand Theft Auto Vice City) source file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/
#include "CRestart.h"

CVector *CRestart::HospitalRestartPoints = (CVector *)0x94B930;
float &CRestart::HospitalRestartHeadings = *(float *)0x7DD740;
unsigned short &CRestart::NumberOfHospitalRestarts = *(unsigned short *)0xA10972;
bool &CRestart::bFadeInAfterNextDeath = *(bool *)0xA10B61;

CVector *CRestart::PoliceRestartPoints = (CVector *)0x933B00;
float &CRestart::PoliceRestartHeadings = *(float *)0x7DD720;
unsigned short &CRestart::NumberOfPoliceRestarts = *(unsigned short *)0xA10970;
bool &CRestart::bFadeInAfterNextArrest = *(bool *)0xA10B18;

CVector *CRestart::OverridePosition = (CVector *)0x975344;
float &CRestart::OverrideHeading = *(float *)0x978E54;
bool &CRestart::bOverrideRestart = *(bool *)0xA10AF8;
unsigned char &CRestart::OverrideHospitalLevel = *(unsigned char *)0xA10AE6;
unsigned char &CRestart::OverridePoliceStationLevel = *(unsigned char *)0xA10AEA;

// Converted from cdecl void CRestart::LoadAllRestartPoints(uchar *bufferPointer,uint structSize) 0x4421D0
void CRestart::LoadAllRestartPoints(unsigned char* bufferPointer, unsigned int structSize) {
    plugin::Call<0x4421D0, unsigned char*, unsigned int>(bufferPointer, structSize);
}

// Converted from cdecl void CRestart::SaveAllRestartPoints(uchar *bufferPointer,uint *structSize) 0x4425B0
void CRestart::SaveAllRestartPoints(unsigned char* bufferPointer, unsigned int* structSize) {
    plugin::Call<0x4425B0, unsigned char*, unsigned int*>(bufferPointer, structSize);
}

// Converted from cdecl void CRestart::CancelOverrideRestart(void) 0x4429D0 
void CRestart::CancelOverrideRestart() {
    plugin::Call<0x4429D0>();
}

// Converted from cdecl void CRestart::OverrideNextRestart(CVector const& point,float angle) 0x4429E0
void CRestart::OverrideNextRestart(CVector const& point, float angle) {
    plugin::Call<0x4429E0, CVector const&, float>(point, angle);
}

// Converted from cdecl void CRestart::FindClosestPoliceRestartPoint(CVector const& point,CVector* storedPoint,float *storedAngle) 0x442A10
void CRestart::FindClosestPoliceRestartPoint(CVector const& point, CVector* storedPoint, float* storedAngle) {
    plugin::Call<0x442A10, CVector const&, CVector*, float*>(point, storedPoint, storedAngle);
}

// Converted from cdecl void CRestart::FindClosestHospitalRestartPoint(CVector const& point,CVector* storedPoint,float *storedAngle) 0x442CD0
void CRestart::FindClosestHospitalRestartPoint(CVector const& point, CVector* storedPoint, float* storedAngle) {
    plugin::Call<0x442CD0, CVector const&, CVector*, float*>(point, storedPoint, storedAngle);
}

// Converted from cdecl void CRestart::AddPoliceRestartPoint(CVector const& point,float angle) 0x442FC0
void CRestart::AddPoliceRestartPoint(CVector const& point, float angle) {
    plugin::Call<0x442FC0, CVector const&, float>(point, angle);
}

// Converted from cdecl void CRestart::AddHospitalRestartPoint(CVector const& point,float angle) 0x443010
void CRestart::AddHospitalRestartPoint(CVector const& point, float angle) {
    plugin::Call<0x443010, CVector const&, float>(point, angle);
}

// Converted from cdecl void CRestart::Initialise(void) 0x443060 
void CRestart::Initialise() {
    plugin::Call<0x443060>();
}
