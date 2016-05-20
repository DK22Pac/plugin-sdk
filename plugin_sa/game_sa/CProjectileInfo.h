#pragma once
#include "plbase/PluginBase.h"
#include "CEntity.h"
#include "eWeaponType.h"

#pragma pack(push, 1)
class PLUGIN_API CProjectileInfo
{
public:
	eWeaponType m_eWeaponType;
	CEntity *m_pLauncher;
	CEntity *m_pTarget;
	int m_dwTimeToDestroy;
	bool m_bState;
	char _pad[3];
	CVector m_vLastPos;
	class FxSystem_c *m_pParticle;

	static void CreateExplosion(CEntity* creator, eWeaponType weaponType, CVector pos);
	//static void AddProjectile(CEntity* entity, eWeaponType weaponType, CVector, float fSpeedMulti, CVector*, CEntity* targetEntity);
};
#pragma pack(pop)
extern PLUGIN_API CProjectileInfo *ms_gaProjectileInfo;
