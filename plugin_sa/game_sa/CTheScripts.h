/*
    Plugin-SDK (Grand Theft Auto) header file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/
#pragma once
#include "plbase/PluginBase_SA.h"
#include "CRunningScript.h"
#include "game_sa\CPed.h"
#include "game_sa\CVehicle.h"
#include "game_sa\CObject.h"

#define VAR_CTheScripts__ScriptSpace 0xA49960

union tScriptParam
{
	int iParam;
	float fParam;
};

class PLUGIN_API CTheScripts
{
public:
	// Script space, where main.scm MAIN section is loaded.
	// Size: 200000 bytes
	static char* ScriptSpace;

	static tScriptParam *ScriptParams;
    
    static CRunningScript *&pIdleScripts;
    static CRunningScript *&pActiveScripts;

    static bool IsPedStopped(CPed* ped);
    static bool IsVehicleStopped(CVehicle* vehicle);
    static void RemoveThisPed(CPed* ped);
    static void CleanUpThisPed(CPed* ped);
    static void CleanUpThisVehicle(CVehicle* vehicle);
    static void CleanUpThisObject(CObject* object);
    static void ClearSpaceForMissionEntity(CVector const& position, CEntity* entity);
    static bool IsPlayerOnAMission();
};