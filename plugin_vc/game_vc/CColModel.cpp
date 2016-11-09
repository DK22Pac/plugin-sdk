/*
Plugin-SDK (Grand Theft Auto) header file
Authors: GTA Community. See more here
https://github.com/DK22Pac/plugin-sdk
Do not delete this comment block. Respect others' work!
*/
#include "CColModel.h"

// Converted from cdecl void CColModel::CColModel(void) 0x417120 
CColModel::CColModel() {
    plugin::Call<0x417120>();
}

// Converted from cdecl void CColModel::CalculateTrianglePlanes(void) 0x416AE0 
void CColModel::CalculateTrianglePlanes() {
    plugin::Call<0x416AE0>();
}

// Converted from cdecl int CColModel::GetLinkPtr(void) 0x416A70 
int CColModel::GetLinkPtr() {
    return plugin::CallAndReturn<int, 0x416A70>();
}

// Converted from thiscall int CColModel::GetTrianglePoint(CVector &,int) 0x416B40
int CColModel::GetTrianglePoint(CVector& arg0, int arg1) {
    return plugin::CallMethodAndReturn<int, 0x416B40, CColModel *, CVector&, int>(this, arg0, arg1);
}

// Converted from cdecl void CColModel::RemoveCollisionVolumes(void) 0x4169B0 
void CColModel::RemoveCollisionVolumes() {
    plugin::Call<0x4169B0>();
}

// Converted from cdecl void CColModel::RemoveTrianglePlanes(void) 0x416AB0 
void CColModel::RemoveTrianglePlanes() {
    plugin::Call<0x416AB0>();
}

// Converted from thiscall void CColModel::SetLinkPtr(CLink<CColModel*> *) 0x416A90
//void CColModel::SetLinkPtr(CLink<CColModel* >) {
    //plugin::CallMethod<0x416A90, CColModel *, CLink<CColModel*>(this, >);
//}

// Converted from cdecl void CColModel::operator delete(void * data) 0x4170E0
void CColModel::operator delete(void* data) {
    plugin::Call<0x4170E0, void*>(data);
}

// Converted from cdecl void CColModel::operator new(uint size) 0x417100
void* CColModel::operator new(unsigned int size) {
    plugin::Call<0x417100, unsigned int>(size);
}

// Converted from thiscall void CColModel::operator=(CColModel const&) 0x416B80
void CColModel::operator=(CColModel const& arg0) {
    plugin::CallMethod<0x416B80, CColModel *, CColModel const&>(this, arg0);
}