/*
Plugin-SDK (Grand Theft Auto) header file
Authors: GTA Community. See more here
https://github.com/DK22Pac/plugin-sdk
Do not delete this comment block. Respect others' work!
*/
#pragma once

#include "plbase\PluginBase_III.h"
#include "CVehicle.h"

enum ePlaneNodes {
    
};

class CPlane : public CVehicle {
protected:
    CPlane(plugin::dummy_func_t) : CVehicle(plugin::dummy) {}
public:
    
    //funcs

    CPlane(int modelIndex, unsigned char createdBy);
    static void CreateDropOffCesna();
    static void FindDropOffCesnaCoordinates();
    static void FindDrugPlaneCoordinates();
    static bool HasCesnaBeenDestroyed();
    static bool HasCesnaLanded();
    static bool HasDropOffCesnaBeenShotDown();
    static void InitPlanes();
    static void LoadPath(char const* arg0, int& arg1, float& arg2, bool arg3);
    static void Shutdown();
    static bool TestRocketCollision(CVector* arg0);
    static void UpdatePlanes();
    ~CPlane();
};

//VALIDATE_SIZE(CPlane, 0x29C);
