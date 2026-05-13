/*
    Plugin-SDK (Grand Theft Auto San Andreas) header file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/
#pragma once

#include "PluginBase.h"
#include "CAutomobile.h"

enum eHeliNodes {
    HELI_NODE_NONE = 0,
    HELI_CHASSIS = 1,
    HELI_WHEEL_RF = 2,
    HELI_WHEEL_RM = 3,
    HELI_WHEEL_RB = 4,
    HELI_WHEEL_LF = 5,
    HELI_WHEEL_LM = 6,
    HELI_WHEEL_LB = 7,
    HELI_DOOR_RF = 8,
    HELI_DOOR_RR = 9,
    HELI_DOOR_LF = 10,
    HELI_DOOR_LR = 11,
    HELI_STATIC_ROTOR = 12,
    HELI_MOVING_ROTOR = 13,
    HELI_STATIC_ROTOR2 = 14,
    HELI_MOVING_ROTOR2 = 15,
    HELI_RUDDER = 16,
    HELI_ELEVATORS = 17,
    HELI_MISC_A = 18,
    HELI_MISC_B = 19,
    HELI_MISC_C = 20,
    HELI_MISC_D = 21,
    HELI_NUM_NODES
};

struct tHeliLight {
    CVector m_vecOrigin;
    CVector m_vecTarget;
    float m_fTargetRadius;
    float m_fPower;
    int m_nCoronaIndex;
    bool field_24; // unknown flag
    bool m_bDrawShadow;
    char _pad[2];
    CVector field_28[3];
};
VALIDATE_OFFSET(tHeliLight, m_vecOrigin, 0x0);
VALIDATE_OFFSET(tHeliLight, m_vecTarget, 0xC);
VALIDATE_OFFSET(tHeliLight, m_fTargetRadius, 0x18);
VALIDATE_OFFSET(tHeliLight, m_fPower, 0x1C);
VALIDATE_OFFSET(tHeliLight, m_nCoronaIndex, 0x20);
VALIDATE_OFFSET(tHeliLight, field_24, 0x24);
VALIDATE_OFFSET(tHeliLight, m_bDrawShadow, 0x25);
VALIDATE_OFFSET(tHeliLight, _pad, 0x26);
VALIDATE_OFFSET(tHeliLight, field_28, 0x28);
VALIDATE_SIZE(tHeliLight, 0x4C);

class CHeli : public CAutomobile {
protected:
    CHeli(plugin::dummy_func_t) : CAutomobile(plugin::dummy) {}
public:
    char               m_nHeliFlags;
    char _pad1[3];
    float              m_fLeftRightSkid;
    float              m_fSteeringUpDown;
    float              m_fSteeringLeftRight;
    float              m_fAccelerationBreakStatus;
    int field_99C;
    float              m_fRotorZ;
    float              m_fSecondRotorZ;
    float              m_fMaxAltitude;
    float field_9AC;
    float              m_fMinAltitude;
    int field_9B4;
    char field_9B8;
    char               m_nNumSwatOccupants;
    char               m_anSwatIDs[4];
    char _pad2[2];
    int field_9C0[4];
    int field_9D0;
    class FxSystem_c **m_pParticlesList;
    char field_9D8[24];
    int field_9F0;
    CVector            m_vecSearchLightTarget;
    float              m_fSearchLightIntensity;
    int field_A04;
    int field_A08;
    class FxSystem_c **m_ppGunflashFx;
    char               m_nFiringMultiplier;
    bool               m_bSearchLightEnabled;
    char _pad3[2];
    float field_A14;

    static bool& bPoliceHelisAllowed; // 1
    static unsigned int& TestForNewRandomHelisTimer;
    static CHeli** pHelis; // CHeli* pHelis[2];
    static unsigned int& NumberOfSearchLights;
    static bool& bHeliControlsCheat;
    static tHeliLight* HeliSearchLights; // tHeliLight CHeli::HeliSearchLights[4]

    CHeli(int modelIndex, unsigned char createdBy);

    void PreRenderAlways(); // dummy function
    CVector FindSwatPositionRelativeToHeli(int swatNumber);
    bool SendDownSwat();

    static void InitHelis();
    static void AddHeliSearchLight(CVector const& origin, CVector const& target, float targetRadius, float power, unsigned int coronaIndex, unsigned char unknownFlag, unsigned char drawShadow);
    static void Pre_SearchLightCone();
    static void Post_SearchLightCone();
    static void SpecialHeliPreRender(); // dummy function
    static void SwitchPoliceHelis(bool enable);
    static void SearchLightCone(int coronaIndex, CVector origin, CVector target, float targetRadius, float power, unsigned char unknownFlag, unsigned char drawShadow, CVector* arg7, CVector* arg8, CVector* arg9, bool arg10, float baseRadius);
    static CHeli* GenerateHeli(CPed* target, bool newsHeli);
    static bool TestSniperCollision(CVector* origin, CVector* target);
    static void UpdateHelis();
    static void RenderAllHeliSearchLights();
};
VALIDATE_OFFSET(CHeli, m_nHeliFlags, 0x988);
VALIDATE_OFFSET(CHeli, _pad1, 0x989);
VALIDATE_OFFSET(CHeli, m_fLeftRightSkid, 0x98C);
VALIDATE_OFFSET(CHeli, m_fSteeringUpDown, 0x990);
VALIDATE_OFFSET(CHeli, m_fSteeringLeftRight, 0x994);
VALIDATE_OFFSET(CHeli, m_fAccelerationBreakStatus, 0x998);
VALIDATE_OFFSET(CHeli, field_99C, 0x99C);
VALIDATE_OFFSET(CHeli, m_fRotorZ, 0x9A0);
VALIDATE_OFFSET(CHeli, m_fSecondRotorZ, 0x9A4);
VALIDATE_OFFSET(CHeli, m_fMaxAltitude, 0x9A8);
VALIDATE_OFFSET(CHeli, field_9AC, 0x9AC);
VALIDATE_OFFSET(CHeli, m_fMinAltitude, 0x9B0);
VALIDATE_OFFSET(CHeli, field_9B4, 0x9B4);
VALIDATE_OFFSET(CHeli, field_9B8, 0x9B8);
VALIDATE_OFFSET(CHeli, m_nNumSwatOccupants, 0x9B9);
VALIDATE_OFFSET(CHeli, m_anSwatIDs, 0x9BA);
VALIDATE_OFFSET(CHeli, _pad2, 0x9BE);
VALIDATE_OFFSET(CHeli, field_9C0, 0x9C0);
VALIDATE_OFFSET(CHeli, field_9D0, 0x9D0);
VALIDATE_OFFSET(CHeli, m_pParticlesList, 0x9D4);
VALIDATE_OFFSET(CHeli, field_9D8, 0x9D8);
VALIDATE_OFFSET(CHeli, field_9F0, 0x9F0);
VALIDATE_OFFSET(CHeli, m_vecSearchLightTarget, 0x9F4);
VALIDATE_OFFSET(CHeli, m_fSearchLightIntensity, 0xA00);
VALIDATE_OFFSET(CHeli, field_A04, 0xA04);
VALIDATE_OFFSET(CHeli, field_A08, 0xA08);
VALIDATE_OFFSET(CHeli, m_ppGunflashFx, 0xA0C);
VALIDATE_OFFSET(CHeli, m_nFiringMultiplier, 0xA10);
VALIDATE_OFFSET(CHeli, m_bSearchLightEnabled, 0xA11);
VALIDATE_OFFSET(CHeli, _pad3, 0xA12);
VALIDATE_OFFSET(CHeli, field_A14, 0xA14);
VALIDATE_SIZE(CHeli, 0xA18);
