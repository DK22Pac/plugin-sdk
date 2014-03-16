#pragma once

#include <plugin/plugin.h>
#include "CPhysical.h"
#include "CObjectInfo.h"
#include "RenderWare.h"

#pragma pack(push, 1)
class PLUGIN_API CObject : public CPhysical
{
public:
	// class variables

	void               *m_pObjectList;
	// 2,6 - mission object, 6 - temp object
	unsigned __int8     m_nObjectType;
	__int8 field_13D;
	__int16 field_13E;
	unsigned __int32 bObjectFlag0 : 1;
	unsigned __int32 bObjectFlag1 : 1;
	unsigned __int32 bObjectFlag2 : 1;
	unsigned __int32 bObjectFlag3 : 1;
	unsigned __int32 bObjectFlag4 : 1;
	unsigned __int32 bObjectFlag5 : 1;
	unsigned __int32    m_bIsExploded : 1;
	unsigned __int32 bObjectFlag7 : 1;
	unsigned __int32    m_bIsLampPost : 1;
	unsigned __int32    m_bIsTargatable : 1;
	unsigned __int32    m_bIsBroken : 1;
	unsigned __int32    m_bTrainCrossEnabled : 1;
	unsigned __int32    m_bIsPhotographed : 1;
	unsigned __int32    m_bIsLiftable : 1;
	unsigned __int32 bObjectFlag14 : 1;
	unsigned __int32    m_bIsDoor : 1;
	unsigned __int32    m_bHasNoModel : 1;
	unsigned __int32    m_bIsScaled : 1;
	unsigned __int32    m_bCanBeAttachedToMagnet : 1;
	unsigned __int32 bObjectFlag19 : 1;
	unsigned __int32 bObjectFlag20 : 1;
	unsigned __int32 bObjectFlag21 : 1;
	unsigned __int32    m_bFadingIn : 1;
	unsigned __int32    m_bAffectedByColBrightness : 1;
	unsigned __int32 bObjectFlag24 : 1;
	unsigned __int32    m_bDoNotRender : 1;
	unsigned __int32    m_bFadingIn2 : 1;
	unsigned __int32 bObjectFlag27 : 1;
	unsigned __int32 bObjectFlag28 : 1;
	unsigned __int32 bObjectFlag29 : 1;
	unsigned __int32 bObjectFlag30 : 1;
	unsigned __int32 bObjectFlag31 : 1;
	unsigned __int8     m_nColDamageEffect;
	__int8 field_145;
	__int8 field_146;
	__int8 field_147;
	unsigned __int8     m_nLastWeaponDamage;
	unsigned __int8     m_nColBrightness;
	__int16             m_wCarPartModelIndex;
	// this is used for detached car parts
	unsigned __int8     m_nCarColor[4];
	// time when this object must be deleted
	unsigned __int32    m_dwRemovalTime;
	float               m_fHealth;
	// this is used for door objects
	float               m_fDoorStartAngle;
	float               m_fScale;
	CObjectInfo        *m_pObjectInfo;
	void               *m_pFire; // CFire *
	__int16 field_168;
	// this is used for detached car parts
	__int16             m_wPaintjobTxd;
	// this is used for detached car parts
	RwTexture          *m_pPaintjobTex;
	class CDummyObject *m_pDummyObject;
	// time when particles must be stopped
	unsigned __int32    m_dwTimeToStopParticles;
	float               m_fParticlesIntensity;

// class functions

// static functions
};
#pragma pack(pop)

VALIDATE_SIZE(CObject, 0x17C);