/*
    Plugin-SDK (Grand Theft Auto 3) source file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/
#include "CDoor.h"

// Converted from thiscall void CDoor::CDoor(void) 0x52D150
CDoor::CDoor() {
    plugin::CallMethod<0x52D150, CDoor *>(this);
}

// Converted from thiscall float CDoor::GetAngleOpenRatio(void) 0x545F80
float CDoor::GetAngleOpenRatio() {
    return plugin::CallMethodAndReturn<float, 0x545F80, CDoor *>(this);
}

// Converted from thiscall bool CDoor::IsClosed(void) 0x546060
bool CDoor::IsClosed() {
    return plugin::CallMethodAndReturn<bool, 0x546060, CDoor *>(this);
}

// Converted from thiscall bool CDoor::IsFullyOpen(void) 0x546090
bool CDoor::IsFullyOpen() {
    return plugin::CallMethodAndReturn<bool, 0x546090, CDoor *>(this);
}

// Converted from thiscall void CDoor::Open(float angle) 0x545EF0
void CDoor::Open(float angle) {
    plugin::CallMethod<0x545EF0, CDoor *, float>(this, angle);
}

// Converted from thiscall void CDoor::Process(CVehicle *vehicle) 0x545BD0
void CDoor::Process(CVehicle* vehicle) {
    plugin::CallMethod<0x545BD0, CDoor *, CVehicle*>(this, vehicle);
}

// Converted from thiscall float CDoor::RetAngleWhenClosed(void) 0x545FE0
float CDoor::RetAngleWhenClosed() {
    return plugin::CallMethodAndReturn<float, 0x545FE0, CDoor *>(this);
}

// Converted from thiscall float CDoor::RetAngleWhenOpen(void) 0x546020
float CDoor::RetAngleWhenOpen() {
    return plugin::CallMethodAndReturn<float, 0x546020, CDoor *>(this);
}
