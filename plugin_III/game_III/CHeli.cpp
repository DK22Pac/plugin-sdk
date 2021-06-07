/*
    Plugin-SDK (Grand Theft Auto 3) source file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/
#include "CHeli.h"

PLUGIN_SOURCE_FILE

PLUGIN_VARIABLE CHeli *(&CHeli::pHelis)[4] = *reinterpret_cast<CHeli *(*)[4]>(GLOBAL_ADDRESS_BY_VERSION(0x72CF50, 0x72CF50, 0x73D090));
PLUGIN_VARIABLE unsigned int &CHeli::TestForNewRandomHelisTimer = *reinterpret_cast<unsigned int *>(GLOBAL_ADDRESS_BY_VERSION(0x8F1A7C, 0x8F1B30, 0x901C70));
PLUGIN_VARIABLE short &CHeli::NumScriptHelis = *reinterpret_cast<short *>(GLOBAL_ADDRESS_BY_VERSION(0x95CC22, 0x95CDDA, 0x96CF1A));
PLUGIN_VARIABLE short &CHeli::NumRandomHelis = *reinterpret_cast<short *>(GLOBAL_ADDRESS_BY_VERSION(0x95CCAA, 0x95CE62, 0x96CFA2));
PLUGIN_VARIABLE bool &CHeli::ScriptHeliOn = *reinterpret_cast<bool *>(GLOBAL_ADDRESS_BY_VERSION(0x95CD43, 0x95CEFB, 0x96D03B));
PLUGIN_VARIABLE bool &CHeli::CatalinaHasBeenShutDown = *reinterpret_cast<bool *>(GLOBAL_ADDRESS_BY_VERSION(0x95CD56, 0x95CF0E, 0x96D04E));
PLUGIN_VARIABLE bool &CHeli::CatalinaHeliOn = *reinterpret_cast<bool *>(GLOBAL_ADDRESS_BY_VERSION(0x95CD85, 0x95CF3D, 0x96D07D));
PLUGIN_VARIABLE float(&CatalinaTargetX)[7] = *reinterpret_cast<float(*)[7]>(GLOBAL_ADDRESS_BY_VERSION(0x6019FC, 0x6016DC, 0x60E6D4));
PLUGIN_VARIABLE float(&CatalinaTargetY)[7] = *reinterpret_cast<float(*)[7]>(GLOBAL_ADDRESS_BY_VERSION(0x601A18, 0x6016F8, 0x60E6F0));
PLUGIN_VARIABLE float(&CatalinaTargetZ)[7] = *reinterpret_cast<float(*)[7]>(GLOBAL_ADDRESS_BY_VERSION(0x601A34, 0x601714, 0x60E70C));
PLUGIN_VARIABLE float(&DamPathX)[6] = *reinterpret_cast<float(*)[6]>(GLOBAL_ADDRESS_BY_VERSION(0x601A50, 0x601730, 0x60E728));
PLUGIN_VARIABLE float(&DamPathY)[6] = *reinterpret_cast<float(*)[6]>(GLOBAL_ADDRESS_BY_VERSION(0x601A68, 0x601748, 0x60E740));
PLUGIN_VARIABLE float(&DamPathZ)[6] = *reinterpret_cast<float(*)[6]>(GLOBAL_ADDRESS_BY_VERSION(0x601A80, 0x601760, 0x60E758));
PLUGIN_VARIABLE float(&ShortPathX)[4] = *reinterpret_cast<float(*)[4]>(GLOBAL_ADDRESS_BY_VERSION(0x601A98, 0x601778, 0x60E770));
PLUGIN_VARIABLE float(&ShortPathY)[4] = *reinterpret_cast<float(*)[4]>(GLOBAL_ADDRESS_BY_VERSION(0x601AA8, 0x601788, 0x60E780));
PLUGIN_VARIABLE float(&ShortPathZ)[4] = *reinterpret_cast<float(*)[4]>(GLOBAL_ADDRESS_BY_VERSION(0x601AB8, 0x601798, 0x60E790));
PLUGIN_VARIABLE float(&LongPathX)[7] = *reinterpret_cast<float(*)[7]>(GLOBAL_ADDRESS_BY_VERSION(0x601AC8, 0x6017A8, 0x60E7A0));
PLUGIN_VARIABLE float(&LongPathY)[7] = *reinterpret_cast<float(*)[7]>(GLOBAL_ADDRESS_BY_VERSION(0x601AE4, 0x6017C4, 0x60E7BC));
PLUGIN_VARIABLE float(&LongPathZ)[7] = *reinterpret_cast<float(*)[7]>(GLOBAL_ADDRESS_BY_VERSION(0x601B00, 0x6017E0, 0x60E7D8));
PLUGIN_VARIABLE int &PathPoint = *reinterpret_cast<int *>(GLOBAL_ADDRESS_BY_VERSION(0x64CFB0, 0x64CFB0, 0x65CFB8));

int ctor_addr_o(CHeli, void(int, unsigned char)) = ADDRESS_BY_VERSION(0x547220, 0x547420, 0x5473D0);
int ctor_gaddr_o(CHeli, void(int, unsigned char)) = GLOBAL_ADDRESS_BY_VERSION(0x547220, 0x547420, 0x5473D0);

int dtor_addr(CHeli) = ADDRESS_BY_VERSION(0x5474A0, 0x5476A0, 0x547650);
int dtor_gaddr(CHeli) = GLOBAL_ADDRESS_BY_VERSION(0x5474A0, 0x5476A0, 0x547650);

int del_dtor_addr(CHeli) = ADDRESS_BY_VERSION(0x54A590, 0x54A790, 0x54A740);
int del_dtor_gaddr(CHeli) = GLOBAL_ADDRESS_BY_VERSION(0x54A590, 0x54A790, 0x54A740);

int addrof(CHeli::SetModelIndex) = ADDRESS_BY_VERSION(0x5474C0, 0x5476C0, 0x547670);
int gaddrof(CHeli::SetModelIndex) = GLOBAL_ADDRESS_BY_VERSION(0x5474C0, 0x5476C0, 0x547670);

void CHeli::SetModelIndex(unsigned int modelIndex) {
    plugin::CallVirtualMethod<3, CHeli *, unsigned int>(this, modelIndex);
}

int addrof(CHeli::ProcessControl) = ADDRESS_BY_VERSION(0x547CC0, 0x547EC0, 0x547E70);
int gaddrof(CHeli::ProcessControl) = GLOBAL_ADDRESS_BY_VERSION(0x547CC0, 0x547EC0, 0x547E70);

void CHeli::ProcessControl() {
    plugin::CallVirtualMethod<8, CHeli *>(this);
}

int addrof(CHeli::PreRender) = ADDRESS_BY_VERSION(0x547540, 0x547740, 0x5476F0);
int gaddrof(CHeli::PreRender) = GLOBAL_ADDRESS_BY_VERSION(0x547540, 0x547740, 0x5476F0);

void CHeli::PreRender() {
    plugin::CallVirtualMethod<12, CHeli *>(this);
}

int addrof(CHeli::Render) = ADDRESS_BY_VERSION(0x547B70, 0x547D70, 0x547D20);
int gaddrof(CHeli::Render) = GLOBAL_ADDRESS_BY_VERSION(0x547B70, 0x547D70, 0x547D20);

void CHeli::Render() {
    plugin::CallVirtualMethod<13, CHeli *>(this);
}

int addrof(CHeli::PreRenderAlways) = ADDRESS_BY_VERSION(0x5477F0, 0x5479F0, 0x5479A0);
int gaddrof(CHeli::PreRenderAlways) = GLOBAL_ADDRESS_BY_VERSION(0x5477F0, 0x5479F0, 0x5479A0);

void CHeli::PreRenderAlways() {
    plugin::CallMethodDynGlobal<CHeli *>(gaddrof(CHeli::PreRenderAlways), this);
}

int addrof(CHeli::SpawnFlyingComponent) = ADDRESS_BY_VERSION(0x54AE50, 0x54AFD0, 0x54AF80);
int gaddrof(CHeli::SpawnFlyingComponent) = GLOBAL_ADDRESS_BY_VERSION(0x54AE50, 0x54AFD0, 0x54AF80);

CObject *CHeli::SpawnFlyingComponent(int component) {
    return plugin::CallMethodAndReturnDynGlobal<CObject *, CHeli *, int>(gaddrof(CHeli::SpawnFlyingComponent), this, component);
}

int addrof(CHeli::ActivateHeli) = ADDRESS_BY_VERSION(0x54A940, 0x54AB00, 0x54AAB0);
int gaddrof(CHeli::ActivateHeli) = GLOBAL_ADDRESS_BY_VERSION(0x54A940, 0x54AB00, 0x54AAB0);

void CHeli::ActivateHeli(bool activate) {
    plugin::CallDynGlobal<bool>(gaddrof(CHeli::ActivateHeli), activate);
}

int addrof(CHeli::CatalinaTakeOff) = ADDRESS_BY_VERSION(0x54A9B0, 0x54AB30, 0x54AAE0);
int gaddrof(CHeli::CatalinaTakeOff) = GLOBAL_ADDRESS_BY_VERSION(0x54A9B0, 0x54AB30, 0x54AAE0);

void CHeli::CatalinaTakeOff() {
    plugin::CallDynGlobal(gaddrof(CHeli::CatalinaTakeOff));
}

int addrof(CHeli::FindPointerToCatalinasHeli) = ADDRESS_BY_VERSION(0x54AA20, 0x54ABA0, 0x54AB50);
int gaddrof(CHeli::FindPointerToCatalinasHeli) = GLOBAL_ADDRESS_BY_VERSION(0x54AA20, 0x54ABA0, 0x54AB50);

CHeli *CHeli::FindPointerToCatalinasHeli() {
    return plugin::CallAndReturnDynGlobal<CHeli *>(gaddrof(CHeli::FindPointerToCatalinasHeli));
}

int addrof(CHeli::HasCatalinaBeenShotDown) = ADDRESS_BY_VERSION(0x54AA10, 0x54AB90, 0x54AB40);
int gaddrof(CHeli::HasCatalinaBeenShotDown) = GLOBAL_ADDRESS_BY_VERSION(0x54AA10, 0x54AB90, 0x54AB40);

bool CHeli::HasCatalinaBeenShotDown() {
    return plugin::CallAndReturnDynGlobal<bool>(gaddrof(CHeli::HasCatalinaBeenShotDown));
}

int addrof(CHeli::InitHelis) = ADDRESS_BY_VERSION(0x549970, 0x549B70, 0x549B20);
int gaddrof(CHeli::InitHelis) = GLOBAL_ADDRESS_BY_VERSION(0x549970, 0x549B70, 0x549B20);

void CHeli::InitHelis() {
    plugin::CallDynGlobal(gaddrof(CHeli::InitHelis));
}

int addrof(CHeli::MakeCatalinaHeliFlyAway) = ADDRESS_BY_VERSION(0x54A9C0, 0x54AB40, 0x54AAF0);
int gaddrof(CHeli::MakeCatalinaHeliFlyAway) = GLOBAL_ADDRESS_BY_VERSION(0x54A9C0, 0x54AB40, 0x54AAF0);

void CHeli::MakeCatalinaHeliFlyAway() {
    plugin::CallDynGlobal(gaddrof(CHeli::MakeCatalinaHeliFlyAway));
}

int addrof(CHeli::RemoveCatalinaHeli) = ADDRESS_BY_VERSION(0x54A9D0, 0x54AB50, 0x54AB00);
int gaddrof(CHeli::RemoveCatalinaHeli) = GLOBAL_ADDRESS_BY_VERSION(0x54A9D0, 0x54AB50, 0x54AB00);

void CHeli::RemoveCatalinaHeli() {
    plugin::CallDynGlobal(gaddrof(CHeli::RemoveCatalinaHeli));
}

int addrof(CHeli::SpecialHeliPreRender) = ADDRESS_BY_VERSION(0x54AE10, 0x54AF90, 0x54AF40);
int gaddrof(CHeli::SpecialHeliPreRender) = GLOBAL_ADDRESS_BY_VERSION(0x54AE10, 0x54AF90, 0x54AF40);

void CHeli::SpecialHeliPreRender() {
    plugin::CallDynGlobal(gaddrof(CHeli::SpecialHeliPreRender));
}

int addrof(CHeli::TestBulletCollision) = ADDRESS_BY_VERSION(0x54AB30, 0x54ACB0, 0x54AC60);
int gaddrof(CHeli::TestBulletCollision) = GLOBAL_ADDRESS_BY_VERSION(0x54AB30, 0x54ACB0, 0x54AC60);

bool CHeli::TestBulletCollision(CVector *lineStart, CVector *lineEnd, CVector *bulletPos, int damage) {
    return plugin::CallAndReturnDynGlobal<bool, CVector *, CVector *, CVector *, int>(gaddrof(CHeli::TestBulletCollision), lineStart, lineEnd, bulletPos, damage);
}

int addrof(CHeli::TestRocketCollision) = ADDRESS_BY_VERSION(0x54AA30, 0x54ABB0, 0x54AB60);
int gaddrof(CHeli::TestRocketCollision) = GLOBAL_ADDRESS_BY_VERSION(0x54AA30, 0x54ABB0, 0x54AB60);

bool CHeli::TestRocketCollision(CVector *coors) {
    return plugin::CallAndReturnDynGlobal<bool, CVector *>(gaddrof(CHeli::TestRocketCollision), coors);
}

int addrof(CHeli::UpdateHelis) = ADDRESS_BY_VERSION(0x5499F0, 0x549BF0, 0x549BA0);
int gaddrof(CHeli::UpdateHelis) = GLOBAL_ADDRESS_BY_VERSION(0x5499F0, 0x549BF0, 0x549BA0);

void CHeli::UpdateHelis() {
    plugin::CallDynGlobal(gaddrof(CHeli::UpdateHelis));
}

int addrof(GenerateHeli) = ADDRESS_BY_VERSION(0x54A640, 0x54A810, 0x54A7C0);
int gaddrof(GenerateHeli) = GLOBAL_ADDRESS_BY_VERSION(0x54A640, 0x54A810, 0x54A7C0);

CHeli *GenerateHeli(bool catalina) {
    return plugin::CallAndReturnDynGlobal<CHeli *, bool>(gaddrof(GenerateHeli), catalina);
}

int addrof(StartCatalinaFlyBy) = ADDRESS_BY_VERSION(0x54A980, 0x54AB10, 0x54AAC0);
int gaddrof(StartCatalinaFlyBy) = GLOBAL_ADDRESS_BY_VERSION(0x54A980, 0x54AB10, 0x54AAC0);

void StartCatalinaFlyBy() {
    plugin::CallDynGlobal(gaddrof(StartCatalinaFlyBy));
}

int addrof(GetHeliAtomicObjectCB) = ADDRESS_BY_VERSION(0x54AE30, 0x54AFB0, 0x54AF60);
int gaddrof(GetHeliAtomicObjectCB) = GLOBAL_ADDRESS_BY_VERSION(0x54AE30, 0x54AFB0, 0x54AF60);

RwObject *GetHeliAtomicObjectCB(RwObject *object, void *data) {
    return plugin::CallAndReturnDynGlobal<RwObject *, RwObject *, void *>(gaddrof(GetHeliAtomicObjectCB), object, data);
}
