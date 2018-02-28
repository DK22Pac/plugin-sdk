/*
Plugin-SDK (Grand Theft Auto 3) source file
Authors: GTA Community. See more here
https://github.com/DK22Pac/plugin-sdk
Do not delete this comment block. Respect others' work!
*/
#include "CPlane.h"

// Converted from thiscall void CPlane::CPlane(int modelIndex, uchar createdBy) 0x54B170
CPlane::CPlane(int modelIndex, unsigned char createdBy) : CVehicle(plugin::dummy) {
    plugin::CallMethod<0x54B170, CPlane *, int, unsigned char>(this, modelIndex, createdBy);
}

// Converted from cdecl void CPlane::CreateDropOffCesna(void) 0x54E160 
void CPlane::CreateDropOffCesna() {
    plugin::Call<0x54E160>();
}

// Converted from cdecl void CPlane::FindDropOffCesnaCoordinates(void) 0x54E260 
void CPlane::FindDropOffCesnaCoordinates() {
    plugin::Call<0x54E260>();
}

// Converted from cdecl void CPlane::FindDrugPlaneCoordinates(void) 0x54E280 
void CPlane::FindDrugPlaneCoordinates() {
    plugin::Call<0x54E280>();
}

// Converted from cdecl bool CPlane::HasCesnaBeenDestroyed(void) 0x54E150 
bool CPlane::HasCesnaBeenDestroyed() {
    return plugin::CallAndReturn<bool, 0x54E150>();
}

// Converted from cdecl bool CPlane::HasCesnaLanded(void) 0x54E140 
bool CPlane::HasCesnaLanded() {
    return plugin::CallAndReturn<bool, 0x54E140>();
}

// Converted from cdecl bool CPlane::HasDropOffCesnaBeenShotDown(void) 0x54E250 
bool CPlane::HasDropOffCesnaBeenShotDown() {
    return plugin::CallAndReturn<bool, 0x54E250>();
}

// Converted from cdecl void CPlane::InitPlanes(void) 0x54B820 
void CPlane::InitPlanes() {
    plugin::Call<0x54B820>();
}

// Converted from cdecl void CPlane::LoadPath(char const*,int &,float &,bool) 0x54BD50 
void CPlane::LoadPath(char const* arg0, int& arg1, float& arg2, bool arg3) {
    plugin::Call<0x54BD50, char const*, int&, float&, bool>(arg0, arg1, arg2, arg3);
}

// Converted from cdecl void CPlane::Shutdown(void) 0x54BCD0 
void CPlane::Shutdown() {
    plugin::Call<0x54BCD0>();
}

// Converted from cdecl bool CPlane::TestRocketCollision(CVector *) 0x54DE90 
bool CPlane::TestRocketCollision(CVector* arg0) {
    return plugin::CallAndReturn<bool, 0x54DE90, CVector*>(arg0);
}

// Converted from cdecl void CPlane::UpdatePlanes(void) 0x54BEC0 
void CPlane::UpdatePlanes() {
    plugin::Call<0x54BEC0>();
}

// Converted from cdecl void CreateIncomingCesna(void) 0x54E000
void CreateIncomingCesna() {
    plugin::Call<0x54E000>();
}

unsigned int *CesnaMissionStatus = (unsigned int *)0x64CFE8;
unsigned int *CesnaMissionStartTime = (unsigned int *)0x64CFEC;
unsigned int *DropOffCesnaMissionStatus = (unsigned int *)0x64CFF0;
unsigned int *DropOffCesnaMissionStartTime = (unsigned int *)0x64CFF4;
CPlane **pDropOffCesna = (CPlane **)0x8E2A38;
CPlane **pDrugRunCesna = (CPlane **)0x8F5F80;
unsigned int *NumPathNodes = (unsigned int *)0x8F2BE4;
unsigned int *NumPath2Nodes = (unsigned int *)0x941498;
unsigned int *NumPath3Nodes = (unsigned int *)0x9414D8;
unsigned int *NumPath4Nodes = (unsigned int *)0x9412C8;
float *TotalLengthOfFlightPath = (float *)0x8F2C6C;
float *TotalLengthOfFlightPath2 = (float *)0x64CFBC;
float *TotalLengthOfFlightPath3 = (float *)0x64CFD0;
float *TotalLengthOfFlightPath4 = (float *)0x64CFDC;
CPathNode **pPathNodes = (CPathNode **)0x8F1B68;
CPathNode **pPath2Nodes = (CPathNode **)0x885B8C;
CPathNode **pPath3Nodes = (CPathNode **)0x885B78;
CPathNode **pPath4Nodes = (CPathNode **)0x885AD8;
