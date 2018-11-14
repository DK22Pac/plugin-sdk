/*
    Plugin-SDK (Grand Theft Auto) SHARED header file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/
#pragma once

#include "PluginBase.h"

class CVector;
struct RwV3d;
class CompressedVector2D;

class PLUGIN_API CompressedVector {
public:
    short x;
    short y;
    short z;

    CompressedVector();
    CompressedVector(short X, short Y, short Z);
    CompressedVector(CompressedVector const &rhs);
    CompressedVector(CompressedVector2D const &rhs);
    CompressedVector(CVector const &rhs);
    CompressedVector(RwV3d const &rhs);

    void Set(short X, short Y, short Z);
    void Set(CompressedVector const &rhs);
    void Set(CompressedVector2D const &rhs);
    void Set(CVector const &rhs);
    void Set(RwV3d const &rhs);

    CVector Uncompressed() const;
    RwV3d ToRwV3d() const;
    CompressedVector2D To2D() const;

    void Uncompress(CVector &out) const;

    bool operator==(CompressedVector const &rhs) const;
    bool operator!=(CompressedVector const &rhs) const;
};

VALIDATE_SIZE(CompressedVector, 0x6);
