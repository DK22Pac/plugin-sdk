/*
    Plugin-SDK (Grand Theft Auto Vice City) source file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/
#include "CQuaternion.h"

// Converted from thiscall void CQuaternion::Get(RwMatrixTag *) 0x4DFD30
void CQuaternion::Get(RwMatrixTag* out) {
    plugin::CallMethod<0x4DFD30, CQuaternion *, RwMatrixTag*>(this, out);
}

// Converted from thiscall void CQuaternion::Set(RwV3d *axis, float angle) 0x4DFE20
void CQuaternion::Set(RwV3d* axis, float angle) {
    plugin::CallMethod<0x4DFE20, CQuaternion *, RwV3d*, float>(this, axis, angle);
}

// Converted from thiscall void CQuaternion::Slerp(CQuaternion const& from,CQuaternion const& to, float halftheta, float sintheta_inv, float t) 0x4DFBE0
void CQuaternion::Slerp(CQuaternion const& from, CQuaternion const& to, float halftheta, float sintheta_inv, float t) {
    plugin::CallMethod<0x4DFBE0, CQuaternion *, CQuaternion const&, CQuaternion const&, float, float, float>(this, from, to, halftheta, sintheta_inv, t);
}

void CQuaternion::operator*=(float multiplier) {
    imag.x *= multiplier;
    imag.y *= multiplier;
    imag.z *= multiplier;
    real *= multiplier;
}

void CQuaternion::operator+=(CQuaternion const& right) {
    imag.x += right.imag.x;
    imag.y += right.imag.y;
    imag.z += right.imag.z;
    real += right.real;
}

void CQuaternion::operator-=(CQuaternion const& right) {
    imag.x -= right.imag.x;
    imag.y -= right.imag.y;
    imag.z -= right.imag.z;
    real -= right.real;
}

void CQuaternion::operator=(CQuaternion const& right) {
    imag.x = right.imag.x;
    imag.y = right.imag.y;
    imag.z = right.imag.z;
    real = right.real;
}

void CQuaternion::Normalise() {
    float d = imag.x * imag.x + imag.y * imag.y + imag.z * imag.z + real * real;
    if (d == 0.0f)
        real = 1.0f;
    else {
        float r = 1.0f / sqrtf(d);
        imag.x *= r;
        imag.y *= r;
        imag.z *= r;
        real *= r;
    }
}

void CQuaternion::Conjugate() {
    imag.x = -imag.x;
    imag.y = -imag.y;
    imag.z = -imag.z;
}

void CQuaternion::Get(RwV3d *axis, float *angle) {
    float a = acosf(real + real);
    *angle = a;
    float r = 1.0f / sinf(a);
    axis->x = r * imag.x;
    axis->y = r * imag.y;
    axis->z = r * imag.z;
}

void CQuaternion::Set(RwMatrix  const& m) {
    float a = m.up.y + m.right.x + m.at.z;
    if (a < 0.0f) {
        float b = m.right.x - m.up.y - m.at.z;
        if (b < 0.0f) {
            float c = m.up.y - m.right.x - m.at.z;
            if (c < 0.0f) {
                float d = sqrtf(m.at.z - (m.up.y + m.right.x) + 1.0f);
                imag.z = 0.5f * d;
                float e = 0.5f / d;
                real = (m.right.y - m.up.x) * e;
                imag.x = (m.at.x + m.right.z) * e;
                imag.y = (m.at.y + m.up.z) * e;
            }
            else {
                float f = sqrtf(c + 1.0f);
                imag.y = 0.5f * f;
                float g = 0.5f / f;
                real = (m.at.x - m.right.z) * g;
                imag.x = (m.up.x - m.right.y) * g;
                imag.z = (m.at.y + m.up.z) * g;
            }
        }
        else {
            float h = sqrtf(b + 1.0f);
            imag.x = 0.5f * h;
            float i = 0.5f / h;
            imag.y = (m.up.x + m.right.y) * i;
            imag.z = (m.at.x + m.right.z) * i;
            real = (m.up.z - m.at.y) * i;
        }
    }
    else {
        float j = sqrtf(a + 1.0f);
        real = 0.5f * j;
        float k = 0.5f / j;
        imag.x = (m.up.z - m.at.y) * k;
        imag.y = (m.at.x - m.right.z) * k;
        imag.z = (m.right.y - m.up.x) * k;
    }
}

void CQuaternion::Multiply(CQuaternion const& a, CQuaternion const& b) {
    imag.x = b.imag.z * a.imag.y - a.imag.z * b.imag.y;
    imag.y = imag.z * b.imag.x - imag.x * b.imag.z;
    imag.z = imag.x * b.imag.y - b.imag.x * imag.y;
    imag.x = b.real * imag.x + real * b.imag.x + imag.x;
    imag.y = real * b.imag.y + b.real * imag.y + imag.y;
    imag.z = imag.z * b.real + real * b.imag.z + imag.z;
    real = real * b.real - (imag.x * b.imag.x + imag.z * b.imag.z + a.imag.y * b.imag.y);
}