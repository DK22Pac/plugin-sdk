/*
Plugin-SDK (Grand Theft Auto) header file
Authors: GTA Community. See more here
https://github.com/DK22Pac/plugin-sdk
Do not delete this comment block. Respect others' work!
*/
#pragma once

#include "plbase\PluginBase_III.h"
#include "CColBox.h"
#include "CColSphere.h"

class CColModel {
public:
    
    CColModel();
    void CalculateTrianglePlanes();
    int GetLinkPtr();
    int GetTrianglePoint(CVector& arg0, int arg1);
    void RemoveCollisionVolumes();
    void RemoveTrianglePlanes();
    void operator=(CColModel const& arg0);
    ~CColModel();
    //void SetLinkPtr(CLink<CColModel* >);
};

