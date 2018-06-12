/*
    Plugin-SDK (Grand Theft Auto San Andreas) header file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/
#pragma once

#include "PluginBase.h"
#include "CPed.h"
#include "CPedGroupMembership.h"

class PLUGIN_API CPedList {
public:
    int m_nCount;
    CPed *m_apPeds[30];

    SUPPORTED_10US void BuildListFromGroup_NoLeader(CPedGroupMembership *pedGroupMemberShip);
    SUPPORTED_10US void BuildListFromGroup_NotInCar_NoLeader(CPedGroupMembership *pedGroupMembership);
    SUPPORTED_10US void BuildListOfPedsOfPedType(int pedtype);
    SUPPORTED_10US void Empty();
    SUPPORTED_10US void ExtractPedsWithGuns(CPedList *pedlist);
    SUPPORTED_10US void FillUpHoles();
    SUPPORTED_10US void RemovePedsAttackingPedType(int pedtype);
    SUPPORTED_10US void RemovePedsThatDontListenToPlayer();
};

VALIDATE_SIZE(CPedList, 0x7C);

#include "meta/meta.CPedList.h"
