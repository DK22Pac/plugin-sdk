/*
    Plugin-SDK (Grand Theft Auto) header file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/
#pragma once

#include "plbase/PluginBase_SA.h"
#include "CTaskSimple.h"
#include "CVector.h"
#include "CVector2D.h"

#pragma pack(push, 1)
class CTaskSimpleUseGun : public CTaskSimple
{
public:
	char field_8;
	char field_9;
	char field_A;
	char field_B;
	char field_C;
    struct {
        unsigned char bRightHand : 1;
        unsigned char bLefttHand : 1;
    } m_nFlags;
	char field_E;
	char field_F;
	char field_10;
private:
	char _pad11[3];
public:
	CVector2D field_14;
	class CEntity *m_pTarget;
	CVector m_vecTarget;
	void *m_pAnimBlendAssociation;
	class CWeaponInfo *m_pWeaponInfo;
	short field_34;
	short field_36;
	char field_38;
	char field_39;
	char field_3A;
	char field_3B;
};
#pragma pack(pop)

VALIDATE_SIZE(CTaskSimpleUseGun, 0x3C);