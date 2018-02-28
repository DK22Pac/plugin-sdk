/*
Plugin-SDK (Grand Theft Auto 3) source file
Authors: GTA Community. See more here
https://github.com/DK22Pac/plugin-sdk
Do not delete this comment block. Respect others' work!
*/
#include "CHeli.h"

unsigned int& CHeli::TestForNewRandomHelisTimer = *(unsigned int *)0x8F1A7C;
unsigned int& CHeli::NumRandomHelis = *(unsigned int *)0x95CCAA;
bool& CHeli::CatalinaHeliOn = *(bool *)0x95CD85;
CHeli** CHeli::pHelis = (CHeli**)0x72CF5C;
bool& CHeli::ScriptHeliOn = *(bool *)0x95CD43;
bool& CHeli::CatalinaHasBeenShotDown = *(bool *)0x95CD56;
char& CHeli::UpdateHelis_nFrameGen = *(char *)0x64CFB4;

// Converted from cdecl void CHeli::ActivateHeli(bool enable) 0x54A940
void CHeli::ActivateHeli(bool enable) {
    plugin::Call<0x54A940, bool>(enable);
}

// Converted from thiscall void CHeli::CHeli(int modelIndex, uchar createdBy) 0x547220
CHeli::CHeli(int modelIndex, unsigned char createdBy) : CVehicle(plugin::dummy) {
    plugin::CallMethod<0x547220, CHeli *, int, unsigned char>(this, modelIndex, createdBy);
}

// Converted from cdecl void CHeli::CatalinaTakeOff(void) 0x54A9B0
void CHeli::CatalinaTakeOff() {
    plugin::Call<0x54A9B0>();
}

// Converted from cdecl void CHeli::FindPointerToCatalinasHeli(void) 0x54AA20
void CHeli::FindPointerToCatalinasHeli() {
    plugin::Call<0x54AA20>();
}

// Converted from cdecl bool CHeli::HasCatalinaBeenShotDown(void) 0x54AA10
bool CHeli::HasCatalinaBeenShotDown() {
    return plugin::CallAndReturn<bool, 0x54AA10>();
}

// Converted from cdecl void CHeli::InitHelis(void) 0x549970
void CHeli::InitHelis() {
    plugin::Call<0x549970>();
}

// Converted from cdecl void CHeli::MakeCatalinaHeliFlyAway(void) 0x54A9C0
void CHeli::MakeCatalinaHeliFlyAway() {
    plugin::Call<0x54A9C0>();
}

// Converted from thiscall void CHeli::PreRenderAlways(void) 0x5477F0 
void CHeli::PreRenderAlways() {
    plugin::CallMethod<0x5477F0, CHeli *>(this);
}

// Converted from cdecl void CHeli::RemoveCatalinaHeli(void) 0x54A9D0
void CHeli::RemoveCatalinaHeli() {
    plugin::Call<0x54A9D0>();
}

// Converted from thiscall CObject* CHeli::SpawnFlyingComponent(int nodeIndex) 0x54AE50
CObject* CHeli::SpawnFlyingComponent(int nodeIndex) {
    return plugin::CallMethodAndReturn<CObject*, 0x54AE50, CHeli *, int>(this, nodeIndex);
}

// Converted from cdecl void CHeli::SpecialHeliPreRender(void) 0x54AE10
void CHeli::SpecialHeliPreRender() {
    plugin::Call<0x54AE10>();
}

// Converted from cdecl bool CHeli::TestBulletCollision(CVector *,CVector *,CVector *,int) 0x54AB30
bool CHeli::TestBulletCollision(CVector* arg0, CVector* arg1, CVector* arg2, int arg3) {
    return plugin::CallAndReturn<bool, 0x54AB30, CVector*, CVector*, CVector*, int>(arg0, arg1, arg2, arg3);
}

// Converted from cdecl bool CHeli::TestRocketCollision(CVector *) 0x54AA30
bool CHeli::TestRocketCollision(CVector* arg0) {
    return plugin::CallAndReturn<bool, 0x54AA30, CVector*>(arg0);
}

// Converted from cdecl void CHeli::UpdateHelis(void) 0x5499F0
void CHeli::UpdateHelis() {
    plugin::Call<0x5499F0>();
}

// Converted from cdecl void GenerateHeli(bool enable) 0x54A640
void GenerateHeli(bool enable) {
    plugin::Call<0x54A640, bool>(enable);
}

// Converted from cdecl void StartCatalinaFlyBy(void) 0x54A980
void StartCatalinaFlyBy() {
    plugin::Call<0x54A980>();
}

// Converted from cdecl RwObject* GetHeliAtomicObjectCB(RwObject* object, void* data) 0x54AE30
RwObject* GetHeliAtomicObjectCB(RwObject* object, void* data) {
    return plugin::CallAndReturn<RwObject*, 0x54AE30, RwObject*, void*>(object, data);
}