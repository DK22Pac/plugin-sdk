/*
    Plugin-SDK (Grand Theft Auto San Andreas) source file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/
#include "CStuckCarCheck.h"

PLUGIN_SOURCE_FILE

int addrof(CStuckCarCheck::AddCarToCheck) = ADDRESS_BY_VERSION(0x465970, 0, 0, 0, 0, 0);
int gaddrof(CStuckCarCheck::AddCarToCheck) = GLOBAL_ADDRESS_BY_VERSION(0x465970, 0, 0, 0, 0, 0);

void CStuckCarCheck::AddCarToCheck(int carHandle, float distance, unsigned int time, unsigned char a5, unsigned char bStuck, unsigned char bFlipped, unsigned char bWarp, signed char pathID) {
    plugin::CallMethodDynGlobal<CStuckCarCheck *, int, float, unsigned int, unsigned char, unsigned char, unsigned char, unsigned char, signed char>(gaddrof(CStuckCarCheck::AddCarToCheck), this, carHandle, distance, time, a5, bStuck, bFlipped, bWarp, pathID);
}

int addrof(CStuckCarCheck::AttemptToWarpVehicle) = ADDRESS_BY_VERSION(0x463A60, 0, 0, 0, 0, 0);
int gaddrof(CStuckCarCheck::AttemptToWarpVehicle) = GLOBAL_ADDRESS_BY_VERSION(0x463A60, 0, 0, 0, 0, 0);

bool CStuckCarCheck::AttemptToWarpVehicle(CVehicle *vehicle, CVector *origin, float orientation) {
    return plugin::CallMethodAndReturnDynGlobal<bool, CStuckCarCheck *, CVehicle *, CVector *, float>(gaddrof(CStuckCarCheck::AttemptToWarpVehicle), this, vehicle, origin, orientation);
}

int addrof(CStuckCarCheck::ClearStuckFlagForCar) = ADDRESS_BY_VERSION(0x463C40, 0, 0, 0, 0, 0);
int gaddrof(CStuckCarCheck::ClearStuckFlagForCar) = GLOBAL_ADDRESS_BY_VERSION(0x463C40, 0, 0, 0, 0, 0);

void CStuckCarCheck::ClearStuckFlagForCar(int carHandle) {
    plugin::CallMethodDynGlobal<CStuckCarCheck *, int>(gaddrof(CStuckCarCheck::ClearStuckFlagForCar), this, carHandle);
}

int addrof(CStuckCarCheck::HasCarBeenStuckForAWhile) = ADDRESS_BY_VERSION(0x463C00, 0, 0, 0, 0, 0);
int gaddrof(CStuckCarCheck::HasCarBeenStuckForAWhile) = GLOBAL_ADDRESS_BY_VERSION(0x463C00, 0, 0, 0, 0, 0);

bool CStuckCarCheck::HasCarBeenStuckForAWhile(int carHandle) {
    return plugin::CallMethodAndReturnDynGlobal<bool, CStuckCarCheck *, int>(gaddrof(CStuckCarCheck::HasCarBeenStuckForAWhile), this, carHandle);
}

int addrof(CStuckCarCheck::Init) = ADDRESS_BY_VERSION(0x4639E0, 0, 0, 0, 0, 0);
int gaddrof(CStuckCarCheck::Init) = GLOBAL_ADDRESS_BY_VERSION(0x4639E0, 0, 0, 0, 0, 0);

void CStuckCarCheck::Init() {
    plugin::CallMethodDynGlobal<CStuckCarCheck *>(gaddrof(CStuckCarCheck::Init), this);
}

int addrof(CStuckCarCheck::IsCarInStuckCarArray) = ADDRESS_BY_VERSION(0x463C70, 0, 0, 0, 0, 0);
int gaddrof(CStuckCarCheck::IsCarInStuckCarArray) = GLOBAL_ADDRESS_BY_VERSION(0x463C70, 0, 0, 0, 0, 0);

bool CStuckCarCheck::IsCarInStuckCarArray(int carHandle) {
    return plugin::CallMethodAndReturnDynGlobal<bool, CStuckCarCheck *, int>(gaddrof(CStuckCarCheck::IsCarInStuckCarArray), this, carHandle);
}

int addrof(CStuckCarCheck::Process) = ADDRESS_BY_VERSION(0x465680, 0, 0, 0, 0, 0);
int gaddrof(CStuckCarCheck::Process) = GLOBAL_ADDRESS_BY_VERSION(0x465680, 0, 0, 0, 0, 0);

void CStuckCarCheck::Process() {
    plugin::CallMethodDynGlobal<CStuckCarCheck *>(gaddrof(CStuckCarCheck::Process), this);
}

int addrof(CStuckCarCheck::RemoveCarFromCheck) = ADDRESS_BY_VERSION(0x463B80, 0, 0, 0, 0, 0);
int gaddrof(CStuckCarCheck::RemoveCarFromCheck) = GLOBAL_ADDRESS_BY_VERSION(0x463B80, 0, 0, 0, 0, 0);

void CStuckCarCheck::RemoveCarFromCheck(int carHandle) {
    plugin::CallMethodDynGlobal<CStuckCarCheck *, int>(gaddrof(CStuckCarCheck::RemoveCarFromCheck), this, carHandle);
}

int addrof(CStuckCarCheck::ResetArrayElement) = ADDRESS_BY_VERSION(0x463970, 0, 0, 0, 0, 0);
int gaddrof(CStuckCarCheck::ResetArrayElement) = GLOBAL_ADDRESS_BY_VERSION(0x463970, 0, 0, 0, 0, 0);

void CStuckCarCheck::ResetArrayElement(unsigned short index) {
    plugin::CallMethodDynGlobal<CStuckCarCheck *, unsigned short>(gaddrof(CStuckCarCheck::ResetArrayElement), this, index);
}
