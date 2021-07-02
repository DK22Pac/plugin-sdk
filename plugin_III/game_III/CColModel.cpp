/*
    Plugin-SDK (Grand Theft Auto 3) source file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/
#include "CColModel.h"

PLUGIN_SOURCE_FILE

int ctor_addr(CColModel) = ADDRESS_BY_VERSION(0x411680, 0x411680, 0x411680);
int ctor_gaddr(CColModel) = GLOBAL_ADDRESS_BY_VERSION(0x411680, 0x411680, 0x411680);

CColModel::CColModel() {
    plugin::CallMethodDynGlobal<CColModel *>(ctor_gaddr(CColModel), this);
}

int dtor_addr(CColModel) = ADDRESS_BY_VERSION(0x4116E0, 0x4116E0, 0x4116E0);
int dtor_gaddr(CColModel) = GLOBAL_ADDRESS_BY_VERSION(0x4116E0, 0x4116E0, 0x4116E0);

CColModel::~CColModel() {
    plugin::CallMethodDynGlobal<CColModel *>(dtor_gaddr(CColModel), this);
}

int addrof_o(CColModel::operator=, void (CColModel::*)(CColModel const &)) = ADDRESS_BY_VERSION(0x411710, 0x411710, 0x411710);
int gaddrof_o(CColModel::operator=, void (CColModel::*)(CColModel const &)) = GLOBAL_ADDRESS_BY_VERSION(0x411710, 0x411710, 0x411710);

void CColModel::operator=(CColModel const &right) {
    plugin::CallMethodDynGlobal<CColModel *, CColModel const &>(gaddrof_o(CColModel::operator=, void (CColModel::*)(CColModel const &)), this, right);
}

int addrof(CColModel::CalculateTrianglePlanes) = ADDRESS_BY_VERSION(0x411CB0, 0x411CB0, 0x411CB0);
int gaddrof(CColModel::CalculateTrianglePlanes) = GLOBAL_ADDRESS_BY_VERSION(0x411CB0, 0x411CB0, 0x411CB0);

void CColModel::CalculateTrianglePlanes() {
    plugin::CallMethodDynGlobal<CColModel *>(gaddrof(CColModel::CalculateTrianglePlanes), this);
}

int addrof(CColModel::GetLinkPtr) = ADDRESS_BY_VERSION(0x411D60, 0x411D60, 0x411D60);
int gaddrof(CColModel::GetLinkPtr) = GLOBAL_ADDRESS_BY_VERSION(0x411D60, 0x411D60, 0x411D60);

CLink<CColModel *> *CColModel::GetLinkPtr() {
    return plugin::CallMethodAndReturnDynGlobal<CLink<CColModel *> *, CColModel *>(gaddrof(CColModel::GetLinkPtr), this);
}

int addrof(CColModel::GetTrianglePoint) = ADDRESS_BY_VERSION(0x411C70, 0x411C70, 0x411C70);
int gaddrof(CColModel::GetTrianglePoint) = GLOBAL_ADDRESS_BY_VERSION(0x411C70, 0x411C70, 0x411C70);

void CColModel::GetTrianglePoint(CVector &outVec, int vertId) {
    plugin::CallMethodDynGlobal<CColModel *, CVector &, int>(gaddrof(CColModel::GetTrianglePoint), this, outVec, vertId);
}

int addrof(CColModel::RemoveCollisionVolumes) = ADDRESS_BY_VERSION(0x411D80, 0x411D80, 0x411D80);
int gaddrof(CColModel::RemoveCollisionVolumes) = GLOBAL_ADDRESS_BY_VERSION(0x411D80, 0x411D80, 0x411D80);

void CColModel::RemoveCollisionVolumes() {
    plugin::CallMethodDynGlobal<CColModel *>(gaddrof(CColModel::RemoveCollisionVolumes), this);
}

int addrof(CColModel::RemoveTrianglePlanes) = ADDRESS_BY_VERSION(0x411D10, 0x411D10, 0x411D10);
int gaddrof(CColModel::RemoveTrianglePlanes) = GLOBAL_ADDRESS_BY_VERSION(0x411D10, 0x411D10, 0x411D10);

void CColModel::RemoveTrianglePlanes() {
    plugin::CallMethodDynGlobal<CColModel *>(gaddrof(CColModel::RemoveTrianglePlanes), this);
}

int addrof(CColModel::SetLinkPtr) = ADDRESS_BY_VERSION(0x411D40, 0x411D40, 0x411D40);
int gaddrof(CColModel::SetLinkPtr) = GLOBAL_ADDRESS_BY_VERSION(0x411D40, 0x411D40, 0x411D40);

void CColModel::SetLinkPtr(CLink<CColModel *> *link) {
    plugin::CallMethodDynGlobal<CColModel *, CLink<CColModel *> *>(gaddrof(CColModel::SetLinkPtr), this, link);
}
