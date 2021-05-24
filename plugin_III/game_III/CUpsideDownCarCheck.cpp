/*
    Plugin-SDK (Grand Theft Auto 3) source file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/
#include "CUpsideDownCarCheck.h"

PLUGIN_SOURCE_FILE

int addrof(CUpsideDownCarCheck::AddCarToCheck) = ADDRESS_BY_VERSION(0x437FB0, 0x437FB0, 0x437FB0);
int gaddrof(CUpsideDownCarCheck::AddCarToCheck) = GLOBAL_ADDRESS_BY_VERSION(0x437FB0, 0x437FB0, 0x437FB0);

void CUpsideDownCarCheck::AddCarToCheck(int id) {
    plugin::CallMethodDynGlobal<CUpsideDownCarCheck *, int>(gaddrof(CUpsideDownCarCheck::AddCarToCheck), this, id);
}

int addrof(CUpsideDownCarCheck::AreAnyCarsUpsideDown) = ADDRESS_BY_VERSION(0x437F80, 0x437F80, 0x437F80);
int gaddrof(CUpsideDownCarCheck::AreAnyCarsUpsideDown) = GLOBAL_ADDRESS_BY_VERSION(0x437F80, 0x437F80, 0x437F80);

bool CUpsideDownCarCheck::AreAnyCarsUpsideDown() {
    return plugin::CallMethodAndReturnDynGlobal<bool, CUpsideDownCarCheck *>(gaddrof(CUpsideDownCarCheck::AreAnyCarsUpsideDown), this);
}

int addrof(CUpsideDownCarCheck::HasCarBeenUpsideDownForAWhile) = ADDRESS_BY_VERSION(0x438010, 0x438010, 0x438010);
int gaddrof(CUpsideDownCarCheck::HasCarBeenUpsideDownForAWhile) = GLOBAL_ADDRESS_BY_VERSION(0x438010, 0x438010, 0x438010);

bool CUpsideDownCarCheck::HasCarBeenUpsideDownForAWhile(int id) {
    return plugin::CallMethodAndReturnDynGlobal<bool, CUpsideDownCarCheck *, int>(gaddrof(CUpsideDownCarCheck::HasCarBeenUpsideDownForAWhile), this, id);
}

int addrof(CUpsideDownCarCheck::Init) = ADDRESS_BY_VERSION(0x437DC0, 0x437DC0, 0x437DC0);
int gaddrof(CUpsideDownCarCheck::Init) = GLOBAL_ADDRESS_BY_VERSION(0x437DC0, 0x437DC0, 0x437DC0);

void CUpsideDownCarCheck::Init() {
    plugin::CallMethodDynGlobal<CUpsideDownCarCheck *>(gaddrof(CUpsideDownCarCheck::Init), this);
}

int addrof(CUpsideDownCarCheck::IsCarUpsideDown) = ADDRESS_BY_VERSION(0x437E10, 0x437E10, 0x437E10);
int gaddrof(CUpsideDownCarCheck::IsCarUpsideDown) = GLOBAL_ADDRESS_BY_VERSION(0x437E10, 0x437E10, 0x437E10);

bool CUpsideDownCarCheck::IsCarUpsideDown(int id) {
    return plugin::CallMethodAndReturnDynGlobal<bool, CUpsideDownCarCheck *, int>(gaddrof(CUpsideDownCarCheck::IsCarUpsideDown), this, id);
}

int addrof(CUpsideDownCarCheck::RemoveCarFromCheck) = ADDRESS_BY_VERSION(0x437FE0, 0x437FE0, 0x437FE0);
int gaddrof(CUpsideDownCarCheck::RemoveCarFromCheck) = GLOBAL_ADDRESS_BY_VERSION(0x437FE0, 0x437FE0, 0x437FE0);

void CUpsideDownCarCheck::RemoveCarFromCheck(int id) {
    plugin::CallMethodDynGlobal<CUpsideDownCarCheck *, int>(gaddrof(CUpsideDownCarCheck::RemoveCarFromCheck), this, id);
}

int addrof(CUpsideDownCarCheck::UpdateTimers) = ADDRESS_BY_VERSION(0x437EE0, 0x437EE0, 0x437EE0);
int gaddrof(CUpsideDownCarCheck::UpdateTimers) = GLOBAL_ADDRESS_BY_VERSION(0x437EE0, 0x437EE0, 0x437EE0);

void CUpsideDownCarCheck::UpdateTimers() {
    plugin::CallMethodDynGlobal<CUpsideDownCarCheck *>(gaddrof(CUpsideDownCarCheck::UpdateTimers), this);
}
