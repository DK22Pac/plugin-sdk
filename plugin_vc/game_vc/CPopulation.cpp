/*
Plugin-SDK (Grand Theft Auto Vice City) source file
Authors: GTA Community. See more here
https://github.com/DK22Pac/plugin-sdk
Do not delete this comment block. Respect others' work!
*/
#include "CPopulation.h"

int                       &CPopulation::m_AllRandomPedsThisType = *(int *)0x694DC4;
unsigned int              &CPopulation::MaxNumberOfPedsInUse = *(unsigned int *)0x694DC8;
unsigned char             &CPopulation::m_CountDownToPedsAtStart = *(unsigned char *)0xA10AE9;
unsigned int              &CPopulation::ms_nTotalPeds = *(unsigned int *)0xA1069C;
unsigned int              &CPopulation::ms_nTotalCivPeds = *(unsigned int *)0x97F284;
unsigned int              &CPopulation::ms_nTotalGangPeds = *(unsigned int *)0x94DDB8;
unsigned int              &CPopulation::ms_nTotalCarPassengerPeds = *(unsigned int *)0xA0FD3C;
unsigned int              &CPopulation::ms_nTotalMissionPeds = *(unsigned int *)0x9B5F70;
unsigned int              &CPopulation::ms_nNumCivMale = *(unsigned int *)0x978800;
unsigned int              &CPopulation::ms_nNumCivFemale = *(unsigned int *)0x9B5F50;
unsigned int              &CPopulation::ms_nNumCop = *(unsigned int *)0x94DDCC;
unsigned int              &CPopulation::ms_nNumEmergency = *(unsigned int *)0xA0D1D0;
unsigned int              &CPopulation::ms_nNumGang1 = *(unsigned int *)0x9786DC;
unsigned int              &CPopulation::ms_nNumGang2 = *(unsigned int *)0x9786D4;
unsigned int              &CPopulation::ms_nNumGang3 = *(unsigned int *)0x9786D8;
unsigned int              &CPopulation::ms_nNumGang4 = *(unsigned int *)0x978708;
unsigned int              &CPopulation::ms_nNumGang5 = *(unsigned int *)0x97870C;
unsigned int              &CPopulation::ms_nNumGang6 = *(unsigned int *)0x9786E0;
unsigned int              &CPopulation::ms_nNumGang7 = *(unsigned int *)0x9786E8;
unsigned int              &CPopulation::ms_nNumGang8 = *(unsigned int *)0x9786C8;
unsigned int              &CPopulation::ms_nNumGang9 = *(unsigned int *)0x9786CC;
unsigned int              &CPopulation::ms_nNumDummy = *(unsigned int *)0x9785F0;
float                     &CPopulation::PedDensityMultiplier = *(float *)0x694DC0;
bool                      &CPopulation::bZoneChangeHasHappened = *(bool *)0xA10B31;
unsigned int              &CPopulation::NumMiamiViceCops = *(unsigned int *)0x9753FC;

// Converted from cdecl CPed* CPopulation::AddDeadPedInFrontOfCar(CVector const& posn,CVehicle * vehicle) 0x53B180
CPed* CPopulation::AddDeadPedInFrontOfCar(CVector const& posn, CVehicle* vehicle) {
    return plugin::CallAndReturn<CPed*, 0x53B180, CVector const&, CVehicle*>(posn, vehicle);
}

// Converted from cdecl CPed* CPopulation::AddPed(ePedType pedType,uint modelIndex,CVector const& posn,int) 0x53B600
CPed* CPopulation::AddPed(ePedType pedType, unsigned int modelIndex, CVector const& posn, int arg3) {
    return plugin::CallAndReturn<CPed*, 0x53B600, ePedType, unsigned int, CVector const&, int>(pedType, modelIndex, posn, arg3);
}

// Converted from cdecl CPed* CPopulation::AddPedInCar(CVehicle * vehicle,bool driver) 0x53A8A0
CPed* CPopulation::AddPedInCar(CVehicle* vehicle, bool driver) {
    return plugin::CallAndReturn<CPed*, 0x53A8A0, CVehicle*, bool>(vehicle, driver);
}

// Converted from cdecl void CPopulation::AddToPopulation(float,float,float,float) 0x53BA80 
void CPopulation::AddToPopulation(float arg0, float arg1, float arg2, float arg3) {
    plugin::Call<0x53BA80, float, float, float, float>(arg0, arg1, arg2, arg3);
}

// Converted from cdecl bool CPopulation::CanJeerAtStripper(int modelIndex) 0x53A670
bool CPopulation::CanJeerAtStripper(int modelIndex) {
    return plugin::CallAndReturn<bool, 0x53A670, int>(modelIndex);
}

// Converted from cdecl bool CPopulation::CanSolicitPlayerInCar(int modelIndex) 0x53A6A0
bool CPopulation::CanSolicitPlayerInCar(int modelIndex) {
    return plugin::CallAndReturn<bool, 0x53A6A0, int>(modelIndex);
}

// Converted from cdecl bool CPopulation::CanSolicitPlayerOnFoot(int modelIndex) 0x53A6C0
bool CPopulation::CanSolicitPlayerOnFoot(int modelIndex) {
    return plugin::CallAndReturn<bool, 0x53A6C0, int>(modelIndex);
}

// Converted from cdecl void CPopulation::ChooseCivilianCoupleOccupations(int,int &,int &) 0x53AE90 
void CPopulation::ChooseCivilianCoupleOccupations(int arg0, int& arg1, int& arg2) {
    plugin::Call<0x53AE90, int, int&, int&>(arg0, arg1, arg2);
}

