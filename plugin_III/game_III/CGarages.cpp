/*
    Plugin-SDK (Grand Theft Auto 3) source file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/
#include "CGarages.h"

CGarage *CGarages::aGarages = (CGarage *)0x72BCD0;
int &CGarages::BankVansCollected = *(int *)0x8F1B34;
bool &CGarages::BombsAreFree = *(bool *)0x95CD7A;
bool &CGarages::RespraysAreFree = *(bool *)0x95CD1D;
int &CGarages::CarsCollected = *(int *)0x880E18;
int &CGarages::CarTypesCollected = *(int *)0x8E286C;
int &CGarages::CrushedCarId = *(int *)0x943060;
unsigned int &CGarages::LastTimeHelpMessage = *(unsigned int *)0x8F1B58;
int &CGarages::MessageNumberInString = *(int *)0x885BA8;
char *CGarages::MessageIDString = (char *)0x878358;
int &CGarages::MessageNumberInString2 = *(int *)0x8E2C14;
unsigned int &CGarages::MessageStartTime = *(unsigned int *)0x8F2530;
unsigned int &CGarages::MessageEndTime = *(unsigned int *)0x8F597C;
unsigned int &CGarages::NumGarages = *(unsigned int *)0x8F29F4;
bool &CGarages::PlayerInGarage = *(bool *)0x95CD83;
int &CGarages::PoliceCarsCollected = *(int *)0x941444;
unsigned int &CGarages::GarageToBeTidied = *(unsigned int *)0x623570;
CStoredCar *CGarages::aCarsInSafeHouse1 = (CStoredCar *)0x6FA210;
CStoredCar *CGarages::aCarsInSafeHouse2 = (CStoredCar *)0x6FA300;
CStoredCar *CGarages::aCarsInSafeHouse3 = (CStoredCar *)0x6FA3F0;
bool &CGarages::bCamShouldBeOutside = *(bool *)0x95CDB2;

int *hGarages = (int *)0x5ECEA8;

// Converted from cdecl void CGarages::ActivateGarage(short index) 0x426C60 
void CGarages::ActivateGarage(short index) {
    plugin::Call<0x426C60, short>(index);
}

// Converted from cdecl int CGarages::AddOne(CVector pointFront,CVector pointBack,uchar type,uint vehicleModelIndex) 0x421FA0
int CGarages::AddOne(CVector pointFront, CVector pointBack, unsigned char type, unsigned int vehicleModelIndex) {
    return plugin::CallAndReturn<int, 0x421FA0, CVector, CVector, unsigned char, unsigned int>(pointFront, pointBack, type, vehicleModelIndex);
}

// Converted from cdecl bool CGarages::CameraShouldBeOutside(void) 0x427BC0 
bool CGarages::CameraShouldBeOutside() {
    return plugin::CallAndReturn<bool, 0x427BC0>();
}

// Converted from cdecl void CGarages::ChangeGarageType(short index,uchar type,uint vehicleModelIndex) 0x4222A0
void CGarages::ChangeGarageType(short index, unsigned char type, unsigned int vehicleModelIndex) {
    plugin::Call<0x4222A0, short, unsigned char, unsigned int>(index, type, vehicleModelIndex);
}

// Converted from cdecl void CGarages::CloseHideOutGaragesBeforeSave(void) 0x428130 
void CGarages::CloseHideOutGaragesBeforeSave() {
    plugin::Call<0x428130>();
}

// Converted from cdecl int CGarages::CountCarsInHideoutGarage(uchar type) 0x4281E0 
int CGarages::CountCarsInHideoutGarage(unsigned char type) {
    return plugin::CallAndReturn<int, 0x4281E0, unsigned char>(type);
}

// Converted from cdecl void CGarages::DeActivateGarage(short index) 0x426C40 
void CGarages::DeActivateGarage(short index) {
    plugin::Call<0x426C40, short>(index);
}

// Converted from cdecl float CGarages::FindDoorHeightForMI(uint vehicleModelIndex) 0x427C10
float CGarages::FindDoorHeightForMI(unsigned int vehicleModelIndex) {
    return plugin::CallAndReturn<float, 0x427C10, unsigned int>(vehicleModelIndex);
}

// Converted from cdecl int CGarages::FindMaxNumStoredCarsForGarage(uchar type) 0x428230 
int CGarages::FindMaxNumStoredCarsForGarage(unsigned char type) {
    return plugin::CallAndReturn<int, 0x428230, unsigned char>(type);
}

// Converted from cdecl void CGarages::GivePlayerDetonator(void) 0x427BD0 
void CGarages::GivePlayerDetonator() {
    plugin::Call<0x427BD0>();
}

// Converted from cdecl bool CGarages::HasCarBeenCrushed(int vehicleModelIndex) 0x4275A0
bool CGarages::HasCarBeenCrushed(int vehicleModelIndex) {
    return plugin::CallAndReturn<bool, 0x4275A0, int>(vehicleModelIndex);
}

// Converted from cdecl bool CGarages::HasCarBeenDroppedOffYet(short index) 0x426C20 
bool CGarages::HasCarBeenDroppedOffYet(short index) {
    return plugin::CallAndReturn<bool, 0x426C20, short>(index);
}

// Converted from cdecl bool CGarages::HasImportExportGarageCollectedThisCar(short index,int vehicleModelIndex) 0x426CB0
bool CGarages::HasImportExportGarageCollectedThisCar(short index, int vehicleModelIndex) {
    return plugin::CallAndReturn<bool, 0x426CB0, short, int>(index, vehicleModelIndex);
}

// Converted from cdecl bool CGarages::HasResprayHappened(short index) 0x4274F0 
bool CGarages::HasResprayHappened(short index) {
    return plugin::CallAndReturn<bool, 0x4274F0, short>(index);
}

// Converted from cdecl bool CGarages::HasThisCarBeenCollected(short index,int vehicleModelIndex) 0x426D50
bool CGarages::HasThisCarBeenCollected(short index, int vehicleModelIndex) {
    return plugin::CallAndReturn<bool, 0x426D50, short, int>(index, vehicleModelIndex);
}

// Converted from cdecl void CGarages::Init(void) 0x421C60 
void CGarages::Init() {
    plugin::Call<0x421C60>();
}

// Converted from cdecl bool CGarages::IsCarSprayable(CAutomobile *car) 0x426700 
bool CGarages::IsCarSprayable(CAutomobile* car) {
    return plugin::CallAndReturn<bool, 0x426700, CAutomobile*>(car);
}

// Converted from cdecl bool CGarages::IsGarageClosed(short index) 0x426D20 
bool CGarages::IsGarageClosed(short index) {
    return plugin::CallAndReturn<bool, 0x426D20, short>(index);
}

// Converted from cdecl bool CGarages::IsGarageOpen(short index) 0x426CF0 
bool CGarages::IsGarageOpen(short index) {
    return plugin::CallAndReturn<bool, 0x426CF0, short>(index);
}

// Converted from cdecl bool CGarages::IsModelIndexADoor(uint modelIndexDoor) 0x428D90
bool CGarages::IsModelIndexADoor(unsigned int modelIndexDoor) {
    return plugin::CallAndReturn<bool, 0x428D90, unsigned int>(modelIndexDoor);
}

// Converted from cdecl bool CGarages::IsPointInAGarageCameraZone(CVector point) 0x427AB0 
bool CGarages::IsPointInAGarageCameraZone(CVector point) {
    return plugin::CallAndReturn<bool, 0x427AB0, CVector>(point);
}

// Converted from cdecl bool CGarages::IsPointWithinAnyGarage(CVector &point) 0x428320 
bool CGarages::IsPointWithinAnyGarage(CVector& point) {
    return plugin::CallAndReturn<bool, 0x428320, CVector&>(point);
}

// Converted from cdecl bool CGarages::IsPointWithinHideOutGarage(CVector &point) 0x428260 
bool CGarages::IsPointWithinHideOutGarage(CVector& point) {
    return plugin::CallAndReturn<bool, 0x428260, CVector&>(point);
}

// Converted from cdecl bool CGarages::IsThisCarWithinGarageArea(short index,CEntity *entity) 0x427570 
bool CGarages::IsThisCarWithinGarageArea(short index, CEntity* entity) {
    return plugin::CallAndReturn<bool, 0x427570, short, CEntity*>(index, entity);
}

// Converted from cdecl void CGarages::Load(uchar *bufferPointer,uint structSize) 0x428940
void CGarages::Load(unsigned char* bufferPointer, unsigned int structSize) {
    plugin::Call<0x428940, unsigned char*, unsigned int>(bufferPointer, structSize);
}

// Converted from cdecl void CGarages::PlayerArrestedOrDied(void) 0x427F60 
void CGarages::PlayerArrestedOrDied() {
    plugin::Call<0x427F60>();
}

// Converted from cdecl void CGarages::PrintMessages(void) 0x426310 
void CGarages::PrintMessages() {
    plugin::Call<0x426310>();
}

// Converted from cdecl int CGarages::QueryCarsCollected(short index) 0x426CA0 
int CGarages::QueryCarsCollected(short index) {
    return plugin::CallAndReturn<int, 0x426CA0, short>(index);
}

// Converted from cdecl void CGarages::Save(uchar *bufferPointer,uint *structSize) 0x4284E0
void CGarages::Save(unsigned char* bufferPointer, unsigned int* structSize) {
    plugin::Call<0x4284E0, unsigned char*, unsigned int*>(bufferPointer, structSize);
}

// Converted from cdecl void CGarages::SetAllDoorsBackToOriginalHeight(void) 0x4283D0 
void CGarages::SetAllDoorsBackToOriginalHeight() {
    plugin::Call<0x4283D0>();
}

// Converted from cdecl void CGarages::SetGarageDoorToRotate(short index) 0x427510 
void CGarages::SetGarageDoorToRotate(short index) {
    plugin::Call<0x427510, short>(index);
}

// Converted from cdecl void CGarages::SetLeaveCameraForThisGarage(short index) 0x427550 
void CGarages::SetLeaveCameraForThisGarage(short index) {
    plugin::Call<0x427550, short>(index);
}

// Converted from cdecl void CGarages::SetTargetCarForMissionGarage(short index,CAutomobile *car) 0x426BD0 
void CGarages::SetTargetCarForMissionGarage(short index, CAutomobile* car) {
    plugin::Call<0x426BD0, short, CAutomobile*>(index, car);
}

// Converted from cdecl void CGarages::Shutdown(void) 0x421E10 
void CGarages::Shutdown() {
    plugin::Call<0x421E10>();
}

// Converted from cdecl void CGarages::TriggerMessage(char *text,short numberInString,ushort time,short numberInString2) 0x426B20
void CGarages::TriggerMessage(char* text, short numberInString, unsigned short time, short numberInString2) {
    plugin::Call<0x426B20, char*, short, unsigned short, short>(text, numberInString, time, numberInString2);
}

// Converted from cdecl void CGarages::Update(void) 0x421E40 
void CGarages::Update() {
    plugin::Call<0x421E40>();
}
