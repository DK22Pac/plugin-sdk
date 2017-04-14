/*
Plugin-SDK (Grand Theft Auto) header file
Authors: GTA Community. See more here
https://github.com/DK22Pac/plugin-sdk
Do not delete this comment block. Respect others' work!
*/
#pragma once
#include "plbase/PluginBase_III.h"
#include "eWeaponType.h"
#include "eWeaponFire.h"
#include "CVector.h"

class CWeaponInfo {
public:
    eWeaponFire m_eWeaponFire;
    float m_fRange;
    UInt32 m_nFiringRate;
    UInt32 m_nReload;
    UInt32 m_nAmountofAmmunition;
    UInt32 m_nDamage;
    float m_fSpeed;
    float m_fRadius;
    float m_fLifespan;
    float m_fSpread;
    CVector m_vecFireOffset;
    UInt32 m_AnimToPlay; // AssocGroupId m_AnimToPlay;
    UInt32 m_Anim2ToPlay;
    float m_fAnimLoopStart;
    float m_fAnimLoopEnd;
    float m_fAnimFrameFire;
    float m_fAnim2FrameFire;
    Int32 m_nModelId;
    union
    {
        UInt32 m_nWeaponFlags;
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

    //funcs

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