/*
    Plugin-SDK (Grand Theft Auto) header file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/
#pragma once

#include "plbase/PluginBase_III.h"
#include "CClumpModelInfo.h"
#include "CVector.h"

class CVehicleModelInfo : public CClumpModelInfo {
public:
    char           m_nLastCarColorId[2];
    char           m_szGameName[32];
private:
    char _pad56[2];
public:
    unsigned int   m_nVehicleType;
    int            m_nWheelModelIndex;
    float          m_fWheelScale;
    unsigned int   m_nNumDoors;
    int            m_nHandlingId;
    unsigned int   m_nVehicleClass;
    unsigned int   m_nLvl;
    CVector        m_vecDummyPos[10];
    union {
        unsigned int m_nCompRules;
        struct {
            unsigned int m_nExtraA_comp1 : 4;
            unsigned int m_nExtraA_comp2 : 4;
            unsigned int m_nExtraA_comp3 : 4;
            unsigned int m_nExtraA_rule : 4;
            unsigned int m_nExtraB_comp1 : 4;
            unsigned int m_nExtraB_comp2 : 4;
            unsigned int m_nExtraB_comp3 : 4;
            unsigned int m_nExtraB_rule : 4;
        } m_nCompRulesBits;
    };
    float field_F0; // unsued; sets to 999.99 in CModelInfo::AddVehicleModel, but not used then. Possibly a size for bike's 2nd wheel.
    RpMaterial    *m_apMaterialsPrimary[26];
    RpMaterial    *m_apMaterialsSecondary[26];
    unsigned char  m_bPrimaryColorId[8];
    unsigned char  m_bSecondaryColorId[8];
    unsigned char  m_nNumColorVariations;
    unsigned char  m_nLastColorVariation;
    unsigned char  m_nCurrentColorId[2];
    RwTexture     *m_pEnvironmentTex;
    RpAtomic      *m_apExtras[6];
    unsigned int   m_nNumExtras;
};

VALIDATE_SIZE(CVehicleModelInfo, 0x1F8);