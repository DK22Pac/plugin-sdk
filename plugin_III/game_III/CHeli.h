/*
Plugin-SDK (Grand Theft Auto 3) header file
Authors: GTA Community. See more here
https://github.com/DK22Pac/plugin-sdk
Do not delete this comment block. Respect others' work!
*/
#pragma once

#include "PluginBase.h"
#include "CVehicle.h"

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

class CObject;

class CHeli : public CVehicle {
protected:
    CHeli(plugin::dummy_func_t) : CVehicle(plugin::dummy) {}
public:
    
    static unsigned int& TestForNewRandomHelisTimer;
    static unsigned int& NumRandomHelis;
    static bool& CatalinaHeliOn;
    static CHeli** pHelis; 
    static bool& ScriptHeliOn;
    static bool& CatalinaHasBeenShotDown;
    static char& UpdateHelis_nFrameGen;
    
    //funcs

    static void ActivateHeli(bool enable);
    CHeli(int modelIndex, unsigned char createdBy);
    static void CatalinaTakeOff();
    static void FindPointerToCatalinasHeli();
    static bool HasCatalinaBeenShotDown();
    static void InitHelis();
    static void MakeCatalinaHeliFlyAway();
    void PreRenderAlways();
    static void RemoveCatalinaHeli();
    CObject* SpawnFlyingComponent(int nodeIndex);
    static void SpecialHeliPreRender();
    static bool TestBulletCollision(CVector* arg0, CVector* arg1, CVector* arg2, int arg3);
    static bool TestRocketCollision(CVector* arg0);
    static void UpdateHelis();
}; 

//VALIDATE_SIZE(CHeli, 0x33C);

void GenerateHeli(bool enable);
void StartCatalinaFlyBy();
RwObject* GetHeliAtomicObjectCB(RwObject* object, void* data);