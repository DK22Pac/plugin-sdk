/*
    Plugin-SDK (Grand Theft Auto 3) header file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/
#pragma once

#include "PluginBase.h"
#include "CPed.h"
#include "ePedType.h"
#include "eLevelName.h"
#include "CDummyObject.h"

class CPopulation {
public:
    // static variables
    static unsigned int &MaxNumberOfPedsInUse; // 25
    static float &PedDensityMultiplier; // 1.0
    static CVector *RegenerationFront;
    static CVector *RegenerationPoint_a;
    static CVector *RegenerationPoint_b;
    static CColPoint *aTempColPoints; // [32]
    static bool &bZoneChangeHasHappened;
    static int &m_AllRandomPedsThisType;
    static unsigned char &m_CountDownToPedsAtStart;
    static bool &ms_bGivePedsWeapons;
    static unsigned int &ms_nNumCivFemale;
    static unsigned int &ms_nNumCivMale;
    static unsigned int &ms_nNumCop;
    static unsigned int &ms_nNumDummy;
    static unsigned int &ms_nNumEmergency;
    static unsigned int &ms_nNumGang1;
    static unsigned int &ms_nNumGang2;
    static unsigned int &ms_nNumGang3;
    static unsigned int &ms_nNumGang4;
    static unsigned int &ms_nNumGang5;
    static unsigned int &ms_nNumGang6;
    static unsigned int &ms_nNumGang7;
    static unsigned int &ms_nNumGang8;
    static unsigned int &ms_nNumGang9;
    static unsigned int &ms_nTotalCivPeds;
    static unsigned int &ms_nTotalGangPeds;
    static unsigned int &ms_nTotalMissionPeds;
    static unsigned int &ms_nTotalPeds;
    // static int m_PedGroups[31][8]
    static int(*ms_pPedGroups)[8];
    static bool &bTempColPoints;

    // static functions
    static void Initialise();
    static void LoadPedGroups();
    static void Update();
    static void GeneratePedsAtStartOfGame();
    static void ManagePopulation();
    static void ConvertAllObjectsToDummyObjects();
    static void ConvertToRealObject(CDummyObject* dummyObject);
    static void ConvertToDummyObject(CObject* object);
    static bool TestRoomForDummyObject(CObject* object);
    static bool TestSafeForRealObject(CDummyObject* dummyObject);
    static void AddToPopulation(float arg0, float arg1, float arg2, float arg3);
    static CPed* AddPed(ePedType pedType, unsigned int modelIndex, CVector const& posn);
    static void RemovePed(CPed* ped);
    static int ChoosePolicePedOccupation();
    static int ChooseCivilianOccupation(int pedgrp);
    static int ChooseGangOccupation(int gangType);
    static CPed* AddPedInCar(CVehicle* vehicle);
    static void UpdatePedCount(ePedType pedType, unsigned char updateState);
    static void MoveCarsAndPedsOutOfAbandonedZones();
    static void FindCollisionZoneForCoors(CVector* point, int* zone, eLevelName* levelName);
    static bool IsPointInSafeZone(CVector* point);
    static void FindClosestZoneForCoors(CVector* point, int* zone, eLevelName levelName, eLevelName _levelName);
    static void DealWithZoneChange(eLevelName levelName, eLevelName _levelName, bool arg2);
    static float PedCreationDistMultiplier();
};
