/*
    Plugin-SDK (Grand Theft Auto San Andreas) source file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/
#include "CMatrix.h"

CMatrix::CMatrix(CMatrix const& matrix)
{
	((void (__thiscall *)(CMatrix *, CMatrix const&))0x59BCF0)(this, matrix);
}

// like previous + attach
CMatrix::CMatrix(RwMatrix *matrix, bool temporary)
{
	((void (__thiscall *)(CMatrix *, RwMatrix *, bool))0x59C050)(this, matrix, temporary);
}

// destructor detaches matrix if attached 
CMatrix::~CMatrix()
{
	((void (__thiscall *)(CMatrix *))0x59ACD0)(this);
}

void CMatrix::Attach(RwMatrix *matrix, bool temporary)
{
	((void (__thiscall *)(CMatrix *, RwMatrix *, bool))0x59BD10)(this, matrix, temporary);
}

void CMatrix::Detach()
{
	((void (__thiscall *)(CMatrix *))0x59ACF0)(this);
}

// copy base RwMatrix to another matrix
void CMatrix::CopyOnlyMatrix(CMatrix const& matrix)
{
	((void (__thiscall *)(CMatrix *, CMatrix const&))0x59ADD0)(this, matrix);
}

// update RwMatrix with attaching matrix. This doesn't check if attaching matrix is present, so use it only if you know it is present.
// Using UpdateRW() is more safe since it perform this check.
void CMatrix::Update()
{
	((void (__thiscall *)(CMatrix *))0x59BB60)(this);
}

// update RwMatrix with attaching matrix.
void CMatrix::UpdateRW()
{
	((void (__thiscall *)(CMatrix *))0x59BBB0)(this);
}

// update RwMatrix with this matrix
void CMatrix::UpdateRW(RwMatrix *matrix)
{
	((void (__thiscall *)(CMatrix *, RwMatrix *))0x59AD70)(this, matrix);
}

void CMatrix::SetUnity()
{
	((void (__thiscall *)(CMatrix *))0x59AE70)(this);
}

void CMatrix::ResetOrientation()
{
	((void (__thiscall *)(CMatrix *))0x59AEA0)(this);
}

void CMatrix::SetScale(float scale)
{
	((void (__thiscall *)(CMatrix *, float))0x59AED0)(this, scale);
}

void CMatrix::SetScale(CVector const &scale) {
	SetScale(pos.x, pos.y, pos.z);
}

// scale on three axes
void CMatrix::SetScale(float x, float y, float z)
{
	((void (__thiscall *)(CMatrix *, float, float, float))0x59AF00)(this, x, y, z);
}

void CMatrix::SetTranslateOnly(CVector const &pos) {
	SetTranslateOnly(pos.x, pos.y, pos.z);
}

void CMatrix::SetTranslateOnly(float x, float y, float z)
{
	((void (__thiscall *)(CMatrix *, float, float, float))0x59AF80)(this, x, y, z);
}

void CMatrix::SetTranslate(CVector const &pos) {
	SetTranslate(pos.x, pos.y, pos.z);
}

// like previous + reset orientation
void CMatrix::SetTranslate(float x, float y, float z)
{
	((void (__thiscall *)(CMatrix *, float, float, float))0x59AF40)(this, x, y, z);
}

void CMatrix::SetRotateXOnly(float pitch)
{
	((void (__thiscall *)(CMatrix *, float))0x59AFA0)(this, pitch);
}

void CMatrix::SetRotateYOnly(float roll)
{
	((void (__thiscall *)(CMatrix *, float))0x59AFE0)(this, roll);
}

void CMatrix::SetRotateZOnly(float yaw)
{
	((void (__thiscall *)(CMatrix *, float))0x59B020)(this, yaw);
}

void CMatrix::SetRotateX(float pitch)
{
	((void (__thiscall *)(CMatrix *, float))0x59B060)(this, pitch);
}

void CMatrix::SetRotateY(float roll)
{
	((void (__thiscall *)(CMatrix *, float))0x59B0A0)(this, roll);
}

void CMatrix::SetRotateZ(float yaw)
{
	((void (__thiscall *)(CMatrix *, float))0x59B0E0)(this, yaw);
}

void CMatrix::SetRotate(CVector const &rotation) {
	SetRotate(rotation.x, rotation.y, rotation.z);
}

// set rotate on 3 axes
void CMatrix::SetRotate(float roll, float pitch, float yaw)
{
	((void (__thiscall *)(CMatrix *, float, float, float))0x59B120)(this, roll, pitch, yaw);
}

void CMatrix::Translate(CVector const &offset) {
	pos += offset;
}

void CMatrix::Translate(float x, float y, float z)
{
	pos.x += x;
	pos.y += y;
	pos.z += z;
}

void CMatrix::RotateX(float angle)
{
	((void (__thiscall *)(CMatrix *, float))0x59B1E0)(this, angle);
}

void CMatrix::RotateY(float angle)
{
	((void (__thiscall *)(CMatrix *, float))0x59B2C0)(this, angle);
}

void CMatrix::RotateZ(float angle)
{
	((void (__thiscall *)(CMatrix *, float))0x59B390)(this, angle);
}

void CMatrix::Rotate(CVector const &rotation) {
	Rotate(rotation.x, rotation.y, rotation.z);
}

// rotate on 3 axes
void CMatrix::Rotate(float roll, float pitch, float yaw)
{
	((void (__thiscall *)(CMatrix *, float, float, float))0x59B460)(this, roll, pitch, yaw);
}

void CMatrix::Reorthogonalise()
{
	((void (__thiscall *)(CMatrix *))0x59B6A0)(this);
}

// similar to UpdateRW(RwMatrixTag *)
void CMatrix::CopyToRwMatrix(RwMatrix *matrix)
{
	((void (__thiscall *)(CMatrix *, RwMatrix *))0x59B8B0)(this, matrix);
}

void CMatrix::SetRotate(CQuaternion  const& quat)
{
	((void (__thiscall *)(CMatrix *, CQuaternion  const&))0x59BBF0)(this, quat);
}

void CMatrix::Scale(float scale) {
    plugin::CallMethod<0x459350, CMatrix *, float>(this, scale);
}

void CMatrix::Scale(float x, float y, float z) {
    plugin::CallMethod<0x459350, CMatrix *, float, float, float>(this, x, y, z);
}

CVector CMatrix::ConvertToEulerAngles(CMatrix::t_EulerAngleConvertionFlags flags) {
	CVector toRotation;
	((void(__thiscall*)(::CMatrix*, float*, float*, float*, t_EulerAngleConvertionFlags))0x59A840)
		(this, &toRotation.x, &toRotation.y, &toRotation.z, flags);
	return toRotation;
}

void CMatrix::ConvertFromEulerAngles(float x, float y, float z, CMatrix::t_EulerAngleConvertionFlags flags) {
	((void(__thiscall*)(::CMatrix*, float, float, float, t_EulerAngleConvertionFlags))0x59AA40)
		(this, x, y, z, flags);
}

void CMatrix::ConvertFromEulerAngles(CVector fromRotation, CMatrix::t_EulerAngleConvertionFlags flags) {
	ConvertFromEulerAngles(fromRotation.x, fromRotation.y, fromRotation.z, flags);
}

void CMatrix::operator=(CMatrix const& rvalue)
{
	((void (__thiscall *)(CMatrix *, CMatrix const&))0x59BBC0)(this, rvalue);
}

void CMatrix::operator+=(CMatrix const& rvalue)
{
	((void (__thiscall *)(CMatrix *, CMatrix const&))0x59ADF0)(this, rvalue);
}

void CMatrix::operator*=(CMatrix const& rvalue)
{
	((void (__thiscall *)(CMatrix *, CMatrix const&))0x411A80)(this, rvalue);
}

CMatrix operator*(CMatrix const&a, CMatrix const&b) {
    CMatrix result;
    ((void(__cdecl *)(CMatrix*, CMatrix const&, CMatrix const&))0x59BE30)(&result, a, b);
    return result;
}

CVector operator*(CMatrix const&a, CVector const&b) {
    CVector result;
    ((void(__cdecl *)(CVector*, CMatrix const&, CVector const&))0x59C890)(&result, a, b);
    return result;
}

CMatrix operator+(CMatrix const&a, CMatrix const&b) {
    CMatrix result;
    ((void(__cdecl *)(CMatrix*, CMatrix const&, CMatrix const&))0x59BFA0)(&result, a, b);
    return result;
}