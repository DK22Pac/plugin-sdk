/*
    Plugin-SDK (Grand Theft Auto 3) source file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/
#include "CStuckCarCheck.h"

PLUGIN_SOURCE_FILE

int ctor_addr(CStuckCarCheck) = ADDRESS_BY_VERSION(0x43ED20, 0x43ED20, 0x43ED20);
int ctor_gaddr(CStuckCarCheck) = GLOBAL_ADDRESS_BY_VERSION(0x43ED20, 0x43ED20, 0x43ED20);

int addrof(CStuckCarCheck::AddCarToCheck) = ADDRESS_BY_VERSION(0x4381C0, 0x4381C0, 0x4381C0);
int gaddrof(CStuckCarCheck::AddCarToCheck) = GLOBAL_ADDRESS_BY_VERSION(0x4381C0, 0x4381C0, 0x4381C0);

void CStuckCarCheck::AddCarToCheck(int id, float radius, unsigned int time) {
    plugin::CallMethodDynGlobal<CStuckCarCheck *, int, float, unsigned int>(gaddrof(CStuckCarCheck::AddCarToCheck), this, id, radius, time);
}

int addrof(CStuckCarCheck::HasCarBeenStuckForAWhile) = ADDRESS_BY_VERSION(0x4382A0, 0x4382A0, 0x4382A0);
int gaddrof(CStuckCarCheck::HasCarBeenStuckForAWhile) = GLOBAL_ADDRESS_BY_VERSION(0x4382A0, 0x4382A0, 0x4382A0);

bool CStuckCarCheck::HasCarBeenStuckForAWhile(int id) {
    return plugin::CallMethodAndReturnDynGlobal<bool, CStuckCarCheck *, int>(gaddrof(CStuckCarCheck::HasCarBeenStuckForAWhile), this, id);
}

int addrof(CStuckCarCheck::Init) = ADDRESS_BY_VERSION(0x438050, 0x438050, 0x438050);
int gaddrof(CStuckCarCheck::Init) = GLOBAL_ADDRESS_BY_VERSION(0x438050, 0x438050, 0x438050);

void CStuckCarCheck::Init() {
    plugin::CallMethodDynGlobal<CStuckCarCheck *>(gaddrof(CStuckCarCheck::Init), this);
}

int addrof(CStuckCarCheck::Process) = ADDRESS_BY_VERSION(0x4380A0, 0x4380A0, 0x4380A0);
int gaddrof(CStuckCarCheck::Process) = GLOBAL_ADDRESS_BY_VERSION(0x4380A0, 0x4380A0, 0x4380A0);

void CStuckCarCheck::Process() {
    plugin::CallMethodDynGlobal<CStuckCarCheck *>(gaddrof(CStuckCarCheck::Process), this);
}

int addrof(CStuckCarCheck::RemoveCarFromCheck) = ADDRESS_BY_VERSION(0x438240, 0x438240, 0x438240);
int gaddrof(CStuckCarCheck::RemoveCarFromCheck) = GLOBAL_ADDRESS_BY_VERSION(0x438240, 0x438240, 0x438240);

void CStuckCarCheck::RemoveCarFromCheck(int id) {
    plugin::CallMethodDynGlobal<CStuckCarCheck *, int>(gaddrof(CStuckCarCheck::RemoveCarFromCheck), this, id);
}
