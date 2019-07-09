/*
    Plugin-SDK (Grand Theft Auto 3) header file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/
#pragma once

#include "PluginBase.h"
#include "CVector.h"
#include "CompressedVector.h"
#include "CColTriangle.h"

class PLUGIN_API CColTrianglePlane {
public:
    CVector m_vecNormal;
    float m_fDistance;
    unsigned char m_nOrientation;
private:
    char _pad11[3];
public:

    SUPPORTED_10EN_11EN_STEAM void GetNormal(CVector &point);
    SUPPORTED_10EN_11EN_STEAM void Set(CompressedVector const *verts, CColTriangle &tri);
};

VALIDATE_SIZE(CColTrianglePlane, 0x14);

#include "meta/meta.CColTrianglePlane.h"
