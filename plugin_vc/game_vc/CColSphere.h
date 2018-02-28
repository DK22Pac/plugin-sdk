/*
Plugin-SDK (Grand Theft Auto Vice City) header file
Authors: GTA Community. See more here
https://github.com/DK22Pac/plugin-sdk
Do not delete this comment block. Respect others' work!
*/
#pragma once

#include "PluginBase.h"
#include "CSphere.h"

class CColSphere : public CSphere
{
public:
    
    bool IntersectRay(CVector const& rayStart, CVector const& rayEnd, CVector& intPoint1, CVector& intPoint2);
    void Set(float radius, CVector const& center, unsigned char material, unsigned char flags);
};