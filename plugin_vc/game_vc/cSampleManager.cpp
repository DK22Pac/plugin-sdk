/*
	Plugin-SDK (Grand Theft Auto Vice City) source file
	Authors: GTA Community. See more here
	https://github.com/DK22Pac/plugin-sdk
	Do not delete this comment block. Respect others' work!
*/
#include "cSampleManager.h"

cSampleManager& SampleManager = *(cSampleManager*)0x983B90;

bool cSampleManager::IsMP3RadioChannelAvailable() {
	return plugin::CallAndReturn<bool, 0x5D80E0>();
}
