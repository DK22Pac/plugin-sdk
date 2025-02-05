/*
	Plugin-SDK (Grand Theft Auto III) source file
	Authors: GTA Community. See more here
	https://github.com/DK22Pac/plugin-sdk
	Do not delete this comment block. Respect others' work!
*/
#include "cSampleManager.h"

cSampleManager& SampleManager = *(cSampleManager*)0x7341E0;

void cSampleManager::StopChannel(uint32_t channel) {
	plugin::CallMethod<0x567BE0>(this, channel);
}

uint32_t cSampleManager::GetSampleLoopStartOffset(uint32_t sample) {
	return plugin::CallMethodAndReturn<uint32_t, 0x5672C0>(this, sample);
}

uint32_t cSampleManager::GetSampleLoopEndOffset(uint32_t sample) {
	return plugin::CallMethodAndReturn<uint32_t, 0x5672E0>(this, sample);
}

bool cSampleManager::GetChannelUsedFlag(uint32_t channel) {
	return plugin::CallMethodAndReturn<uint32_t, 0x567B00>(this, channel);
}

bool cSampleManager::InitialiseChannel(uint32_t channel, uint32_t sfx, uint8_t bank) {
	return plugin::CallMethodAndReturn<bool, 0x5676A0>(this, channel, sfx, bank);
}

void cSampleManager::SetChannelLoopCount(uint32_t channel, uint32_t loopCount) {
	plugin::CallMethod<0x567AA0>(this, channel, loopCount);
}

void cSampleManager::SetChannelLoopPoints(uint32_t channel, uint32_t loopStart, int32_t loopEnd) {
	plugin::CallMethod<0x567A30>(this, channel, loopStart, loopEnd);
}

void cSampleManager::SetChannelVolume(uint32_t channel, uint32_t vol) {
	plugin::CallMethod<0x567900>(this, channel, vol);
}

void cSampleManager::SetChannelPan(uint32_t channel, uint32_t pan) {
	plugin::CallMethod<0x567980>(this, channel, pan);
}

void cSampleManager::SetChannelFrequency(uint32_t channel, uint32_t freq) {
	plugin::CallMethod<0x5679D0>(this, channel, freq);
}

void cSampleManager::SetChannelReverbFlag(uint32_t channel, bool reverb) {
	plugin::CallMethod<0x567630>(this, channel, reverb);
}

void cSampleManager::StartChannel(uint32_t channel) {
	plugin::CallMethod<0x567B80>(this, channel);
}

void cSampleManager::SetChannel3DPosition(uint32_t channel, float x, float y, float z) {
	plugin::CallMethod<0x567890>(this, channel, x, y, z);
}

void cSampleManager::SetChannel3DDistances(uint32_t channel, float fMax, float fMin) {
	plugin::CallMethod<0x5678D0>(this, channel, fMax, fMin);
}

void cSampleManager::SetChannelEmittingVolume(uint32_t channel, uint32_t vol) {
	plugin::CallMethod<0x567820>(this, channel, vol);
}

uint32_t cSampleManager::GetSampleBaseFrequency(uint32_t sample) {
	return plugin::CallMethodAndReturn<uint32_t, 0x5672A0>(this, sample);
}
