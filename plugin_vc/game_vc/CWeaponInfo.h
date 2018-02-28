/*
Plugin-SDK (Grand Theft Auto Vice City) header file
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
    float m_fAnimLoopStart;
    float m_fAnimLoopEnd;
    float m_fAnimFrameFire;
    float m_fAnim2LoopStart;
    float m_fAnim2LoopEnd;
    float m_fAnim2FrameFire;
    float m_fAnimBreakout;
    int m_nModelId;
    int m_nModel2Id;
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
            unsigned char m_bReloadLoop2Start : 1;
            unsigned char m_bUse2nd : 1;
            unsigned char m_bGround2nd : 1;
            unsigned char m_bFinish3rd : 1;
            unsigned char m_bReload : 1;
            unsigned char m_bFightMode : 1;
            unsigned char m_bCrouchFire : 1;
            unsigned char m_bCop3rd : 1;
            unsigned char m_bGround3rd : 1;
            unsigned char m_bPartialAttack : 1;
            unsigned char m_bAnimDetonate : 1;
        };
    };
	unsigned int m_WeaponSlot;

    //funcs

    CWeaponInfo();
    ~CWeaponInfo();

    // get weapon fire type by name
    static eWeaponFire FindWeaponFireType(char* name);
    // get weapon info for this type 
    static CWeaponInfo* GetWeaponInfo(eWeaponType weaponType);
    // initialisation
    static void Initialise();
    // load weapon data file
    static void LoadWeaponData();
    // closing
    static void Shutdown();
};

extern CWeaponInfo (&aWeaponInfo)[37];		// CWeaponInfo aWeaponInfo[37]

VALIDATE_SIZE(CWeaponInfo, 0x64);