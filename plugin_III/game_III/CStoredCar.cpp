/*
Plugin-SDK (Grand Theft Auto 3) header file
Authors: GTA Community. See more here
https://github.com/DK22Pac/plugin-sdk
Do not delete this comment block. Respect others' work!
*/
#include "CStoredCar.h"

// Converted from thiscall CAutomobile* CStoredCar::RestoreCar(void) 0x427690
CAutomobile* CStoredCar::RestoreCar() {
    return plugin::CallMethodAndReturn<CAutomobile*, 0x427690, CStoredCar *>(this);
}

// Converted from thiscall void CStoredCar::StoreCar(CVehicle *car) 0x4275C0 
void CStoredCar::StoreCar(CVehicle* car) {
    plugin::CallMethod<0x4275C0, CStoredCar *, CVehicle*>(this, car);
}

// Converted from cdecl void CStoredCar::SetExtras(char first, char second) 0x427820
void CStoredCar::SetExtras(char first, char second) {
    plugin::Call<0x427820, char, char>(first, second);
}
