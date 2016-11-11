/*
    Plugin-SDK (Grand Theft Auto) source file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/
#include "CPed.h"

// Converted from thiscall void CPed::CPed(uint modelIndex) 0x50DC20
CPed::CPed(unsigned int modelIndex) : CPhysical(plugin::dummy) {
    plugin::CallMethod<0x50DC20, CPed *, unsigned int>(this, modelIndex);
}