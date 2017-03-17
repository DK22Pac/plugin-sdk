/*
Plugin-SDK (Grand Theft Auto) header file
Authors: GTA Community. See more here
https://github.com/DK22Pac/plugin-sdk
Do not delete this comment block. Respect others' work!
*/
#pragma once

#include "plbase\PluginBase_III.h"
#include "CVector.h"

class CompressedVector;

class CColTriangle {
public:
   
    void Set(CompressedVector const* arg0, int arg1, int arg2, int arg3, unsigned char arg4, unsigned char arg5);
};


class CColTrianglePlane {
public:
    void Set(CompressedVector const* arg0, CColTriangle& arg1);
    void GetNormal(CVector& arg0);
};
