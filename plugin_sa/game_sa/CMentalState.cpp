/*
    Plugin-SDK (Grand Theft Auto San Andreas) source file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/
#include "CMentalState.h"

// 0x421050
void CMentalState::IncrementAnger(int anger) {
    plugin::CallMethod<0x421050, CMentalState*, int>(this, anger);
}

// 0x6008A0
void CMentalState::Process() {
    plugin::CallMethod<0x6008A0, CMentalState*>(this);
}
