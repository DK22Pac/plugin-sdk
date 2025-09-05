/*
    Plugin-SDK (Grand Theft Auto San Andreas) source file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/
#include "CVector.h"

CVector::CVector(float X, float Y, float Z)
{
	((void(__thiscall *)(CVector *, float, float, float))0x420B10)(this, X, Y, Z);
}

CVector::CVector(const CVector2D& vec2d, float zValue) {
	From2D(vec2d, zValue);
}

CVector2D CVector::To2D() const {
	return CVector2D(x, y);
}

void CVector::From2D(const CVector2D& vec2d, float zValue) {
	x = vec2d.x;
	y = vec2d.y;
	z = zValue;
}

// Returns length of vector
float CVector::Magnitude()
{
	return ((float (__thiscall*)(CVector*)) 0x4082C0)(this);
}

float CVector::Magnitude2D()
{
	return ((float (__thiscall *)(CVector *))0x406D50)(this);
}

// Normalises a vector
void CVector::Normalise()
{
	((void (__thiscall*)(CVector*)) 0x59C910)(this);
}

// Normalises a vector and returns length
float CVector::NormaliseAndMag()
{
	return ( (float (__thiscall*)(CVector*)) 0x59C970)(this);
}

// Performs cross calculation
void CVector::Cross(const CVector& left, const CVector &right)
{
	((void (__thiscall*)(CVector*, const CVector& left, const CVector &right)) 0x70F890)(this, left, right);
}

// Adds left + right and stores result
void CVector::Sum(const CVector& left, const CVector &right)
{
	( (void (__thiscall*)(CVector*, const CVector& left, const CVector &right)) 0x40FDD0)(this, left, right);
}

// Subtracts left - right and stores result
void CVector::Difference(const CVector& left, const CVector &right)
{
	((void (__thiscall*)(CVector*, const CVector& left, const CVector &right)) 0x40FE00)(this, left, right);
}

// Assigns value from other vector
void CVector::operator= (const CVector& right)
{
	((void (__thiscall*)(CVector*, const CVector &right)) 0x411B50)(this, right);
}

// Adds value from the second vector.
void CVector::operator+=(const CVector& right)
{
	((void (__thiscall*)(CVector*, const CVector &right)) 0x411A00)(this, right);
}

void CVector::operator-=(const CVector& right)
{
	((void (__thiscall *)(CVector *, const CVector& right))0x406D70)(this, right);
}

// Multiplies vector by a floating point value
void CVector::operator *= (float multiplier)
{
	((void (__thiscall*)(CVector*, float multiplier)) 0x40FEF0)(this, multiplier);
}

// Divides vector by a floating point value
void CVector::operator /= (float divisor)
{
	((void (__thiscall*)(CVector*, float divisor)) 0x0411A30)(this, divisor);
}

void CVector::FromMultiply(CMatrix  const& matrix, CVector const& vector)
{
	((void (__thiscall *)(CVector *, CMatrix  const&, CVector const&))0x59C670)(this, matrix, vector);
}

void CVector::FromMultiply3x3(CMatrix  const& matrix, CVector const& vector)
{
	((void (__thiscall *)(CVector *, CMatrix  const&, CVector const&))0x59C6D0)(this, matrix, vector);
}