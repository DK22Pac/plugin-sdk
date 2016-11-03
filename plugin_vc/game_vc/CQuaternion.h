/*
Plugin-SDK (Grand Theft Auto) header file
Authors: GTA Community. See more here
https://github.com/DK22Pac/plugin-sdk
Do not delete this comment block. Respect others' work!
*/
#pragma once
#include "plbase/PluginBase_VC.h"
#include "RenderWare.h"
#include "CVector.h"


#pragma pack(push, 1)
class PLUGIN_API CQuaternion
{
public:
    CVector imag;
    float real;

    //funcs

    void Get(RwMatrixTag* arg0);
    // Quat from axis & angle
    void Set(RwV3d* axis, float angle);
    // Spherical linear interpolation
    void Slerp(CQuaternion const& from, CQuaternion const& to, float halftheta, float sintheta_inv, float t);
    
};
#pragma pack(pop)

VALIDATE_SIZE(CQuaternion, 0x10);