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
    int m_nAnimToPlay;
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
VALIDATE_OFFSET(CWeaponInfo, m_fAnimLoopStart, 0x38);
VALIDATE_OFFSET(CWeaponInfo, m_fAnimLoopEnd, 0x3C);
VALIDATE_OFFSET(CWeaponInfo, m_fAnimFrameFire, 0x40);
VALIDATE_OFFSET(CWeaponInfo, m_fAnim2LoopStart, 0x44);
VALIDATE_OFFSET(CWeaponInfo, m_fAnim2LoopEnd, 0x48);
VALIDATE_OFFSET(CWeaponInfo, m_fAnim2FrameFire, 0x4C);
VALIDATE_OFFSET(CWeaponInfo, m_fAnimBreakout, 0x50);
VALIDATE_OFFSET(CWeaponInfo, m_nModelId, 0x54);
VALIDATE_OFFSET(CWeaponInfo, m_nModel2Id, 0x58);
VALIDATE_OFFSET(CWeaponInfo, m_nWeaponFlags, 0x5C);
VALIDATE_OFFSET(CWeaponInfo, m_WeaponSlot, 0x60);
VALIDATE_SIZE(CWeaponInfo, 0x64);

extern CWeaponInfo (&aWeaponInfo)[37];		// CWeaponInfo aWeaponInfo[37]

VALIDATE_SIZE(CWeaponInfo, 0x64);