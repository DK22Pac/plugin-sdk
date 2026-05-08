/*
    Plugin-SDK (Grand Theft Auto San Andreas) header file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/
#pragma once

#include "PluginBase.h"
#include "CVector.h"
#include "FxSystem_c.h"

class PLUGIN_API CObjectInfo {
public:
	float          m_fMass;
	float          m_fTurnMass;
	float          m_fAirResistance;
	float          m_fElasticity;
	float          m_fBuoyancyConstant;
	float          m_fUprootLimit;
	float          m_fColDamageMultiplier;
	unsigned char  m_nColDamageEffect;
	unsigned char  m_nSpecialColResponseCase;
	unsigned char  m_nCameraAvoidObject;
	unsigned char  m_bCausesExplosion;
	unsigned char  m_nFxType;
	CVector        m_vFxOffset;
	FxSystemBP_c*  m_pFxSystem;
	float          m_fSmashMultiplier;
	CVector        m_vecBreakVelocity;
	float          m_fBreakVelocityRand;
	unsigned int   m_nGunBreakMode;
	unsigned int   m_nSparksOnImpact;
};
VALIDATE_OFFSET(CObjectInfo, m_fMass, 0x0);
VALIDATE_OFFSET(CObjectInfo, m_fTurnMass, 0x4);
VALIDATE_OFFSET(CObjectInfo, m_fAirResistance, 0x8);
VALIDATE_OFFSET(CObjectInfo, m_fElasticity, 0xC);
VALIDATE_OFFSET(CObjectInfo, m_fBuoyancyConstant, 0x10);
VALIDATE_OFFSET(CObjectInfo, m_fUprootLimit, 0x14);
VALIDATE_OFFSET(CObjectInfo, m_fColDamageMultiplier, 0x18);
VALIDATE_OFFSET(CObjectInfo, m_nColDamageEffect, 0x1C);
VALIDATE_OFFSET(CObjectInfo, m_nSpecialColResponseCase, 0x1D);
VALIDATE_OFFSET(CObjectInfo, m_nCameraAvoidObject, 0x1E);
VALIDATE_OFFSET(CObjectInfo, m_bCausesExplosion, 0x1F);
VALIDATE_OFFSET(CObjectInfo, m_nFxType, 0x20);
VALIDATE_OFFSET(CObjectInfo, m_vFxOffset, 0x24);
VALIDATE_OFFSET(CObjectInfo, m_pFxSystem, 0x30);
VALIDATE_OFFSET(CObjectInfo, m_fSmashMultiplier, 0x34);
VALIDATE_OFFSET(CObjectInfo, m_vecBreakVelocity, 0x38);
VALIDATE_OFFSET(CObjectInfo, m_fBreakVelocityRand, 0x44);
VALIDATE_OFFSET(CObjectInfo, m_nGunBreakMode, 0x48);
VALIDATE_OFFSET(CObjectInfo, m_nSparksOnImpact, 0x4C);
VALIDATE_SIZE(CObjectInfo, 0x50);