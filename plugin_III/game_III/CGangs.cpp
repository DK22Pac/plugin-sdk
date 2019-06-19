/*
    Plugin-SDK (Grand Theft Auto 3) source file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/
#include "CGangs.h"

CGangInfo *CGangs::Gang = (CGangInfo*)0x6EDF78;

// Converted from cdecl void CGangs::Initialise(void) 0x4C3FB0 
void CGangs::Initialise() {
    plugin::Call<0x4C3FB0>();
}

// Converted from cdecl void CGangs::SetGangVehicleModel(eGangType gangType, eVehicleModel modelIndex) 0x4C4010
void CGangs::SetGangVehicleModel(eGangType gangType, eVehicleModel modelIndex) {
    plugin::Call<0x4C4010, eGangType, eVehicleModel>(gangType, modelIndex);
}

// Converted from cdecl void CGangs::SetGangWeapons(eGangType gangType, eWeaponType weaponOne, eWeaponType weaponTwo) 0x4C4030
void CGangs::SetGangWeapons(eGangType gangType, eWeaponType weaponOne, eWeaponType weaponTwo) {
    plugin::Call<0x4C4030, eGangType, eWeaponType, eWeaponType>(gangType, weaponOne, weaponTwo);
}

// Converted from cdecl void CGangs::SetGangPedModelOverride(eGangType gangType, ePedModel modelIndex) 0x4C4050
void CGangs::SetGangPedModelOverride(eGangType gangType, ePedModel modelIndex) {
    plugin::Call<0x4C4050, eGangType, ePedModel>(gangType, modelIndex);
}

// Converted from cdecl ePedModel CGangs::GetGangPedModelOverride(eGangType gangType) 0x4C4070
ePedModel CGangs::GetGangPedModelOverride(eGangType gangType) {
    ePedModel result;
    plugin::CallAndReturn<ePedModel, 0x4C4070, ePedModel*, eGangType>(&result, gangType);
    return result;
}

// Converted from cdecl void CGangs::SaveAllGangData(uchar *bufferPointer,uint *structSize) 0x4C4080
void CGangs::SaveAllGangData(unsigned char* bufferPointer, unsigned int* structSize) {
    plugin::Call<0x4C4080, unsigned char*, unsigned int*>(bufferPointer, structSize);
}

// Converted from cdecl void CGangs::LoadAllGangData(uchar *bufferPointer,uint structSize) 0x4C4100
void CGangs::LoadAllGangData(unsigned char* bufferPointer, unsigned int structSize) {
    plugin::Call<0x4C4100, unsigned char*, unsigned int>(bufferPointer, structSize);
}
