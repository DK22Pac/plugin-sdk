#pragma once

#include "plbase/PluginBase_SA.h"
#include "CPlayerInfo.h"
#include "CColPoint.h"
#include "CEntity.h"
#include "CStoredCollPoly.h"

class PLUGIN_API CWorld
{
public:
	// Player data array for 2 players.
	static CPlayerInfo *Players;
	// Current player we playing.
	static int8_t& PlayerInFocus;
	// entity to ignore
	static CEntity *&pIgnoreEntity;
	static Bool ProcessLineOfSight(CVector  const& origin, CVector  const& target, CColPoint &colPoint, 
		CEntity *&colEntity, bool buildings, bool vehicles, bool peds, bool objects, bool dummies, 
		bool seeThrough, bool cameraObjects, bool shootThrough);
	static float FindGroundZForCoord(float x, float y);

    static bool ProcessVerticalLine(CVector const& origin, float distance, CColPoint &colPoint, CEntity *&colEntity,
        bool buildings, bool vehicles, bool peds, bool objects, bool dummies, bool seeThrough, CStoredCollPoly *poly);

    // add entity to game world
    static void Add(CEntity *entity);
    // remove entity from game world
    static void Remove(CEntity *entity);
};