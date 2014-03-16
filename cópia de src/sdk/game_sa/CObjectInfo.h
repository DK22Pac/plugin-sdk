#pragma once

#include "plugin/plugin.h"
#include "CVector.h"

#pragma pack(push, 4)
class PLUGIN_API CObjectInfo
{
public:
	float            m_fMass;
	float            m_fTurnMass;
	float            m_fAirResistance;
	float            m_fElasticity;
	float            m_fBuoyancyConstant;
	float            m_fUprootLimit;
	float            m_fColDamageMultiplier;
	unsigned __int8  m_nColDamageEffect;
	unsigned __int8  m_nSpecialColResponseCase;
	unsigned __int8  m_bCameraAvoidObject;
	unsigned __int8  m_bCausesExplosion;
	unsigned __int8  m_nFxType;
	CVector          m_vFxOffset;
	void            *m_pFxSystem; // CFxSystem *
	float            m_fSmashMultiplier;
	CVector          m_vBreakVelocity;
	float            m_fBreakVelocityRand;
	unsigned __int32 m_dwGunBreakMode;
	unsigned __int32 m_dwSparksOnImpact;
};
#pragma pack(pop)

VALIDATE_SIZE(CObjectInfo, 0x50);