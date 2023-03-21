/*
    Plugin-SDK (Grand Theft Auto 2) source file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/

#include "CPlayerPed.h"
#include "CPed.h"

CPlayerPed::CPlayerPed(char index) {
    plugin::CallMethod<0x4A83C0, CPlayerPed*, char>(this, index);
}

CPlayerPed::~CPlayerPed() {

}

void CPlayerPed::SetInitialState() {
    plugin::CallMethod<0x4A81E0, CPlayerPed*>(this);
}

void CPlayerPed::Teleport(int x, int y, int z) {
    plugin::CallMethod<0x4A5AD0, CPlayerPed*>(this);
}

void CPlayerPed::GiveMoney(unsigned int money) {
    this->m_MoneyCounter.value += money;

    if (this->m_MoneyCounter.value <= 0)
        this->m_MoneyCounter.value = 0;
}

bool CPlayerPed::IsKeyJustDown(int key) {
    int k = this->m_nKeyboardKey;
    return k && (((k >> 12) & 0x1FF) == key) && k & 0x200000;
}

bool CPlayerPed::IsKeyDown(int key) {
    return ((this->m_nKeyboardKey >> 12) & 0x1FF) == key;
}

bool CPlayerPed::IsKeyUp(int key) {
    return ((this->m_nKeyboardKey >> 12)) == key;
}

void CPlayerPed::ProcessKeyPresses(unsigned short key) {
    plugin::CallMethod<0x4A7010, CPlayerPed*, unsigned short>(this, key);
}

void CPlayerPed::ProcessActions(char forward, char backward, char left, char right, char prevWeap, char nextWeap) {
    plugin::CallMethod<0x41EA10, CPlayerPed*, char, char, char, char, char, char>(this, forward, backward, left, right, prevWeap, nextWeap);
}

void CPlayerPed::Process() {
    plugin::CallMethod<0x4A7E80, CPlayerPed*>(this);
}

void CPlayerPed::SetPed(CPed* ped) {
    plugin::CallMethod<0x4A5B40, CPlayerPed*, CPed*>(this, ped);
}

CPed* CPlayerPed::GetPed() {
    return plugin::CallMethodAndReturn<CPed*, 0x4A5130, CPlayerPed*>(this);
}

void CPlayerPed::SetAllControlStatusOn() {
    plugin::CallMethod<0x4A4E50, CPlayerPed*>(this);
}

void CPlayerPed::SetAllControlStatusOff() {
    plugin::CallMethod<0x4A69A0, CPlayerPed*>(this);
}

void CPlayerPed::SetEnterControlStatusOn() {
    plugin::CallMethod<0x4A4E90, CPlayerPed*>(this);
}

void CPlayerPed::SetEnterControlStatusOff() {
    plugin::CallMethod<0x4A4E80, CPlayerPed*>(this);
}

CCamera* CPlayerPed::GetAuxCamera() {
    return plugin::CallMethodAndReturn<CCamera*, 0x434900, CPlayerPed*>(this);
}
