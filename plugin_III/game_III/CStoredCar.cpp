/*
    Plugin-SDK (Grand Theft Auto 3) source file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/
#include "CStoredCar.h"

PLUGIN_SOURCE_FILE

int addrof(CStoredCar::RestoreCar) = ADDRESS_BY_VERSION(0x427690, 0x427690, 0x427690);
int gaddrof(CStoredCar::RestoreCar) = GLOBAL_ADDRESS_BY_VERSION(0x427690, 0x427690, 0x427690);

CVehicle *CStoredCar::RestoreCar() {
    return plugin::CallMethodAndReturnDynGlobal<CVehicle *, CStoredCar *>(gaddrof(CStoredCar::RestoreCar), this);
}

int addrof(CStoredCar::StoreCar) = ADDRESS_BY_VERSION(0x4275C0, 0x4275C0, 0x4275C0);
int gaddrof(CStoredCar::StoreCar) = GLOBAL_ADDRESS_BY_VERSION(0x4275C0, 0x4275C0, 0x4275C0);

void CStoredCar::StoreCar(CVehicle *vehicle) {
    plugin::CallMethodDynGlobal<CStoredCar *, CVehicle *>(gaddrof(CStoredCar::StoreCar), this, vehicle);
}

int addrof(CStoredCar::SetExtras) = ADDRESS_BY_VERSION(0x427820, 0x427820, 0x427820);
int gaddrof(CStoredCar::SetExtras) = GLOBAL_ADDRESS_BY_VERSION(0x427820, 0x427820, 0x427820);

void CStoredCar::SetExtras(char first, char second) {
    plugin::CallDynGlobal<char, char>(gaddrof(CStoredCar::SetExtras), first, second);
}
