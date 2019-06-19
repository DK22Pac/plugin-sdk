/*
    Plugin-SDK (Grand Theft Auto 3) source file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/
#include "CPopulation.h"

unsigned int &CPopulation::MaxNumberOfPedsInUse = *(unsigned int *)0x5FA574;
float &CPopulation::PedDensityMultiplier = *(float *)0x5FA56C;
CVector *CPopulation::RegenerationFront = (CVector *)0x8F1AD4;
CVector *CPopulation::RegenerationPoint_a = (CVector *)0x8E2AA4;
CVector *CPopulation::RegenerationPoint_b = (CVector *)0x8E2A98;
CColPoint *CPopulation::aTempColPoints = (CColPoint *)0x62ED10;
bool &CPopulation::bZoneChangeHasHappened = *(bool *)0x95CD79;
int &CPopulation::m_AllRandomPedsThisType = *(int *)0x5FA570;
unsigned char &CPopulation::m_CountDownToPedsAtStart = *(unsigned char *)0x95CD4F;
bool &CPopulation::ms_bGivePedsWeapons = *(bool *)0x95CCF6;
unsigned int &CPopulation::ms_nNumCivFemale = *(unsigned int *)0x8F5F44;
unsigned int &CPopulation::ms_nNumCivMale = *(unsigned int *)0x8F2548;
unsigned int &CPopulation::ms_nNumCop = *(unsigned int *)0x885AFC;
unsigned int &CPopulation::ms_nNumDummy = *(unsigned int *)0x8F1A98;
unsigned int &CPopulation::ms_nNumEmergency = *(unsigned int *)0x94071C;
unsigned int &CPopulation::ms_nNumGang1 = *(unsigned int *)0x8F1B1C;
unsigned int &CPopulation::ms_nNumGang2 = *(unsigned int *)0x8F1B14;
unsigned int &CPopulation::ms_nNumGang3 = *(unsigned int *)0x8F1B18;
unsigned int &CPopulation::ms_nNumGang4 = *(unsigned int *)0x8F1B2C;
unsigned int &CPopulation::ms_nNumGang5 = *(unsigned int *)0x8F1B30;
unsigned int &CPopulation::ms_nNumGang6 = *(unsigned int *)0x8F1B20;
unsigned int &CPopulation::ms_nNumGang7 = *(unsigned int *)0x8F1B28;
unsigned int &CPopulation::ms_nNumGang8 = *(unsigned int *)0x8F1B0C;
unsigned int &CPopulation::ms_nNumGang9 = *(unsigned int *)0x8F1B10;
unsigned int &CPopulation::ms_nTotalCivPeds = *(unsigned int *)0x8F2C3C;
unsigned int &CPopulation::ms_nTotalGangPeds = *(unsigned int *)0x885AF0;
unsigned int &CPopulation::ms_nTotalMissionPeds = *(unsigned int *)0x8F5F70;
unsigned int &CPopulation::ms_nTotalPeds = *(unsigned int *)0x95CB50;
int(*CPopulation::ms_pPedGroups)[8] = (int(*)[8])0x6E9248;
bool &CPopulation::bTempColPoints = *(bool *)0x62F210;

// Converted from cdecl void CPopulation::Initialise(void) 0x4F3770 
void CPopulation::Initialise() {
    plugin::Call<0x4F3770>();
}

// Converted from cdecl void CPopulation::LoadPedGroups(void) 0x4F3870 
void CPopulation::LoadPedGroups() {
    plugin::Call<0x4F3870>();
}

// Converted from cdecl void CPopulation::Update(void) 0x4F39A0 
void CPopulation::Update() {
    plugin::Call<0x4F39A0>();
}

// Converted from cdecl void CPopulation::GeneratePedsAtStartOfGame(void) 0x4F3AD0 
void CPopulation::GeneratePedsAtStartOfGame() {
    plugin::Call<0x4F3AD0>();
}

// Converted from cdecl void CPopulation::ManagePopulation(void) 0x4F3B90 
void CPopulation::ManagePopulation() {
    plugin::Call<0x4F3B90>();
}

// Converted from cdecl void CPopulation::ConvertAllObjectsToDummyObjects(void) 0x4F4410 
void CPopulation::ConvertAllObjectsToDummyObjects() {
    plugin::Call<0x4F4410>();
}

// Converted from cdecl void CPopulation::ConvertToRealObject(CDummyObject *dummyObject) 0x4F4470
void CPopulation::ConvertToRealObject(CDummyObject* dummyObject) {
    plugin::Call<0x4F4470, CDummyObject*>(dummyObject);
}

// Converted from cdecl void CPopulation::ConvertToDummyObject(CObject *object) 0x4F45A0
void CPopulation::ConvertToDummyObject(CObject* object) {
    plugin::Call<0x4F45A0, CObject*>(object);
}

// Converted from cdecl bool CPopulation::TestRoomForDummyObject(CObject *object) 0x4F4690
bool CPopulation::TestRoomForDummyObject(CObject* object) {
    return plugin::CallAndReturn<bool, 0x4F4690, CObject*>(object);
}

// Converted from cdecl bool CPopulation::TestSafeForRealObject(CDummyObject *dummyObject) 0x4F4700
bool CPopulation::TestSafeForRealObject(CDummyObject* dummyObject) {
    return plugin::CallAndReturn<bool, 0x4F4700, CDummyObject*>(dummyObject);
}

// Converted from cdecl void CPopulation::AddToPopulation(float,float,float,float) 0x4F4A00 
void CPopulation::AddToPopulation(float arg0, float arg1, float arg2, float arg3) {
    plugin::Call<0x4F4A00, float, float, float, float>(arg0, arg1, arg2, arg3);
}

// Converted from cdecl CPed* CPopulation::AddPed(ePedType pedType,uint modelIndex,CVector const& posn) 0x4F5280
CPed* CPopulation::AddPed(ePedType pedType, unsigned int modelIndex, CVector const& posn) {
    return plugin::CallAndReturn<CPed*, 0x4F5280, ePedType, unsigned int, CVector const&>(pedType, modelIndex, posn);
}

// Converted from cdecl void CPopulation::RemovePed(CPed *ped) 0x4F56F0
void CPopulation::RemovePed(CPed* ped) {
    plugin::Call<0x4F56F0, CPed*>(ped);
}

// Converted from cdecl int CPopulation::ChoosePolicePedOccupation(void) 0x4F5710
int CPopulation::ChoosePolicePedOccupation() {
    return plugin::CallAndReturn<int, 0x4F5710>();
}

// Converted from cdecl int CPopulation::ChooseCivilianOccupation(int pedgrp) 0x4F5720
int CPopulation::ChooseCivilianOccupation(int pedgrp) {
    return plugin::CallAndReturn<int, 0x4F5720, int>(pedgrp);
}

// Converted from cdecl int CPopulation::ChooseGangOccupation(int gangType) 0x4F5780
int CPopulation::ChooseGangOccupation(int gangType) {
    return plugin::CallAndReturn<int, 0x4F5780, int>(gangType);
}

// Converted from cdecl CPed* CPopulation::AddPedInCar(CVehicle *vehicle) 0x4F5800
CPed* CPopulation::AddPedInCar(CVehicle* vehicle) {
    return plugin::CallAndReturn<CPed*, 0x4F5800, CVehicle*>(vehicle);
}

// Converted from cdecl void CPopulation::UpdatePedCount(ePedType pedType,uchar updateState) 0x4F5A60
void CPopulation::UpdatePedCount(ePedType pedType, unsigned char updateState) {
    plugin::Call<0x4F5A60, ePedType, unsigned char>(pedType, updateState);
}

// Converted from cdecl void CPopulation::MoveCarsAndPedsOutOfAbandonedZones(void) 0x4F5BE0 
void CPopulation::MoveCarsAndPedsOutOfAbandonedZones() {
    plugin::Call<0x4F5BE0>();
}

// Converted from cdecl void CPopulation::FindCollisionZoneForCoors(CVector *point,int *zone,eLevelName *levelName) 0x4F6010
void CPopulation::FindCollisionZoneForCoors(CVector* point, int* zone, eLevelName* levelName) {
    plugin::Call<0x4F6010, CVector*, int*, eLevelName*>(point, zone, levelName);
}

// Converted from cdecl bool CPopulation::IsPointInSafeZone(CVector *point) 0x4F60C0 
bool CPopulation::IsPointInSafeZone(CVector* point) {
    return plugin::CallAndReturn<bool, 0x4F60C0, CVector*>(point);
}

// Converted from cdecl void CPopulation::FindClosestZoneForCoors(CVector *point,int *zone,eLevelName levelName,eLevelName _levelName) 0x4F6150
void CPopulation::FindClosestZoneForCoors(CVector* point, int* zone, eLevelName levelName, eLevelName _levelName) {
    plugin::Call<0x4F6150, CVector*, int*, eLevelName, eLevelName>(point, zone, levelName, _levelName);
}

// Converted from cdecl void CPopulation::DealWithZoneChange(eLevelName levelName,eLevelName _levelName,bool) 0x4F6200
void CPopulation::DealWithZoneChange(eLevelName levelName, eLevelName _levelName, bool arg2) {
    plugin::Call<0x4F6200, eLevelName, eLevelName, bool>(levelName, _levelName, arg2);
}

// Converted from cdecl float CPopulation::PedCreationDistMultiplier(void) 0x4F6410 
float CPopulation::PedCreationDistMultiplier() {
    return plugin::CallAndReturn<float, 0x4F6410>();
}
