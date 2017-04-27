/*
Plugin-SDK (Grand Theft Auto) header file
Authors: GTA Community. See more here
https://github.com/DK22Pac/plugin-sdk
Do not delete this comment block. Respect others' work!
*/
#pragma once
#include "plbase/PluginBase_VC.h"
#include "RenderWare.h"
#include "CVector.h"

class CQuaternion {
public:
    CVector imag;
    float real;

    //funcs

    // Multiplies quat by a floating point value
    void operator*=(float multiplier);
    // Add right to the quat
    void operator+=(CQuaternion const& right);
    // Substract right from the quat
    void operator-=(CQuaternion const& right);
    // Assigns value from other quat
    void operator=(CQuaternion const& right);
    // Normalises a quat
    void Normalise();
    // Conjugate of a quat
    void Conjugate();
    // Quat to matrix
    void Get(RwMatrixTag* out);
    // Quat to axis & angle
    void Get(RwV3d *axis, float *angle);
    // Quat from matrix
    void Set(RwMatrix  const& m);
    // Stores result of quat multiplication
    void Multiply(CQuaternion const& a, CQuaternion const& b);
    // Quat from axis & angle
    void Set(RwV3d* axis, float angle);
    // Spherical linear interpolation
    void Slerp(CQuaternion const& from, CQuaternion const& to, float halftheta, float sintheta_inv, float t);
};

VALIDATE_SIZE(CQuaternion, 0x10);

void QuatTest() {
    RwFrame *stwhframe;
    float steerangle = 0.0f;

    CQuaternion wheelquat;
    wheelquat.Set(stwhframe->modelling);
    CQuaternion rotation;
    RwV3d axis{ 0.0f,1.0f,0.0f };
    rotation.Set(&axis, steerangle);
    CQuaternion result;
    result.Multiply(wheelquat, rotation);
    result.Get(&stwhframe->modelling);
}