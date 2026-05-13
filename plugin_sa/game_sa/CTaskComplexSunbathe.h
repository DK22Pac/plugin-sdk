/*
    Plugin-SDK (Grand Theft Auto San Andreas) header file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/
#pragma once
#include "PluginBase.h"
#include "CTaskComplex.h"
#include "CTaskTimer.h"
#include "CAnimBlock.h"
#include "CObject.h"

enum eSunbatherType : unsigned int
{
    SUNBATHER_MALE_1 = 0,
    SUNBATHER_MALE_2,
    SUNBATHER_FEMALE_1,
    SUNBATHER_FEMALE_2,
    SUNBATHER_FEMALE_3,
};

class PLUGIN_API CTaskComplexSunbathe : public CTaskComplex {
protected:
    CTaskComplexSunbathe(plugin::dummy_func_t a) : CTaskComplex(a), m_BathingTimer(a) {}
public:
    bool                m_bStartStanding;
    bool                m_bBathing;
    bool                m_bBeachAnimsReferenced;
    bool                m_bSunbatheAnimsReferenced;
    bool                m_bAborted;
private:
    char _pad[3];
public:
    CTaskTimer          m_BathingTimer;
    eSunbatherType      m_SunbatherType;
    CAnimBlock*         m_pBeachAnimBlock;
    CAnimBlock*         m_pSunbatheAnimBlock;
    int               m_BeachAnimBlockIndex;
    int               m_SunbatheAnimBlockIndex;
    CObject*            m_pTowel;

    CTaskComplexSunbathe(CObject* pTowel, bool bStartStanding);
};
VALIDATE_OFFSET(CTaskComplexSunbathe, m_bStartStanding, 0xC);
VALIDATE_OFFSET(CTaskComplexSunbathe, m_bBathing, 0xD);
VALIDATE_OFFSET(CTaskComplexSunbathe, m_bBeachAnimsReferenced, 0xE);
VALIDATE_OFFSET(CTaskComplexSunbathe, m_bSunbatheAnimsReferenced, 0xF);
VALIDATE_OFFSET(CTaskComplexSunbathe, m_bAborted, 0x10);
VALIDATE_OFFSET(CTaskComplexSunbathe, m_BathingTimer, 0x14);
VALIDATE_OFFSET(CTaskComplexSunbathe, m_SunbatherType, 0x20);
VALIDATE_OFFSET(CTaskComplexSunbathe, m_pBeachAnimBlock, 0x24);
VALIDATE_OFFSET(CTaskComplexSunbathe, m_pSunbatheAnimBlock, 0x28);
VALIDATE_OFFSET(CTaskComplexSunbathe, m_BeachAnimBlockIndex, 0x2C);
VALIDATE_OFFSET(CTaskComplexSunbathe, m_SunbatheAnimBlockIndex, 0x30);
VALIDATE_OFFSET(CTaskComplexSunbathe, m_pTowel, 0x34);
VALIDATE_SIZE(CTaskComplexSunbathe, 0x38);

