#include "CWorld.h"

CPlayerInfo *CWorld::Players = (CPlayerInfo *)0xB7CD98;
Int8& CWorld::PlayerInFocus = *(Int8 *)0xB7CD74;
CEntity *&CWorld::pIgnoreEntity = *(CEntity **)0xB7CD68;

Bool CWorld::ProcessLineOfSight(CVector  const& origin, CVector  const& target, CColPoint &colPoint, 
								CEntity *&colEntity, bool buildings, bool vehicles, bool peds, 
								bool objects, bool dummies, bool seeThrough, bool cameraObjects, 
								bool shootThrough)
{
	return ((Bool (__cdecl *)(CVector  const&, CVector  const&, CColPoint &, CEntity *&, bool, bool, bool, 
		bool, bool, bool, bool, bool))0x56BA00)(origin, target, colPoint, colEntity, buildings, 
		vehicles, peds, objects, dummies, seeThrough, cameraObjects, shootThrough);
}