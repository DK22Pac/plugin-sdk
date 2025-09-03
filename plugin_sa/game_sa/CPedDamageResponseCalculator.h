/*
    Plugin-SDK (Grand Theft Auto San Andreas) header file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/
#pragma once

#include "PluginBase.h"
#include "CPedDamageResponse.h"
#include "eWeaponType.h"

class CEntity;
class CPed;

class PLUGIN_API CPedDamageResponseCalculator
{
public:
    const CEntity* m_pDamager;
    float          m_fDamageFactor;
    uint8_t        m_bodyPart;
    eWeaponType    m_weaponType;
    bool           m_bSpeak;

    static float& ms_damageFactor;

    CPedDamageResponseCalculator(CEntity* entity, float fDamage, eWeaponType weaponType, uint8_t bodyPart, bool bSpeak);

public:
    void AccountForPedDamageStats(CPed* ped, CPedDamageResponse& response);
    void AccountForPedArmour(CPed* ped, CPedDamageResponse& response);
    bool ComputeWillForceDeath(CPed* ped, CPedDamageResponse& response);
    void ComputeWillKillPed(CPed* ped, CPedDamageResponse& response, bool bSpeak);
    void ComputeDamageResponse(CPed* ped, CPedDamageResponse& response, bool bSpeak);
};

VALIDATE_SIZE(CPedDamageResponseCalculator, 0x14);