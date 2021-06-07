/*
    Plugin-SDK (Grand Theft Auto 3) source file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/
#include "CDamageManager.h"

PLUGIN_SOURCE_FILE

PLUGIN_VARIABLE float(&G_aComponentDamage)[7] = *reinterpret_cast<float(*)[7]>(GLOBAL_ADDRESS_BY_VERSION(0x6012B0, 0x600F90, 0x60DF88));

int addrof(CDamageManager::ApplyDamage) = ADDRESS_BY_VERSION(0x545A80, 0x545C80, 0x545C30);
int gaddrof(CDamageManager::ApplyDamage) = GLOBAL_ADDRESS_BY_VERSION(0x545A80, 0x545C80, 0x545C30);

bool CDamageManager::ApplyDamage(tComponent component, float damage, float unused) {
    return plugin::CallMethodAndReturnDynGlobal<bool, CDamageManager *, tComponent, float, float>(gaddrof(CDamageManager::ApplyDamage), this, component, damage, unused);
}

int addrof(CDamageManager::FuckCarCompletely) = ADDRESS_BY_VERSION(0x545B70, 0x545D70, 0x545D20);
int gaddrof(CDamageManager::FuckCarCompletely) = GLOBAL_ADDRESS_BY_VERSION(0x545B70, 0x545D70, 0x545D20);

void CDamageManager::FuckCarCompletely() {
    plugin::CallMethodDynGlobal<CDamageManager *>(gaddrof(CDamageManager::FuckCarCompletely), this);
}

int addrof(CDamageManager::GetComponentGroup) = ADDRESS_BY_VERSION(0x545790, 0x545990, 0x545940);
int gaddrof(CDamageManager::GetComponentGroup) = GLOBAL_ADDRESS_BY_VERSION(0x545790, 0x545990, 0x545940);

bool CDamageManager::GetComponentGroup(tComponent component, tComponentGroup *group, unsigned char *subComp) {
    return plugin::CallMethodAndReturnDynGlobal<bool, CDamageManager *, tComponent, tComponentGroup *, unsigned char *>(gaddrof(CDamageManager::GetComponentGroup), this, component, group, subComp);
}

int addrof(CDamageManager::GetDoorStatus) = ADDRESS_BY_VERSION(0x545930, 0x545B30, 0x545AE0);
int gaddrof(CDamageManager::GetDoorStatus) = GLOBAL_ADDRESS_BY_VERSION(0x545930, 0x545B30, 0x545AE0);

int CDamageManager::GetDoorStatus(int door) {
    return plugin::CallMethodAndReturnDynGlobal<int, CDamageManager *, int>(gaddrof(CDamageManager::GetDoorStatus), this, door);
}

int addrof(CDamageManager::GetEngineStatus) = ADDRESS_BY_VERSION(0x545960, 0x545B60, 0x545B10);
int gaddrof(CDamageManager::GetEngineStatus) = GLOBAL_ADDRESS_BY_VERSION(0x545960, 0x545B60, 0x545B10);

int CDamageManager::GetEngineStatus() {
    return plugin::CallMethodAndReturnDynGlobal<int, CDamageManager *>(gaddrof(CDamageManager::GetEngineStatus), this);
}

int addrof(CDamageManager::GetLightStatus) = ADDRESS_BY_VERSION(0x545890, 0x545A90, 0x545A40);
int gaddrof(CDamageManager::GetLightStatus) = GLOBAL_ADDRESS_BY_VERSION(0x545890, 0x545A90, 0x545A40);

int CDamageManager::GetLightStatus(eLights light) {
    return plugin::CallMethodAndReturnDynGlobal<int, CDamageManager *, eLights>(gaddrof(CDamageManager::GetLightStatus), this, light);
}

int addrof(CDamageManager::GetPanelStatus) = ADDRESS_BY_VERSION(0x5458E0, 0x545AE0, 0x545A90);
int gaddrof(CDamageManager::GetPanelStatus) = GLOBAL_ADDRESS_BY_VERSION(0x5458E0, 0x545AE0, 0x545A90);

int CDamageManager::GetPanelStatus(int panel) {
    return plugin::CallMethodAndReturnDynGlobal<int, CDamageManager *, int>(gaddrof(CDamageManager::GetPanelStatus), this, panel);
}

int addrof(CDamageManager::GetWheelStatus) = ADDRESS_BY_VERSION(0x545910, 0x545B10, 0x545AC0);
int gaddrof(CDamageManager::GetWheelStatus) = GLOBAL_ADDRESS_BY_VERSION(0x545910, 0x545B10, 0x545AC0);

int CDamageManager::GetWheelStatus(int wheel) {
    return plugin::CallMethodAndReturnDynGlobal<int, CDamageManager *, int>(gaddrof(CDamageManager::GetWheelStatus), this, wheel);
}

int addrof(CDamageManager::ProgressDoorDamage) = ADDRESS_BY_VERSION(0x545970, 0x545B70, 0x545B20);
int gaddrof(CDamageManager::ProgressDoorDamage) = GLOBAL_ADDRESS_BY_VERSION(0x545970, 0x545B70, 0x545B20);

void CDamageManager::ProgressDoorDamage(unsigned char door) {
    plugin::CallMethodDynGlobal<CDamageManager *, unsigned char>(gaddrof(CDamageManager::ProgressDoorDamage), this, door);
}

int addrof(CDamageManager::ProgressEngineDamage) = ADDRESS_BY_VERSION(0x5459B0, 0x545BB0, 0x545B60);
int gaddrof(CDamageManager::ProgressEngineDamage) = GLOBAL_ADDRESS_BY_VERSION(0x5459B0, 0x545BB0, 0x545B60);

void CDamageManager::ProgressEngineDamage() {
    plugin::CallMethodDynGlobal<CDamageManager *>(gaddrof(CDamageManager::ProgressEngineDamage), this);
}

int addrof(CDamageManager::ProgressPanelDamage) = ADDRESS_BY_VERSION(0x545A00, 0x545C00, 0x545BB0);
int gaddrof(CDamageManager::ProgressPanelDamage) = GLOBAL_ADDRESS_BY_VERSION(0x545A00, 0x545C00, 0x545BB0);

void CDamageManager::ProgressPanelDamage(unsigned char panel) {
    plugin::CallMethodDynGlobal<CDamageManager *, unsigned char>(gaddrof(CDamageManager::ProgressPanelDamage), this, panel);
}

int addrof(CDamageManager::ProgressWheelDamage) = ADDRESS_BY_VERSION(0x545A40, 0x545C40, 0x545BF0);
int gaddrof(CDamageManager::ProgressWheelDamage) = GLOBAL_ADDRESS_BY_VERSION(0x545A40, 0x545C40, 0x545BF0);

void CDamageManager::ProgressWheelDamage(unsigned char wheel) {
    plugin::CallMethodDynGlobal<CDamageManager *, unsigned char>(gaddrof(CDamageManager::ProgressWheelDamage), this, wheel);
}

int addrof(CDamageManager::ResetDamageStatus) = ADDRESS_BY_VERSION(0x545850, 0x545A50, 0x545A00);
int gaddrof(CDamageManager::ResetDamageStatus) = GLOBAL_ADDRESS_BY_VERSION(0x545850, 0x545A50, 0x545A00);

void CDamageManager::ResetDamageStatus() {
    plugin::CallMethodDynGlobal<CDamageManager *>(gaddrof(CDamageManager::ResetDamageStatus), this);
}

int addrof(CDamageManager::SetDoorStatus) = ADDRESS_BY_VERSION(0x545920, 0x545B20, 0x545AD0);
int gaddrof(CDamageManager::SetDoorStatus) = GLOBAL_ADDRESS_BY_VERSION(0x545920, 0x545B20, 0x545AD0);

void CDamageManager::SetDoorStatus(int door, unsigned int status) {
    plugin::CallMethodDynGlobal<CDamageManager *, int, unsigned int>(gaddrof(CDamageManager::SetDoorStatus), this, door, status);
}

int addrof(CDamageManager::SetEngineStatus) = ADDRESS_BY_VERSION(0x545940, 0x545B40, 0x545AF0);
int gaddrof(CDamageManager::SetEngineStatus) = GLOBAL_ADDRESS_BY_VERSION(0x545940, 0x545B40, 0x545AF0);

void CDamageManager::SetEngineStatus(unsigned int status) {
    plugin::CallMethodDynGlobal<CDamageManager *, unsigned int>(gaddrof(CDamageManager::SetEngineStatus), this, status);
}

int addrof(CDamageManager::SetLightStatus) = ADDRESS_BY_VERSION(0x545860, 0x545A60, 0x545A10);
int gaddrof(CDamageManager::SetLightStatus) = GLOBAL_ADDRESS_BY_VERSION(0x545860, 0x545A60, 0x545A10);

void CDamageManager::SetLightStatus(eLights light, unsigned int status) {
    plugin::CallMethodDynGlobal<CDamageManager *, eLights, unsigned int>(gaddrof(CDamageManager::SetLightStatus), this, light, status);
}

int addrof(CDamageManager::SetPanelStatus) = ADDRESS_BY_VERSION(0x5458B0, 0x545AB0, 0x545A60);
int gaddrof(CDamageManager::SetPanelStatus) = GLOBAL_ADDRESS_BY_VERSION(0x5458B0, 0x545AB0, 0x545A60);

void CDamageManager::SetPanelStatus(int panel, unsigned int status) {
    plugin::CallMethodDynGlobal<CDamageManager *, int, unsigned int>(gaddrof(CDamageManager::SetPanelStatus), this, panel, status);
}

int addrof(CDamageManager::SetWheelStatus) = ADDRESS_BY_VERSION(0x545900, 0x545B00, 0x545AB0);
int gaddrof(CDamageManager::SetWheelStatus) = GLOBAL_ADDRESS_BY_VERSION(0x545900, 0x545B00, 0x545AB0);

void CDamageManager::SetWheelStatus(int wheel, unsigned int status) {
    plugin::CallMethodDynGlobal<CDamageManager *, int, unsigned int>(gaddrof(CDamageManager::SetWheelStatus), this, wheel, status);
}
