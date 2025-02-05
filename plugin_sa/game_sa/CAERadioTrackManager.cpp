/*
    Plugin-SDK (Grand Theft Auto San Andreas) source file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/
#include "CAERadioTrackManager.h"

CAERadioTrackManager &AERadioTrackManager = *(CAERadioTrackManager*)0x8CB6F8;

bool CAERadioTrackManager::IsVehicleRadioActive()
{
	return ((bool (__thiscall *)(CAERadioTrackManager *))0x4E9800)(this);
}

char *CAERadioTrackManager::GetRadioStationName(signed char id)
{
	return ((char *(__thiscall *)(CAERadioTrackManager *, signed char))0x4E9E10)(this, id);
}

void CAERadioTrackManager::StartRadio(int stationId, float bass, int arg, char unused) {
    plugin::CallMethod<0x4EB3C0, CAERadioTrackManager*, int, float, int, char>(this, stationId, bass, arg, unused);
}

void CAERadioTrackManager::StopRadio(tVehicleAudioSettings* settings, char arg) {
    plugin::CallMethod<0x4E9820, CAERadioTrackManager*, tVehicleAudioSettings*, char>(this, settings, arg);
}

tMusicTrackHistory *CAERadioTrackManager::m_nMusicTrackIndexHistory = (tMusicTrackHistory *)0xB62B40;
