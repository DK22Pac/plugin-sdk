#pragma once

#include "plbase/PluginBase_SA.h"
#include "CTaskSimple.h"
#include "CVector.h"
#include "CVector2D.h"

enum eUseGunFlags : unsigned __int8
{
	USE_GUN_RIGHT_HAND = 1,
	USE_GUN_LEFT_HAND = 2
};

#pragma pack(push, 1)
class PLUGIN_API CTaskSimpleUseGun : public CTaskSimple
{
public:
	__int8 field_8;
	__int8 field_9;
	__int8 field_A;
	__int8 field_B;
	__int8 field_C;
	union {
		eUseGunFlags m_nStateFlags;
		struct {
			unsigned __int8 m_bRightHand : 1;
			unsigned __int8 m_bLefttHand : 1;
		};
	};
	__int8 field_E;
	__int8 field_F;
	__int8 field_10;
	__int8 gap_11[3];
	CVector2D field_14;
	class CEntity *m_pTarget;
	CVector m_vTarget;
	void *m_pAnimBlendAssociation;
	class CWeaponInfo *m_pWeaponInfo;
	__int16 field_34;
	__int16 field_36;
	__int8 field_38;
	__int8 field_39;
	__int8 field_3A;
	__int8 field_3B;
};
#pragma pack(pop)

//VALIDATE_SIZE(CTaskSimpleUseGun, 0x3C);