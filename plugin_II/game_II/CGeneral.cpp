/*
    Plugin-SDK (Grand Theft Auto 2) source file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/
#include "CGeneral.h"

CGeneral** gGeneral = (CGeneral**)0x5E8108;

CGeneral* GetGeneral() {
    return *gGeneral;
}

int CGeneral::GetCycle() {
    return plugin::CallMethodAndReturn<int, 0x41CFE0, CGeneral*>(this);
}

int CGeneral::GetRandomNumber() {
    return plugin::CallMethodAndReturn<int, 0x45F9E0, CGeneral*>(this);
}

void CGeneral::Update() {
    plugin::CallMethod<0x44AA30, CGeneral*>(this);
}

void CGeneral::PrintCycle() {
    plugin::CallMethod<0x44AA90, CGeneral*>(this);
}
