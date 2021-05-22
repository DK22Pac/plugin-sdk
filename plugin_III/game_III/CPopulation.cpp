/*
    Plugin-SDK (Grand Theft Auto 3) source file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/
#include "CPopulation.h"

PLUGIN_SOURCE_FILE

PLUGIN_VARIABLE float &CPopulation::PedDensityMultiplier = *reinterpret_cast<float *>(GLOBAL_ADDRESS_BY_VERSION(0x5FA56C, 0x5FA354, 0x60734C));
PLUGIN_VARIABLE int &CPopulation::m_AllRandomPedsThisType = *reinterpret_cast<int *>(GLOBAL_ADDRESS_BY_VERSION(0x5FA570, 0x5FA358, 0x607350));
PLUGIN_VARIABLE int &CPopulation::MaxNumberOfPedsInUse = *reinterpret_cast<int *>(GLOBAL_ADDRESS_BY_VERSION(0x5FA574, 0x5FA35C, 0x607354));
PLUGIN_VARIABLE CColPoint(&CPopulation::aTempColPoints)[32] = *reinterpret_cast<CColPoint(*)[32]>(GLOBAL_ADDRESS_BY_VERSION(0x62ED10, 0x62ED10, 0x63ED10));
PLUGIN_VARIABLE int(&CPopulation::ms_pPedGroups)[31][8] = *reinterpret_cast<int(*)[31][8]>(GLOBAL_ADDRESS_BY_VERSION(0x6E9248, 0x6E9248, 0x6F9388));
PLUGIN_VARIABLE unsigned int &CPopulation::ms_nTotalGangPeds = *reinterpret_cast<unsigned int *>(GLOBAL_ADDRESS_BY_VERSION(0x885AF0, 0x885AA0, 0x895BE0));
PLUGIN_VARIABLE unsigned int &CPopulation::ms_nNumCop = *reinterpret_cast<unsigned int *>(GLOBAL_ADDRESS_BY_VERSION(0x885AFC, 0x885AAC, 0x895BEC));
PLUGIN_VARIABLE CVector &CPopulation::RegenerationPoint_b = *reinterpret_cast<CVector *>(GLOBAL_ADDRESS_BY_VERSION(0x8E2A98, 0x8E2B4C, 0x8F2C8C));
PLUGIN_VARIABLE CVector &CPopulation::RegenerationPoint_a = *reinterpret_cast<CVector *>(GLOBAL_ADDRESS_BY_VERSION(0x8E2AA4, 0x8E2B58, 0x8F2C98));
PLUGIN_VARIABLE unsigned int &CPopulation::ms_nNumDummy = *reinterpret_cast<unsigned int *>(GLOBAL_ADDRESS_BY_VERSION(0x8F1A98, 0x8F1B4C, 0x901C8C));
PLUGIN_VARIABLE CVector &CPopulation::RegenerationFront = *reinterpret_cast<CVector *>(GLOBAL_ADDRESS_BY_VERSION(0x8F1AD4, 0x8F1B88, 0x901CC8));
PLUGIN_VARIABLE unsigned int &CPopulation::ms_nNumGang8 = *reinterpret_cast<unsigned int *>(GLOBAL_ADDRESS_BY_VERSION(0x8F1B0C, 0x8F1BC0, 0x901D00));
PLUGIN_VARIABLE unsigned int &CPopulation::ms_nNumGang9 = *reinterpret_cast<unsigned int *>(GLOBAL_ADDRESS_BY_VERSION(0x8F1B10, 0x8F1BC4, 0x901D04));
PLUGIN_VARIABLE unsigned int &CPopulation::ms_nNumGang2 = *reinterpret_cast<unsigned int *>(GLOBAL_ADDRESS_BY_VERSION(0x8F1B14, 0x8F1BC8, 0x901D08));
PLUGIN_VARIABLE unsigned int &CPopulation::ms_nNumGang3 = *reinterpret_cast<unsigned int *>(GLOBAL_ADDRESS_BY_VERSION(0x8F1B18, 0x8F1BCC, 0x901D0C));
PLUGIN_VARIABLE unsigned int &CPopulation::ms_nNumGang1 = *reinterpret_cast<unsigned int *>(GLOBAL_ADDRESS_BY_VERSION(0x8F1B1C, 0x8F1BD0, 0x901D10));
PLUGIN_VARIABLE unsigned int &CPopulation::ms_nNumGang6 = *reinterpret_cast<unsigned int *>(GLOBAL_ADDRESS_BY_VERSION(0x8F1B20, 0x8F1BD4, 0x901D14));
PLUGIN_VARIABLE unsigned int &CPopulation::ms_nNumGang7 = *reinterpret_cast<unsigned int *>(GLOBAL_ADDRESS_BY_VERSION(0x8F1B28, 0x8F1BDC, 0x901D1C));
PLUGIN_VARIABLE unsigned int &CPopulation::ms_nNumGang4 = *reinterpret_cast<unsigned int *>(GLOBAL_ADDRESS_BY_VERSION(0x8F1B2C, 0x8F1BE0, 0x901D20));
PLUGIN_VARIABLE unsigned int &CPopulation::ms_nNumGang5 = *reinterpret_cast<unsigned int *>(GLOBAL_ADDRESS_BY_VERSION(0x8F1B30, 0x8F1BE4, 0x901D24));
PLUGIN_VARIABLE unsigned int &CPopulation::ms_nNumCivMale = *reinterpret_cast<unsigned int *>(GLOBAL_ADDRESS_BY_VERSION(0x8F2548, 0x8F25FC, 0x90273C));
PLUGIN_VARIABLE unsigned int &CPopulation::ms_nTotalCivPeds = *reinterpret_cast<unsigned int *>(GLOBAL_ADDRESS_BY_VERSION(0x8F2C3C, 0x8F2CF0, 0x902E30));
PLUGIN_VARIABLE unsigned int &CPopulation::ms_nNumCivFemale = *reinterpret_cast<unsigned int *>(GLOBAL_ADDRESS_BY_VERSION(0x8F5F44, 0x8F5FF8, 0x906138));
PLUGIN_VARIABLE unsigned int &CPopulation::ms_nTotalMissionPeds = *reinterpret_cast<unsigned int *>(GLOBAL_ADDRESS_BY_VERSION(0x8F5F70, 0x8F6024, 0x906164));
PLUGIN_VARIABLE unsigned int &CPopulation::ms_nNumEmergency = *reinterpret_cast<unsigned int *>(GLOBAL_ADDRESS_BY_VERSION(0x94071C, 0x9408D4, 0x950A14));
PLUGIN_VARIABLE unsigned int &CPopulation::ms_nTotalPeds = *reinterpret_cast<unsigned int *>(GLOBAL_ADDRESS_BY_VERSION(0x95CB50, 0x95CD08, 0x96CE48));
PLUGIN_VARIABLE bool &CPopulation::ms_bGivePedsWeapons = *reinterpret_cast<bool *>(GLOBAL_ADDRESS_BY_VERSION(0x95CCF6, 0x95CEAE, 0x96CFEE));
PLUGIN_VARIABLE char &CPopulation::m_CountDownToPedsAtStart = *reinterpret_cast<char *>(GLOBAL_ADDRESS_BY_VERSION(0x95CD4F, 0x95CF07, 0x96D047));
PLUGIN_VARIABLE bool &CPopulation::bZoneChangeHasHappened = *reinterpret_cast<bool *>(GLOBAL_ADDRESS_BY_VERSION(0x95CD79, 0x95CF31, 0x96D071));
PLUGIN_VARIABLE RegenerationPoint(&aSafeZones)[8] = *reinterpret_cast<RegenerationPoint(*)[8]>(GLOBAL_ADDRESS_BY_VERSION(0x5FA578, 0x5FA360, 0x607358));

int addrof(CPopulation::AddPed) = ADDRESS_BY_VERSION(0x4F5280, 0x4F5330, 0x4F52C0);
int gaddrof(CPopulation::AddPed) = GLOBAL_ADDRESS_BY_VERSION(0x4F5280, 0x4F5330, 0x4F52C0);

CPed *CPopulation::AddPed(ePedType pedType, unsigned int modelIndexOrCopType, CVector const &coors) {
    return plugin::CallAndReturnDynGlobal<CPed *, ePedType, unsigned int, CVector const &>(gaddrof(CPopulation::AddPed), pedType, modelIndexOrCopType, coors);
}

int addrof(CPopulation::AddPedInCar) = ADDRESS_BY_VERSION(0x4F5800, 0x4F58B0, 0x4F5840);
int gaddrof(CPopulation::AddPedInCar) = GLOBAL_ADDRESS_BY_VERSION(0x4F5800, 0x4F58B0, 0x4F5840);

CPed *CPopulation::AddPedInCar(CVehicle *vehicle) {
    return plugin::CallAndReturnDynGlobal<CPed *, CVehicle *>(gaddrof(CPopulation::AddPedInCar), vehicle);
}

int addrof(CPopulation::AddToPopulation) = ADDRESS_BY_VERSION(0x4F4A00, 0x4F4AB0, 0x4F4A40);
int gaddrof(CPopulation::AddToPopulation) = GLOBAL_ADDRESS_BY_VERSION(0x4F4A00, 0x4F4AB0, 0x4F4A40);

void CPopulation::AddToPopulation(float minDist, float maxDist, float minDistOffScreen, float maxDistOffScreen) {
    plugin::CallDynGlobal<float, float, float, float>(gaddrof(CPopulation::AddToPopulation), minDist, maxDist, minDistOffScreen, maxDistOffScreen);
}

int addrof(CPopulation::ChooseCivilianOccupation) = ADDRESS_BY_VERSION(0x4F5720, 0x4F57D0, 0x4F5760);
int gaddrof(CPopulation::ChooseCivilianOccupation) = GLOBAL_ADDRESS_BY_VERSION(0x4F5720, 0x4F57D0, 0x4F5760);

int CPopulation::ChooseCivilianOccupation(int group) {
    return plugin::CallAndReturnDynGlobal<int, int>(gaddrof(CPopulation::ChooseCivilianOccupation), group);
}

int addrof(CPopulation::ChooseGangOccupation) = ADDRESS_BY_VERSION(0x4F5780, 0x4F5830, 0x4F57C0);
int gaddrof(CPopulation::ChooseGangOccupation) = GLOBAL_ADDRESS_BY_VERSION(0x4F5780, 0x4F5830, 0x4F57C0);

int CPopulation::ChooseGangOccupation(int gangId) {
    return plugin::CallAndReturnDynGlobal<int, int>(gaddrof(CPopulation::ChooseGangOccupation), gangId);
}

int addrof(CPopulation::ChoosePolicePedOccupation) = ADDRESS_BY_VERSION(0x4F5710, 0x4F57C0, 0x4F5750);
int gaddrof(CPopulation::ChoosePolicePedOccupation) = GLOBAL_ADDRESS_BY_VERSION(0x4F5710, 0x4F57C0, 0x4F5750);

eCopType CPopulation::ChoosePolicePedOccupation() {
    return plugin::CallAndReturnDynGlobal<eCopType>(gaddrof(CPopulation::ChoosePolicePedOccupation));
}

int addrof(CPopulation::ConvertAllObjectsToDummyObjects) = ADDRESS_BY_VERSION(0x4F4410, 0x4F44C0, 0x4F4450);
int gaddrof(CPopulation::ConvertAllObjectsToDummyObjects) = GLOBAL_ADDRESS_BY_VERSION(0x4F4410, 0x4F44C0, 0x4F4450);

void CPopulation::ConvertAllObjectsToDummyObjects() {
    plugin::CallDynGlobal(gaddrof(CPopulation::ConvertAllObjectsToDummyObjects));
}

int addrof(CPopulation::ConvertToDummyObject) = ADDRESS_BY_VERSION(0x4F45A0, 0x4F4650, 0x4F45E0);
int gaddrof(CPopulation::ConvertToDummyObject) = GLOBAL_ADDRESS_BY_VERSION(0x4F45A0, 0x4F4650, 0x4F45E0);

void CPopulation::ConvertToDummyObject(CObject *object) {
    plugin::CallDynGlobal<CObject *>(gaddrof(CPopulation::ConvertToDummyObject), object);
}

int addrof(CPopulation::ConvertToRealObject) = ADDRESS_BY_VERSION(0x4F4470, 0x4F4520, 0x4F44B0);
int gaddrof(CPopulation::ConvertToRealObject) = GLOBAL_ADDRESS_BY_VERSION(0x4F4470, 0x4F4520, 0x4F44B0);

void CPopulation::ConvertToRealObject(CDummyObject *dummy) {
    plugin::CallDynGlobal<CDummyObject *>(gaddrof(CPopulation::ConvertToRealObject), dummy);
}

int addrof(CPopulation::DealWithZoneChange) = ADDRESS_BY_VERSION(0x4F6200, 0x4F62B0, 0x4F6240);
int gaddrof(CPopulation::DealWithZoneChange) = GLOBAL_ADDRESS_BY_VERSION(0x4F6200, 0x4F62B0, 0x4F6240);

void CPopulation::DealWithZoneChange(eLevelName oldLevel, eLevelName newLevel, bool forceIndustrialZone) {
    plugin::CallDynGlobal<eLevelName, eLevelName, bool>(gaddrof(CPopulation::DealWithZoneChange), oldLevel, newLevel, forceIndustrialZone);
}

int addrof(CPopulation::FindClosestZoneForCoors) = ADDRESS_BY_VERSION(0x4F6150, 0x4F6200, 0x4F6190);
int gaddrof(CPopulation::FindClosestZoneForCoors) = GLOBAL_ADDRESS_BY_VERSION(0x4F6150, 0x4F6200, 0x4F6190);

void CPopulation::FindClosestZoneForCoors(CVector *coors, int *safeZoneOut, eLevelName level1, eLevelName level2) {
    plugin::CallDynGlobal<CVector *, int *, eLevelName, eLevelName>(gaddrof(CPopulation::FindClosestZoneForCoors), coors, safeZoneOut, level1, level2);
}

int addrof(CPopulation::FindCollisionZoneForCoors) = ADDRESS_BY_VERSION(0x4F6010, 0x4F60C0, 0x4F6050);
int gaddrof(CPopulation::FindCollisionZoneForCoors) = GLOBAL_ADDRESS_BY_VERSION(0x4F6010, 0x4F60C0, 0x4F6050);

void CPopulation::FindCollisionZoneForCoors(CVector *coors, int *safeZoneOut, eLevelName *levelOut) {
    plugin::CallDynGlobal<CVector *, int *, eLevelName *>(gaddrof(CPopulation::FindCollisionZoneForCoors), coors, safeZoneOut, levelOut);
}

int addrof(CPopulation::GeneratePedsAtStartOfGame) = ADDRESS_BY_VERSION(0x4F3AD0, 0x4F3B80, 0x4F3B10);
int gaddrof(CPopulation::GeneratePedsAtStartOfGame) = GLOBAL_ADDRESS_BY_VERSION(0x4F3AD0, 0x4F3B80, 0x4F3B10);

void CPopulation::GeneratePedsAtStartOfGame() {
    plugin::CallDynGlobal(gaddrof(CPopulation::GeneratePedsAtStartOfGame));
}

int addrof(CPopulation::Initialise) = ADDRESS_BY_VERSION(0x4F3770, 0x4F3820, 0x4F37B0);
int gaddrof(CPopulation::Initialise) = GLOBAL_ADDRESS_BY_VERSION(0x4F3770, 0x4F3820, 0x4F37B0);

void CPopulation::Initialise() {
    plugin::CallDynGlobal(gaddrof(CPopulation::Initialise));
}

int addrof(CPopulation::IsPointInSafeZone) = ADDRESS_BY_VERSION(0x4F60C0, 0x4F6170, 0x4F6100);
int gaddrof(CPopulation::IsPointInSafeZone) = GLOBAL_ADDRESS_BY_VERSION(0x4F60C0, 0x4F6170, 0x4F6100);

bool CPopulation::IsPointInSafeZone(CVector *coors) {
    return plugin::CallAndReturnDynGlobal<bool, CVector *>(gaddrof(CPopulation::IsPointInSafeZone), coors);
}

int addrof(CPopulation::LoadPedGroups) = ADDRESS_BY_VERSION(0x4F3870, 0x4F3920, 0x4F38B0);
int gaddrof(CPopulation::LoadPedGroups) = GLOBAL_ADDRESS_BY_VERSION(0x4F3870, 0x4F3920, 0x4F38B0);

void CPopulation::LoadPedGroups() {
    plugin::CallDynGlobal(gaddrof(CPopulation::LoadPedGroups));
}

int addrof(CPopulation::ManagePopulation) = ADDRESS_BY_VERSION(0x4F3B90, 0x4F3C40, 0x4F3BD0);
int gaddrof(CPopulation::ManagePopulation) = GLOBAL_ADDRESS_BY_VERSION(0x4F3B90, 0x4F3C40, 0x4F3BD0);

void CPopulation::ManagePopulation() {
    plugin::CallDynGlobal(gaddrof(CPopulation::ManagePopulation));
}

int addrof(CPopulation::MoveCarsAndPedsOutOfAbandonedZones) = ADDRESS_BY_VERSION(0x4F5BE0, 0x4F5C90, 0x4F5C20);
int gaddrof(CPopulation::MoveCarsAndPedsOutOfAbandonedZones) = GLOBAL_ADDRESS_BY_VERSION(0x4F5BE0, 0x4F5C90, 0x4F5C20);

void CPopulation::MoveCarsAndPedsOutOfAbandonedZones() {
    plugin::CallDynGlobal(gaddrof(CPopulation::MoveCarsAndPedsOutOfAbandonedZones));
}

int addrof(CPopulation::PedCreationDistMultiplier) = ADDRESS_BY_VERSION(0x4F6410, 0x4F64C0, 0x4F6450);
int gaddrof(CPopulation::PedCreationDistMultiplier) = GLOBAL_ADDRESS_BY_VERSION(0x4F6410, 0x4F64C0, 0x4F6450);

float CPopulation::PedCreationDistMultiplier() {
    return plugin::CallAndReturnDynGlobal<float>(gaddrof(CPopulation::PedCreationDistMultiplier));
}

int addrof(CPopulation::RemovePed) = ADDRESS_BY_VERSION(0x4F56F0, 0x4F57A0, 0x4F5730);
int gaddrof(CPopulation::RemovePed) = GLOBAL_ADDRESS_BY_VERSION(0x4F56F0, 0x4F57A0, 0x4F5730);

void CPopulation::RemovePed(CPed *ped) {
    plugin::CallDynGlobal<CPed *>(gaddrof(CPopulation::RemovePed), ped);
}

int addrof(CPopulation::TestRoomForDummyObject) = ADDRESS_BY_VERSION(0x4F4690, 0x4F4740, 0x4F46D0);
int gaddrof(CPopulation::TestRoomForDummyObject) = GLOBAL_ADDRESS_BY_VERSION(0x4F4690, 0x4F4740, 0x4F46D0);

bool CPopulation::TestRoomForDummyObject(CObject *object) {
    return plugin::CallAndReturnDynGlobal<bool, CObject *>(gaddrof(CPopulation::TestRoomForDummyObject), object);
}

int addrof(CPopulation::TestSafeForRealObject) = ADDRESS_BY_VERSION(0x4F4700, 0x4F47B0, 0x4F4740);
int gaddrof(CPopulation::TestSafeForRealObject) = GLOBAL_ADDRESS_BY_VERSION(0x4F4700, 0x4F47B0, 0x4F4740);

bool CPopulation::TestSafeForRealObject(CDummyObject *dummy) {
    return plugin::CallAndReturnDynGlobal<bool, CDummyObject *>(gaddrof(CPopulation::TestSafeForRealObject), dummy);
}

int addrof(CPopulation::Update) = ADDRESS_BY_VERSION(0x4F39A0, 0x4F3A50, 0x4F39E0);
int gaddrof(CPopulation::Update) = GLOBAL_ADDRESS_BY_VERSION(0x4F39A0, 0x4F3A50, 0x4F39E0);

void CPopulation::Update() {
    plugin::CallDynGlobal(gaddrof(CPopulation::Update));
}

int addrof(CPopulation::UpdatePedCount) = ADDRESS_BY_VERSION(0x4F5A60, 0x4F5B10, 0x4F5AA0);
int gaddrof(CPopulation::UpdatePedCount) = GLOBAL_ADDRESS_BY_VERSION(0x4F5A60, 0x4F5B10, 0x4F5AA0);

void CPopulation::UpdatePedCount(ePedType pedType, bool decrease) {
    plugin::CallDynGlobal<ePedType, bool>(gaddrof(CPopulation::UpdatePedCount), pedType, decrease);
}
