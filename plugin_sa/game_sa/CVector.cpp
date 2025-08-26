/*
    Plugin-SDK (Grand Theft Auto San Andreas) source file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/
#include "CVector.h"
#include <CVector2D.h>
#include <rw/rwcore.h>

CVector::CVector() {
	x = 0.0f;
	y = 0.0f;
	z = 0.0f;
}

CVector::CVector(float X, float Y, float Z)
{
	((void(__thiscall *)(CVector *, float, float, float))0x420B10)(this, X, Y, Z);
}

CVector::CVector(const CVector& src) {
	x = src.x;
	y = src.y;
	z = src.z;
}

CVector::CVector(const RwV3d& right) {
    FromRwV3d(right);
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

void CVector::operator= (const CVector& right)
{
	((void (__thiscall*)(CVector*, const CVector &right)) 0x411B50)(this, right);
}

bool CVector::operator==(const CVector& other) {
    return x == other.x && y == other.y && z == other.z;
}

bool CVector::operator!=(const CVector& other) {
    return x != other.x || y != other.y || z != other.z;
}

void CVector::operator+=(const CVector& right)
{
	((void (__thiscall*)(CVector*, const CVector &right)) 0x411A00)(this, right);
}

void CVector::operator-=(const CVector& right)
{
	((void (__thiscall *)(CVector *, const CVector& right))0x406D70)(this, right);
}

void CVector::operator *= (float multiplier)
{
	((void (__thiscall*)(CVector*, float multiplier)) 0x40FEF0)(this, multiplier);
}

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

float CVector::MagnitudeSqr() const {
    return x * x + y * y + z * z;
}

float CVector::MagnitudeSqr2D() const {
    return x * x + y * y;
}

void CVector::Set(float X, float Y, float Z) {
    x = X;
    y = Y;
    z = Z;
}

RwV3d CVector::ToRwV3d() const {
    return { x, y, z };
}

void CVector::FromRwV3d(const RwV3d& rwvec) {
    x = rwvec.x;
    y = rwvec.y;
    z = rwvec.z;
}

float CVector::Dot(const CVector& other) const {
    return x * other.x + y * other.y + z * other.z;
}

CVector CVector::Cross(const CVector& other) const {
    return CVector(
        y * other.z - z * other.y,
        z * other.x - x * other.z,
        x * other.y - y * other.x
    );
}

bool CVector::IsZero() const {
    return x == 0.0f && y == 0.0f && z == 0.0f;
}

bool CVector::IsNormalized() const {
    return std::fabs(MagnitudeSqr() - 1.0f) < 0.001f;
}

float CVector::Heading() {
    return std::atan2(-x, y);
}

// Global operators
CVector operator-(const CVector& vecOne, const CVector& vecTwo) {
    return CVector(vecOne.x - vecTwo.x, vecOne.y - vecTwo.y, vecOne.z - vecTwo.z);
}

CVector operator+(const CVector& vecOne, const CVector& vecTwo) {
    return CVector(vecOne.x + vecTwo.x, vecOne.y + vecTwo.y, vecOne.z + vecTwo.z);
}

CVector operator*(const CVector& vec, float multiplier) {
    return CVector(vec.x * multiplier, vec.y * multiplier, vec.z * multiplier);
}

CVector operator*(float multiplier, const CVector& vec) {
    return CVector(vec.x * multiplier, vec.y * multiplier, vec.z * multiplier);
}

float DistanceBetweenPoints(const CVector& pointOne, const CVector& pointTwo) {
    CVector diff = pointTwo - pointOne;
    return diff.Magnitude();
}