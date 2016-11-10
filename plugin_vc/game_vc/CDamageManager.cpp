/*
Plugin-SDK (Grand Theft Auto) source file
Authors: GTA Community. See more here
https://github.com/DK22Pac/plugin-sdk
Do not delete this comment block. Respect others' work!
*/
#include "CDamageManager.h"

// Converted from thiscall bool CDamageManager::ApplyDamage(tComponent component, float intensity, float) 0x5A9650
bool CDamageManager::ApplyDamage(tComponent component, float intensity, float arg2) {
    return plugin::CallMethodAndReturn<bool, 0x5A9650, CDamageManager *, tComponent, float, float>(this, component, intensity, arg2);
}

// Converted from thiscall void CDamageManager::FuckCarCompletely(void) 0x5A9600 
void CDamageManager::FuckCarCompletely() {
    plugin::CallMethod<0x5A9600, CDamageManager *>(this);
}

// Converted from thiscall bool CDamageManager::GetComponentGroup(tComponent component, tComponentGroup* group, uchar *damageCompId) 0x5A98D0 
bool CDamageManager::GetComponentGroup(tComponent component, tComponentGroup* group, unsigned char* damageCompId) {
    return plugin::CallMethodAndReturn<bool, 0x5A98D0, CDamageManager *, tComponent, tComponentGroup*, unsigned char*>(this, component, group, damageCompId);
}

// Converted from thiscall uint CDamageManager::GetDoorStatus(eDoors door) 0x5A9810
unsigned int CDamageManager::GetDoorStatus(eDoors door) {
    return plugin::CallMethodAndReturn<unsigned int, 0x5A9810, CDamageManager *, eDoors>(this, door);
}

// Converted from thiscall uint CDamageManager::GetEngineStatus(void) 0x5A97E0
unsigned int CDamageManager::GetEngineStatus() {
    return plugin::CallMethodAndReturn<unsigned int, 0x5A97E0, CDamageManager *>(this);
}

// Converted from thiscall uint CDamageManager::GetLightStatus(eLights light) 0x5A9870
unsigned int CDamageManager::GetLightStatus(eLights light) {
    return plugin::CallMethodAndReturn<unsigned int, 0x5A9870, CDamageManager *, eLights>(this, light);
}

// Converted from thiscall uint CDamageManager::GetPanelStatus(ePanels panel) 0x5A9850 
unsigned int CDamageManager::GetPanelStatus(ePanels panel) {
    return plugin::CallMethodAndReturn<unsigned int, 0x5A9850, CDamageManager *, ePanels>(this, panel);
}

// Converted from thiscall uint CDamageManager::GetWheelStatus(eWheels wheel) 0x5A9830
unsigned int CDamageManager::GetWheelStatus(eWheels wheel) {
    return plugin::CallMethodAndReturn<unsigned int, 0x5A9830, CDamageManager *, eWheels>(this, wheel);
}

// Converted from thiscall bool CDamageManager::ProgressPanelDamage(uchar panel) 0x5A9790
bool CDamageManager::ProgressPanelDamage(unsigned char panel) {
    return plugin::CallMethodAndReturn<bool, 0x5A9790, CDamageManager *, unsigned char>(this, panel);
}

// Converted from thiscall void CDamageManager::ResetDamageStatus(void) 0x5A9890 
void CDamageManager::ResetDamageStatus() {
    plugin::CallMethod<0x5A9890, CDamageManager *>(this);
}

// Converted from thiscall void CDamageManager::SetDoorStatus(eDoors door, uint status) 0x5A9820
void CDamageManager::SetDoorStatus(eDoors door, unsigned int status) {
    plugin::CallMethod<0x5A9820, CDamageManager *, eDoors, unsigned int>(this, door, status);
}

// Converted from thiscall void CDamageManager::SetEngineStatus(uint status) 0x5A97F0
void CDamageManager::SetEngineStatus(unsigned int status) {
    plugin::CallMethod<0x5A97F0, CDamageManager *, unsigned int>(this, status);
}

// Converted from thiscall void CDamageManager::SetWheelStatus(eWheels wheel, uint status) 0x5A9840
void CDamageManager::SetWheelStatus(eWheels wheel, unsigned int status) {
    plugin::CallMethod<0x5A9840, CDamageManager *, eWheels, unsigned int>(this, wheel, status);
}