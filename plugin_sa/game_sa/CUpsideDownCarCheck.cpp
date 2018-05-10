/*
    Plugin-SDK (Grand Theft Auto San Andreas) source file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/
#include "CUpsideDownCarCheck.h"

PLUGIN_SOURCE_FILE

int addrof(CUpsideDownCarCheck::AddCarToCheck) = ADDRESS_BY_VERSION(0x4638D0, 0, 0, 0, 0, 0);
int gaddrof(CUpsideDownCarCheck::AddCarToCheck) = GLOBAL_ADDRESS_BY_VERSION(0x4638D0, 0, 0, 0, 0, 0);

void CUpsideDownCarCheck::AddCarToCheck(int carHandle) {
    plugin::CallMethodDynGlobal<CUpsideDownCarCheck *, int>(gaddrof(CUpsideDownCarCheck::AddCarToCheck), this, carHandle);
}

int addrof(CUpsideDownCarCheck::AreAnyCarsUpsideDown) = ADDRESS_BY_VERSION(0x4638A0, 0, 0, 0, 0, 0);
int gaddrof(CUpsideDownCarCheck::AreAnyCarsUpsideDown) = GLOBAL_ADDRESS_BY_VERSION(0x4638A0, 0, 0, 0, 0, 0);

bool CUpsideDownCarCheck::AreAnyCarsUpsideDown() {
    return plugin::CallMethodAndReturnDynGlobal<bool, CUpsideDownCarCheck *>(gaddrof(CUpsideDownCarCheck::AreAnyCarsUpsideDown), this);
}

int addrof(CUpsideDownCarCheck::HasCarBeenUpsideDownForAWhile) = ADDRESS_BY_VERSION(0x463940, 0, 0, 0, 0, 0);
int gaddrof(CUpsideDownCarCheck::HasCarBeenUpsideDownForAWhile) = GLOBAL_ADDRESS_BY_VERSION(0x463940, 0, 0, 0, 0, 0);

char CUpsideDownCarCheck::HasCarBeenUpsideDownForAWhile(int carHandle) {
    return plugin::CallMethodAndReturnDynGlobal<char, CUpsideDownCarCheck *, int>(gaddrof(CUpsideDownCarCheck::HasCarBeenUpsideDownForAWhile), this, carHandle);
}

int addrof(CUpsideDownCarCheck::Init) = ADDRESS_BY_VERSION(0x463810, 0, 0, 0, 0, 0);
int gaddrof(CUpsideDownCarCheck::Init) = GLOBAL_ADDRESS_BY_VERSION(0x463810, 0, 0, 0, 0, 0);

void CUpsideDownCarCheck::Init() {
    plugin::CallMethodDynGlobal<CUpsideDownCarCheck *>(gaddrof(CUpsideDownCarCheck::Init), this);
}

int addrof(CUpsideDownCarCheck::RemoveCarFromCheck) = ADDRESS_BY_VERSION(0x463910, 0, 0, 0, 0, 0);
int gaddrof(CUpsideDownCarCheck::RemoveCarFromCheck) = GLOBAL_ADDRESS_BY_VERSION(0x463910, 0, 0, 0, 0, 0);

void CUpsideDownCarCheck::RemoveCarFromCheck(int carHandle) {
    plugin::CallMethodDynGlobal<CUpsideDownCarCheck *, int>(gaddrof(CUpsideDownCarCheck::RemoveCarFromCheck), this, carHandle);
}

int addrof(CUpsideDownCarCheck::UpdateTimers) = ADDRESS_BY_VERSION(0x4655E0, 0, 0, 0, 0, 0);
int gaddrof(CUpsideDownCarCheck::UpdateTimers) = GLOBAL_ADDRESS_BY_VERSION(0x4655E0, 0, 0, 0, 0, 0);

void CUpsideDownCarCheck::UpdateTimers() {
    plugin::CallMethodDynGlobal<CUpsideDownCarCheck *>(gaddrof(CUpsideDownCarCheck::UpdateTimers), this);
}

int addrof_o(CUpsideDownCarCheck::IsCarUpsideDown, bool (*)(CVehicle *)) = ADDRESS_BY_VERSION(0x463830, 0, 0, 0, 0, 0);
int gaddrof_o(CUpsideDownCarCheck::IsCarUpsideDown, bool (*)(CVehicle *)) = GLOBAL_ADDRESS_BY_VERSION(0x463830, 0, 0, 0, 0, 0);

bool CUpsideDownCarCheck::IsCarUpsideDown(CVehicle *pVehicle) {
    return plugin::CallAndReturnDynGlobal<bool, CVehicle *>(gaddrof_o(CUpsideDownCarCheck::IsCarUpsideDown, bool (*)(CVehicle *)), pVehicle);
}

int addrof_o(CUpsideDownCarCheck::IsCarUpsideDown, bool (*)(int)) = ADDRESS_BY_VERSION(0x4655A0, 0, 0, 0, 0, 0);
int gaddrof_o(CUpsideDownCarCheck::IsCarUpsideDown, bool (*)(int)) = GLOBAL_ADDRESS_BY_VERSION(0x4655A0, 0, 0, 0, 0, 0);

bool CUpsideDownCarCheck::IsCarUpsideDown(int carhandle) {
    return plugin::CallAndReturnDynGlobal<bool, int>(gaddrof_o(CUpsideDownCarCheck::IsCarUpsideDown, bool (*)(int)), carhandle);
}
