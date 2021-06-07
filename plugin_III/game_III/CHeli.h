/*
    Plugin-SDK (Grand Theft Auto 3) header file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/
#pragma once

#include "PluginBase.h"
#include "CVehicle.h"
#include "RenderWare.h"
#include "CVector.h"
#include "CObject.h"

enum PLUGIN_API eHeliNodes {
    HELI_NODE_NONE = 0,
    HELI_CHASSIS = 1,
    HELI_TOPROTOR = 2,
    HELI_BACKROTOR = 3,
    HELI_TAIL = 4,
    HELI_TOPKNOT = 5,
    HELI_SKID_LEFT = 6,
    HELI_SKID_RIGHT = 7,
    HELI_NUM_NODES = 8
};

enum PLUGIN_API eHeliStatus : unsigned char {
    HELI_STATUS_HOVER = 0,
    HELI_STATUS_CHASE_PLAYER = 1,
    HELI_STATUS_FLY_AWAY = 2,
    HELI_STATUS_SHOT_DOWN = 3,
    HELI_STATUS_HOVER2 = 4
};

enum PLUGIN_API eHeliType : unsigned char {
    HELI_TYPE_RANDOM = 0,
    HELI_TYPE_SCRIPT = 1,
    HELI_TYPE_CATALINA = 2
};

class PLUGIN_API CHeli : public CVehicle {
    PLUGIN_NO_DEFAULT_CONSTRUCTION(CHeli)

public:
    RwFrame *m_apModelNodes[8];
    char m_nHeliStatus; //!< see eHeliStatus
    float m_fSearchLightX;
    float m_fSearchLightY;
    unsigned int m_nExplosionTimer;
    float m_fRotation;
    float m_fAngularSpeed;
    float m_fTargetZ;
    float m_fSearchLightIntensity; //!< 0.0f - 1.0f
    char m_nHeliId;
    char m_nHeliType; //!< see eHeliType
    char m_nPathState; //!< 0 - 12
    char m_nNumSwatPassengers;
    float m_afSearchLightHistoryX[6];
    float m_afSearchLightHistoryY[6];
    unsigned int m_nSearchLightTimer;
    unsigned int m_nShootTimer;
    unsigned int m_nLastShotTime;
    unsigned int m_nBulletDamage;
    float m_fRotorRotation;
    float m_fHeliDustZ[8];
    unsigned int m_nPoliceShoutTimer;
    float m_fTargetOffset;
    bool m_bTestRight;

    //! 0,1 - HELI_RANDOM; 2 - HELI_SCRIPT; 3 - HELI_CATALINA
    SUPPORTED_10EN_11EN_STEAM static CHeli *(&pHelis)[4]; // static CHeli *pHelis[4]
    SUPPORTED_10EN_11EN_STEAM static unsigned int &TestForNewRandomHelisTimer;
    SUPPORTED_10EN_11EN_STEAM static short &NumScriptHelis;
    SUPPORTED_10EN_11EN_STEAM static short &NumRandomHelis;
    SUPPORTED_10EN_11EN_STEAM static bool &ScriptHeliOn;
    SUPPORTED_10EN_11EN_STEAM static bool &CatalinaHasBeenShutDown;
    SUPPORTED_10EN_11EN_STEAM static bool &CatalinaHeliOn;

    // virtual function #0 (destructor)


    // virtual function #1 (not overriden)


    // virtual function #2 (not overriden)

    SUPPORTED_10EN_11EN_STEAM void SetModelIndex(unsigned int modelIndex);

    // virtual function #4 (not overriden)


    // virtual function #5 (not overriden)


    // virtual function #6 (not overriden)


    // virtual function #7 (not overriden)

    SUPPORTED_10EN_11EN_STEAM void ProcessControl();

    // virtual function #9 (not overriden)


    // virtual function #10 (not overriden)


    // virtual function #11 (not overriden)

    SUPPORTED_10EN_11EN_STEAM void PreRender();
    SUPPORTED_10EN_11EN_STEAM void Render();

    // virtual function #14 (not overriden)


    // virtual function #15 (not overriden)


    // virtual function #16 (not overriden)


    // virtual function #17 (not overriden)


    // virtual function #18 (not overriden)


    // virtual function #19 (not overriden)


    // virtual function #20 (not overriden)


    // virtual function #21 (not overriden)


    // virtual function #22 (not overriden)


    // virtual function #23 (not overriden)


    // virtual function #24 (not overriden)


    // virtual function #25 (not overriden)


    // virtual function #26 (not overriden)


    // virtual function #27 (not overriden)


    // virtual function #28 (not overriden)


    // virtual function #29 (not overriden)


    // virtual function #30 (not overriden)


    // virtual function #31 (not overriden)


    // virtual function #32 (not overriden)


    // virtual function #33 (not overriden)


    // virtual function #34 (not overriden)


    SUPPORTED_10EN_11EN_STEAM void PreRenderAlways();
    SUPPORTED_10EN_11EN_STEAM CObject *SpawnFlyingComponent(int component);

    SUPPORTED_10EN_11EN_STEAM static void ActivateHeli(bool activate);
    SUPPORTED_10EN_11EN_STEAM static void CatalinaTakeOff();
    SUPPORTED_10EN_11EN_STEAM static CHeli *FindPointerToCatalinasHeli();
    SUPPORTED_10EN_11EN_STEAM static bool HasCatalinaBeenShotDown();
    SUPPORTED_10EN_11EN_STEAM static void InitHelis();
    SUPPORTED_10EN_11EN_STEAM static void MakeCatalinaHeliFlyAway();
    SUPPORTED_10EN_11EN_STEAM static void RemoveCatalinaHeli();
    SUPPORTED_10EN_11EN_STEAM static void SpecialHeliPreRender();
    SUPPORTED_10EN_11EN_STEAM static bool TestBulletCollision(CVector *lineStart, CVector *lineEnd, CVector *bulletPos, int damage);
    SUPPORTED_10EN_11EN_STEAM static bool TestRocketCollision(CVector *coors);
    SUPPORTED_10EN_11EN_STEAM static void UpdateHelis();
};

SUPPORTED_10EN_11EN_STEAM extern float(&CatalinaTargetX)[7]; // float CatalinaTargetX[7]
SUPPORTED_10EN_11EN_STEAM extern float(&CatalinaTargetY)[7]; // float CatalinaTargetY[7]
SUPPORTED_10EN_11EN_STEAM extern float(&CatalinaTargetZ)[7]; // float CatalinaTargetZ[7]
SUPPORTED_10EN_11EN_STEAM extern float(&DamPathX)[6]; // float DamPathX[6]
SUPPORTED_10EN_11EN_STEAM extern float(&DamPathY)[6]; // float DamPathY[6]
SUPPORTED_10EN_11EN_STEAM extern float(&DamPathZ)[6]; // float DamPathZ[6]
SUPPORTED_10EN_11EN_STEAM extern float(&ShortPathX)[4]; // float ShortPathX[4]
SUPPORTED_10EN_11EN_STEAM extern float(&ShortPathY)[4]; // float ShortPathY[4]
SUPPORTED_10EN_11EN_STEAM extern float(&ShortPathZ)[4]; // float ShortPathZ[4]
SUPPORTED_10EN_11EN_STEAM extern float(&LongPathX)[7]; // float LongPathX[7]
SUPPORTED_10EN_11EN_STEAM extern float(&LongPathY)[7]; // float LongPathY[7]
SUPPORTED_10EN_11EN_STEAM extern float(&LongPathZ)[7]; // float LongPathZ[7]
SUPPORTED_10EN_11EN_STEAM extern int &PathPoint;

//! out of class in III PC and later because of SecuROM
SUPPORTED_10EN_11EN_STEAM CHeli *GenerateHeli(bool catalina);
//! out of class in III PC and later because of SecuROM
SUPPORTED_10EN_11EN_STEAM void StartCatalinaFlyBy();
SUPPORTED_10EN_11EN_STEAM RwObject *GetHeliAtomicObjectCB(RwObject *object, void *data);

VTABLE_DESC(CHeli, 0x601EB0, 35);
VALIDATE_SIZE(CHeli, 0x33C);

#include "meta/meta.CHeli.h"
