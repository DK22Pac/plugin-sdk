/*
Plugin-SDK (Grand Theft Auto 3) header file
Authors: GTA Community. See more here
https://github.com/DK22Pac/plugin-sdk
Do not delete this comment block. Respect others' work!
*/
#pragma once

#include "PluginBase.h"
#include "RenderWare.h"
#include "CVector.h"


#pragma pack(push, 1)
class CQuaternion {
public:
    CVector imag;
    float real;

    //funcs
    
    void Get(RwMatrixTag* arg0);
    // Spherical linear interpolation
    void Slerp(CQuaternion const& from, CQuaternion const& to, float halftheta, float sintheta_inv, float t);
    
};
#pragma pack(pop)

VALIDATE_SIZE(CQuaternion, 0x10);
