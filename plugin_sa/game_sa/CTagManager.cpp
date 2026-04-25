/*
    Plugin-SDK (Grand Theft Auto San Andreas) Source file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/
#include "CTagManager.h"

// 0x5D3D60
void CTagManager::Save() {
	plugin::Call<0x5D3D60>();
}

// 0x5D3DA0
void CTagManager::Load() {
	plugin::Call<0x5D3DA0>();
}