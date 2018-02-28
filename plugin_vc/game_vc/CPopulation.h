/*
Plugin-SDK (Grand Theft Auto Vice City) header file
Authors: GTA Community. See more here
https://github.com/DK22Pac/plugin-sdk
Do not delete this comment block. Respect others' work!
*/
#pragma once
#include "PluginBase.h"
#include "CPed.h"
#include "CDummy.h"
#include "CDummyObject.h"
#include "ePedType.h"

class CPopulation {
public:
    // static variables
    static int                       & m_AllRandomPedsThisType;
    static unsigned int              & MaxNumberOfPedsInUse;
    static unsigned char             & m_CountDownToPedsAtStart;
    static unsigned int              & ms_nTotalPeds;
    static unsigned int              & ms_nTotalCivPeds;
    static unsigned int              & ms_nTotalGangPeds;
    static unsigned int              & ms_nTotalCarPassengerPeds;
    static unsigned int              & ms_nTotalMissionPeds;
    static unsigned int              & ms_nNumCivMale;
    static unsigned int              & ms_nNumCivFemale;
    static unsigned int              & ms_nNumCop;
    static unsigned int              & ms_nNumEmergency;
    static unsigned int              & ms_nNumGang1;
    static unsigned int              & ms_nNumGang2;
    static unsigned int              & ms_nNumGang3;
    static unsigned int              & ms_nNumGang4;
    static unsigned int              & ms_nNumGang5;
    static unsigned int              & ms_nNumGang6;
    static unsigned int              & ms_nNumGang7;
    static unsigned int              & ms_nNumGang8;
    static unsigned int              & ms_nNumGang9;
    static unsigned int              & ms_nNumDummy;
    static float                     & PedDensityMultiplier;
    static bool                      & bZoneChangeHasHappened;
    static unsigned int              & NumMiamiViceCops;

    // static functions
    static CPed* AddDeadPedInFrontOfCar(CVector const& posn, CVehicle* vehicle);
    static CPed* AddPed(ePedType pedType, unsigned int modelIndex, CVector const& posn, int arg3);
    // Creates ped in a vehicle
    static CPed* AddPedInCar(CVehicle* vehicle, bool driver);
    static void AddToPopulation(float arg0, float arg1, float arg2, float arg3);
    static bool CanJeerAtStripper(int modelIndex);
    static bool CanSolicitPlayerInCar(int modelIndex);
    // returns false
    static bool CanSolicitPlayerOnFoot(int modelIndex);
    static void ChooseCivilianCoupleOccupations(int arg0, int& arg1, int& arg2);
    static int ChooseCivilianOccupation(int arg0);
    static int ChooseNextCivilianOccupation(int arg0);
    static void ConvertAllObjectsToDummyObjects();
    static void ConvertToDummyObject(CObject* object);
    static void ConvertToRealObject(CDummyObject* dummyObject);
    static void GeneratePedsAtStartOfGame();
    // init variables at game init and reinit
    static void Initialise();
    // is model female
    static bool IsFemale(int modelIndex);
    // is model male
    static bool IsMale(int modelIndex);
    // checks if surface at this point is skateable
    static bool IsSkateable(CVector const& point);
    static bool IsSunbather(int modelIndex);
    // loads pedgrp.dat
    static void LoadPedGroups();
    static void ManagePopulation();
    static void PlaceCouple(ePedType pedType1, int modelIndex1, ePedType pedType2, int modelIndex2, CVector posn);
    static void PlaceGangMembersInCircle(ePedType pedType, int modelIndex, CVector const& posn);
    static void PlaceGangMembersInFormation(ePedType pedType, int modelIndex, CVector const& posn);
    static void PlaceMallPedsAsStationaryGroup(CVector const& posn, int modelIndex);
    // CWorld::Remove(ped); delete ped;
    static void RemovePed(CPed* ped);
    static void RemovePedsIfThePoolGetsFull();
    static bool TestSafeForRealObject(CDummyObject* dummyObject);
    static void Update(bool generatePeds);
    static void UpdatePedCount(ePedType pedType, unsigned char updateState);
};