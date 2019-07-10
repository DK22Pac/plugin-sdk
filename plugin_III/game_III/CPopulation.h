/*
    Plugin-SDK (Grand Theft Auto 3) header file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/
#pragma once

#include "PluginBase.h"
#include "CDummyObject.h"
#include "CObject.h"
#include "CPed.h"
#include "ePedType.h"
#include "CVector.h"
#include "eCopType.h"
#include "CVehicle.h"
#include "eLevelName.h"
#include "CColPoint.h"

class PLUGIN_API CPopulation {
public:
    SUPPORTED_10EN_11EN_STEAM static float &PedDensityMultiplier;
    SUPPORTED_10EN_11EN_STEAM static int &m_AllRandomPedsThisType;
    SUPPORTED_10EN_11EN_STEAM static int &MaxNumberOfPedsInUse;
    SUPPORTED_10EN_11EN_STEAM static CColPoint(&aTempColPoints)[32]; // static CColPoint aTempColPoints[32]
    SUPPORTED_10EN_11EN_STEAM static int(&ms_pPedGroups)[31][8]; // static int ms_pPedGroups[31][8]
    SUPPORTED_10EN_11EN_STEAM static unsigned int &ms_nTotalGangPeds;
    SUPPORTED_10EN_11EN_STEAM static unsigned int &ms_nNumCop;
    SUPPORTED_10EN_11EN_STEAM static CVector &RegenerationPoint_b;
    SUPPORTED_10EN_11EN_STEAM static CVector &RegenerationPoint_a;
    SUPPORTED_10EN_11EN_STEAM static unsigned int &ms_nNumDummy;
    SUPPORTED_10EN_11EN_STEAM static CVector &RegenerationFront;
    SUPPORTED_10EN_11EN_STEAM static unsigned int &ms_nNumGang8;
    SUPPORTED_10EN_11EN_STEAM static unsigned int &ms_nNumGang9;
    SUPPORTED_10EN_11EN_STEAM static unsigned int &ms_nNumGang2;
    SUPPORTED_10EN_11EN_STEAM static unsigned int &ms_nNumGang3;
    SUPPORTED_10EN_11EN_STEAM static unsigned int &ms_nNumGang1;
    SUPPORTED_10EN_11EN_STEAM static unsigned int &ms_nNumGang6;
    SUPPORTED_10EN_11EN_STEAM static unsigned int &ms_nNumGang7;
    SUPPORTED_10EN_11EN_STEAM static unsigned int &ms_nNumGang4;
    SUPPORTED_10EN_11EN_STEAM static unsigned int &ms_nNumGang5;
    SUPPORTED_10EN_11EN_STEAM static unsigned int &ms_nNumCivMale;
    SUPPORTED_10EN_11EN_STEAM static unsigned int &ms_nTotalCivPeds;
    SUPPORTED_10EN_11EN_STEAM static unsigned int &ms_nNumCivFemale;
    SUPPORTED_10EN_11EN_STEAM static unsigned int &ms_nTotalMissionPeds;
    SUPPORTED_10EN_11EN_STEAM static unsigned int &ms_nNumEmergency;
    SUPPORTED_10EN_11EN_STEAM static unsigned int &ms_nTotalPeds;
    SUPPORTED_10EN_11EN_STEAM static bool &ms_bGivePedsWeapons;
    SUPPORTED_10EN_11EN_STEAM static char &m_CountDownToPedsAtStart;
    SUPPORTED_10EN_11EN_STEAM static bool &bZoneChangeHasHappened;

    SUPPORTED_10EN_11EN_STEAM static CPed *AddPed(ePedType pedType, unsigned int modelIndex, CVector *posn);
    SUPPORTED_10EN_11EN_STEAM static CPed *AddPedInCar(CVehicle *vehicle);
    SUPPORTED_10EN_11EN_STEAM static void AddToPopulation(float z1, float x2, float y2, float z2);
    SUPPORTED_10EN_11EN_STEAM static int ChooseCivilianOccupation(int index);
    SUPPORTED_10EN_11EN_STEAM static int ChooseGangOccupation(int gangType);
    SUPPORTED_10EN_11EN_STEAM static eCopType ChoosePolicePedOccupation();
    SUPPORTED_10EN_11EN_STEAM static void ConvertAllObjectsToDummyObjects();
    SUPPORTED_10EN_11EN_STEAM static void ConvertToDummyObject(CObject *object);
    SUPPORTED_10EN_11EN_STEAM static void ConvertToRealObject(CDummyObject *dummyObject);
    SUPPORTED_10EN_11EN_STEAM static void DealWithZoneChange(eLevelName levelName, eLevelName levelNameTwo, bool a3);
    SUPPORTED_10EN_11EN_STEAM static void FindClosestZoneForCoors(CVector *point, int *a2, eLevelName levelName, eLevelName _levelName);
    SUPPORTED_10EN_11EN_STEAM static void FindCollisionZoneForCoors(CVector *point, int *a2, eLevelName *levelName);
    SUPPORTED_10EN_11EN_STEAM static void GeneratePedsAtStartOfGame();
    SUPPORTED_10EN_11EN_STEAM static void Initialise();
    SUPPORTED_10EN_11EN_STEAM static bool IsPointInSafeZone(CVector *point);
    SUPPORTED_10EN_11EN_STEAM static void LoadPedGroups();
    SUPPORTED_10EN_11EN_STEAM static void ManagePopulation();
    SUPPORTED_10EN_11EN_STEAM static void MoveCarsAndPedsOutOfAbandonedZones();
    SUPPORTED_10EN_11EN_STEAM static float PedCreationDistMultiplier();
    SUPPORTED_10EN_11EN_STEAM static void RemovePed(CPed *ped);
    SUPPORTED_10EN_11EN_STEAM static bool TestRoomForDummyObject(CObject *object);
    SUPPORTED_10EN_11EN_STEAM static bool TestSafeForRealObject(CDummyObject *dummyObject);
    SUPPORTED_10EN_11EN_STEAM static void Update();
    SUPPORTED_10EN_11EN_STEAM static void UpdatePedCount(ePedType pedType, unsigned char updateState);
};

#include "meta/meta.CPopulation.h"
