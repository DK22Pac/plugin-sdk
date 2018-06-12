/*
    Plugin-SDK (Grand Theft Auto San Andreas) header file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/
#pragma once

#include "PluginBase.h"
#include "CPed.h"
#include "CPedGroup.h"

class PLUGIN_API CPedGroups {
public:
    SUPPORTED_10US static short(&ScriptReferenceIndex)[8]; // static short ScriptReferenceIndex[8]
    SUPPORTED_10US static char(&ms_activeGroups)[8]; // static char ms_activeGroups[8]
    SUPPORTED_10US static bool &ms_bIsPlayerOnAMission;
    SUPPORTED_10US static unsigned int &ms_iNoOfPlayerKills;
    SUPPORTED_10US static CPedGroup(&ms_groups)[8]; // static CPedGroup ms_groups[8]

    //! return the index of the added group , return -1 if failed.
    SUPPORTED_10US static signed int AddGroup();
    SUPPORTED_10US static bool AreInSameGroup(CPed *ped1, CPed *ped2);
    SUPPORTED_10US static void CleanUpForShutDown();
    SUPPORTED_10US static signed int GetGroupId(CPedGroup *pedgrp);
    SUPPORTED_10US static char *GetPedsGroup(CPed *ped);
    SUPPORTED_10US static void Init();
    SUPPORTED_10US static bool IsGroupLeader(CPed *ped);
    SUPPORTED_10US static char IsInPlayersGroup(CPed *a1);
    SUPPORTED_10US static void Process();
    SUPPORTED_10US static void RegisterKillByPlayer();
    SUPPORTED_10US static void RemoveAllFollowersFromGroup(int groupID);
    SUPPORTED_10US static void RemoveGroup(int groupID);
};

#include "meta/meta.CPedGroups.h"
