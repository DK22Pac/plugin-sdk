/*
    Plugin-SDK source file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/

#include "CVector.h"

#ifdef HAS_CMATRIX
#include <CMatrix.h>

// assignments

void CVector::FromMultiply(CMatrix const& matrix, CVector const& point) {
    FromMultiply3x3(matrix, point);
    *this += matrix.pos;
}

void CVector::FromMultiply3x3(const CMatrix& matrix, const CVector& vector) {
    Set(
        matrix.right.x * vector.x + matrix.up.x * vector.y + matrix.at.x * vector.z,
        matrix.right.y * vector.x + matrix.up.y * vector.y + matrix.at.y * vector.z,
        matrix.right.z * vector.x + matrix.up.z * vector.y + matrix.at.z * vector.z
    );
}

// static functions

CVector CVector::Multiply(const CMatrix& matrix, const CVector& point) {
    CVector result;
    result.FromMultiply(matrix, point);
    return result;
}

CVector CVector::Multiply3x3(const CMatrix& matrix, const CVector& vector) {
    CVector result;
    result.FromMultiply3x3(matrix, vector);
    return result;
}
#endif
