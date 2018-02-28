/*
    Plugin-SDK (Grand Theft Auto Vice City) source file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/
#include "CWaterCannons.h"

RxObjSpace3DVertex *WaterCannonVertices = (RxObjSpace3DVertex *)0x77EF98;
unsigned short &WaterCannonIndexList = *(unsigned short *)0x77EF80;
CWaterCannon *CWaterCannons::aCannons = (CWaterCannon *)0x97F34C;

// Converted from thiscall void CWaterCannon::CWaterCannon(void) 0x57BE40
CWaterCannon::CWaterCannon() {
    plugin::CallMethod<0x57BE40, CWaterCannon *>(this);
}

// Converted from thiscall void CWaterCannon::Init(void) 0x57BCD0
void CWaterCannon::Init() {
    plugin::CallMethod<0x57BCD0, CWaterCannon *>(this);
}

// Converted from thiscall void CWaterCannon::PushPeds(void) 0x57B2F0
void CWaterCannon::PushPeds() {
    plugin::CallMethod<0x57B2F0, CWaterCannon *>(this);
}

// Converted from thiscall void CWaterCannon::Render(void) 0x57B810
void CWaterCannon::Render() {
    plugin::CallMethod<0x57B810, CWaterCannon *>(this);
}

// Converted from thiscall void CWaterCannon::Update_OncePerFrame(short index) 0x57BB90
void CWaterCannon::Update_OncePerFrame(short index) {
    plugin::CallMethod<0x57BB90, CWaterCannon *, short>(this, index);
}

// Converted from cdecl void CWaterCannons::Init(void) 0x57B2C0 
void CWaterCannons::Init() {
    plugin::Call<0x57B2C0>();
}

// Converted from cdecl void CWaterCannons::Render(void) 0x57B0E0 
void CWaterCannons::Render() {
    plugin::Call<0x57B0E0>();
}

// Converted from cdecl void CWaterCannons::Update(void) 0x57B120 
void CWaterCannons::Update() {
    plugin::Call<0x57B120>();
}

// Converted from cdecl void CWaterCannons::UpdateOne(uint pCar,CVector *posn,CVector *moveSpeed) 0x57B160
void CWaterCannons::UpdateOne(unsigned int pCar, CVector* posn, CVector* moveSpeed) {
    plugin::Call<0x57B160, unsigned int, CVector*, CVector*>(pCar, posn, moveSpeed);
}
