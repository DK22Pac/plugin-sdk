/*
Plugin-SDK (Grand Theft Auto Vice City) header file
Authors: GTA Community. See more here
https://github.com/DK22Pac/plugin-sdk
Do not delete this comment block. Respect others' work!
*/
#include "CGangs.h"

CGangs* CGangs::Gang = (CGangs*)0x7D9250;

bool* CGangs::GangAttackWithCops = (bool*)0x691DC1;


// Converted from cdecl void CGangs::SetWillAttackPlayerWithCops(ePedType pedtype,bool bAttackPlayerWithCops)	0x4EEF30
void CGangs::SetWillAttackPlayerWithCops(ePedType pedtype, bool bAttackPlayerWithCops) {
    plugin::Call<0x4EEF30, ePedType, bool>(pedtype, bAttackPlayerWithCops);
}

// Converted from cdecl void CGangs::SetGangWeapons(short gangId,int weapon1_Id,int weapon2_Id)	0x4EED70
void CGangs::SetGangWeapons(short gangId, int weapon1_Id, int weapon2_Id) {
    plugin::Call<0x4EED70, short, int, int>(gangId, weapon1_Id, weapon2_Id);
}

// Converted from cdecl void CGangs::SetGangVehicleModel(short gangId,int vehicleModelId)	0x4EEDD0
void CGangs::SetGangVehicleModel(short gangId, int vehicleModelId) {
    plugin::Call<0x4EEDD0, short, int>(gangId, vehicleModelId);
}

// Converted from cdecl void CGangs::SetGangPedModels(short gangId,int pedModel1_Id,int pedModel2_Id)	0x4EEDA0
void CGangs::SetGangPedModels(short gangId, int pedModel1_Id, int pedModel2_Id) {
    plugin::Call<0x4EEDA0, short, int, int>(gangId, pedModel1_Id, pedModel2_Id);
}

// Converted from cdecl void CGangs::SaveAllGangData(uchar * arg0,uint * arg1)	0x4EECA0
void CGangs::SaveAllGangData(unsigned char* arg0, unsigned int* arg1) {
    plugin::Call<0x4EECA0, unsigned char*, unsigned int*>(arg0, arg1);
}

// Converted from cdecl void CGangs::Initialise(void)	0x4EEDF0
void CGangs::Initialise() {
    plugin::Call<0x4EEDF0>();
}

// Converted from cdecl int CGangs::ChooseGangPedModel(short gangId)	0x4EED20
int CGangs::ChooseGangPedModel(short gangId) {
    return plugin::CallAndReturn<int, 0x4EED20, short>(gangId);
}

// Converted from cdecl bool CGangs::GetWillAttackPlayerWithCops(ePedType pedtype)	0x18BB48
bool CGangs::GetWillAttackPlayerWithCops(ePedType pedtype) {
    return plugin::CallAndReturn<bool, 0x18BB48, ePedType>(pedtype);
}