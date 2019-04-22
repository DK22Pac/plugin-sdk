/*
Plugin-SDK (Grand Theft Auto 3) header file
Authors: GTA Community. See more here
https://github.com/DK22Pac/plugin-sdk
Do not delete this comment block. Respect others' work!
*/
#pragma once

#include "PluginBase.h"
#include "CVehicle.h"
#include "CVector2D.h"

enum eBoatNodes {
    BOAT_NODE_NONE = 0,
    BOAT_MOVING = 1,
    BOAT_WINDSCREEN = 2,
    BOAT_RUDDER = 3,
    BOAT_NUM_NODES
};

class CBoat : public CVehicle {
protected:
    CBoat(plugin::dummy_func_t) : CVehicle(plugin::dummy) {}
public:
    
    // static variables
    static CBoat **apFrameWakeGeneratingBoats; // static CBoat *apFrameWakeGeneratingBoats[4]
    static float &WAKE_LIFETIME; // 400.0
    static float &MIN_WAKE_INTERVAL; // 1.0
    static float &MAX_WAKE_LENGTH; // 50.0

    // functions
    void AddWakePoint(CVector posn);
    void ApplyWaterResistance();
    CBoat(int modelIndex, unsigned char createdBy);
    static void FillBoatList();
    static bool IsSectorAffectedByWake(CVector2D point, float wakeLength, CBoat** boat);
    static float IsVertexAffectedByWake(CVector point, CBoat* boat);
    void PruneWakeTrail();
    void SetupModelNodes();
};

//VALIDATE_SIZE(CBoat, 0x484);

extern float &fShapeLength; // 0.4
extern float &fShapeTime; // 0.05
extern float &fRangeMult; // 0.75
extern RxObjSpace3DVertex *KeepWaterOutVertices; // [4]
extern unsigned short &KeepWaterOutIndices; // [6]

RwObject* GetBoatAtomicObjectCB(RwObject* object, void* data);