/*
    Plugin-SDK (Grand Theft Auto San Andreas) source file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/
#include "CPlane.h"

bool  &CPlane::GenPlane_Active                   = *(bool *)0x8D33BC;
int   &CPlane::GenPlane_ModelIndex               = *(int *)0xC1CAD8;
unsigned int &CPlane::GenPlane_Status            = *(unsigned int *)0xC1CADC;
unsigned int &CPlane::GenPlane_LastTimeGenerated = *(unsigned int *)0xC1CAE0;
float &CPlane::ANDROM_COL_ANGLE_MULT             = *(float *)0x8D33C0;
float &CPlane::HARRIER_NOZZLE_ROTATE_LIMIT       = *(float *)0x8D33C4;
float &CPlane::HARRIER_NOZZLE_SWITCH_LIMIT       = *(float *)0x8D33C8;
float &CPlane::PLANE_MIN_PROP_SPEED              = *(float *)0x8D33CC;
float &CPlane::PLANE_STD_PROP_SPEED              = *(float *)0x8D33D0;
float &CPlane::PLANE_MAX_PROP_SPEED              = *(float *)0x8D33D4;
float &CPlane::PLANE_ROC_PROP_SPEED              = *(float *)0x8D33D8;
float &HARRIER_NOZZLE_ROTATERATE                 = *(float *)0x8D33DC;
float &PLANE_DAMAGE_WAVE_COUNTER_VAR             = *(float *)0x8D33E0;
float &PLANE_DAMAGE_THRESHHOLD                   = *(float *)0x8D33E4;
float &PLANE_DAMAGE_SCALE_MASS                   = *(float *)0x8D33E8;
float &PLANE_DAMAGE_DESTROY_THRESHHOLD           = *(float *)0x8D33EC;
CVector &vecRCBaronGunPos                        = *(CVector *)0x8D33F0;

// Converted from thiscall void CPlane::CPlane(int modelIndex, uchar createdBy) 0x6C8E20
CPlane::CPlane(int modelIndex, unsigned char createdBy) :CAutomobile(plugin::dummy) {
    ((void(__thiscall *)(CPlane*, int, unsigned char))0x6C8E20)(this, modelIndex, createdBy);
}

// Converted from thiscall void CPlane::IsAlreadyFlying(void) 0x6CAB90
void CPlane::IsAlreadyFlying() {
    ((void(__thiscall *)(CPlane*))0x6CAB90)(this);
}

// Converted from thiscall void CPlane::SetGearUp(void) 0x6CAC20
void CPlane::SetGearUp() {
    ((void(__thiscall *)(CPlane*))0x6CAC20)(this);
}

// Converted from thiscall void CPlane::SetGearDown(void) 0x6CAC70
void CPlane::SetGearDown() {
    ((void(__thiscall *)(CPlane*))0x6CAC70)(this);
}

// Converted from cdecl void CPlane::InitPlaneGenerationAndRemoval(void) 0x6CAD90
void CPlane::InitPlaneGenerationAndRemoval() {
    ((void(__cdecl *)())0x6CAD90)();
}

// Converted from cdecl uint CPlane::CountPlanesAndHelis(void) 0x6CCA50
unsigned int CPlane::CountPlanesAndHelis() {
    return ((unsigned int(__cdecl *)())0x6CCA50)();
}

// Converted from cdecl bool CPlane::AreWeInNoPlaneZone(void) 0x6CCAA0
bool CPlane::AreWeInNoPlaneZone() {
    return ((bool(__cdecl *)())0x6CCAA0)();
}

// Converted from cdecl bool CPlane::AreWeInNoBigPlaneZone(void) 0x6CCBB0
bool CPlane::AreWeInNoBigPlaneZone() {
    return ((bool(__cdecl *)())0x6CCBB0)();
}

// Converted from cdecl void CPlane::SwitchAmbientPlanes(bool enable) 0x6CCC50
void CPlane::SwitchAmbientPlanes(bool enable) {
    ((void(__cdecl *)(bool))0x6CCC50)(enable);
}

// Converted from cdecl void CPlane::FindPlaneCreationCoors(CVector *,CVector *,float *,float *,bool) 0x6CD090
void CPlane::FindPlaneCreationCoors(CVector* arg0, CVector* arg1, float* arg2, float* arg3, bool arg4) {
    ((void(__cdecl *)(CVector*, CVector*, float*, float*, bool))0x6CD090)(arg0, arg1, arg2, arg3, arg4);
}

// Converted from cdecl void CPlane::DoPlaneGenerationAndRemoval(void) 0x6CD2F0
void CPlane::DoPlaneGenerationAndRemoval() {
    ((void(__cdecl *)())0x6CD2F0)();
}