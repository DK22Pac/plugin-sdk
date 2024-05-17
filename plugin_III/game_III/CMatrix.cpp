/*
    Plugin-SDK (Grand Theft Auto 3) source file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/
#include "CMatrix.h"

PLUGIN_SOURCE_FILE

int ctor_addr(CMatrix) = ADDRESS_BY_VERSION(0x4732B0, 0x4732B0, 0x4732B0);
int ctor_gaddr(CMatrix) = GLOBAL_ADDRESS_BY_VERSION(0x4732B0, 0x4732B0, 0x4732B0);

CMatrix::CMatrix() {
    plugin::CallMethodDynGlobal<CMatrix *>(ctor_gaddr(CMatrix), this);
}

int ctor_addr_o(CMatrix, void(RwMatrix *, bool)) = ADDRESS_BY_VERSION(0x4B8D90, 0x4B8E80, 0x4B8E10);
int ctor_gaddr_o(CMatrix, void(RwMatrix *, bool)) = GLOBAL_ADDRESS_BY_VERSION(0x4B8D90, 0x4B8E80, 0x4B8E10);

CMatrix::CMatrix(RwMatrix *rwMatrix, bool deleteOnDetach) {
    plugin::CallMethodDynGlobal<CMatrix *, RwMatrix *, bool>(ctor_gaddr_o(CMatrix, void(RwMatrix *, bool)), this, rwMatrix, deleteOnDetach);
}

int ctor_addr_o(CMatrix, void(CMatrix const &)) = ADDRESS_BY_VERSION(0x4B8D70, 0x4B8E60, 0x4B8DF0);
int ctor_gaddr_o(CMatrix, void(CMatrix const &)) = GLOBAL_ADDRESS_BY_VERSION(0x4B8D70, 0x4B8E60, 0x4B8DF0);

CMatrix::CMatrix(CMatrix const &matrix) {
    plugin::CallMethodDynGlobal<CMatrix *, CMatrix const &>(ctor_gaddr_o(CMatrix, void(CMatrix const &)), this, matrix);
}

int dtor_addr(CMatrix) = ADDRESS_BY_VERSION(0x4B8DB0, 0x4B8EA0, 0x4B8E30);
int dtor_gaddr(CMatrix) = GLOBAL_ADDRESS_BY_VERSION(0x4B8DB0, 0x4B8EA0, 0x4B8E30);

CMatrix::~CMatrix() {
    plugin::CallMethodDynGlobal<CMatrix *>(dtor_gaddr(CMatrix), this);
}

int addrof_o(CMatrix::operator+=, void (CMatrix::*)(CMatrix const &)) = ADDRESS_BY_VERSION(0x4B8F90, 0x4B9080, 0x4B9010);
int gaddrof_o(CMatrix::operator+=, void (CMatrix::*)(CMatrix const &)) = GLOBAL_ADDRESS_BY_VERSION(0x4B8F90, 0x4B9080, 0x4B9010);

void CMatrix::operator+=(CMatrix const &right) {
    plugin::CallMethodDynGlobal<CMatrix *, CMatrix const &>(gaddrof_o(CMatrix::operator+=, void (CMatrix::*)(CMatrix const &)), this, right);
}

int addrof_o(CMatrix::operator=, void (CMatrix::*)(CMatrix const &)) = ADDRESS_BY_VERSION(0x4B8F40, 0x4B9030, 0x4B8FC0);
int gaddrof_o(CMatrix::operator=, void (CMatrix::*)(CMatrix const &)) = GLOBAL_ADDRESS_BY_VERSION(0x4B8F40, 0x4B9030, 0x4B8FC0);

void CMatrix::operator=(CMatrix const &right) {
    plugin::CallMethodDynGlobal<CMatrix *, CMatrix const &>(gaddrof_o(CMatrix::operator=, void (CMatrix::*)(CMatrix const &)), this, right);
}

int addrof(CMatrix::Attach) = ADDRESS_BY_VERSION(0x4B8DD0, 0x4B8EC0, 0x4B8E50);
int gaddrof(CMatrix::Attach) = GLOBAL_ADDRESS_BY_VERSION(0x4B8DD0, 0x4B8EC0, 0x4B8E50);

void CMatrix::Attach(RwMatrix *rwMatrix, bool deleteOnDetach) {
    plugin::CallMethodDynGlobal<CMatrix *, RwMatrix *, bool>(gaddrof(CMatrix::Attach), this, rwMatrix, deleteOnDetach);
}

int addrof(CMatrix::AttachRW) = ADDRESS_BY_VERSION(0x4B8E00, 0x4B8EF0, 0x4B8E80);
int gaddrof(CMatrix::AttachRW) = GLOBAL_ADDRESS_BY_VERSION(0x4B8E00, 0x4B8EF0, 0x4B8E80);

void CMatrix::AttachRW(RwMatrix *rwMatrix, bool deleteOnDetach) {
    plugin::CallMethodDynGlobal<CMatrix *, RwMatrix *, bool>(gaddrof(CMatrix::AttachRW), this, rwMatrix, deleteOnDetach);
}

int addrof(CMatrix::CopyOnlyMatrix) = ADDRESS_BY_VERSION(0x4B8F70, 0x4B9060, 0x4B8FF0);
int gaddrof(CMatrix::CopyOnlyMatrix) = GLOBAL_ADDRESS_BY_VERSION(0x4B8F70, 0x4B9060, 0x4B8FF0);

void CMatrix::CopyOnlyMatrix(CMatrix const &matrix) {
    plugin::CallMethodDynGlobal<CMatrix *, CMatrix const &>(gaddrof(CMatrix::CopyOnlyMatrix), this, matrix);
}

int addrof(CMatrix::Detach) = ADDRESS_BY_VERSION(0x4B8E30, 0x4B8F20, 0x4B8EB0);
int gaddrof(CMatrix::Detach) = GLOBAL_ADDRESS_BY_VERSION(0x4B8E30, 0x4B8F20, 0x4B8EB0);

void CMatrix::Detach() {
    plugin::CallMethodDynGlobal<CMatrix *>(gaddrof(CMatrix::Detach), this);
}

int addrof(CMatrix::Reorthogonalise) = ADDRESS_BY_VERSION(0x4B9A80, 0x4B9B70, 0x4B9B00);
int gaddrof(CMatrix::Reorthogonalise) = GLOBAL_ADDRESS_BY_VERSION(0x4B9A80, 0x4B9B70, 0x4B9B00);

void CMatrix::Reorthogonalise() {
    plugin::CallMethodDynGlobal<CMatrix *>(gaddrof(CMatrix::Reorthogonalise), this);
}

int addrof(CMatrix::ResetOrientation) = ADDRESS_BY_VERSION(0x4B9070, 0x4B9160, 0x4B90F0);
int gaddrof(CMatrix::ResetOrientation) = GLOBAL_ADDRESS_BY_VERSION(0x4B9070, 0x4B9160, 0x4B90F0);

void CMatrix::ResetOrientation() {
    plugin::CallMethodDynGlobal<CMatrix *>(gaddrof(CMatrix::ResetOrientation), this);
}

int addrof(CMatrix::Rotate) = ADDRESS_BY_VERSION(0x4B9770, 0x4B9860, 0x4B97F0);
int gaddrof(CMatrix::Rotate) = GLOBAL_ADDRESS_BY_VERSION(0x4B9770, 0x4B9860, 0x4B97F0);

void CMatrix::Rotate(float x, float y, float z) {
    plugin::CallMethodDynGlobal<CMatrix *, float, float, float>(gaddrof(CMatrix::Rotate), this, x, y, z);
}

int addrof(CMatrix::RotateX) = ADDRESS_BY_VERSION(0x4B9510, 0x4B9600, 0x4B9590);
int gaddrof(CMatrix::RotateX) = GLOBAL_ADDRESS_BY_VERSION(0x4B9510, 0x4B9600, 0x4B9590);

void CMatrix::RotateX(float angle) {
    plugin::CallMethodDynGlobal<CMatrix *, float>(gaddrof(CMatrix::RotateX), this, angle);
}

int addrof(CMatrix::RotateZ) = ADDRESS_BY_VERSION(0x4B9640, 0x4B9730, 0x4B96C0);
int gaddrof(CMatrix::RotateZ) = GLOBAL_ADDRESS_BY_VERSION(0x4B9640, 0x4B9730, 0x4B96C0);

void CMatrix::RotateZ(float angle) {
    plugin::CallMethodDynGlobal<CMatrix *, float>(gaddrof(CMatrix::RotateZ), this, angle);
}

int addrof(CMatrix::SetRotate) = ADDRESS_BY_VERSION(0x4B93A0, 0x4B9490, 0x4B9420);
int gaddrof(CMatrix::SetRotate) = GLOBAL_ADDRESS_BY_VERSION(0x4B93A0, 0x4B9490, 0x4B9420);

void CMatrix::SetRotate(float x, float y, float z) {
    plugin::CallMethodDynGlobal<CMatrix *, float, float, float>(gaddrof(CMatrix::SetRotate), this, x, y, z);
}

int addrof(CMatrix::SetRotateX) = ADDRESS_BY_VERSION(0x4B9310, 0x4B9400, 0x4B9390);
int gaddrof(CMatrix::SetRotateX) = GLOBAL_ADDRESS_BY_VERSION(0x4B9310, 0x4B9400, 0x4B9390);

void CMatrix::SetRotateX(float angle) {
    plugin::CallMethodDynGlobal<CMatrix *, float>(gaddrof(CMatrix::SetRotateX), this, angle);
}

int addrof(CMatrix::SetRotateXOnly) = ADDRESS_BY_VERSION(0x4B9160, 0x4B9250, 0x4B91E0);
int gaddrof(CMatrix::SetRotateXOnly) = GLOBAL_ADDRESS_BY_VERSION(0x4B9160, 0x4B9250, 0x4B91E0);

void CMatrix::SetRotateXOnly(float angle) {
    plugin::CallMethodDynGlobal<CMatrix *, float>(gaddrof(CMatrix::SetRotateXOnly), this, angle);
}

int addrof(CMatrix::SetRotateY) = ADDRESS_BY_VERSION(0x4B9340, 0x4B9430, 0x4B93C0);
int gaddrof(CMatrix::SetRotateY) = GLOBAL_ADDRESS_BY_VERSION(0x4B9340, 0x4B9430, 0x4B93C0);

void CMatrix::SetRotateY(float angle) {
    plugin::CallMethodDynGlobal<CMatrix *, float>(gaddrof(CMatrix::SetRotateY), this, angle);
}

int addrof(CMatrix::SetRotateYOnly) = ADDRESS_BY_VERSION(0x4B91F0, 0x4B92E0, 0x4B9270);
int gaddrof(CMatrix::SetRotateYOnly) = GLOBAL_ADDRESS_BY_VERSION(0x4B91F0, 0x4B92E0, 0x4B9270);

void CMatrix::SetRotateYOnly(float angle) {
    plugin::CallMethodDynGlobal<CMatrix *, float>(gaddrof(CMatrix::SetRotateYOnly), this, angle);
}

int addrof(CMatrix::SetRotateZ) = ADDRESS_BY_VERSION(0x4B9370, 0x4B9460, 0x4B93F0);
int gaddrof(CMatrix::SetRotateZ) = GLOBAL_ADDRESS_BY_VERSION(0x4B9370, 0x4B9460, 0x4B93F0);

void CMatrix::SetRotateZ(float angle) {
    plugin::CallMethodDynGlobal<CMatrix *, float>(gaddrof(CMatrix::SetRotateZ), this, angle);
}

int addrof(CMatrix::SetRotateZOnly) = ADDRESS_BY_VERSION(0x4B9280, 0x4B9370, 0x4B9300);
int gaddrof(CMatrix::SetRotateZOnly) = GLOBAL_ADDRESS_BY_VERSION(0x4B9280, 0x4B9370, 0x4B9300);

void CMatrix::SetRotateZOnly(float angle) {
    plugin::CallMethodDynGlobal<CMatrix *, float>(gaddrof(CMatrix::SetRotateZOnly), this, angle);
}

int addrof(CMatrix::SetScale) = ADDRESS_BY_VERSION(0x4B90B0, 0x4B91A0, 0x4B9130);
int gaddrof(CMatrix::SetScale) = GLOBAL_ADDRESS_BY_VERSION(0x4B90B0, 0x4B91A0, 0x4B9130);

void CMatrix::SetScale(float factor) {
    plugin::CallMethodDynGlobal<CMatrix *, float>(gaddrof(CMatrix::SetScale), this, factor);
}

int addrof_o(CMatrix::SetTranslate, void (CMatrix::*)(float, float, float)) = ADDRESS_BY_VERSION(0x4B9100, 0x4B91F0, 0x4B9180);
int gaddrof_o(CMatrix::SetTranslate, void (CMatrix::*)(float, float, float)) = GLOBAL_ADDRESS_BY_VERSION(0x4B9100, 0x4B91F0, 0x4B9180);

void CMatrix::SetTranslate(float x, float y, float z) {
    plugin::CallMethodDynGlobal<CMatrix *, float, float, float>(gaddrof_o(CMatrix::SetTranslate, void (CMatrix::*)(float, float, float)), this, x, y, z);
}

int addrof_o(CMatrix::SetTranslate, void (CMatrix::*)(CVector *)) = ADDRESS_BY_VERSION(0x54A8C0, 0x54AA80, 0x54AA30);
int gaddrof_o(CMatrix::SetTranslate, void (CMatrix::*)(CVector *)) = GLOBAL_ADDRESS_BY_VERSION(0x54A8C0, 0x54AA80, 0x54AA30);

void CMatrix::SetTranslate(CVector *pos) {
    plugin::CallMethodDynGlobal<CMatrix *, CVector *>(gaddrof_o(CMatrix::SetTranslate, void (CMatrix::*)(CVector *)), this, pos);
}

int addrof(CMatrix::Translate) = ADDRESS_BY_VERSION(0x4CBA70, 0x4CBB10, 0x4CBAA0);
int gaddrof(CMatrix::Translate) = GLOBAL_ADDRESS_BY_VERSION(0x4CBA70, 0x4CBB10, 0x4CBAA0);

void CMatrix::Translate(float x, float y, float z) {
    plugin::CallMethodDynGlobal<CMatrix *, float, float, float>(gaddrof(CMatrix::Translate), this, x, y, z);
}

int addrof(CMatrix::SetUnity) = ADDRESS_BY_VERSION(0x4B9010, 0x4B9100, 0x4B9090);
int gaddrof(CMatrix::SetUnity) = GLOBAL_ADDRESS_BY_VERSION(0x4B9010, 0x4B9100, 0x4B9090);

void CMatrix::SetUnity() {
    plugin::CallMethodDynGlobal<CMatrix *>(gaddrof(CMatrix::SetUnity), this);
}

int addrof(CMatrix::Update) = ADDRESS_BY_VERSION(0x4B8E50, 0x4B8F40, 0x4B8ED0);
int gaddrof(CMatrix::Update) = GLOBAL_ADDRESS_BY_VERSION(0x4B8E50, 0x4B8F40, 0x4B8ED0);

void CMatrix::Update() {
    plugin::CallMethodDynGlobal<CMatrix *>(gaddrof(CMatrix::Update), this);
}

int addrof(CMatrix::UpdateRW) = ADDRESS_BY_VERSION(0x4B8EC0, 0x4B8FB0, 0x4B8F40);
int gaddrof(CMatrix::UpdateRW) = GLOBAL_ADDRESS_BY_VERSION(0x4B8EC0, 0x4B8FB0, 0x4B8F40);

void CMatrix::UpdateRW() {
    plugin::CallMethodDynGlobal<CMatrix *>(gaddrof(CMatrix::UpdateRW), this);
}
