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
VALIDATE_OFFSET(CHeli, m_apModelNodes, 0x2A0);
VALIDATE_OFFSET(CHeli, m_nHeliState, 0x2C0);
VALIDATE_OFFSET(CHeli, m_fSearchLightX, 0x2C4);
VALIDATE_OFFSET(CHeli, m_fSearchLightY, 0x2C8);
VALIDATE_OFFSET(CHeli, m_nExplosionTime, 0x2CC);
VALIDATE_OFFSET(CHeli, field_2D0, 0x2D0);
VALIDATE_OFFSET(CHeli, m_fRotationX, 0x2D4);
VALIDATE_OFFSET(CHeli, m_fHeliForcedZ, 0x2D8);
VALIDATE_OFFSET(CHeli, m_fSearchLightIntensity, 0x2DC);
VALIDATE_OFFSET(CHeli, m_nHeliNumber, 0x2E0);
VALIDATE_OFFSET(CHeli, m_nHeliType, 0x2E1);
VALIDATE_OFFSET(CHeli, m_nHeliDestinationPoint, 0x2E2);
VALIDATE_OFFSET(CHeli, m_nNumSwatPassengers, 0x2E3);
VALIDATE_OFFSET(CHeli, m_anRopeLifeTime, 0x2E4);
VALIDATE_OFFSET(CHeli, fLastXPoses, 0x2E8);
VALIDATE_OFFSET(CHeli, fLastYPoses, 0x300);
VALIDATE_OFFSET(CHeli, field_318, 0x318);
VALIDATE_OFFSET(CHeli, field_31C, 0x31C);
VALIDATE_OFFSET(CHeli, field_320, 0x320);
VALIDATE_OFFSET(CHeli, m_nDamagePoints, 0x324);
VALIDATE_OFFSET(CHeli, m_fRotorAngle, 0x328);
VALIDATE_OFFSET(CHeli, field_32C, 0x32C);
VALIDATE_OFFSET(CHeli, field_330, 0x330);
VALIDATE_OFFSET(CHeli, field_334, 0x334);
VALIDATE_OFFSET(CHeli, field_338, 0x338);
VALIDATE_OFFSET(CHeli, field_33C, 0x33C);
VALIDATE_OFFSET(CHeli, field_340, 0x340);
VALIDATE_OFFSET(CHeli, field_344, 0x344);
VALIDATE_OFFSET(CHeli, field_348, 0x348);
VALIDATE_OFFSET(CHeli, field_34C, 0x34C);
VALIDATE_OFFSET(CHeli, field_354, 0x354);
VALIDATE_OFFSET(CHeli, field_358, 0x358);
VALIDATE_OFFSET(CHeli, field_35C, 0x35C);
VALIDATE_SIZE(CHeli, 0x360);

void GenerateHeli(bool enable);
void StartCatalinaFlyBy();
RwObject* GetHeliAtomicObjectCB(RwObject* object, void* data);