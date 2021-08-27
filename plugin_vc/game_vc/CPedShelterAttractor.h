/*
    Plugin-SDK (Grand Theft Auto Vice City) header file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/
#pragma once

#include "PluginBase.h"
#include "CPedAttractor.h"

class PLUGIN_API CPedShelterAttractor : public CPedAttractor {
    PLUGIN_NO_DEFAULT_CONSTRUCTION(CPedShelterAttractor)
public:

    SUPPORTED_10EN_11EN_STEAM static std::vector<CVector> &ms_displacements;

    // virtual function #0 (not overriden)


    // virtual function #1 (destructor)

    SUPPORTED_10EN_11EN_STEAM ePedAttractorType GetType();
    SUPPORTED_10EN_11EN_STEAM void UpdatePedStateOnDeparture(CPed *ped);
    SUPPORTED_10EN_11EN_STEAM bool IsAtHeadOfQueue(CPed *ped);
    SUPPORTED_10EN_11EN_STEAM void ComputeAttractPos(int qid, CVector &pos);
    SUPPORTED_10EN_11EN_STEAM void ComputeAttractHeading(int qid, float &heading);
    SUPPORTED_10EN_11EN_STEAM bool BroadcastDeparture(CPed *ped);

    SUPPORTED_10EN_11EN_STEAM static CVector GetDisplacement(int qid);
};

VTABLE_DESC(CPedShelterAttractor, 0x6DBE38, 8);
VALIDATE_SIZE(CPedShelterAttractor, 0x64);

#include "meta/meta.CPedShelterAttractor.h"
