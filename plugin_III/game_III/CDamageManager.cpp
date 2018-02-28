/*
Plugin-SDK (Grand Theft Auto 3) source file
Authors: GTA Community. See more here
https://github.com/DK22Pac/plugin-sdk
Do not delete this comment block. Respect others' work!
*/
#include "CDamageManager.h"

// Converted from thiscall bool CDamageManager::ApplyDamage(tComponent component, float intensity, float) 0x545A80
bool CDamageManager::ApplyDamage(tComponent component, float intensity, float arg2) {
    return plugin::CallMethodAndReturn<bool, 0x545A80, CDamageManager *, tComponent, float, float>(this, component, intensity, arg2);
}

// Converted from thiscall void CDamageManager::FuckCarCompletely(void) 0x545B70 
void CDamageManager::FuckCarCompletely() {
    plugin::CallMethod<0x545B70, CDamageManager *>(this);
}

// Converted from thiscall bool CDamageManager::GetComponentGroup(tComponent component, tComponentGroup* group, uchar *damageCompId) 0x545790 
bool CDamageManager::GetComponentGroup(tComponent component, tComponentGroup* group, unsigned char* damageCompId) {
    return plugin::CallMethodAndReturn<bool, 0x545790, CDamageManager *, tComponent, tComponentGroup*, unsigned char*>(this, component, group, damageCompId);
}

// Converted from thiscall uint CDamageManager::GetDoorStatus(eDoors door) 0x545930
unsigned int CDamageManager::GetDoorStatus(eDoors door) {
    return plugin::CallMethodAndReturn<unsigned int, 0x545930, CDamageManager *, eDoors>(this, door);
}

// Converted from thiscall uint CDamageManager::GetEngineStatus(void) 0x545960
unsigned int CDamageManager::GetEngineStatus() {
    return plugin::CallMethodAndReturn<unsigned int, 0x545960, CDamageManager *>(this);
}

// Converted from thiscall uint CDamageManager::GetLightStatus(eLights light) 0x545890
unsigned int CDamageManager::GetLightStatus(eLights light) {
    return plugin::CallMethodAndReturn<unsigned int, 0x545890, CDamageManager *, eLights>(this, light);
}

// Converted from thiscall uint CDamageManager::GetPanelStatus(ePanels panel) 0x5458E0 
unsigned int CDamageManager::GetPanelStatus(ePanels panel) {
    return plugin::CallMethodAndReturn<unsigned int, 0x5458E0, CDamageManager *, ePanels>(this, panel);
}

// Converted from thiscall uint CDamageManager::GetWheelStatus(int wheel) 0x545910
unsigned int CDamageManager::GetWheelStatus(int wheel) {
    return plugin::CallMethodAndReturn<unsigned int, 0x545910, CDamageManager *, int>(this, wheel);
}

// Converted from thiscall bool CDamageManager::ProgressDoorDamage(uchar door) 0x545970 
bool CDamageManager::ProgressDoorDamage(unsigned char door) {
    return plugin::CallMethodAndReturn<bool, 0x545970, CDamageManager *, unsigned char>(this, door);
}

// Converted from thiscall bool CDamageManager::ProgressEngineDamage(float damage) 0x5459B0
bool CDamageManager::ProgressEngineDamage(float damage) {
    return plugin::CallMethodAndReturn<bool, 0x5459B0, CDamageManager *, float>(this, damage);
}

// Converted from thiscall bool CDamageManager::ProgressWheelDamage(uchar wheel) 0x545A40
bool CDamageManager::ProgressWheelDamage(unsigned char wheel) {
    return plugin::CallMethodAndReturn<bool, 0x545A40, CDamageManager *, unsigned char>(this, wheel);
}

// Converted from thiscall bool CDamageManager::ProgressPanelDamage(uchar panel) 0x545A00
bool CDamageManager::ProgressPanelDamage(unsigned char panel) {
    return plugin::CallMethodAndReturn<bool, 0x545A00, CDamageManager *, unsigned char>(this, panel);
}

// Converted from thiscall void CDamageManager::ResetDamageStatus(void) 0x545850 
void CDamageManager::ResetDamageStatus() {
    plugin::CallMethod<0x545850, CDamageManager *>(this);
}

// Converted from thiscall void CDamageManager::SetDoorStatus(eDoors door, uint status) 0x545920
void CDamageManager::SetDoorStatus(eDoors door, unsigned int status) {
    plugin::CallMethod<0x545920, CDamageManager *, eDoors, unsigned int>(this, door, status);
}

// Converted from thiscall void CDamageManager::SetEngineStatus(uint status) 0x545940
void CDamageManager::SetEngineStatus(unsigned int status) {
    plugin::CallMethod<0x545940, CDamageManager *, unsigned int>(this, status);
}

// Converted from thiscall void CDamageManager::SetWheelStatus(int wheel, uint status) 0x545900
void CDamageManager::SetWheelStatus(int wheel, unsigned int status) {
    plugin::CallMethod<0x545900, CDamageManager *, int, unsigned int>(this, wheel, status);
}

// Converted from thiscall void CDamageManager::SetLightStatus(eLights light,uint status) 0x545860
void CDamageManager::SetLightStatus(eLights light, unsigned int status) {
    plugin::CallMethod<0x545860, CDamageManager *, eLights, unsigned int>(this, light, status);
}

// Converted from thiscall void CDamageManager::SetPanelStatus(int panel,uint status) 0x5458B0
void CDamageManager::SetPanelStatus(int panel, unsigned int status) {
    plugin::CallMethod<0x5458B0, CDamageManager *, int, unsigned int>(this, panel, status);
}
