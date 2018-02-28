/*
Plugin-SDK (Grand Theft Auto Vice City) source file
Authors: GTA Community. See more here
https://github.com/DK22Pac/plugin-sdk
Do not delete this comment block. Respect others' work!
*/
#include "CHeli.h"

unsigned int& CHeli::TestForNewRandomHelisTimer = *(unsigned int *)0x9785D4;
unsigned int& CHeli::NumRandomHelis = *(unsigned int *)0xA10A6A;
bool& CHeli::CatalinaHeliOn = *(bool *)0xA10B40;
CHeli** CHeli::pHelis = (CHeli**)0x813D10;
bool& CHeli::ScriptHeliOn = *(bool *)0xA10ADB;

// Converted from thiscall void CHeli::CHeli(int modelIndex, uchar createdBy) 0x5AF7F0
CHeli::CHeli(int modelIndex, unsigned char createdBy) : CVehicle(plugin::dummy) {
    plugin::CallMethod<0x5AF7F0, CHeli *, int, unsigned char>(this, modelIndex, createdBy);
}

// Converted from cdecl void CHeli::InitHelis(void) 0x5AD4A0
void CHeli::InitHelis() {
    plugin::Call<0x5AD4A0>();
}

// Converted from thiscall void CHeli::PreRenderAlways(void) 0x5AF2E0
void CHeli::PreRenderAlways() {
    plugin::CallMethod<0x5AF2E0, CHeli *>(this);
}

// Converted from thiscall bool CHeli::SendDownSwat(void) 0x5ABE20
bool CHeli::SendDownSwat() {
    return plugin::CallMethodAndReturn<bool, 0x5ABE20, CHeli *>(this);
}

// Converted from thiscall CObject* CHeli::SpawnFlyingComponent(int nodeIndex) 0x5AC1E0
CObject* CHeli::SpawnFlyingComponent(int nodeIndex) {
    return plugin::CallMethodAndReturn<CObject*, 0x5AC1E0, CHeli *, int>(this, nodeIndex);
}

// Converted from cdecl bool CHeli::SpecialHeliPreRender(void) 0x5AC500
bool CHeli::SpecialHeliPreRender() {
    return plugin::CallAndReturn<bool, 0x5AC500>();
}

// Converted from cdecl bool CHeli::TestBulletCollision(CVector *, CVector *, CVector *, int) 0x5AC6C0
bool CHeli::TestBulletCollision(CVector* arg0, CVector* arg1, CVector* arg2, int arg3) {
    return plugin::CallAndReturn<bool, 0x5AC6C0, CVector*, CVector*, CVector*, int>(arg0, arg1, arg2, arg3);
}

// Converted from cdecl bool CHeli::TestRocketCollision(CVector *) 0x5AC9A0
bool CHeli::TestRocketCollision(CVector* arg0) {
    return plugin::CallAndReturn<bool, 0x5AC9A0, CVector*>(arg0);
}

// Converted from cdecl bool CHeli::TestSniperCollision(CVector* origin, CVector* target) 0x5AC520
bool CHeli::TestSniperCollision(CVector* origin, CVector* target) {
    return plugin::CallAndReturn<bool, 0x5AC520, CVector*, CVector*>(origin, target);
}

// Converted from cdecl void CHeli::UpdateHelis(void) 0x5ACDA0
void CHeli::UpdateHelis() {
    plugin::Call<0x5ACDA0>();
}

// Converted from cdecl void GenerateHeli(bool enable) 0x5ACB30
void GenerateHeli(bool enable) {
    plugin::Call<0x5ACB30, bool>(enable);
}

// Converted from cdecl void StartCatalinaFlyBy(void) 0x5ACAF0
void StartCatalinaFlyBy() {
    plugin::Call<0x5ACAF0>();
}

// Converted from cdecl RwObject* GetHeliAtomicObjectCB(RwObject* object, void* data) 0x5AC4E0
RwObject* GetHeliAtomicObjectCB(RwObject* object, void* data) {
    return plugin::CallAndReturn<RwObject*, 0x5AC4E0, RwObject*, void*>(object, data);
}