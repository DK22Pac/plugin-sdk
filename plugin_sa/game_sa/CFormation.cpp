/*
    Plugin-SDK (Grand Theft Auto San Andreas) source file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/
#include "CFormation.h"

PLUGIN_SOURCE_FILE

int(&CFormation::m_aFinalPedLinkToDestinations)[8] = *reinterpret_cast<int(*)[8]>(GLOBAL_ADDRESS_BY_VERSION(0xC1A2C0, 0, 0, 0, 0, 0));
int(&CFormation::m_aPedLinkToDestinations)[8] = *reinterpret_cast<int(*)[8]>(GLOBAL_ADDRESS_BY_VERSION(0xC1A2E0, 0, 0, 0, 0, 0));
CPointList &CFormation::m_Destinations = *reinterpret_cast<CPointList *>(GLOBAL_ADDRESS_BY_VERSION(0xC1A318, 0, 0, 0, 0, 0));
CPedList &CFormation::m_DestinationPeds = *reinterpret_cast<CPedList *>(GLOBAL_ADDRESS_BY_VERSION(0xC1A458, 0, 0, 0, 0, 0));
CPedList &CFormation::m_Peds = *reinterpret_cast<CPedList *>(GLOBAL_ADDRESS_BY_VERSION(0xC1A4D8, 0, 0, 0, 0, 0));

int addrof(CFormation::DistributeDestinations) = ADDRESS_BY_VERSION(0x69B240, 0, 0, 0, 0, 0);
int gaddrof(CFormation::DistributeDestinations) = GLOBAL_ADDRESS_BY_VERSION(0x69B240, 0, 0, 0, 0, 0);

void CFormation::DistributeDestinations(CPedList *pedlist) {
    plugin::CallDynGlobal<CPedList *>(gaddrof(CFormation::DistributeDestinations), pedlist);
}

int addrof(CFormation::DistributeDestinations_CoverPoints) = ADDRESS_BY_VERSION(0x69B5B0, 0, 0, 0, 0, 0);
int gaddrof(CFormation::DistributeDestinations_CoverPoints) = GLOBAL_ADDRESS_BY_VERSION(0x69B5B0, 0, 0, 0, 0, 0);

void CFormation::DistributeDestinations_CoverPoints(CPedList *pedlist, CVector pos) {
    plugin::CallDynGlobal<CPedList *, CVector>(gaddrof(CFormation::DistributeDestinations_CoverPoints), pedlist, pos);
}

int addrof(CFormation::DistributeDestinations_PedsToAttack) = ADDRESS_BY_VERSION(0x69B700, 0, 0, 0, 0, 0);
int gaddrof(CFormation::DistributeDestinations_PedsToAttack) = GLOBAL_ADDRESS_BY_VERSION(0x69B700, 0, 0, 0, 0, 0);

void CFormation::DistributeDestinations_PedsToAttack(CPedList *pedlist) {
    plugin::CallDynGlobal<CPedList *>(gaddrof(CFormation::DistributeDestinations_PedsToAttack), pedlist);
}

int addrof(CFormation::FindCoverPoints) = ADDRESS_BY_VERSION(0x69B860, 0, 0, 0, 0, 0);
int gaddrof(CFormation::FindCoverPoints) = GLOBAL_ADDRESS_BY_VERSION(0x69B860, 0, 0, 0, 0, 0);

void CFormation::FindCoverPoints(CVector pos, float radius) {
    plugin::CallDynGlobal<CVector, float>(gaddrof(CFormation::FindCoverPoints), pos, radius);
}

int addrof(CFormation::FindCoverPointsBehindBox) = ADDRESS_BY_VERSION(0x699FF0, 0, 0, 0, 0, 0);
int gaddrof(CFormation::FindCoverPointsBehindBox) = GLOBAL_ADDRESS_BY_VERSION(0x699FF0, 0, 0, 0, 0, 0);

void CFormation::FindCoverPointsBehindBox(CPointList *pointlist, CVector Pos, CMatrix *coverEntityMatrix, CVector const *vecCenter, CVector const *vecMin, CVector const *vecMax, float radius) {
    plugin::CallDynGlobal<CPointList *, CVector, CMatrix *, CVector const *, CVector const *, CVector const *, float>(gaddrof(CFormation::FindCoverPointsBehindBox), pointlist, Pos, coverEntityMatrix, vecCenter, vecMin, vecMax, radius);
}

int addrof(CFormation::FindNearestAvailableDestination) = ADDRESS_BY_VERSION(0x69B1B0, 0, 0, 0, 0, 0);
int gaddrof(CFormation::FindNearestAvailableDestination) = GLOBAL_ADDRESS_BY_VERSION(0x69B1B0, 0, 0, 0, 0, 0);

signed int CFormation::FindNearestAvailableDestination(CVector pos, float *pOutDistance) {
    return plugin::CallAndReturnDynGlobal<signed int, CVector, float *>(gaddrof(CFormation::FindNearestAvailableDestination), pos, pOutDistance);
}

int addrof(CFormation::GenerateGatherDestinations) = ADDRESS_BY_VERSION(0x69A620, 0, 0, 0, 0, 0);
int gaddrof(CFormation::GenerateGatherDestinations) = GLOBAL_ADDRESS_BY_VERSION(0x69A620, 0, 0, 0, 0, 0);

void CFormation::GenerateGatherDestinations(CPedList *pedList, CPed *ped) {
    plugin::CallDynGlobal<CPedList *, CPed *>(gaddrof(CFormation::GenerateGatherDestinations), pedList, ped);
}

int addrof(CFormation::GenerateGatherDestinations_AroundCar) = ADDRESS_BY_VERSION(0x69A770, 0, 0, 0, 0, 0);
int gaddrof(CFormation::GenerateGatherDestinations_AroundCar) = GLOBAL_ADDRESS_BY_VERSION(0x69A770, 0, 0, 0, 0, 0);

void CFormation::GenerateGatherDestinations_AroundCar(CPedList *pedlist, CVehicle *vehicle) {
    plugin::CallDynGlobal<CPedList *, CVehicle *>(gaddrof(CFormation::GenerateGatherDestinations_AroundCar), pedlist, vehicle);
}

int addrof(CFormation::ReturnDestinationForPed) = ADDRESS_BY_VERSION(0x699FA0, 0, 0, 0, 0, 0);
int gaddrof(CFormation::ReturnDestinationForPed) = GLOBAL_ADDRESS_BY_VERSION(0x699FA0, 0, 0, 0, 0, 0);

bool CFormation::ReturnDestinationForPed(CPed *ped, CVector *pos) {
    return plugin::CallAndReturnDynGlobal<bool, CPed *, CVector *>(gaddrof(CFormation::ReturnDestinationForPed), ped, pos);
}

int addrof(CFormation::ReturnTargetPedForPed) = ADDRESS_BY_VERSION(0x699F50, 0, 0, 0, 0, 0);
int gaddrof(CFormation::ReturnTargetPedForPed) = GLOBAL_ADDRESS_BY_VERSION(0x699F50, 0, 0, 0, 0, 0);

int CFormation::ReturnTargetPedForPed(CPed *ped, CPed **pOutTargetPed) {
    return plugin::CallAndReturnDynGlobal<int, CPed *, CPed **>(gaddrof(CFormation::ReturnTargetPedForPed), ped, pOutTargetPed);
}
