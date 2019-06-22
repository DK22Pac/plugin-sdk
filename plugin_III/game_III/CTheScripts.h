/*
    Plugin-SDK (Grand Theft Auto 3) header file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/
#pragma once

#include "PluginBase.h"
#include "CRunningScript.h"
#include "CPed.h"
#include "CVehicle.h"
#include "CObject.h"
#include "CPlayerInfo.h"

extern unsigned int MAX_SCRIPT_SPACE_SIZE; // default 260512

class CUpsideDownCarCheck;
class CStuckCarCheck;

class CTheScripts {
public:
    static tScriptVariable *ScriptParams; // [32]
    static unsigned char *ScriptSpace; // static unsigned char ScriptSpace[MAX_SCRIPT_SPACE_SIZE]
    static unsigned int &BaseBriefIdForContact;
    static unsigned short &CommandsExecuted;
    static unsigned char &CountdownToMakePlayerUnsafe;
    static unsigned char &DbgFlag;
    static unsigned char &FailCurrentMission;
    static char *IntroRectangles;
    static char *IntroTextLines;
    static int *InvisibilitySettingArray;
    static unsigned int &MissionCleanUp;
    static unsigned short &NumScriptDebugLines;
    static unsigned short &NumberOfIntroTextLinesThisFrame;
    static unsigned short &NumberOfUsedObjects;
    static unsigned int &OnAMissionFlag;
    static unsigned int &OnAMissionForContactFlag;
    static unsigned short &ScriptSphereArray;
    static unsigned short &ScriptsUpdated;
    static int &StoreVehicleIndex;
    static unsigned char &StoreVehicleWasRandom;
    static CStuckCarCheck *StuckCars;
    static CUpsideDownCarCheck *UpsideDownCars;
    static char &UseTextCommands;
    static bool &bAlreadyRunningAMissionScript;
    static bool &bUsingAMultiScriptFile;
    static CRunningScript *&pActiveScripts;
    static CRunningScript *&pIdleScripts;

    //funcs
    static void Init();
    static bool IsPedStopped(CPed* ped);
    static bool IsPlayerOnAMission();
    static bool IsPlayerStopped(CPlayerInfo* info);
    static bool IsVehicleStopped(CVehicle* vehicle);
    static void CleanUpThisPed(CPed* ped);
    static void CleanUpThisObject(CObject* object);
    static void CleanUpThisVehicle(CVehicle* vehicle);
    static void ClearSpaceForMissionEntity(CVector const& position, CEntity* entity);
};