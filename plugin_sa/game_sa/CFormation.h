/*
    Plugin-SDK (Grand Theft Auto San Andreas) header file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/
#pragma once

#include "PluginBase.h"
#include "CPed.h"
#include "CVector.h"
#include "CPointList.h"
#include "CMatrix.h"
#include "CPedList.h"
#include "CVehicle.h"

class PLUGIN_API CFormation {
public:
    SUPPORTED_10US static int(&m_aFinalPedLinkToDestinations)[8]; // static int m_aFinalPedLinkToDestinations[8]
    SUPPORTED_10US static int(&m_aPedLinkToDestinations)[8]; // static int m_aPedLinkToDestinations[8]
    SUPPORTED_10US static CPointList &m_Destinations;
    SUPPORTED_10US static CPedList &m_DestinationPeds;
    SUPPORTED_10US static CPedList &m_Peds;

    SUPPORTED_10US static void DistributeDestinations(CPedList *pedlist);
    SUPPORTED_10US static void DistributeDestinations_CoverPoints(CPedList *pedlist, CVector pos);
    SUPPORTED_10US static void DistributeDestinations_PedsToAttack(CPedList *pedlist);
    SUPPORTED_10US static void FindCoverPoints(CVector pos, float radius);
    SUPPORTED_10US static void FindCoverPointsBehindBox(CPointList *pointlist, CVector Pos, CMatrix *coverEntityMatrix, CVector const *vecCenter, CVector const *vecMin, CVector const *vecMax, float radius);
    SUPPORTED_10US static signed int FindNearestAvailableDestination(CVector pos, float *pOutDistance);
    SUPPORTED_10US static void GenerateGatherDestinations(CPedList *pedList, CPed *ped);
    SUPPORTED_10US static void GenerateGatherDestinations_AroundCar(CPedList *pedlist, CVehicle *vehicle);
    SUPPORTED_10US static bool ReturnDestinationForPed(CPed *ped, CVector *pos);
    SUPPORTED_10US static int ReturnTargetPedForPed(CPed *ped, CPed **pOutTargetPed);
};

#include "meta/meta.CFormation.h"
