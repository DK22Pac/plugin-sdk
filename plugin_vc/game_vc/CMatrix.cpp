/*
    Plugin-SDK (Grand Theft Auto Vice City) source file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/
#include "CMatrix.h"

// Converted from cdecl CMatrix operator*(CMatrix const&a,CMatrix const&b) 0x4DE6C0
CMatrix operator*(CMatrix const& a, CMatrix const& b) {
    CMatrix result;
    ((void(__cdecl *)(CMatrix*, CMatrix const&, CMatrix const&))0x4DE6C0)(&result, a, b);
    return result;
}

// Converted from cdecl void Invert(CMatrix const&in,CMatrix&out) 0x4DE870
void Invert(CMatrix const& in, CMatrix&out) {
    ((void(__cdecl *)(CMatrix const&, CMatrix&out))0x4DE870)(in, out);
}

// Converted from thiscall void CMatrix::CopyToRwMatrix(RwMatrixTag *rwMatrix) 0x4DE960
void CMatrix::CopyToRwMatrix(RwMatrixTag* rwMatrix) {
    ((void(__thiscall *)(CMatrix*, RwMatrixTag*))0x4DE960)(this, rwMatrix);
}

// Converted from cdecl CMatrix Invert(CMatrix const&in) 0x4DE9C0
CMatrix Invert(CMatrix const& in) {
    CMatrix result;
    ((void(__cdecl *)(CMatrix*, CMatrix const&))0x4DE9C0)(&result, in);
    return result;
}

// Converted from thiscall void CMatrix::Reorthogonalise(void) 0x4DEA30
void CMatrix::Reorthogonalise() {
    ((void(__thiscall *)(CMatrix*))0x4DEA30)(this);
}

// Converted from thiscall void CMatrix::Rotate(float x,float y,float z) 0x4DEBA0
void CMatrix::Rotate(float x, float y, float z) {
    ((void(__thiscall *)(CMatrix*, float, float, float))0x4DEBA0)(this, x, y, z);
}

// Converted from thiscall void CMatrix::RotateZ(float angle) 0x4DEEB0
void CMatrix::RotateZ(float angle) {
    ((void(__thiscall *)(CMatrix*, float))0x4DEEB0)(this, angle);
}

// Converted from thiscall void CMatrix::RotateY(float angle) 0x4DEFE0
void CMatrix::RotateY(float angle) {
    ((void(__thiscall *)(CMatrix*, float))0x4DEFE0)(this, angle);
}

// Converted from thiscall void CMatrix::RotateX(float angle) 0x4DF110
void CMatrix::RotateX(float angle) {
    ((void(__thiscall *)(CMatrix*, float))0x4DF110)(this, angle);
}

// Converted from thiscall void CMatrix::SetRotate(float x,float y,float z) 0x4DF240
void CMatrix::SetRotate(float x, float y, float z) {
    ((void(__thiscall *)(CMatrix*, float, float, float))0x4DF240)(this, x, y, z);
}

// Converted from thiscall void CMatrix::SetRotateZ(float angle) 0x4DF3B0
void CMatrix::SetRotateZ(float angle) {
    ((void(__thiscall *)(CMatrix*, float))0x4DF3B0)(this, angle);
}

// Converted from thiscall void CMatrix::SetRotateY(float angle) 0x4DF450
void CMatrix::SetRotateY(float angle) {
    ((void(__thiscall *)(CMatrix*, float))0x4DF450)(this, angle);
}

// Converted from thiscall void CMatrix::SetRotateX(float angle) 0x4DF4F0
void CMatrix::SetRotateX(float angle) {
    ((void(__thiscall *)(CMatrix*, float))0x4DF4F0)(this, angle);
}

// Converted from thiscall void CMatrix::SetRotateZOnly(float angle) 0x4DF590
void CMatrix::SetRotateZOnly(float angle) {
    ((void(__thiscall *)(CMatrix*, float))0x4DF590)(this, angle);
}

// Converted from thiscall void CMatrix::SetRotateXOnly(float angle) 0x4DF620
void CMatrix::SetRotateXOnly(float angle) {
    ((void(__thiscall *)(CMatrix*, float))0x4DF620)(this, angle);
}

// Converted from thiscall void CMatrix::SetTranslateOnly(float x,float y,float z) 0x4DF6B0
void CMatrix::SetTranslateOnly(float x, float y, float z) {
    ((void(__thiscall *)(CMatrix*, float, float, float))0x4DF6B0)(this, x, y, z);
}

// Converted from thiscall void CMatrix::SetTranslate(float x,float y,float z) 0x4DF6D0
void CMatrix::SetTranslate(float x, float y, float z) {
    ((void(__thiscall *)(CMatrix*, float, float, float))0x4DF6D0)(this, x, y, z);
}

// Converted from thiscall void CMatrix::SetScale(float factor) 0x4DF730
void CMatrix::SetScale(float factor) {
    ((void(__thiscall *)(CMatrix*, float))0x4DF730)(this, factor);
}

// Converted from thiscall void CMatrix::ResetOrientation(void) 0x4DF780
void CMatrix::ResetOrientation() {
    ((void(__thiscall *)(CMatrix*))0x4DF780)(this);
}

// Converted from thiscall void CMatrix::SetUnity(void) 0x4DF7C0
void CMatrix::SetUnity() {
    ((void(__thiscall *)(CMatrix*))0x4DF7C0)(this);
}

// Converted from thiscall void CMatrix::operator+=(CMatrix const&right) 0x4DF820
void CMatrix::operator+=(CMatrix const& _right) {
    ((void(__thiscall *)(CMatrix*, CMatrix const&))0x4DF820)(this, _right);
}

// Converted from thiscall void CMatrix::CopyOnlyMatrix(CMatrix const&src) 0x4DF8A0
void CMatrix::CopyOnlyMatrix(CMatrix const& src) {
    ((void(__thiscall *)(CMatrix*, CMatrix const&))0x4DF8A0)(this, src);
}

// Converted from thiscall void CMatrix::operator=(CMatrix const&right) 0x4DF8C0
void CMatrix::operator=(CMatrix const& _right) {
    ((void(__thiscall *)(CMatrix*, CMatrix const&))0x4DF8C0)(this, _right);
}

// Converted from thiscall void CMatrix::UpdateRW(void) 0x4DF8F0
void CMatrix::UpdateRW() {
    ((void(__thiscall *)(CMatrix*))0x4DF8F0)(this);
}

// Converted from thiscall void CMatrix::Update(void) 0x4DF970
void CMatrix::Update() {
    ((void(__thiscall *)(CMatrix*))0x4DF970)(this);
}

// Converted from thiscall void CMatrix::Detach(void) 0x4DF9E0
void CMatrix::Detach() {
    ((void(__thiscall *)(CMatrix*))0x4DF9E0)(this);
}

// Converted from thiscall void CMatrix::AttachRW(RwMatrixTag *rwMatrix,bool deleteOnDetach) 0x4DFA00
void CMatrix::AttachRW(RwMatrixTag* rwMatrix, bool deleteOnDetach) {
    ((void(__thiscall *)(CMatrix*, RwMatrixTag*, bool))0x4DFA00)(this, rwMatrix, deleteOnDetach);
}

// Converted from thiscall void CMatrix::Attach(RwMatrixTag *rwMatrix,bool deleteOnDetach) 0x4DFA40
void CMatrix::Attach(RwMatrixTag* rwMatrix, bool deleteOnDetach) {
    ((void(__thiscall *)(CMatrix*, RwMatrixTag*, bool))0x4DFA40)(this, rwMatrix, deleteOnDetach);
}

// Converted from thiscall void CMatrix::~CMatrix() 0x4DFAE0
CMatrix::~CMatrix() {
    ((void(__thiscall *)(CMatrix*))0x4DFAE0)(this);
}

// Converted from thiscall void CMatrix::CMatrix(RwMatrixTag *rwMatrix,bool deleteOnDetach) 0x4DFB00
CMatrix::CMatrix(RwMatrixTag* rwMatrix, bool deleteOnDetach) {
    ((void(__thiscall *)(CMatrix*, RwMatrixTag*, bool))0x4DFB00)(this, rwMatrix, deleteOnDetach);
}

// Converted from thiscall void CMatrix::CMatrix(CMatrix const&src) 0x4DFBA0
CMatrix::CMatrix(CMatrix const& src) {
    ((void(__thiscall *)(CMatrix*, CMatrix const&))0x4DFBA0)(this, src);
}

// Converted from cdecl CVector operator*(CMatrix const&m,CVector const&v) 0x4DFF20
CVector operator*(CMatrix const& m, CVector const& v) {
    CVector result;
    ((void(__cdecl *)(CVector*, CMatrix const&, CVector const&))0x4DFF20)(&result, m, v);
    return result;
}

// Converted from cdecl CVector Multiply3x3(CVector const&v,CMatrix const&m) 0x4DFFB0
CVector Multiply3x3(CVector const& v, CMatrix const& m) {
    CVector result;
    ((void(__cdecl *)(CVector*, CVector const&, CMatrix const&))0x4DFFB0)(&result, v, m);
    return result;
}

// Converted from cdecl CVector Multiply3x3(CMatrix const&m,CVector const&v) 0x4E0030
CVector Multiply3x3(CMatrix const& m, CVector const& v) {
    CVector result;
    ((void(__cdecl *)(CVector*, CMatrix const&, CVector const&))0x4E0030)(&result, m, v);
    return result;
}

void CMatrix::SetRotateYOnly(float angle) {
    float a_cos = cosf(angle);
    float a_sin = sinf(angle);
    right.y = 0.0f;
    up.x = 0.0f;
    up.y = 1.0f;
    up.z = 0.0f;
    at.y = 0.0f;
    right.x = a_cos;
    right.z = -a_sin;
    at.x = a_sin;
    at.z = a_cos;
}