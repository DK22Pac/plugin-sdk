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
    PLANE_NODE_NONE = 0,
    PLANE_CHASSIS = 1,
    PLANE_WHEEL_FRONT = 2,
    PLANE_WHEEL_REAR = 3,
    PLANE_NUM_NODES
};

#pragma pack(push, 4)
class CPlane : public CVehicle {
protected:
    CPlane(plugin::dummy_func_t) : CVehicle(plugin::dummy) {}
public:
    RwFrame *m_apPlaneNodes[PLANE_NUM_NODES];
    char byte298;
    char byte299;
    char byte29A;
private:
    char _pad29B;
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
#pragma pack(pop)

VALIDATE_SIZE(CPlane, 0x29C);

void CreateIncomingCesna();

extern unsigned int *CesnaMissionStatus;
extern unsigned int *CesnaMissionStartTime;
extern unsigned int *DropOffCesnaMissionStatus;
extern unsigned int *DropOffCesnaMissionStartTime;
extern CPlane **pDropOffCesna;
extern CPlane **pDrugRunCesna;