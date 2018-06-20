/*
    Plugin-SDK (Grand Theft Auto San Andreas) header file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/
#pragma once

#include "PluginBase.h"
#include "CEntryExit.h"
#include "CVector.h"
#include "CVector2D.h"
#include "CEntity.h"
#include "CQuadTreeNode.h"

class PLUGIN_API CEntryExitManager {
public:
    SUPPORTED_10US static CEntryExit *(&ms_entryExitStack)[4]; // static CEntryExit *ms_entryExitStack[4]
    SUPPORTED_10US static bool &ms_bBurglaryHousesEnabled;
    SUPPORTED_10US static int &ms_oldAreaCode;
    SUPPORTED_10US static CEntity *(&ms_visibleEntityList)[32]; // static CEntity *ms_visibleEntityList[32]
    SUPPORTED_10US static int &ms_entryExitStackPosn;
    SUPPORTED_10US static bool &ms_bDisabled;
    SUPPORTED_10US static int &ms_exitEnterState;
    SUPPORTED_10US static CQuadTreeNode *&mp_QuadTree;
    SUPPORTED_10US static CEntryExit *&mp_Active;
    SUPPORTED_10US static CPool<CEntryExit> *&mp_poolEntryExits;
    SUPPORTED_10US static unsigned int &ms_numVisibleEntities;

    SUPPORTED_10US static void AddEntryExitToStack(CEntryExit *a1);
    SUPPORTED_10US static int AddOne(float entranceX, float entranceY, float entranceZ, float entranceAngle, float entranceRangeX, float entranceRangeY, int unused, float exitX, float exitY, float exitZ, float exitAngle, int area, int flags, int skyColor, int timeOn, int timeOff, int numberOfPeds, char const *name);
    SUPPORTED_10US static void DeleteOne(int index);
    SUPPORTED_10US static void EnableBurglaryHouses(bool enable);
    SUPPORTED_10US static CEntity *FindNearestDoor(CEntryExit const &entryExit, float range);
    SUPPORTED_10US static int FindNearestEntryExit(CVector2D const &position, float range, int ignoreArea);
    SUPPORTED_10US static CEntryExit *GetEntryExit(int index);
    SUPPORTED_10US static int GetEntryExitIndex(char const *name, unsigned short enabledFlags, unsigned short disabledFlags);
    SUPPORTED_10US static void GetPositionRelativeToOutsideWorld(CVector &positionInOut);
    SUPPORTED_10US static void GotoEntryExit(CEntryExit *entryExit);
    SUPPORTED_10US static void GotoEntryExitVC(char const *name);
    SUPPORTED_10US static void GotoNextEntryExit();
    SUPPORTED_10US static void GotoPreviousEntryExit();
    SUPPORTED_10US static void Init();
    SUPPORTED_10US static void LinkEntryExit(CEntryExit *entryExit);
    SUPPORTED_10US static bool Load();
    SUPPORTED_10US static void PostEntryExitsCreation();
    SUPPORTED_10US static void ResetAreaCodeForVisibleObjects();
    SUPPORTED_10US static bool Save();
    SUPPORTED_10US static void SetAreaCodeForVisibleObjects();
    SUPPORTED_10US static void SetEnabled(int index, bool enable);
    SUPPORTED_10US static void SetEnabledByName(char const *name, bool enable);
    SUPPORTED_10US static void SetEntryExitFlag(char const *name, unsigned int flag, bool enable);
    SUPPORTED_10US static void SetEntryExitFlagWithIndex(int index, unsigned int flag, bool enable);
    SUPPORTED_10US static void Shutdown();
    SUPPORTED_10US static void ShutdownForRestart();
    SUPPORTED_10US static void Update();
    SUPPORTED_10US static bool WeAreInInteriorTransition();
};

#include "meta/meta.CEntryExitManager.h"
