/*
    Plugin-SDK (Grand Theft Auto San Andreas) source file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/
#include "CDamageManager.h"

// Converted from thiscall bool CDamageManager::GetComponentGroup(tComponent component, tComponentGroup* group, uchar *damageCompId) 0x6C2040
bool CDamageManager::GetComponentGroup(tComponent component, tComponentGroup* group, unsigned char* damageCompId)
{
    return ((bool(__thiscall *)(CDamageManager*, tComponent, tComponentGroup*, unsigned char*))0x6C2040)(this, component, group, damageCompId);
}

// Converted from thiscall void CDamageManager::ResetDamageStatus(void) 0x6C20E0
void CDamageManager::ResetDamageStatus()
{
    ((void(__thiscall *)(CDamageManager*))0x6C20E0)(this);
}

// Converted from thiscall void CDamageManager::SetLightStatus(eLights light, uint status) 0x6C2100
void CDamageManager::SetLightStatus(eLights light, unsigned int status)
{
    ((void(__thiscall *)(CDamageManager*, eLights, unsigned int))0x6C2100)(this, light, status);
}

// Converted from thiscall uint CDamageManager::GetLightStatus(eLights light) 0x6C2130
unsigned int CDamageManager::GetLightStatus(eLights light)
{
    return ((unsigned int(__thiscall *)(CDamageManager*, eLights))0x6C2130)(this, light);
}

// Converted from thiscall void CDamageManager::SetPanelStatus(int panel, uint status) 0x6C2150
void CDamageManager::SetPanelStatus(int panel, unsigned int status)
{
    ((void(__thiscall *)(CDamageManager*, int, unsigned int))0x6C2150)(this, panel, status);
}

// Converted from thiscall uint CDamageManager::GetPanelStatus(int) 0x6C2180
unsigned int CDamageManager::GetPanelStatus(int arg0)
{
    return ((unsigned int(__thiscall *)(CDamageManager*, int))0x6C2180)(this, arg0);
}

// Converted from thiscall void CDamageManager::SetWheelStatus(int wheel, uint status) 0x6C21A0
void CDamageManager::SetWheelStatus(int wheel, unsigned int status)
{
    ((void(__thiscall *)(CDamageManager*, int, unsigned int))0x6C21A0)(this, wheel, status);
}

// Converted from thiscall uint CDamageManager::GetWheelStatus(int wheel) 0x6C21B0
unsigned int CDamageManager::GetWheelStatus(int wheel)
{
    return ((unsigned int(__thiscall *)(CDamageManager*, int))0x6C21B0)(this, wheel);
}

// Converted from thiscall void CDamageManager::SetDoorStatus(eDoors door, uint status) 0x6C21C0
void CDamageManager::SetDoorStatus(eDoors door, unsigned int status)
{
    ((void(__thiscall *)(CDamageManager*, eDoors, unsigned int))0x6C21C0)(this, door, status);
}

// Converted from thiscall void CDamageManager::SetDoorStatus(int doorNodeIndex, uint status) 0x6C21E0
void CDamageManager::SetDoorStatus(int doorNodeIndex, unsigned int status)
{
    ((void(__thiscall *)(CDamageManager*, int, unsigned int))0x6C21E0)(this, doorNodeIndex, status);
}

// Converted from thiscall uint CDamageManager::GetDoorStatus(int doorNodeIndex) 0x6C2230
unsigned int CDamageManager::GetDoorStatus(int doorNodeIndex)
{
    return ((unsigned int(__thiscall *)(CDamageManager*, int))0x6C2250)(this, doorNodeIndex);
}

// Converted from thiscall uint CDamageManager::GetDoorStatus(eDoors door) 0x6C2250
unsigned int CDamageManager::GetDoorStatus(eDoors door)
{
    return ((unsigned int(__thiscall *)(CDamageManager*, eDoors))0x6C2230)(this, door);
}

// Converted from thiscall void CDamageManager::SetEngineStatus(uint status) 0x6C22A0
void CDamageManager::SetEngineStatus(unsigned int status)
{
    ((void(__thiscall *)(CDamageManager*, unsigned int))0x6C22A0)(this, status);
}

// Converted from thiscall uint CDamageManager::GetEngineStatus(void) 0x6C22C0
unsigned int CDamageManager::GetEngineStatus()
{
    return ((unsigned int(__thiscall *)(CDamageManager*))0x6C22C0)(this);
}

// Converted from thiscall void CDamageManager::SetAeroplaneCompStatus(int component, uint status) 0x6C22D0
void CDamageManager::SetAeroplaneCompStatus(int component, unsigned int status)
{
    ((void(__thiscall *)(CDamageManager*, int, unsigned int))0x6C22D0)(this, component, status);
}

// Converted from thiscall uint CDamageManager::GetAeroplaneCompStatus(int component) 0x6C2300
unsigned int CDamageManager::GetAeroplaneCompStatus(int component)
{
    return ((unsigned int(__thiscall *)(CDamageManager*, int))0x6C2300)(this, component);
}

// Converted from thiscall bool CDamageManager::ProgressDoorDamage(uchar damageCompId, CAutomobile *car) 0x6C2320
bool CDamageManager::ProgressDoorDamage(unsigned char damageCompId, CAutomobile* car)
{
    return ((bool(__thiscall *)(CDamageManager*, unsigned char, CAutomobile*))0x6C2320)(this, damageCompId, car);
}

// Converted from thiscall bool CDamageManager::ProgressEngineDamage(float) 0x6C23B0
bool CDamageManager::ProgressEngineDamage(float arg0)
{
    return ((bool(__thiscall *)(CDamageManager*, float))0x6C23B0)(this, arg0);
}

// Converted from thiscall bool CDamageManager::ProgressPanelDamage(uchar panel) 0x6C23C0
bool CDamageManager::ProgressPanelDamage(unsigned char panel)
{
    return ((bool(__thiscall *)(CDamageManager*, unsigned char))0x6C23C0)(this, panel);
}

// Converted from thiscall bool CDamageManager::ProgressWheelDamage(uchar wheel) 0x6C2440
bool CDamageManager::ProgressWheelDamage(unsigned char wheel)
{
    return ((bool(__thiscall *)(CDamageManager*, unsigned char))0x6C2440)(this, wheel);
}

// Converted from thiscall bool CDamageManager::ProgressAeroplaneDamage(uchar component) 0x6C2460
bool CDamageManager::ProgressAeroplaneDamage(unsigned char component)
{
    return ((bool(__thiscall *)(CDamageManager*, unsigned char))0x6C2460)(this, component);
}

// Converted from thiscall bool CDamageManager::ApplyDamage(CAutomobile *car, tComponent component, float intensity, float) 0x6C24B0
bool CDamageManager::ApplyDamage(CAutomobile* car, tComponent component, float intensity, float arg3)
{
    return ((bool(__thiscall *)(CDamageManager*, CAutomobile*, tComponent, float, float))0x6C24B0)(this, car, component, intensity, arg3);
}

// Converted from thiscall void CDamageManager::FuckCarCompletely(bool skipWheels) 0x6C25D0
void CDamageManager::FuckCarCompletely(bool skipWheels)
{
    ((void(__thiscall *)(CDamageManager*, bool))0x6C25D0)(this, skipWheels);
}

// Converted from thiscall int CDamageManager::GetCarNodeIndexFromPanel(ePanels panel) 0x6C26A0
int CDamageManager::GetCarNodeIndexFromPanel(ePanels panel)
{
    return ((int(__thiscall *)(CDamageManager*, ePanels))0x6C26A0)(this, panel);
}

// Converted from thiscall int CDamageManager::GetCarNodeIndexFromDoor(eDoors door) 0x6C26F0
int CDamageManager::GetCarNodeIndexFromDoor(eDoors door)
{
    return ((int(__thiscall *)(CDamageManager*, eDoors))0x6C26F0)(this, door);
}

// Converted from thiscall void CDamageManager::Reset(void) 0x6A04E0
void CDamageManager::Reset()
{
    ((void(__thiscall *)(CDamageManager*))0x6A04E0)(this);
}