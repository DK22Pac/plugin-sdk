/*
    Plugin-SDK (Grand Theft Auto 3) source file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/
#include "CRecordDataForChase.h"

PLUGIN_SOURCE_FILE

PLUGIN_VARIABLE CAutomobile *(&CRecordDataForChase::pChaseCars)[20] = *reinterpret_cast<CAutomobile *(*)[20]>(GLOBAL_ADDRESS_BY_VERSION(0x6F46A8, 0x6F46A8, 0x7047E8));
PLUGIN_VARIABLE CCarStateEachFrame *(&CRecordDataForChase::pBaseMemForCar)[20] = *reinterpret_cast<CCarStateEachFrame *(*)[20]>(GLOBAL_ADDRESS_BY_VERSION(0x70EA18, 0x70EA18, 0x71EB58));
PLUGIN_VARIABLE float &CRecordDataForChase::TimeMultiplier = *reinterpret_cast<float *>(GLOBAL_ADDRESS_BY_VERSION(0x880F88, 0x880F38, 0x891078));
PLUGIN_VARIABLE float &CRecordDataForChase::AnimTime = *reinterpret_cast<float *>(GLOBAL_ADDRESS_BY_VERSION(0x8E2A94, 0x8E2B48, 0x8F2C88));
PLUGIN_VARIABLE int &CRecordDataForChase::FId2 = *reinterpret_cast<int *>(GLOBAL_ADDRESS_BY_VERSION(0x8E2C18, 0x8E2CCC, 0x8F2E0C));
PLUGIN_VARIABLE unsigned int &CRecordDataForChase::AnimStartTime = *reinterpret_cast<unsigned int *>(GLOBAL_ADDRESS_BY_VERSION(0x8F1AEC, 0x8F1BA0, 0x901CE0));
PLUGIN_VARIABLE int &CRecordDataForChase::PositionChanges = *reinterpret_cast<int *>(GLOBAL_ADDRESS_BY_VERSION(0x8F59C8, 0x8F5A7C, 0x905BBC));
PLUGIN_VARIABLE unsigned char &CRecordDataForChase::CurrentCar = *reinterpret_cast<unsigned char *>(GLOBAL_ADDRESS_BY_VERSION(0x95CDC9, 0x95CF81, 0x96D0C1));
PLUGIN_VARIABLE unsigned char &CRecordDataForChase::Status = *reinterpret_cast<unsigned char *>(GLOBAL_ADDRESS_BY_VERSION(0x95CDCE, 0x95CF86, 0x96D0C6));

int addrof(CRecordDataForChase::CleanUpCarsForChaseScene) = ADDRESS_BY_VERSION(0x435B80, 0x435B80, 0x435B80);
int gaddrof(CRecordDataForChase::CleanUpCarsForChaseScene) = GLOBAL_ADDRESS_BY_VERSION(0x435B80, 0x435B80, 0x435B80);

void CRecordDataForChase::CleanUpCarsForChaseScene() {
    plugin::CallDynGlobal(gaddrof(CRecordDataForChase::CleanUpCarsForChaseScene));
}

int addrof(CRecordDataForChase::CleanUpChaseScene) = ADDRESS_BY_VERSION(0x4357C0, 0x4357C0, 0x4357C0);
int gaddrof(CRecordDataForChase::CleanUpChaseScene) = GLOBAL_ADDRESS_BY_VERSION(0x4357C0, 0x4357C0, 0x4357C0);

void CRecordDataForChase::CleanUpChaseScene() {
    plugin::CallDynGlobal(gaddrof(CRecordDataForChase::CleanUpChaseScene));
}

int addrof(CRecordDataForChase::GiveUsACar) = ADDRESS_BY_VERSION(0x435570, 0x435570, 0x435570);
int gaddrof(CRecordDataForChase::GiveUsACar) = GLOBAL_ADDRESS_BY_VERSION(0x435570, 0x435570, 0x435570);

void CRecordDataForChase::GiveUsACar(int modelIndex, CVector pos, float angleZ, CAutomobile **pCar, unsigned char prim, unsigned char sec) {
    plugin::CallDynGlobal<int, CVector, float, CAutomobile **, unsigned char, unsigned char>(gaddrof(CRecordDataForChase::GiveUsACar), modelIndex, pos, angleZ, pCar, prim, sec);
}

int addrof(CRecordDataForChase::Init) = ADDRESS_BY_VERSION(0x434780, 0x434780, 0x434780);
int gaddrof(CRecordDataForChase::Init) = GLOBAL_ADDRESS_BY_VERSION(0x434780, 0x434780, 0x434780);

void CRecordDataForChase::Init() {
    plugin::CallDynGlobal(gaddrof(CRecordDataForChase::Init));
}

int addrof(CRecordDataForChase::ProcessControlCars) = ADDRESS_BY_VERSION(0x435540, 0x435540, 0x435540);
int gaddrof(CRecordDataForChase::ProcessControlCars) = GLOBAL_ADDRESS_BY_VERSION(0x435540, 0x435540, 0x435540);

void CRecordDataForChase::ProcessControlCars() {
    plugin::CallDynGlobal(gaddrof(CRecordDataForChase::ProcessControlCars));
}

int addrof(CRecordDataForChase::RemoveCarFromChase) = ADDRESS_BY_VERSION(0x435BC0, 0x435BC0, 0x435BC0);
int gaddrof(CRecordDataForChase::RemoveCarFromChase) = GLOBAL_ADDRESS_BY_VERSION(0x435BC0, 0x435BC0, 0x435BC0);

void CRecordDataForChase::RemoveCarFromChase(int index) {
    plugin::CallDynGlobal<int>(gaddrof(CRecordDataForChase::RemoveCarFromChase), index);
}

int addrof(CRecordDataForChase::RestoreInfoForCar) = ADDRESS_BY_VERSION(0x435330, 0x435330, 0x435330);
int gaddrof(CRecordDataForChase::RestoreInfoForCar) = GLOBAL_ADDRESS_BY_VERSION(0x435330, 0x435330, 0x435330);

void CRecordDataForChase::RestoreInfoForCar(CAutomobile *car, CCarStateEachFrame *carState, bool stop) {
    plugin::CallDynGlobal<CAutomobile *, CCarStateEachFrame *, bool>(gaddrof(CRecordDataForChase::RestoreInfoForCar), car, carState, stop);
}

int addrof(CRecordDataForChase::RestoreInfoForMatrix) = ADDRESS_BY_VERSION(0x435260, 0x435260, 0x435260);
int gaddrof(CRecordDataForChase::RestoreInfoForMatrix) = GLOBAL_ADDRESS_BY_VERSION(0x435260, 0x435260, 0x435260);

void CRecordDataForChase::RestoreInfoForMatrix(CMatrix &matrix, CCarStateEachFrame *carState) {
    plugin::CallDynGlobal<CMatrix &, CCarStateEachFrame *>(gaddrof(CRecordDataForChase::RestoreInfoForMatrix), matrix, carState);
}

int addrof(CRecordDataForChase::SaveOrRetrieveCarPositions) = ADDRESS_BY_VERSION(0x434B20, 0x434B20, 0x434B20);
int gaddrof(CRecordDataForChase::SaveOrRetrieveCarPositions) = GLOBAL_ADDRESS_BY_VERSION(0x434B20, 0x434B20, 0x434B20);

void CRecordDataForChase::SaveOrRetrieveCarPositions() {
    plugin::CallDynGlobal(gaddrof(CRecordDataForChase::SaveOrRetrieveCarPositions));
}

int addrof(CRecordDataForChase::SaveOrRetrieveDataForThisFrame) = ADDRESS_BY_VERSION(0x4347F0, 0x4347F0, 0x4347F0);
int gaddrof(CRecordDataForChase::SaveOrRetrieveDataForThisFrame) = GLOBAL_ADDRESS_BY_VERSION(0x4347F0, 0x4347F0, 0x4347F0);

void CRecordDataForChase::SaveOrRetrieveDataForThisFrame() {
    plugin::CallDynGlobal(gaddrof(CRecordDataForChase::SaveOrRetrieveDataForThisFrame));
}

int addrof(CRecordDataForChase::SetUpCarsForChaseScene) = ADDRESS_BY_VERSION(0x435810, 0x435810, 0x435810);
int gaddrof(CRecordDataForChase::SetUpCarsForChaseScene) = GLOBAL_ADDRESS_BY_VERSION(0x435810, 0x435810, 0x435810);

void CRecordDataForChase::SetUpCarsForChaseScene() {
    plugin::CallDynGlobal(gaddrof(CRecordDataForChase::SetUpCarsForChaseScene));
}

int addrof(CRecordDataForChase::StartChaseScene) = ADDRESS_BY_VERSION(0x435690, 0x435690, 0x435690);
int gaddrof(CRecordDataForChase::StartChaseScene) = GLOBAL_ADDRESS_BY_VERSION(0x435690, 0x435690, 0x435690);

void CRecordDataForChase::StartChaseScene(float startTime) {
    plugin::CallDynGlobal<float>(gaddrof(CRecordDataForChase::StartChaseScene), startTime);
}

int addrof(CRecordDataForChase::StoreInfoForCar) = ADDRESS_BY_VERSION(0x435000, 0x435000, 0x435000);
int gaddrof(CRecordDataForChase::StoreInfoForCar) = GLOBAL_ADDRESS_BY_VERSION(0x435000, 0x435000, 0x435000);

void CRecordDataForChase::StoreInfoForCar(CAutomobile *car, CCarStateEachFrame *carState) {
    plugin::CallDynGlobal<CAutomobile *, CCarStateEachFrame *>(gaddrof(CRecordDataForChase::StoreInfoForCar), car, carState);
}

int addrof(CRecordDataForChase::TurnChaseCarIntoScriptCar) = ADDRESS_BY_VERSION(0x435C00, 0x435C00, 0x435C00);
int gaddrof(CRecordDataForChase::TurnChaseCarIntoScriptCar) = GLOBAL_ADDRESS_BY_VERSION(0x435C00, 0x435C00, 0x435C00);

CVehicle *CRecordDataForChase::TurnChaseCarIntoScriptCar(int index) {
    return plugin::CallAndReturnDynGlobal<CVehicle *, int>(gaddrof(CRecordDataForChase::TurnChaseCarIntoScriptCar), index);
}

int addrof(RemoveUnusedCollision) = ADDRESS_BY_VERSION(0x435630, 0x435630, 0x435630);
int gaddrof(RemoveUnusedCollision) = GLOBAL_ADDRESS_BY_VERSION(0x435630, 0x435630, 0x435630);

void RemoveUnusedCollision() {
    plugin::CallDynGlobal(gaddrof(RemoveUnusedCollision));
}
