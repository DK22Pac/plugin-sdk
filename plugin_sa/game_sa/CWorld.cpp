#include "CWorld.h"

CPlayerInfo *CWorld::Players = (CPlayerInfo *)0xB7CD98;
int8_t& CWorld::PlayerInFocus = *(int8_t *)0xB7CD74;
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

bool CWorld::ProcessVerticalLine(CVector const& origin, float distance, CColPoint &colPoint, CEntity *&colEntity,
    bool buildings, bool vehicles, bool peds, bool objects, bool dummies, bool seeThrough, CStoredCollPoly *poly) {
    return ((bool(__cdecl *)(CVector const&, float, CColPoint &, CEntity *&, bool, bool, bool, bool, bool, bool, 
        CStoredCollPoly *))0x5674E0)(origin, distance, colPoint, colEntity, buildings, vehicles, peds, objects,
            dummies, seeThrough, poly);
}

float CWorld::FindGroundZForCoord(float x, float y)
{
	return ((float (__cdecl *)(float, float))0x569660)(x, y);
}

void CWorld::Add(CEntity *entity) {
    ((void(__cdecl *)(CEntity *))0x563220)(entity);
}

void CWorld::Remove(CEntity *entity) {
    ((void(__cdecl *)(CEntity *))0x563280)(entity);
}