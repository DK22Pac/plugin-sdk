/*
    Plugin-SDK (Grand Theft Auto) header file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/
#pragma once

#include "plbase/PluginBase_III.h"
#include "CVector.h"
#include "CompressedVector.h"
#include "CColTriangle.h"

class CColTrianglePlane {
public:
    CVector m_vecNormal;
    float m_fDistance;
    unsigned char m_nOrientation;
private:
    char _pad11[3];
public:

    void Set(CompressedVector const* arg0, CColTriangle& arg1);
    void GetNormal(CVector& arg0);
};

VALIDATE_SIZE(CColTrianglePlane, 0x14);