/*
    Plugin-SDK (Grand Theft Auto San Andreas) header file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/
#pragma once
#include "PluginBase.h"
#include "eWeaponType.h"
#include "CProjectile.h"
#include "FxSystem_c.h"

extern unsigned int MAX_PROJECTILES; // default 32

class PLUGIN_API CProjectileInfo {
public:
	unsigned int  m_nWeaponType; // see eWeaponType
	CEntity      *m_pCreator;
	CEntity      *m_pVictim;
	int           m_nDestroyTime;
	bool          m_bActive;
private:
	char _pad11[3];
public:
	CVector       m_vecLastPosn;
	FxSystem_c   *m_pFxSystem;

    static CProjectile **ms_apProjectile; // static CProjectile *ms_apProjectile[MAX_PROJECTILES]

    static void Initialise();
    static void RemoveFXSystem(unsigned char bInstantly);
    static void Shutdown();
    static CProjectileInfo* GetProjectileInfo(int infoId);
    static void RemoveNotAdd(CEntity* creator, eWeaponType weaponType, CVector posn);
    static bool AddProjectile(CEntity* creator, eWeaponType eWeaponType, CVector posn, float force, CVector* direction, CEntity* victim);
    static void RemoveDetonatorProjectiles();
    static void RemoveProjectile(CProjectileInfo* projectileInfo, CProjectile* projectileObject);
    static void Update();
    static bool IsProjectileInRange(float x1, float y1, float z1, float x2, float y2, float z2, bool bDestroy);
    static void RemoveAllProjectiles();
    static bool RemoveIfThisIsAProjectile(CObject* object);
};
VALIDATE_OFFSET(CProjectileInfo, m_nWeaponType, 0x0);
VALIDATE_OFFSET(CProjectileInfo, m_pCreator, 0x4);
VALIDATE_OFFSET(CProjectileInfo, m_pVictim, 0x8);
VALIDATE_OFFSET(CProjectileInfo, m_nDestroyTime, 0xC);
VALIDATE_OFFSET(CProjectileInfo, m_bActive, 0x10);
VALIDATE_OFFSET(CProjectileInfo, m_vecLastPosn, 0x14);
VALIDATE_OFFSET(CProjectileInfo, m_pFxSystem, 0x20);
VALIDATE_SIZE(CProjectileInfo, 0x24);

extern unsigned int MAX_PROJECTILE_INFOS; // default 32
extern CProjectileInfo *gaProjectileInfo; // CProjectileInfo gaProjectileInfo[MAX_PROJECTILE_INFOS]