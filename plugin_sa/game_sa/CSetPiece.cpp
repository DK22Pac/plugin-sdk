/*
    Plugin-SDK (Grand Theft Auto San Andreas) source file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/
#include "CSetPiece.h"

// Converted from thiscall CCopPed* CSetPiece::TryToGenerateCopPed(CVector2D posn) 0x499690
CCopPed* CSetPiece::TryToGenerateCopPed(CVector2D posn) {
    return plugin::CallMethodAndReturn<CCopPed*, 0x499690, CSetPiece *, CVector2D>(this, posn);
}

// Converted from thiscall CVector2D CSetPiece::GetSpawnCoord1() 0x4997A0
CVector2D CSetPiece::GetSpawnCoord1() {
    CVector2D result;
    plugin::CallMethod<0x4997A0, CSetPiece *, CVector2D*>(this, &result);
    return result;
}

// Converted from thiscall CVector2D CSetPiece::GetSpawnCoord2() 0x4997E0
CVector2D CSetPiece::GetSpawnCoord2() {
    CVector2D result;
    plugin::CallMethod<0x4997E0, CSetPiece *, CVector2D*>(this, &result);
    return result;
}

// Converted from thiscall CVector2D CSetPiece::GetTargetCoord1() 0x499820
CVector2D CSetPiece::GetTargetCoord1() {
    CVector2D result;
    plugin::CallMethod<0x499820, CSetPiece *, CVector2D*>(this, &result);
    return result;
}

// Converted from thiscall CVector2D CSetPiece::GetTargetCoord2() 0x499860
CVector2D CSetPiece::GetTargetCoord2() {
    CVector2D result;
    plugin::CallMethod<0x499860, CSetPiece *, CVector2D*>(this, &result);
    return result;
}

// Converted from thiscall CVehicle* CSetPiece::TryToGenerateCopCar(CVector2D posn,CVector2D target) 0x4998A0
CVehicle* CSetPiece::TryToGenerateCopCar(CVector2D posn, CVector2D target) {
    return plugin::CallMethodAndReturn<CVehicle*, 0x4998A0, CSetPiece *, CVector2D, CVector2D>(this, posn, target);
}

// Converted from thiscall void CSetPiece::Update(void) 0x499A80
void CSetPiece::Update() {
    plugin::CallMethod<0x499A80, CSetPiece *>(this);
}

// Converted from thiscall void CSetPiece::SetCornerA(CVector2D coord) 0x499120
void CSetPiece::SetCornerA(CVector2D coord) {
    plugin::CallMethod<0x499120, CSetPiece *, CVector2D>(this, coord);
}

// Converted from thiscall void CSetPiece::SetCornerB(CVector2D coord) 0x499150
void CSetPiece::SetCornerB(CVector2D coord) {
    plugin::CallMethod<0x499150, CSetPiece *, CVector2D>(this, coord);
}

// Converted from thiscall void CSetPiece::SetSpawnCoord1(CVector2D coord) 0x499180
void CSetPiece::SetSpawnCoord1(CVector2D coord) {
    plugin::CallMethod<0x499180, CSetPiece *, CVector2D>(this, coord);
}

// Converted from thiscall void CSetPiece::SetSpawnCoord2(CVector2D coord) 0x4991B0
void CSetPiece::SetSpawnCoord2(CVector2D coord) {
    plugin::CallMethod<0x4991B0, CSetPiece *, CVector2D>(this, coord);
}

// Converted from thiscall void CSetPiece::SetTargetCoord1(CVector2D coord) 0x4991E0
void CSetPiece::SetTargetCoord1(CVector2D coord) {
    plugin::CallMethod<0x4991E0, CSetPiece *, CVector2D>(this, coord);
}

// Converted from thiscall void CSetPiece::SetTargetCoord2(CVector2D coord) 0x499210
void CSetPiece::SetTargetCoord2(CVector2D coord) {
    plugin::CallMethod<0x499210, CSetPiece *, CVector2D>(this, coord);
}

// Converted from thiscall float CSetPiece::GetCornerAX() 0x499240
float CSetPiece::GetCornerAX() {
    return plugin::CallMethodAndReturn<float, 0x499240, CSetPiece *>(this);
}

// Converted from thiscall float CSetPiece::GetCornerAY() 0x499260
float CSetPiece::GetCornerAY() {
    return plugin::CallMethodAndReturn<float, 0x499260, CSetPiece *>(this);
}

// Converted from thiscall float CSetPiece::GetCornerBX() 0x499280
float CSetPiece::GetCornerBX() {
    return plugin::CallMethodAndReturn<float, 0x499280, CSetPiece *>(this);
}

// Converted from thiscall float CSetPiece::GetCornerBY() 0x4992A0
float CSetPiece::GetCornerBY() {
    return plugin::CallMethodAndReturn<float, 0x4992A0, CSetPiece *>(this);
}

// Converted from thiscall float CSetPiece::GetSpawnCoord1X() 0x4992C0
float CSetPiece::GetSpawnCoord1X() {
    return plugin::CallMethodAndReturn<float, 0x4992C0, CSetPiece *>(this);
}

// Converted from thiscall float CSetPiece::GetSpawnCoord1Y() 0x4992E0
float CSetPiece::GetSpawnCoord1Y() {
    return plugin::CallMethodAndReturn<float, 0x4992E0, CSetPiece *>(this);
}

// Converted from thiscall float CSetPiece::GetSpawnCoord2X() 0x499300
float CSetPiece::GetSpawnCoord2X() {
    return plugin::CallMethodAndReturn<float, 0x499300, CSetPiece *>(this);
}

// Converted from thiscall float CSetPiece::GetSpawnCoord2Y() 0x499320
float CSetPiece::GetSpawnCoord2Y() {
    return plugin::CallMethodAndReturn<float, 0x499320, CSetPiece *>(this);
}

// Converted from thiscall float CSetPiece::GetTargetCoord1X() 0x499340
float CSetPiece::GetTargetCoord1X() {
    return plugin::CallMethodAndReturn<float, 0x499340, CSetPiece *>(this);
}

// Converted from thiscall float CSetPiece::GetTargetCoord1Y() 0x499360
float CSetPiece::GetTargetCoord1Y() {
    return plugin::CallMethodAndReturn<float, 0x499360, CSetPiece *>(this);
}

// Converted from thiscall float CSetPiece::GetTargetCoord2X() 0x499380
float CSetPiece::GetTargetCoord2X() {
    return plugin::CallMethodAndReturn<float, 0x499380, CSetPiece *>(this);
}

// Converted from thiscall float CSetPiece::GetTargetCoord2Y() 0x4993A0
float CSetPiece::GetTargetCoord2Y() {
    return plugin::CallMethodAndReturn<float, 0x4993A0, CSetPiece *>(this);
}

// Converted from thiscall void CSetPiece::CSetPiece() 0x4993C0
CSetPiece::CSetPiece() {
    plugin::CallMethod<0x4993C0, CSetPiece *>(this);
}