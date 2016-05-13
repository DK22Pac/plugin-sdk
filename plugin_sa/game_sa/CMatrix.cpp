#include "CMatrix.h"

CMatrix::CMatrix()
{
	// dummy
}

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

// scale on three axes
void CMatrix::SetScale(float x, float y, float z)
{
	((void (__thiscall *)(CMatrix *, float, float, float))0x59AF00)(this, x, y, z);
}

void CMatrix::SetTranslateOnly(float x, float y, float z)
{
	((void (__thiscall *)(CMatrix *, float, float, float))0x59AF80)(this, x, y, z);
}

// like previous + reset orientation
void CMatrix::SetTranslate(float x, float y, float z)
{
	((void (__thiscall *)(CMatrix *, float, float, float))0x59AF40)(this, x, y, z);
}

void CMatrix::SetRotateXOnly(float angle)
{
	((void (__thiscall *)(CMatrix *, float))0x59AFA0)(this, angle);
}

void CMatrix::SetRotateYOnly(float angle)
{
	((void (__thiscall *)(CMatrix *, float))0x59AFE0)(this, angle);
}

void CMatrix::SetRotateZOnly(float angle)
{
	((void (__thiscall *)(CMatrix *, float))0x59B020)(this, angle);
}

void CMatrix::SetRotateX(float angle)
{
	((void (__thiscall *)(CMatrix *, float))0x59B060)(this, angle);
}

void CMatrix::SetRotateY(float angle)
{
	((void (__thiscall *)(CMatrix *, float))0x59B0A0)(this, angle);
}

void CMatrix::SetRotateZ(float angle)
{
	((void (__thiscall *)(CMatrix *, float))0x59B0E0)(this, angle);
}

// set rotate on 3 axes
void CMatrix::SetRotate(float x, float y, float z)
{
	((void (__thiscall *)(CMatrix *, float, float, float))0x59B120)(this, x, y, z);
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

// rotate on 3 axes
void CMatrix::Rotate(float x, float y, float z)
{
	((void (__thiscall *)(CMatrix *, float, float, float))0x59B460)(this, x, y, z);
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

void CMatrix::operator=(CMatrix const& right)
{
	((void (__thiscall *)(CMatrix *, CMatrix const&))0x59BBC0)(this, right);
}

void CMatrix::operator+=(CMatrix const& right)
{
	((void (__thiscall *)(CMatrix *, CMatrix const&))0x59ADF0)(this, right);
}

void CMatrix::operator*=(CMatrix const& right)
{
	((void (__thiscall *)(CMatrix *, CMatrix const&))0x411A80)(this, right);
}