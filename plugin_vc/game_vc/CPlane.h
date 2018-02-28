/*
Plugin-SDK (Grand Theft Auto Vice City) header file
Authors: GTA Community. See more here
https://github.com/DK22Pac/plugin-sdk
Do not delete this comment block. Respect others' work!
*/
#pragma once
#include "PluginBase.h"
#include "CVehicle.h"

enum ePlaneNodes {
    PLANE_NODE_NONE = 0,
    PLANE_WHEEL_FRONT = 2,
    PLANE_WHEEL_REAR = 3,
    PLANE_NUM_NODES
};

class CPlane : public CVehicle {
protected:
    CPlane(plugin::dummy_func_t) : CVehicle(plugin::dummy) {}
public:
    short field_2A0;
    short field_2A2;
    int field_2A4;
    int field_2A8;
    int field_2AC;
    char field_2B0;
    char field_2B1;
    char field_2B2;
    char field_2B3;

    CPlane(int modelIndex, unsigned char createdBy);
    static void InitPlanes();
    static bool Load();
    static void LoadPath(char const* arg0, int& arg1, float& arg2, bool arg3);
    static bool Save();
    static void Shutdown();
    static bool TestRocketCollision(CVector* arg0);
    static void UpdatePlanes();
};

VALIDATE_SIZE(CPlane, 0x2B4);