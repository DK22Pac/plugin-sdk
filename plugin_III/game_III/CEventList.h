/*
    Plugin-SDK (Grand Theft Auto 3) header file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/
#pragma once

#include "PluginBase.h"
#include "eEventType.h"
#include "eEventEntity.h"
#include "CPed.h"
#include "eEventStatus.h"
#include "CEntity.h"

class PLUGIN_API CEventList {
public:
    SUPPORTED_10EN_11EN_STEAM static int &ms_nFirstFreeSlotIndex;

    SUPPORTED_10EN_11EN_STEAM static void ClearEvent(int event);
    SUPPORTED_10EN_11EN_STEAM static bool FindClosestEvent(eEventType type, CVector pos, int *event);
    SUPPORTED_10EN_11EN_STEAM static bool GetEvent(eEventType type, int *event);
    SUPPORTED_10EN_11EN_STEAM static void Initialise();
    SUPPORTED_10EN_11EN_STEAM static void RegisterEvent(eEventType type, eEventEntity entityType, CEntity *entity, CPed *criminal, int time);
    SUPPORTED_10EN_11EN_STEAM static void RegisterEvent(eEventType type, CVector pos, int time);
    SUPPORTED_10EN_11EN_STEAM static void ReportCrimeForEvent(eEventType type, int crimeId, bool bPoliceDontReallyCare);
    SUPPORTED_10EN_11EN_STEAM static void Update();
};

class PLUGIN_API CEvent {
    PLUGIN_NO_DEFAULT_CONSTRUCTION(CEvent)

public:
    eEventType m_nType;
    eEventEntity m_nEntityType;
    int m_nVictimIndex;
    CPed *m_pCriminal;
    CVector m_vecPos;
    unsigned int m_nExpiryTime;
    eEventStatus m_nStatus;
};

SUPPORTED_10EN_11EN_STEAM extern CEvent(&gaEvent)[64]; // CEvent gaEvent[64]

VALIDATE_SIZE(CEvent, 0x24);

#include "meta/meta.CEventList.h"
