/*
    Plugin-SDK (Grand Theft Auto 3) header file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/
#pragma once

#include "PluginBase.h"
#include "CVector.h"
#include "RenderWare.h"

class PLUGIN_API CQuaternion {
public:
    CVector imag;
    float real;

    SUPPORTED_10EN_11EN_STEAM void Get(RwMatrix *matrix);
    //! Spherical linear interpolation
    SUPPORTED_10EN_11EN_STEAM void Slerp(CQuaternion const &from, CQuaternion const &to, float halftheta, float sintheta_inv, float t);
};

VALIDATE_SIZE(CQuaternion, 0x10);

#include "meta/meta.CQuaternion.h"
