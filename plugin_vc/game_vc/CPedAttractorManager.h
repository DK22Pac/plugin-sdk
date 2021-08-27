/*
    Plugin-SDK (Grand Theft Auto Vice City) header file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/
#pragma once

#include "PluginBase.h"
#include "CPedAttractor.h"

class CVehicleToEffect;

class PLUGIN_API CPedAttractorManager {
public:
    std::vector<CPedAttractor *> vAtmAttractors;
    std::vector<CPedAttractor *> vSeatAttractors;
    std::vector<CPedAttractor *> vStopAttractors;
    std::vector<CPedAttractor *> vPizzaAttractors;
    std::vector<CPedAttractor *> vShelterAttractors;
    std::vector<CPedAttractor *> vIceCreamAttractors;
    std::vector<CVehicleToEffect> vVehicleToEffect;

    SUPPORTED_10EN_11EN_STEAM bool BroadcastArrival(CPed *ped, CPedAttractor *attr);
    SUPPORTED_10EN_11EN_STEAM bool BroadcastDeparture(CPed *ped, CPedAttractor *attr);
    SUPPORTED_10EN_11EN_STEAM bool DeRegisterPed(CPed *ped, CPedAttractor *attr);
    SUPPORTED_10EN_11EN_STEAM bool HasEmptySlot(C2dEffect const *effect);
    SUPPORTED_10EN_11EN_STEAM bool IsAtHeadOfQueue(CPed *ped, CPedAttractor *attr);
    SUPPORTED_10EN_11EN_STEAM bool IsInQueue(CPed *ped, CPedAttractor *attr);
    SUPPORTED_10EN_11EN_STEAM bool IsPedRegisteredWithEffect(CPed *ped);
    SUPPORTED_10EN_11EN_STEAM CPedAttractor *RegisterPedWithAttractor(CPed *ped, C2dEffect *effect, CMatrix const &matrix);

    SUPPORTED_10EN_11EN_STEAM static bool BroadcastArrival(CPed *ped, CPedAttractor *attr, std::vector<CPedAttractor *> &vecAttractors);
    SUPPORTED_10EN_11EN_STEAM static bool BroadcastDeparture(CPed *ped, CPedAttractor *attr, std::vector<CPedAttractor *> &vecAttractors);
    SUPPORTED_10EN_11EN_STEAM static void ComputeEffectPos(C2dEffect const *effect, CMatrix const &matrix, CVector &pos);
    SUPPORTED_10EN_11EN_STEAM static bool DeRegisterPed(CPed *ped, CPedAttractor *attr, std::vector<CPedAttractor *> &vecAttractors);
    SUPPORTED_10EN_11EN_STEAM static bool IsApproachable(C2dEffect *effect, CMatrix const &matrix, int unk, CPed *ped);
    SUPPORTED_10EN_11EN_STEAM static CPedAttractor *RegisterPed(CPed *ped, C2dEffect *effect, CMatrix const &matrix, std::vector<CPedAttractor *> &vecAttractors);
};

SUPPORTED_10EN_11EN_STEAM extern CPedAttractorManager *&pedAttrMgr;

SUPPORTED_10EN_11EN_STEAM CPedAttractorManager *GetPedAttractorManager();

VALIDATE_SIZE(CPedAttractorManager, 0x54);

#include "meta/meta.CPedAttractorManager.h"
