/*
    Plugin-SDK (Grand Theft Auto 3) header file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/
#pragma once
#include "PluginBase.h"
#include "eWeaponType.h"
#include "eWeaponFire.h"
#include "CVector.h"
#include "eAnimations.h"

class CWeaponInfo {
public:
    eWeaponFire m_eWeaponFire;
    float m_fRange;
    unsigned int m_nFiringRate;
    unsigned int m_nReload;
    unsigned int m_nAmountofAmmunition;
    unsigned int m_nDamage;
    float m_fSpeed;
    float m_fRadius;
    float m_fLifespan;
    float m_fSpread;
    CVector m_vecFireOffset;
    int m_nAnimToPlay; // emanAnimGroup etc...
    int m_nAnim2ToPlay; // emanAnimGroup etc...
    float m_fAnimLoopStart;
    float m_fAnimLoopEnd;
    float m_fAnimFrameFire;
    float m_fAnim2FrameFire;
    int m_nModelId;
    union
    {
        unsigned int m_nWeaponFlags;
        struct
        {
            unsigned char m_bUseGravity : 1;
            unsigned char m_bSlowsDown : 1;
            unsigned char m_bDissipates : 1;
            unsigned char m_bRandSpeed : 1;
            unsigned char m_bExpands : 1;
            unsigned char m_bExplodes : 1;
            unsigned char m_bCanAim : 1;
            unsigned char m_bCanAimWithArm : 1;
            unsigned char m_b1stPerson : 1;
            unsigned char m_bHeavy : 1;
            unsigned char m_bThrow : 1;
        };
    };

    // variables
    // weapon names array
    static char **ms_aWeaponNames; // [14]

    // functions
    CWeaponInfo();
    // get weapon fire type by name
    static eWeaponFire FindWeaponFireType(char* name);
    // get weapon type by name
    static eWeaponType FindWeaponType(char* name);
    // get weapon info for this type
    static CWeaponInfo* GetWeaponInfo(eWeaponType weaponType);
    // initialisation
    static void Initialise();
    // load weapon data file
    static void LoadWeaponData();
    // closing
    static void Shutdown();
    ~CWeaponInfo();
};
VALIDATE_OFFSET(CWeaponInfo, m_eWeaponFire, 0x0);
VALIDATE_OFFSET(CWeaponInfo, m_fRange, 0x4);
VALIDATE_OFFSET(CWeaponInfo, m_nFiringRate, 0x8);
VALIDATE_OFFSET(CWeaponInfo, m_nReload, 0xC);
VALIDATE_OFFSET(CWeaponInfo, m_nAmountofAmmunition, 0x10);
VALIDATE_OFFSET(CWeaponInfo, m_nDamage, 0x14);
VALIDATE_OFFSET(CWeaponInfo, m_fSpeed, 0x18);
VALIDATE_OFFSET(CWeaponInfo, m_fRadius, 0x1C);
VALIDATE_OFFSET(CWeaponInfo, m_fLifespan, 0x20);
VALIDATE_OFFSET(CWeaponInfo, m_fSpread, 0x24);
VALIDATE_OFFSET(CWeaponInfo, m_vecFireOffset, 0x28);
VALIDATE_OFFSET(CWeaponInfo, m_nAnimToPlay, 0x34);
VALIDATE_OFFSET(CWeaponInfo, m_nAnim2ToPlay, 0x38);
VALIDATE_OFFSET(CWeaponInfo, m_fAnimLoopStart, 0x3C);
VALIDATE_OFFSET(CWeaponInfo, m_fAnimLoopEnd, 0x40);
VALIDATE_OFFSET(CWeaponInfo, m_fAnimFrameFire, 0x44);
VALIDATE_OFFSET(CWeaponInfo, m_fAnim2FrameFire, 0x48);
VALIDATE_OFFSET(CWeaponInfo, m_nModelId, 0x4C);
VALIDATE_OFFSET(CWeaponInfo, m_nWeaponFlags, 0x50);
VALIDATE_SIZE(CWeaponInfo, 0x54);

extern CWeaponInfo(&aWeaponInfo)[14];
