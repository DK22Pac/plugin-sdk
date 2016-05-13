#pragma once
#include "plbase/PluginBase.h"
#include "CVector.h"

// To help in compilation performance, RwMatrixTag (that is an alias to RwMatrix) won't be included
// Neither RwV3d
struct RwMatrix;
struct RwV3d;


#pragma pack(push, 1)
class PLUGIN_API CQuaternion
{
public:
    CVector imag;
    float real;
    
	// Quat to matrix
	void Get(struct RwMatrix* out);

	// Quat to euler angles
	void Get(float *x, float *y, float *z);

	// Quat to axis & angle
	void Get(struct RwV3d *axis, float *angle);

	// Stores result of quat multiplication
	void Multiply(CQuaternion const& a, CQuaternion const& b);

	// Spherical linear interpolation
	void Slerp(CQuaternion const& from, CQuaternion const& to, float halftheta, float sintheta_inv, float t);

	// Quat from matrix
	void Set(RwMatrix  const& m);

	// Quat from euler angles
	void Set(float x, float y, float z);

	// Quat from axis & angle
	void Set(struct RwV3d *axis, float angle);

	// Spherical linear interpolation
	void Slerp(CQuaternion const& from, CQuaternion const& to, float t);

	// Conjugate of a quat
	void Conjugate();

	// Squared length of a quat
	float GetLengthSquared(void);

	// Add right to the quat
	void operator+=(CQuaternion const& right);

	// Substract right from the quat
	void operator-=(CQuaternion const& right);

	// Assigns value from other quat
	void operator=(CQuaternion const& right);

	// Multiplies quat by a floating point value
	void operator*=(float multiplier);

	// Multiplies quat by a floating point value
	void Scale(float multiplier);

	// Copies value from other quat
	void Copy(CQuaternion const& from);

	// Gets a dot product for quats
	void Dot(CQuaternion const& a);

	// Normalises a quat
	void Normalise();
};
#pragma pack(pop)