// Converted from cdecl int CPopulation::ChooseCivilianOccupation(int) 0x53B070 
int CPopulation::ChooseCivilianOccupation(int arg0) {
    return plugin::CallAndReturn<int, 0x53B070, int>(arg0);
}

// Converted from cdecl int CPopulation::ChooseNextCivilianOccupation(int) 0x53AFD0 
int CPopulation::ChooseNextCivilianOccupation(int arg0) {
    return plugin::CallAndReturn<int, 0x53AFD0, int>(arg0);
}

// Converted from cdecl void CPopulation::ConvertAllObjectsToDummyObjects(void) 0x53D430 
void CPopulation::ConvertAllObjectsToDummyObjects() {
    plugin::Call<0x53D430>();
}

// Converted from cdecl void CPopulation::ConvertToDummyObject(CObject * object) 0x53D290
void CPopulation::ConvertToDummyObject(CObject* object) {
    plugin::Call<0x53D290, CObject*>(object);
}

// Converted from cdecl void CPopulation::ConvertToRealObject(CDummyObject * dummyObject) 0x53D340
void CPopulation::ConvertToRealObject(CDummyObject* dummyObject) {
    plugin::Call<0x53D340, CDummyObject*>(dummyObject);
}

// Converted from cdecl void CPopulation::GeneratePedsAtStartOfGame(void) 0x53E3E0 
void CPopulation::GeneratePedsAtStartOfGame() {
    plugin::Call<0x53E3E0>();
}

// Converted from cdecl void CPopulation::Initialise(void) 0x53EAF0 
void CPopulation::Initialise() {
    plugin::Call<0x53EAF0>();
}

// Converted from cdecl bool CPopulation::IsFemale(int modelIndex) 0x53AD50
bool CPopulation::IsFemale(int modelIndex) {
    return plugin::CallAndReturn<bool, 0x53AD50, int>(modelIndex);
}

// Converted from cdecl bool CPopulation::IsMale(int modelIndex) 0x53ADF0
bool CPopulation::IsMale(int modelIndex) {
    return plugin::CallAndReturn<bool, 0x53ADF0, int>(modelIndex);
}

// Converted from cdecl bool CPopulation::IsSkateable(CVector const& point) 0x53ACA0
bool CPopulation::IsSkateable(CVector const& point) {
    return plugin::CallAndReturn<bool, 0x53ACA0, CVector const&>(point);
}

// Converted from cdecl bool CPopulation::IsSunbather(int modelIndex) 0x53A6F0
bool CPopulation::IsSunbather(int modelIndex) {
    return plugin::CallAndReturn<bool, 0x53A6F0, int>(modelIndex);
}

// Converted from cdecl void CPopulation::LoadPedGroups(void) 0x53E9C0 
void CPopulation::LoadPedGroups() {
    plugin::Call<0x53E9C0>();
}

// Converted from cdecl void CPopulation::ManagePopulation(void) 0x53D690 
void CPopulation::ManagePopulation() {
    plugin::Call<0x53D690>();
}

// Converted from cdecl void CPopulation::PlaceCouple(ePedType pedType1,int modelIndex1,ePedType pedType2,int modelIndex2,CVector posn) 0x5388F0
void CPopulation::PlaceCouple(ePedType pedType1, int modelIndex1, ePedType pedType2, int modelIndex2, CVector posn) {
    plugin::Call<0x5388F0, ePedType, int, ePedType, int, CVector>(pedType1, modelIndex1, pedType2, modelIndex2, posn);
}

// Converted from cdecl void CPopulation::PlaceGangMembersInCircle(ePedType pedType,int modelIndex,CVector const& posn) 0x5397F0
void CPopulation::PlaceGangMembersInCircle(ePedType pedType, int modelIndex, CVector const& posn) {
    plugin::Call<0x5397F0, ePedType, int, CVector const&>(pedType, modelIndex, posn);
}

// Converted from cdecl void CPopulation::PlaceGangMembersInFormation(ePedType pedType,int modelIndex,CVector const& posn) 0x539FC0
void CPopulation::PlaceGangMembersInFormation(ePedType pedType, int modelIndex, CVector const& posn) {
    plugin::Call<0x539FC0, ePedType, int, CVector const&>(pedType, modelIndex, posn);
}

// Converted from cdecl void CPopulation::PlaceMallPedsAsStationaryGroup(CVector const& posn,int modelIndex) 0x538E90
void CPopulation::PlaceMallPedsAsStationaryGroup(CVector const& posn, int modelIndex) {
    plugin::Call<0x538E90, CVector const&, int>(posn, modelIndex);
}

// Converted from cdecl void CPopulation::RemovePed(CPed * ped) 0x53B160
void CPopulation::RemovePed(CPed* ped) {
    plugin::Call<0x53B160, CPed*>(ped);
}

// Converted from cdecl void CPopulation::RemovePedsIfThePoolGetsFull(void) 0x53D560 
void CPopulation::RemovePedsIfThePoolGetsFull() {
    plugin::Call<0x53D560>();
}

// Converted from cdecl bool CPopulation::TestSafeForRealObject(CDummyObject * dummyObject) 0x53CF80
bool CPopulation::TestSafeForRealObject(CDummyObject* dummyObject) {
    return plugin::CallAndReturn<bool, 0x53CF80, CDummyObject*>(dummyObject);
}

// Converted from cdecl void CPopulation::Update(bool generatePeds) 0x53E5F0
void CPopulation::Update(bool generatePeds) {
    plugin::Call<0x53E5F0, bool>(generatePeds);
}

// Converted from cdecl void CPopulation::UpdatePedCount(ePedType pedType,uchar updateState) 0x53A720
void CPopulation::UpdatePedCount(ePedType pedType, unsigned char updateState) {
    plugin::Call<0x53A720, ePedType, unsigned char>(pedType, updateState);
}