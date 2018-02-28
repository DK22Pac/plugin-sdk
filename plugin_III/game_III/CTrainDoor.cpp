/*
    Plugin-SDK (Grand Theft Auto 3) source file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/
#include "CTrainDoor.h"

// Converted from thiscall void CTrainDoor::CTrainDoor(void) 0x54E430 
CTrainDoor::CTrainDoor() {
    plugin::CallMethod<0x54E430, CTrainDoor *>(this);
}

// Converted from thiscall bool CTrainDoor::IsClosed(void) 0x5460F0 
bool CTrainDoor::IsClosed() {
    return plugin::CallMethodAndReturn<bool, 0x5460F0, CTrainDoor *>(this);
}

// Converted from thiscall bool CTrainDoor::IsFullyOpen(void) 0x546120 
bool CTrainDoor::IsFullyOpen() {
    return plugin::CallMethodAndReturn<bool, 0x546120, CTrainDoor *>(this);
}

// Converted from thiscall void CTrainDoor::Open(float angle) 0x546200
void CTrainDoor::Open(float angle) {
    plugin::CallMethod<0x546200, CTrainDoor *, float>(this, angle);
}

// Converted from thiscall void CTrainDoor::RetTranslationWhenClosed(void) 0x546180 
void CTrainDoor::RetTranslationWhenClosed() {
    plugin::CallMethod<0x546180, CTrainDoor *>(this);
}

// Converted from thiscall void CTrainDoor::RetTranslationWhenOpen(void) 0x5461C0 
void CTrainDoor::RetTranslationWhenOpen() {
    plugin::CallMethod<0x5461C0, CTrainDoor *>(this);
}
