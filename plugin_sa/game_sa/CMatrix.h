/*
    Plugin-SDK (Grand Theft Auto San Andreas) header file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/
#pragma once
#include "PluginBase.h"
#include "RenderWare.h"
#include "CQuaternion.h"

class CMatrix {
public:
	enum class e_EulerAngleType : uint8_t {
		TaitBryan,     // three distinct axes (yaw/pitch/roll style)
		ProperEuler    // repeated axis (e.g. ZXZ, XYX)
	};

	struct t_EulerAngleConvertionFlags {
		uint8_t swapXAndZ: 1; // if set, treats the X axis as Yaw, Z-axis at Pitch
		uint8_t angleType: 1; // see e_EulerAngleType
		uint8_t isFlipped: 1;  // if set negate all three angles
		uint8_t primaryAxisIndex: 2; // index (0..3) into byte_866D9C[] that selects primary axis/order
		// NOTE: the game always uses 0x15 as the convertion flags
	};

	VALIDATE_SIZE(t_EulerAngleConvertionFlags, 1);

    // RwV3d-like:
    CVector      right;
    unsigned int flags;
    CVector      forward;
    unsigned int pad1;
    CVector      up;
    unsigned int pad2;
    CVector      pos;
    unsigned int pad3;
    
	RwMatrix *m_pAttachMatrix;
	bool m_bOwnsAttachedMatrix; // do we need to delete attaching matrix at detaching

    inline CMatrix() {
        m_pAttachMatrix = nullptr;
        m_bOwnsAttachedMatrix = false;
    }

    CMatrix(plugin::dummy_func_t) {}
	CMatrix(CMatrix const& matrix);
	CMatrix(RwMatrix *matrix, bool temporary); // like previous + attach
	~CMatrix(); // destructor detaches matrix if attached 
	void Attach(RwMatrix *matrix, bool temporary);
	void Detach();
	void CopyOnlyMatrix(CMatrix const& matrix); // copy base RwMatrix to another matrix
	void Update(); // update RwMatrix with attaching matrix. This doesn't check if attaching matrix is present, so use it only if you know it is present.
	               // Using UpdateRW() is more safe since it perform this check.
	void UpdateRW(); // update RwMatrix with attaching matrix.
	void UpdateRW(RwMatrix *matrix); // update RwMatrix with this matrix
	void SetUnity();
	void ResetOrientation();
	void SetScale(float scale); // set (scaled)
	void SetScale(CVector const &scale);
	void SetScale(float x, float y, float z); // set (scaled)
	void SetTranslateOnly(CVector const &pos);
	void SetTranslateOnly(float x, float y, float z);
	void SetTranslate(CVector const &pos);
	void SetTranslate(float x, float y, float z); // like previous + reset orientation
	void SetRotateXOnly(float pitch);
	void SetRotateYOnly(float roll);
	void SetRotateZOnly(float yaw);
	void SetRotateX(float pitch);
	void SetRotateY(float roll);
	void SetRotateZ(float yaw);
	void SetRotate(CVector const &rotation);
	void SetRotate(float pitch, float roll, float yaw); // sets the rotation on 3 axes + resets the position to origin(0, 0, 0)
	void RotateX(float pitch);
	void RotateY(float roll);
	void RotateZ(float yaw);
	void Rotate(CVector const &rotation);
	void Rotate(float pitch, float roll, float yaw); // rotate on 3 axes
	CVector ConvertToEulerAngles(t_EulerAngleConvertionFlags flags);
	void ConvertFromEulerAngles(CVector rotation, t_EulerAngleConvertionFlags flags);
	void ConvertFromEulerAngles(float x, float y, float z, t_EulerAngleConvertionFlags flags);
	void Translate(CVector const &offset);
	void Translate(float x, float y, float z); // move the position
	void Reorthogonalise();
	void CopyToRwMatrix(RwMatrix *matrix); // similar to UpdateRW(RwMatrixTag *)
	void SetRotate(CQuaternion  const& quat);
    void Scale(float scale);
    void Scale(float x, float y, float z);
	void operator=(CMatrix const& right);
	void operator+=(CMatrix const& right);
	void operator*=(CMatrix const& right);

	CVector& GetRight() { return right; }
	const CVector& GetRight() const { return right; }

	CVector& GetForward() { return forward; }
	const CVector& GetForward() const { return forward; }

	CVector& GetUp() { return up; }
	const CVector& GetUp() const { return up; }

	CVector& GetPosition() { return pos; }
	const CVector& GetPosition() const { return pos; }
};

VALIDATE_SIZE(CMatrix, 0x48);

CMatrix operator*(CMatrix const&a, CMatrix const&b);
CVector operator*(CMatrix const&a, CVector const&b);
CMatrix operator+(CMatrix const&a, CMatrix const&b);