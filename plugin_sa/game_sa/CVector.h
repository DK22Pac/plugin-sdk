/*
    Plugin-SDK (Grand Theft Auto) header file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/
#pragma once
#include "plbase/PluginBase_SA.h"

class PLUGIN_API CVector
{
public:
    float x, y, z;
    
	CVector();
	CVector(float x, float y, float z);

	// Returns length of vector
	float Magnitude();

	// Returns length of 2d vector
	float Magnitude2D();

	// Normalises a vector
	void Normalise();

	// Normalises a vector and returns length
	float NormaliseAndMag();

	// Performs cross calculation
	void Cross(const CVector& left, const CVector &right);

	// Adds left + right and stores result
	void Sum(const CVector& left, const CVector &right);

	// Subtracts left - right and stores result
	void Difference(const CVector& left, const CVector &right);

	void operator=(const CVector& right);
	void operator+=(const CVector& right);
	void operator-=(const CVector& right);
	void operator *= (float multiplier);
	void operator /= (float divisor);

	// matrix * vector multiplication
	void FromMultiply(class CMatrix  const& matrix, CVector const& vector);
	void FromMultiply3x3(class CMatrix  const& matrix, CVector const& vector);
};

inline CVector operator-(const CVector& vecOne, const CVector& vecTwo) {
    return CVector(vecOne.x - vecTwo.x, vecOne.y - vecTwo.y, vecOne.z - vecTwo.z);
}

inline float DistanceBetweenPoints(const CVector &pointOne, const CVector &pointTwo) {
    CVector diff = pointTwo - pointOne;
    return diff.Magnitude();
}