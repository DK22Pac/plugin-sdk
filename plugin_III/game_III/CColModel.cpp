/*
    Plugin-SDK (Grand Theft Auto 3) header file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/
#include "CColModel.h"

// Converted from thiscall void CColModel::CColModel(void) 0x411680
CColModel::CColModel() {
    plugin::CallMethod<0x411680, CColModel *>(this);
}

// Converted from thiscall void CColModel::CalculateTrianglePlanes(void) 0x411CB0
void CColModel::CalculateTrianglePlanes() {
    plugin::CallMethod<0x411CB0, CColModel *>(this);
}

// Converted from thiscall CLink<CColModel*> *CColModel::GetLinkPtr(void) 0x411D60
CLink<CColModel*> *CColModel::GetLinkPtr() {
    return plugin::CallMethodAndReturn<CLink<CColModel*> *, 0x411D60, CColModel *>(this);
}

// Converted from thiscall void CColModel::GetTrianglePoint(CVector &outVec, int vertId) 0x411C70
void CColModel::GetTrianglePoint(CVector& outVec, int vertId) {
    plugin::CallMethod<0x411C70, CColModel *, CVector&, int>(this, outVec, vertId);
}

// Converted from thiscall void CColModel::RemoveCollisionVolumes(void) 0x411D80
void CColModel::RemoveCollisionVolumes() {
    plugin::CallMethod<0x411D80, CColModel *>(this);
}

// Converted from thiscall void CColModel::RemoveTrianglePlanes(void) 0x411D10
void CColModel::RemoveTrianglePlanes() {
    plugin::CallMethod<0x411D10, CColModel *>(this);
}

// Converted from thiscall void CColModel::operator=(CColModel const& right) 0x411710
void CColModel::operator=(CColModel const& right) {
    plugin::CallMethod<0x411710, CColModel *, CColModel const&>(this, right);
}

// Converted from thiscall void CColModel::~CColModel() 0x4116E0
CColModel::~CColModel() {
    plugin::CallMethod<0x4116E0, CColModel *>(this);
}

// Converted from thiscall void CColModel::SetLinkPtr(CLink<CColModel*> *) 0x411D40
void CColModel::SetLinkPtr(CLink<CColModel*> *link) {
    plugin::CallMethod<0x411D40, CColModel *, CLink<CColModel*> *>(this, link);
}
