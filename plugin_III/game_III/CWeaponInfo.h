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
    unsigned int m_AnimToPlay; // AssocGroupId m_AnimToPlay;
    unsigned int m_Anim2ToPlay;
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

VALIDATE_SIZE(CWeaponInfo, 0x54);

extern CWeaponInfo(&aWeaponInfo)[14];
