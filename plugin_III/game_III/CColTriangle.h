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

class CColTriangle {
public:
    unsigned short m_nVertA; // vertex index in vertices array
    unsigned short m_nVertB; // vertex index in vertices array
    unsigned short m_nVertC; // vertex index in vertices array
    unsigned char m_nMaterial;
    unsigned char m_nLight;

    void Set(CompressedVector const* arg0, int arg1, int arg2, int arg3, unsigned char arg4, unsigned char arg5);
};

VALIDATE_SIZE(CColTriangle, 0x8);