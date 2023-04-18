/*
    Plugin-SDK (Grand Theft Auto 2) source file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/

#include "CPed.h"

void CPed::GiveWeapon(int id, int ammo) {
    plugin::CallMethod<0x43E4B0, CPed*, int, int>(this, id, ammo);
}

void CPed::SetWantedLevel(char level) {
    plugin::CallMethod<0x434CD0, CPed*, char>(this, level);
}

void CPed::ClearWantedLevel() {
    plugin::CallMethod<0x420B80, CPed*>(this);
}

unsigned int CPed::GetId() {
    return plugin::CallMethodAndReturn<unsigned int, 0x420B60, CPed*>(this);
}

void CPed::SetHealth(short health) {
    plugin::CallMethod<0x4039A0, CPed*>(this, health);
}

void CPed::Clear() {
    plugin::CallMethod<0x435720, CPed*>(this);
}

void CPed::SetSearchType(eSearchType type) {
    plugin::CallMethod<0x403920, CPed*>(this, type);
}

CSprite* CPed::GetSprite() {
    return plugin::CallMethodAndReturn<CSprite*, 0x434B80, CPed*>(this);
}

CCar* CPed::GetCar() {
    return plugin::CallMethodAndReturn<CCar*, 0x416B60, CPed*>(this);
}

int const& CPed::GetPositionX(int* x) {
    return plugin::CallMethodAndReturn<int const&, 0x403A00, CPed*, int*>(this, x);
}

int const& CPed::GetPositionY(int* y) {
    return plugin::CallMethodAndReturn<int const&, 0x403A10, CPed*, int*>(this, y);
}

int const& CPed::GetPositionZ(int* z) {
    return plugin::CallMethodAndReturn<int const&, 0x416B50, CPed*, int*>(this, z);
}

CEncodedVector CPed::GetPosition() {
    int x, y, z = 0;
    GetPositionX(&x);
    GetPositionY(&y); 
    GetPositionZ(&z);

    return { x, y, z };
}

CEncodedVector2D CPed::GetPosition2D() {
    int x, y = 0;
    GetPositionX(&x);
    GetPositionY(&y);

    return { x, y };
}

short const& CPed::GetRotation(short* r) {
    return plugin::CallMethodAndReturn<short const&, 0x4361B0, CPed*, short*>(this, r);
}

void CPed::SetPosition2D(CEncodedVector2D pos) {
    plugin::CallMethod<0x435C80, CPed*, CEncodedVector2D>(this, pos);
}

void CPed::SetRotation(short rot) {
    plugin::CallMethod<0x433C00, CPed*, short>(this, rot);
}

void CPed::SetOccupation(int occupation) {
    plugin::CallMethod<0x403970, CPed*, int>(this, occupation);
}

void CPed::SetRemap(char remap) {
    plugin::CallMethod<0x433B90, CPed*, char>(this, remap);
}

char CPed::GetRemap() {
    return plugin::CallMethodAndReturn<char, 0x433BA0, CPed*>(this);
}

void CPed::EnterCarAsPassenger(CCar* target) {
    plugin::CallMethod<0x43E350, CPed*, CCar*>(this, target);
}
