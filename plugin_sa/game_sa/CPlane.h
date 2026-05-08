/*
    Plugin-SDK (Grand Theft Auto San Andreas) header file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/
#pragma once

#include "PluginBase.h"
#include "CAutomobile.h"

enum ePlaneNodes {
    PLANE_NODE_NONE = 0,
    PLANE_CHASSIS = 1,
    PLANE_WHEEL_RF = 2,
    PLANE_WHEEL_RM = 3,
    PLANE_WHEEL_RB = 4,
    PLANE_WHEEL_LF = 5,
    PLANE_WHEEL_LM = 6,
    PLANE_WHEEL_LB = 7,
    PLANE_DOOR_RF = 8,
    PLANE_DOOR_RR = 9,
    PLANE_DOOR_LF = 10,
    PLANE_DOOR_LR = 11,
    PLANE_STATIC_PROP = 12,
    PLANE_MOVING_PROP = 13,
    PLANE_STATIC_PROP2 = 14,
    PLANE_MOVING_PROP2 = 15,
    PLANE_RUDDER = 16,
    PLANE_ELEVATOR_L = 17,
    PLANE_ELEVATOR_R = 18,
    PLANE_AILERON_L = 19,
    PLANE_AILERON_R = 20,
    PLANE_GEAR_L = 21,
    PLANE_GEAR_R = 22,
    PLANE_MISC_A = 23,
    PLANE_MISC_B = 24,
    PLANE_NUM_NODES
};

class CPlane : public CAutomobile {
protected:
    CPlane(plugin::dummy_func_t) : CAutomobile(plugin::dummy) {}
public:
    float field_988;
    int field_98C;
    int field_990;
    int field_994;
    float field_998;
    int field_99C;
    int field_9A0;
    int field_9A4;
    float field_9A8;
    float field_9AC;
    float field_9B0;
    float field_9B4;
    int field_9B8;
    int field_9BC;
    unsigned int m_nStartedFlyingTime;
    int field_9C4;
    float field_9C8;
    float m_fLandingGearStatus;
    int field_9D0;
    FxSystem_c **m_pGunParticles;
    unsigned char m_nFiringMultiplier;
    int field_9DC;
    int field_9E0;
    int field_9E4;
    FxSystem_c *m_apJettrusParticles[4];
    FxSystem_c *m_pSmokeParticle;
    unsigned int m_nSmokeTimer;
    bool m_bSmokeEjectorEnabled;
private:
    char _pad[3];

public:
    CPlane(int modelIndex, unsigned char createdBy);

    void IsAlreadyFlying();
    void SetGearUp();
    void SetGearDown();

    static void InitPlaneGenerationAndRemoval();
    static unsigned int CountPlanesAndHelis();
    static bool AreWeInNoPlaneZone();
    static bool AreWeInNoBigPlaneZone();
    static void SwitchAmbientPlanes(bool enable);
    static void FindPlaneCreationCoors(CVector* arg0, CVector* arg1, float* arg2, float* arg3, bool arg4);
    static void DoPlaneGenerationAndRemoval();

    static bool& GenPlane_Active;
    static int& GenPlane_ModelIndex;
    static unsigned int& GenPlane_Status;
    static unsigned int& GenPlane_LastTimeGenerated;
    static float& ANDROM_COL_ANGLE_MULT;
    static float& HARRIER_NOZZLE_ROTATE_LIMIT;
    static float& HARRIER_NOZZLE_SWITCH_LIMIT;
    static float& PLANE_MIN_PROP_SPEED;
    static float& PLANE_STD_PROP_SPEED;
    static float& PLANE_MAX_PROP_SPEED;
    static float& PLANE_ROC_PROP_SPEED;
};
VALIDATE_OFFSET(CPlane, field_988, 0x988);
VALIDATE_OFFSET(CPlane, field_98C, 0x98C);
VALIDATE_OFFSET(CPlane, field_990, 0x990);
VALIDATE_OFFSET(CPlane, field_994, 0x994);
VALIDATE_OFFSET(CPlane, field_998, 0x998);
VALIDATE_OFFSET(CPlane, field_99C, 0x99C);
VALIDATE_OFFSET(CPlane, field_9A0, 0x9A0);
VALIDATE_OFFSET(CPlane, field_9A4, 0x9A4);
VALIDATE_OFFSET(CPlane, field_9A8, 0x9A8);
VALIDATE_OFFSET(CPlane, field_9AC, 0x9AC);
VALIDATE_OFFSET(CPlane, field_9B0, 0x9B0);
VALIDATE_OFFSET(CPlane, field_9B4, 0x9B4);
VALIDATE_OFFSET(CPlane, field_9B8, 0x9B8);
VALIDATE_OFFSET(CPlane, field_9BC, 0x9BC);
VALIDATE_OFFSET(CPlane, m_nStartedFlyingTime, 0x9C0);
VALIDATE_OFFSET(CPlane, field_9C4, 0x9C4);
VALIDATE_OFFSET(CPlane, field_9C8, 0x9C8);
VALIDATE_OFFSET(CPlane, m_fLandingGearStatus, 0x9CC);
VALIDATE_OFFSET(CPlane, field_9D0, 0x9D0);
VALIDATE_OFFSET(CPlane, m_pGunParticles, 0x9D4);
VALIDATE_OFFSET(CPlane, m_nFiringMultiplier, 0x9D8);
VALIDATE_OFFSET(CPlane, field_9DC, 0x9DC);
VALIDATE_OFFSET(CPlane, field_9E0, 0x9E0);
VALIDATE_OFFSET(CPlane, field_9E4, 0x9E4);
VALIDATE_OFFSET(CPlane, m_apJettrusParticles, 0x9E8);
VALIDATE_OFFSET(CPlane, m_pSmokeParticle, 0x9F8);
VALIDATE_OFFSET(CPlane, m_nSmokeTimer, 0x9FC);
VALIDATE_OFFSET(CPlane, m_bSmokeEjectorEnabled, 0xA00);
VALIDATE_SIZE(CPlane, 0xA04);

extern float &HARRIER_NOZZLE_ROTATERATE;
extern float &PLANE_DAMAGE_WAVE_COUNTER_VAR;
extern float &PLANE_DAMAGE_THRESHHOLD;
extern float &PLANE_DAMAGE_SCALE_MASS;
extern float &PLANE_DAMAGE_DESTROY_THRESHHOLD;
extern CVector &vecRCBaronGunPos;