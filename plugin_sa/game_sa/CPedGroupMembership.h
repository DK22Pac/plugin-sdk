/*
    Plugin-SDK (Grand Theft Auto San Andreas) header file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/
#pragma once

#include "PluginBase.h"
#include "CPed.h"

class CPedGroup;

class PLUGIN_API CPedGroupMembership {
    PLUGIN_NO_DEFAULT_CONSTRUCTION(CPedGroupMembership)

public:
    CPedGroup *m_pPedGroup;
    CPed *m_apMembers[8]; //!< m_apMembers[7] is a leader
    float m_fMaxSeparation;

    SUPPORTED_10US static float const &ms_fMaxSeparation;
    SUPPORTED_10US static float const &ms_fPlayerGroupMaxSeparation;

    SUPPORTED_10US void AddFollower(CPed *ped);
    SUPPORTED_10US void AddMember(CPed *member, int memberID);
    SUPPORTED_10US void AppointNewLeader();
    SUPPORTED_10US int CountMembers();
    SUPPORTED_10US int CountMembersExcludingLeader();
    SUPPORTED_10US void Flush();
    //! copy constructor subfunction
    SUPPORTED_10US void From(CPedGroupMembership const *obj);
    SUPPORTED_10US CPed *GetLeader();
    SUPPORTED_10US CPed *GetMember(int memberId);
    SUPPORTED_10US bool IsFollower(CPed const *ped);
    SUPPORTED_10US bool IsLeader(CPed const *ped);
    SUPPORTED_10US bool IsMember(CPed const *ped);
    SUPPORTED_10US void Process();
    SUPPORTED_10US void RemoveAllFollowers(bool bCreatedByGameOnly);
    SUPPORTED_10US void RemoveMember(int memberID);
    SUPPORTED_10US char RemoveNFollowers(int count);
    SUPPORTED_10US void SetLeader(CPed *ped);

    SUPPORTED_10US static signed int GetObjectForPedToHold();
};

VALIDATE_SIZE(CPedGroupMembership, 0x28);

#include "meta/meta.CPedGroupMembership.h"
