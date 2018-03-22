/*
    Plugin-SDK (Grand Theft Auto 3) source file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/
#include "CMatrix.h"

// Converted from thiscall void CMatrix::Attach(RwMatrixTag *rwMatrix,bool deleteOnDetach) 0x4B8DD0
void CMatrix::Attach(RwMatrixTag* rwMatrix, bool deleteOnDetach) {
    ((void(__thiscall *)(CMatrix*, RwMatrixTag*, bool))0x4B8DD0)(this, rwMatrix, deleteOnDetach);
}

// Converted from thiscall void CMatrix::AttachRW(RwMatrixTag *rwMatrix,bool deleteOnDetach) 0x4B8E00
void CMatrix::AttachRW(RwMatrixTag* rwMatrix, bool deleteOnDetach) {
    ((void(__thiscall *)(CMatrix*, RwMatrixTag*, bool))0x4B8E00)(this, rwMatrix, deleteOnDetach);
}

// Converted from thiscall void CMatrix::CMatrix(CMatrix const&src) 0x4B8D70
CMatrix::CMatrix(CMatrix const& src) {
    ((void(__thiscall *)(CMatrix*, CMatrix const&))0x4B8D70)(this, src);
}

// Converted from thiscall void CMatrix::CMatrix(RwMatrixTag *rwMatrix,bool deleteOnDetach)0x4B8D90
CMatrix::CMatrix(RwMatrixTag* rwMatrix, bool deleteOnDetach) {
    ((void(__thiscall *)(CMatrix*, RwMatrixTag*, bool))0x4B8D90)(this, rwMatrix, deleteOnDetach);
}

// Converted from thiscall void CMatrix::CopyOnlyMatrix(CMatrix const&src) 0x4B8F70
void CMatrix::CopyOnlyMatrix(CMatrix const& src) {
    ((void(__thiscall *)(CMatrix*, CMatrix const&))0x4B8F70)(this, src);
}

// Converted from thiscall void CMatrix::Detach(void) 0x4B8E30
void CMatrix::Detach() {
    ((void(__thiscall *)(CMatrix*))0x4B8E30)(this);
}

// Converted from thiscall void CMatrix::Reorthogonalise(void) 0x4B9A80
void CMatrix::Reorthogonalise() {
    ((void(__thiscall *)(CMatrix*))0x4B9A80)(this);
}

// Converted from thiscall void CMatrix::ResetOrientation(void) 0x4B9070
void CMatrix::ResetOrientation() {
    ((void(__thiscall *)(CMatrix*))0x4B9070)(this);
}

// Converted from thiscall void CMatrix::Rotate(float x,float y,float z) 0x4B9770
void CMatrix::Rotate(float x, float y, float z) {
    ((void(__thiscall *)(CMatrix*, float, float, float))0x4B9770)(this, x, y, z);
}

// Converted from thiscall void CMatrix::RotateX(float angle) 0x4B9510
void CMatrix::RotateX(float angle) {
    ((void(__thiscall *)(CMatrix*, float))0x4B9510)(this, angle);
}

// Converted from thiscall void CMatrix::RotateZ(float angle) 0x4B9640
void CMatrix::RotateZ(float angle) {
    ((void(__thiscall *)(CMatrix*, float))0x4B9640)(this, angle);
}

// Converted from thiscall void CMatrix::SetRotate(float x,float y,float z) 0x4B93A0
void CMatrix::SetRotate(float x, float y, float z) {
    ((void(__thiscall *)(CMatrix*, float, float, float))0x4B93A0)(this, x, y, z);
}

// Converted from thiscall void CMatrix::SetRotateX(float angle) 0x4B9310
void CMatrix::SetRotateX(float angle) {
    ((void(__thiscall *)(CMatrix*, float))0x4B9310)(this, angle);
}

// Converted from thiscall void CMatrix::SetRotateXOnly(float angle) 0x4B9160
void CMatrix::SetRotateXOnly(float angle) {
    ((void(__thiscall *)(CMatrix*, float))0x4B9160)(this, angle);
}

// Converted from thiscall void CMatrix::SetRotateY(float angle) 0x4B9340
void CMatrix::SetRotateY(float angle) {
    ((void(__thiscall *)(CMatrix*, float))0x4B9340)(this, angle);
}

// Converted from thiscall void CMatrix::SetRotateYOnly(float angle) 0x4B91F0
void CMatrix::SetRotateYOnly(float angle) {
    ((void(__thiscall *)(CMatrix*, float))0x4B91F0)(this, angle);
}

// Converted from thiscall void CMatrix::SetRotateZ(float angle) 0x4B9370
void CMatrix::SetRotateZ(float angle) {
    ((void(__thiscall *)(CMatrix*, float))0x4B9370)(this, angle);
}

// Converted from thiscall void CMatrix::SetRotateZOnly(float angle) 0x4B9280
void CMatrix::SetRotateZOnly(float angle) {
    ((void(__thiscall *)(CMatrix*, float))0x4B9280)(this, angle);
}

// Converted from thiscall void CMatrix::SetScale(float factor) 0x4B90B0
void CMatrix::SetScale(float factor) {
    ((void(__thiscall *)(CMatrix*, float))0x4B90B0)(this, factor);
}

// Converted from thiscall void CMatrix::SetTranslate(float x,float y,float z) 0x4B9100
void CMatrix::SetTranslate(float x, float y, float z) {
    ((void(__thiscall *)(CMatrix*, float, float, float))0x4B9100)(this, x, y, z);
}

// Converted from thiscall void CMatrix::SetUnity(void) 0x4B9010
void CMatrix::SetUnity() {
    ((void(__thiscall *)(CMatrix*))0x4B9010)(this);
}

// Converted from thiscall void CMatrix::Update(void) 0x4B8E50
void CMatrix::Update() {
    ((void(__thiscall *)(CMatrix*))0x4B8E50)(this);
}

// Converted from thiscall void CMatrix::UpdateRW(void) 0x4B8EC0
void CMatrix::UpdateRW() {
    ((void(__thiscall *)(CMatrix*))0x4B8EC0)(this);
}

// Converted from thiscall void CMatrix::operator+=(CMatrix const&right) 0x4B8F90
void CMatrix::operator+=(CMatrix const& right) {
    ((void(__thiscall *)(CMatrix*, CMatrix const&))0x4B8F90)(this, right);
}

// Converted from thiscall void CMatrix::operator=(CMatrix const&right) 0x4B8F40
void CMatrix::operator=(CMatrix const& right) {
    ((void(__thiscall *)(CMatrix*, CMatrix const&))0x4B8F40)(this, right);
}

// Converted from thiscall void CMatrix::~CMatrix() 0x4B8DB0
CMatrix::~CMatrix() {
    ((void(__thiscall *)(CMatrix*))0x4B8DB0)(this);
}

// Converted from cdecl CMatrix operator*(CMatrix const&a,CMatrix const&b) 0x4B9D60
CMatrix operator*(CMatrix const& a, CMatrix const& b) {
    CMatrix result;
    ((void(__cdecl *)(CMatrix*, CMatrix const&, CMatrix const&))0x4B9D60)(&result, a, b);
    return result;
}

// Converted from cdecl void Invert(CMatrix const&in,CMatrix&out) 0x4B9C30
void Invert(CMatrix const& in, CMatrix&out) {
    ((void(__cdecl *)(CMatrix const&, CMatrix&out))0x4B9C30)(in, out);
}

// Converted from cdecl CMatrix Invert(CMatrix const&in) 0x4B9BF0
CMatrix Invert(CMatrix const& in) {
    CMatrix result;
    ((void(__cdecl *)(CMatrix*, CMatrix const&))0x4B9BF0)(&result, in);
    return result;
}

// Converted from cdecl CVector operator*(CMatrix const&m,CVector const&v) 0x4BA4D0
CVector operator*(CMatrix const& m, CVector const& v) {
    CVector result;
    ((void(__cdecl *)(CVector*, CMatrix const&, CVector const&))0x4BA4D0)(&result, m, v);
    return result;
}

// Converted from cdecl CVector Multiply3x3(CVector const&v,CMatrix const&m) 0x4BA450
CVector Multiply3x3(CVector const& v, CMatrix const& m) {
    CVector result;
    ((void(__cdecl *)(CVector*, CVector const&, CMatrix const&))0x4BA450)(&result, v, m);
    return result;
}

// Converted from cdecl CVector Multiply3x3(CMatrix const&m,CVector const&v) 0x4BA3D0
CVector Multiply3x3(CMatrix const& m, CVector const& v) {
    CVector result;
    ((void(__cdecl *)(CVector*, CMatrix const&, CVector const&))0x4BA3D0)(&result, m, v);
    return result;
}

void CMatrix::SetOrientation(float x, float y, float z)
{
    CVector currPos = this->pos;
    CMatrix::SetRotate(x, y, z);
    this->pos = currPos;
}