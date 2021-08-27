/*
    Plugin-SDK (Grand Theft Auto Vice City) header file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/
#pragma once

#include "PluginBase.h"
#include <vector>
#include "CPed.h"

class C2dEffect;

enum PLUGIN_API ePedAttractorType : unsigned int {
    ATTRACTOR_ATM = 0,
    ATTRACTOR_SEAT = 1,
    ATTRACTOR_STOP = 2,
    ATTRACTOR_PIZZA = 3,
    ATTRACTOR_SHELTER = 4,
    ATTRACTOR_ICECREAM = 5
};

class PLUGIN_API CPedAttractor {
    PLUGIN_NO_DEFAULT_CONSTRUCTION_VIRTUALBASE(CPedAttractor)

public:
    C2dEffect *m_p2dEffect;
    std::vector<CPed *> vApproachingQueue;
    std::vector<CPed *> vWaitingQueue;
    int m_nMaxPedsInAttractor;
    float m_fQueueDistance;
    float m_fTimeInWaitQueue;
    float m_fTimeInApproachingQueue;
    float m_fDistanceToUseAttractor;
    float m_fAcceptableHeading;
    float m_fMaxPositionDisplacement;
    float m_fMaxHeadingDisplacement;
    CVector vecEffectPos;
    CVector vecQueueDir;
    CVector vecUseDir;

    SUPPORTED_10EN_11EN_STEAM float GetHeadOfQueueWaitTime();

    // virtual function #1 (destructor)

    // virtual function #2 (not found)

    // virtual function #3 (not found)

    SUPPORTED_10EN_11EN_STEAM bool IsAtHeadOfQueue(CPed *ped);
    SUPPORTED_10EN_11EN_STEAM void ComputeAttractPos(int qid, CVector &pos);
    SUPPORTED_10EN_11EN_STEAM void ComputeAttractHeading(int qid, float &heading);
    SUPPORTED_10EN_11EN_STEAM bool BroadcastDeparture(CPed *ped);

    SUPPORTED_10EN_11EN_STEAM bool BroadcastArrival(CPed *ped);
    SUPPORTED_10EN_11EN_STEAM bool DeRegisterPed(CPed *ped);
    SUPPORTED_10EN_11EN_STEAM int GetNoOfRegisteredPeds();
    SUPPORTED_10EN_11EN_STEAM bool RegisterPed(CPed *ped);
};

VTABLE_DESC(CPedAttractor, 0x6DBF00, 8);
VALIDATE_SIZE(CPedAttractor, 0x64);

#include "meta/meta.CPedAttractor.h"
