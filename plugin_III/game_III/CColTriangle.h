/*
    Plugin-SDK (Grand Theft Auto 3) header file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/
#pragma once

#include "PluginBase.h"
#include "CompressedVector.h"

class PLUGIN_API CColTriangle {
public:
    unsigned short m_nVertA; //!< "vertex index in vertices array"
    unsigned short m_nVertB;
    unsigned short m_nVertC;
    unsigned char m_nMaterial;
    unsigned char m_nLight;

    SUPPORTED_10EN_11EN_STEAM void Set(CompressedVector const *verts, int vertA, int vertB, int vertC, unsigned char material, unsigned char flag);
};

VALIDATE_SIZE(CColTriangle, 0x8);

#include "meta/meta.CColTriangle.h"
