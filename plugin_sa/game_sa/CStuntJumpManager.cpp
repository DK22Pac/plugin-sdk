/*
Plugin-SDK (Grand Theft Auto San Andreas) Source file
Authors: GTA Community. See more here
https://github.com/DK22Pac/plugin-sdk
Do not delete this comment block. Respect others' work!
*/
#include "CStuntJumpManager.h"

// 0x5D5570
bool CStuntJumpManager::Save() {
	return plugin::CallAndReturn<bool, 0x5D5570>();
}

// 0x5D5920
bool CStuntJumpManager::Load() {
	return plugin::CallAndReturn<bool, 0x5D5570>();
}