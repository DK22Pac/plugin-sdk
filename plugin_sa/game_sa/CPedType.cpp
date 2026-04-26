/*
    Plugin-SDK (Grand Theft Auto San Andreas) source file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/
#include "CPedType.h"

// 0x5D3D10
void CPedType::Load() {
	plugin::Call<0x5D3D10>();
}

// 0x5D3CD0
void CPedType::Save() {
	plugin::Call<0x5D3CD0>();
}