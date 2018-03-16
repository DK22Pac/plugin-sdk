/*
Plugin-SDK (Grand Theft Auto Vice City) header file
Authors: GTA Community. See more here
https://github.com/DK22Pac/plugin-sdk
Do not delete this comment block. Respect others' work!
*/
#pragma once

#include "PluginBase.h"
#include "CVehicle.h"
#include "CObject.h"

enum eHeliNodes {
    HELI_NODE_NONE = 0,
    HELI_CHASSIS = 1,
    HELI_TOPROTOR = 2,
    HELI_BACKROTOR = 3,
    HELI_TAIL = 4,
    HELI_TOPKNOT = 5,
    HELI_SKID_LEFT = 6,
    HELI_SKID_RIGHT = 7,
    HELI_NUM_NODES
};


class CHeli : public CVehicle {
protected:
    CHeli(plugin::dummy_func_t) : CVehicle(plugin::dummy) {}
public:
    RwFrame *m_apModelNodes[8]; 
    char m_nHeliState;          // 3 - HELI_STATE_EXPLODE
private:
    char _pad0[3];
public:
    float m_fSearchLightX;      // world coors
    float m_fSearchLightY;
    int m_nExplosionTime;       // time when heli will be exploded
    float field_2D0;
    float m_fRotationX;
    float m_fHeliForcedZ;
    float m_fSearchLightIntensity;  // 0.0f - 1.0f
    char m_nHeliNumber;
    char m_nHeliType;               // 0 - randomly created, 1 - script, 2 - uses air path
    char m_nHeliDestinationPoint;   // 0 - 12
    char m_nNumSwatPassengers;      // num swat peds & ropes to create, max 4
    char m_anRopeLifeTime[4];       // 0 - 255
    float fLastXPoses[6];
    float fLastYPoses[6];
    int field_318;
    int field_31C;
    int field_320;
    int m_nDamagePoints;
    float m_fRotorAngle;
    float field_32C;
    float field_330;
    float field_334;
    float field_338;
    float field_33C;
    float field_340;
    float field_344;
    float field_348;
    char field_34C[8];
    int field_354;
    float field_358;
    char field_35C;
private:
    char _pad1[3];
public:

    static unsigned int& TestForNewRandomHelisTimer;
    static unsigned int& NumRandomHelis;
    static bool& CatalinaHeliOn;
    static CHeli** pHelis; // CHeli* pHelis[4];
    static bool& ScriptHeliOn;

    //funcs

    CHeli(int modelIndex, unsigned char createdBy);
    static void InitHelis();
    void PreRenderAlways();
    bool SendDownSwat();
    CObject* SpawnFlyingComponent(int nodeIndex);
    static bool SpecialHeliPreRender();
    static bool TestBulletCollision(CVector* arg0, CVector* arg1, CVector* arg2, int arg3);
    static bool TestRocketCollision(CVector* arg0);
    static bool TestSniperCollision(CVector* origin, CVector* target);
    static void UpdateHelis();
}; 

VALIDATE_SIZE(CHeli, 0x360);

void GenerateHeli(bool enable);
void StartCatalinaFlyBy();
RwObject* GetHeliAtomicObjectCB(RwObject* object, void* data);