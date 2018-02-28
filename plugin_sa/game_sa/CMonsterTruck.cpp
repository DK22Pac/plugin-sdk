/*
    Plugin-SDK (Grand Theft Auto San Andreas) source file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/
#include "CMonsterTruck.h"

float& CMonsterTruck::DUMPER_COL_ANGLEMULT = *(float *)0x8D33A8;
float& fWheelExtensionRate                 = *(float *)0x8D33AC;

// Converted from thiscall void CMonsterTruck::CMonsterTruck(int modelIndex,uchar createdBy) 0x6C8D60
CMonsterTruck::CMonsterTruck(int modelIndex, unsigned char createdBy) : CAutomobile(plugin::dummy) {
    ((void(__thiscall *)(CMonsterTruck*, int, unsigned char))0x6C8D60)(this, modelIndex, createdBy);
}

// Converted from thiscall void CMonsterTruck::ExtendSuspension(void) 0x6C7D80
void CMonsterTruck::ExtendSuspension() {
    ((void(__thiscall *)(CMonsterTruck*))0x6C7D80)(this);
}