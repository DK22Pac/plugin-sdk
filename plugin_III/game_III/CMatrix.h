/*
    Plugin-SDK (Grand Theft Auto 3) header file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/
#pragma once

#include "PluginBase.h"
#include "CVector.h"
#include "RenderWare.h"

class PLUGIN_API CMatrix {
public:
    CVector right;
    unsigned int flags;
    CVector up;
    unsigned int pad1;
    CVector at;
    unsigned int pad2;
    CVector pos;
    unsigned int pad3;
    RwMatrix *m_pAttachMatrix;
    bool m_bOwnsAttachedMatrix; //!< do we need to delete attaching matrix at detaching

    SUPPORTED_10EN_11EN_STEAM CMatrix();

    SUPPORTED_10EN_11EN_STEAM CMatrix(RwMatrix *rwMatrix, bool deleteOnDetach);

    SUPPORTED_10EN_11EN_STEAM CMatrix(CMatrix const &matrix);

    SUPPORTED_10EN_11EN_STEAM ~CMatrix();

    SUPPORTED_10EN_11EN_STEAM void operator+=(CMatrix const &right);
    SUPPORTED_10EN_11EN_STEAM void operator=(CMatrix const &right);

    SUPPORTED_10EN_11EN_STEAM void Attach(RwMatrix *rwMatrix, bool deleteOnDetach);
    SUPPORTED_10EN_11EN_STEAM void AttachRW(RwMatrix *rwMatrix, bool deleteOnDetach);
    SUPPORTED_10EN_11EN_STEAM void CopyOnlyMatrix(CMatrix const &matrix);
    SUPPORTED_10EN_11EN_STEAM void Detach();
    SUPPORTED_10EN_11EN_STEAM void Reorthogonalise();
    SUPPORTED_10EN_11EN_STEAM void ResetOrientation();
    SUPPORTED_10EN_11EN_STEAM void Rotate(float x, float y, float z);
    SUPPORTED_10EN_11EN_STEAM void RotateX(float angle);
    SUPPORTED_10EN_11EN_STEAM void RotateZ(float angle);
    SUPPORTED_10EN_11EN_STEAM void SetRotate(float x, float y, float z);
    SUPPORTED_10EN_11EN_STEAM void SetRotateX(float angle);
    SUPPORTED_10EN_11EN_STEAM void SetRotateXOnly(float angle);
    SUPPORTED_10EN_11EN_STEAM void SetRotateY(float angle);
    SUPPORTED_10EN_11EN_STEAM void SetRotateYOnly(float angle);
    SUPPORTED_10EN_11EN_STEAM void SetRotateZ(float angle);
    SUPPORTED_10EN_11EN_STEAM void SetRotateZOnly(float angle);
    SUPPORTED_10EN_11EN_STEAM void SetScale(float factor);
    SUPPORTED_10EN_11EN_STEAM void SetTranslate(float x, float y, float z);
    SUPPORTED_10EN_11EN_STEAM void SetTranslate(CVector *pos);
    SUPPORTED_10EN_11EN_STEAM void SetTranslateOnly(float x, float y, float z);
    SUPPORTED_10EN_11EN_STEAM void SetUnity();
    SUPPORTED_10EN_11EN_STEAM void Update();
    SUPPORTED_10EN_11EN_STEAM void UpdateRW();
};

VALIDATE_SIZE(CMatrix, 0x48);

inline CVector operator*(const CMatrix &mat, const CVector &vec) {
    return CVector(mat.right.x * vec.x + mat.up.x * vec.y + mat.at.x * vec.z + mat.pos.x,
        mat.right.y * vec.x + mat.up.y * vec.y + mat.at.y * vec.z + mat.pos.y,
        mat.right.z * vec.x + mat.up.z * vec.y + mat.at.z * vec.z + mat.pos.z);
};

inline CMatrix operator*(const CMatrix &m1, const CMatrix &m2) {
    CMatrix out;
    out.right.x = m1.right.x * m2.right.x + m1.up.x * m2.right.y + m1.at.x * m2.right.z;
    out.right.y = m1.right.y * m2.right.x + m1.up.y * m2.right.y + m1.at.y * m2.right.z;
    out.right.z = m1.right.z * m2.right.x + m1.up.z * m2.right.y + m1.at.z * m2.right.z;
    out.up.x = m1.right.x * m2.up.x + m1.up.x * m2.up.y + m1.at.x * m2.up.z;
    out.up.y = m1.right.y * m2.up.x + m1.up.y * m2.up.y + m1.at.y * m2.up.z;
    out.up.z = m1.right.z * m2.up.x + m1.up.z * m2.up.y + m1.at.z * m2.up.z;
    out.at.x = m1.right.x * m2.at.x + m1.up.x * m2.at.y + m1.at.x * m2.at.z;
    out.at.y = m1.right.y * m2.at.x + m1.up.y * m2.at.y + m1.at.y * m2.at.z;
    out.at.z = m1.right.z * m2.at.x + m1.up.z * m2.at.y + m1.at.z * m2.at.z;
    out.pos.x = m1.right.x * m2.pos.x + m1.up.x * m2.pos.y + m1.at.x * m2.pos.z + m1.pos.x;
    out.pos.y = m1.right.y * m2.pos.x + m1.up.y * m2.pos.y + m1.at.y * m2.pos.z + m1.pos.y;
    out.pos.z = m1.right.z * m2.pos.x + m1.up.z * m2.pos.y + m1.at.z * m2.pos.z + m1.pos.z;
    return out;
};

inline CVector Multiply3x3(const CMatrix &mat, const CVector &vec) {
    return CVector(mat.right.x * vec.x + mat.up.x * vec.y + mat.at.x * vec.z,
        mat.right.y * vec.x + mat.up.y * vec.y + mat.at.y * vec.z,
        mat.right.z * vec.x + mat.up.z * vec.y + mat.at.z * vec.z);
};

inline CVector Multiply3x3(const CVector &vec, const CMatrix &mat) {
    return CVector(mat.right.x * vec.x + mat.right.y * vec.y + mat.right.z * vec.z,
        mat.up.x * vec.x + mat.up.y * vec.y + mat.up.z * vec.z,
        mat.at.x * vec.x + mat.at.y * vec.y + mat.at.z * vec.z);
};

inline CMatrix& Invert(const CMatrix &src, CMatrix &dst) {
    dst.pos.x = dst.pos.y = dst.pos.z = 0.0f;
    dst.pad3 = src.pad3;
    dst.right.x = src.right.x;
    dst.right.y = src.up.x;
    dst.right.z = src.at.x;
    *(float *)dst.flags = src.pos.x;
    dst.up.x = src.right.y;
    dst.up.y = src.up.y;
    dst.up.z = src.at.y;
    *(float *)dst.pad1 = src.pos.y;
    dst.at.x = src.right.z;
    dst.at.y = src.up.z;
    dst.at.z = src.at.z;
    *(float *)dst.pad2 = src.pos.z;
    dst.pos.x += dst.right.x * src.pos.x;
    dst.pos.y += dst.right.y * src.pos.x;
    dst.pos.z += dst.right.z * src.pos.x;
    *(float *)dst.pad3 += *(float *)dst.flags * src.pos.x;
    dst.pos.x += dst.up.x * src.pos.y;
    dst.pos.y += dst.up.y * src.pos.y;
    dst.pos.z += dst.up.z * src.pos.y;
    *(float *)dst.pad3 += *(float *)dst.pad1 * src.pos.y;
    dst.pos.x += dst.at.x * src.pos.z;
    dst.pos.y += dst.at.y * src.pos.z;
    dst.pos.z += dst.at.z * src.pos.z;
    *(float *)dst.pad3 += *(float *)dst.pad2 * src.pos.z;
    dst.pos.x = -dst.pos.x;
    dst.pos.y = -dst.pos.y;
    dst.pos.z = -dst.pos.z;
    dst.pad3 = src.pad3 - dst.pad3;

    return dst;
};

inline CMatrix Invert(const CMatrix &matrix) {
    CMatrix inv;
    return Invert(matrix, inv);
};

#include "meta/meta.CMatrix.h"
