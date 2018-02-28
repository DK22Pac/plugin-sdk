/*
    Plugin-SDK (Grand Theft Auto San Andreas) source file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/
#include "CCollisionData.h"

// Converted from thiscall void CCollisionData::CCollisionData(void) 0x40F030
CCollisionData::CCollisionData() {
    plugin::CallMethod<0x40F030, CCollisionData *>(this);
}

// Converted from thiscall void CCollisionData::RemoveCollisionVolumes(void) 0x40F070
void CCollisionData::RemoveCollisionVolumes() {
    plugin::CallMethod<0x40F070, CCollisionData *>(this);
}

// Converted from thiscall void CCollisionData::Copy(CCollisionData const&) 0x40F120
void CCollisionData::Copy(CCollisionData const& arg0) {
    plugin::CallMethod<0x40F120, CCollisionData *, CCollisionData const&>(this, arg0);
}

// Converted from thiscall void CCollisionData::CalculateTrianglePlanes(void) 0x40F590
void CCollisionData::CalculateTrianglePlanes() {
    plugin::CallMethod<0x40F590, CCollisionData *>(this);
}

// Converted from thiscall void CCollisionData::GetTrianglePoint(CVector &outVec,int vertId) 0x40F5E0
void CCollisionData::GetTrianglePoint(CVector& outVec, int vertId) {
    plugin::CallMethod<0x40F5E0, CCollisionData *, CVector&, int>(this, outVec, vertId);
}

// Converted from thiscall void CCollisionData::GetShadTrianglePoint(CVector &outVec,int vertId) 0x40F640
void CCollisionData::GetShadTrianglePoint(CVector& outVec, int vertId) {
    plugin::CallMethod<0x40F640, CCollisionData *, CVector&, int>(this, outVec, vertId);
}

// Converted from thiscall void CCollisionData::RemoveTrianglePlanes(void) 0x40F6A0
void CCollisionData::RemoveTrianglePlanes() {
    plugin::CallMethod<0x40F6A0, CCollisionData *>(this);
}

// Converted from thiscall void CCollisionData::SetLinkPtr(void *link) 0x40F6C0
void CCollisionData::SetLinkPtr(CLink<CCollisionData*> *link) {
    plugin::CallMethod<0x40F6C0, CCollisionData *, CLink<CCollisionData*> *>(this, link);
}

// Converted from thiscall void* CCollisionData::GetLinkPtr(void) 0x40F6E0
CLink<CCollisionData*> *CCollisionData::GetLinkPtr() {
    return plugin::CallMethodAndReturn<CLink<CCollisionData*> *, 0x40F6E0, CCollisionData *>(this);
}