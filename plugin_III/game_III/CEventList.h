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
#include "eEventStatus.h"
#include "CPed.h"

class CEvent {
public:
    eEventType m_nType;
    eEventEntity m_nEntityType;
    int m_nVictimIndex;
    CPed *m_pCriminal;
    CVector m_vecPos;
    unsigned int m_nExpiryTime;
    eEventStatus m_nStatus;

    CEvent();
};
 
VALIDATE_SIZE(CEvent, 0x24);

extern CEvent *gaEvent; // [64]

class CEventList {
public:
    // static variables
    static int &ms_nFirstFreeSlotIndex;

    // static functions
    static void ClearEvent(int index);
    static bool FindClosestEvent(eEventType type, CVector posn, int* index);
    static bool GetEvent(eEventType type, int* index);
    static void Initialise();
    static void RegisterEvent(eEventType type, CVector posn, int time);
    static void RegisterEvent(eEventType type, eEventEntity entityType, CEntity* entity, CPed* ped, int time);
    static void ReportCrimeForEvent(eEventType type, int crimeId, bool bPoliceDontReallyCare);
    static void Update();
};
