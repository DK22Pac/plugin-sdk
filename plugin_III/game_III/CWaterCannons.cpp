/*
    Plugin-SDK (Grand Theft Auto 3) source file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/
#include "CWaterCannons.h"

RxObjSpace3DVertex *WaterCannonVertices = (RxObjSpace3DVertex *)0x64C530;
unsigned short &WaterCannonIndexList = *(unsigned short *)0x64C518;
CWaterCannon *CWaterCannons::aCannons = (CWaterCannon *)0x8F2CA8;

// Converted from thiscall void CWaterCannon::CWaterCannon(void) 0x522B60 
CWaterCannon::CWaterCannon() {
    plugin::CallMethod<0x522B60, CWaterCannon *>(this);
}

// Converted from thiscall void CWaterCannon::Init(void) 0x521A30
void CWaterCannon::Init() {
    plugin::CallMethod<0x521A30, CWaterCannon *>(this);
}

// Converted from thiscall void CWaterCannon::PushPeds(void) 0x5220B0
void CWaterCannon::PushPeds() {
    plugin::CallMethod<0x5220B0, CWaterCannon *>(this);
}

// Converted from thiscall void CWaterCannon::Render(void) 0x521D30
void CWaterCannon::Render() {
    plugin::CallMethod<0x521D30, CWaterCannon *>(this);
}

// Converted from thiscall void CWaterCannon::Update_NewInput(CVector *posn,CVector *moveSpeed) 0x521CC0
void CWaterCannon::Update_NewInput(CVector* posn, CVector* moveSpeed) {
    plugin::CallMethod<0x521CC0, CWaterCannon *, CVector*, CVector*>(this, posn, moveSpeed);
}

// Converted from thiscall void CWaterCannon::Update_OncePerFrame(short index) 0x521B80
void CWaterCannon::Update_OncePerFrame(short index) {
    plugin::CallMethod<0x521B80, CWaterCannon *, short>(this, index);
}

// Converted from cdecl void CWaterCannons::Init(void) 0x522440 
void CWaterCannons::Init() {
    plugin::Call<0x522440>();
}

// Converted from cdecl void CWaterCannons::Render(void) 0x522550
void CWaterCannons::Render() {
    plugin::Call<0x522550>();
}

// Converted from cdecl void CWaterCannons::Update(void) 0x522510
void CWaterCannons::Update() {
    plugin::Call<0x522510>();
}

// Converted from cdecl void CWaterCannons::UpdateOne(uint pCar,CVector *posn,CVector *moveSpeed) 0x522470
void CWaterCannons::UpdateOne(unsigned int pCar, CVector* posn, CVector* moveSpeed) {
    plugin::Call<0x522470, unsigned int, CVector*, CVector*>(pCar, posn, moveSpeed);
}
