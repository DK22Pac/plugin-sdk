/*
    Plugin-SDK (Grand Theft Auto) SHARED header file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/
#pragma once

#include "PluginBase.h"

class CVector2D;
struct RwV2d;
class CompressedVector;

class PLUGIN_API CompressedVector2D {
public:
    short x;
    short y;

    CompressedVector2D();
    CompressedVector2D(short X, short Y);
    CompressedVector2D(CompressedVector2D const &rhs);
    CompressedVector2D(CompressedVector const &rhs);
    CompressedVector2D(CVector2D const &rhs);
    CompressedVector2D(RwV2d const &rhs);

    void Set(short X, short Y);
    void Set(CompressedVector2D const &rhs);
    void Set(CompressedVector const &rhs);
    void Set(CVector2D const &rhs);
    void Set(RwV2d const &rhs);

    CVector2D Uncompressed() const;
    RwV2d ToRwV2d() const;
    CompressedVector To3D() const;

    void Uncompress(CVector2D &out) const;

    bool operator==(CompressedVector2D const &rhs) const;
    bool operator!=(CompressedVector2D const &rhs) const;
};

VALIDATE_SIZE(CompressedVector2D, 0x4);
