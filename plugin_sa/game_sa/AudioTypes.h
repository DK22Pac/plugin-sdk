/*
    Plugin-SDK (Grand Theft Auto San Andreas) header file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/
#pragma once
#include "PluginBase.h"

struct tBeat {
	UInt32 time;
	UInt32 key;
};
VALIDATE_OFFSET(tBeat, time, 0x0);
VALIDATE_OFFSET(tBeat, key, 0x4);
VALIDATE_SIZE(tBeat, 0x8);

struct tBeatInfo {
    tBeat beatWindow[20];
    Int32 isBeatInfoPresent;
    Int32 beatTypeThisFrame;
    Int32 beatNumber;
};
VALIDATE_OFFSET(tBeatInfo, beatWindow, 0x0);
VALIDATE_OFFSET(tBeatInfo, isBeatInfoPresent, 0xA0);
VALIDATE_OFFSET(tBeatInfo, beatTypeThisFrame, 0xA4);
VALIDATE_OFFSET(tBeatInfo, beatNumber, 0xA8);
VALIDATE_SIZE(tBeatInfo, 0xAC);

struct tTrackInfo {
    tBeat beats[1000];
	UInt32 field_1F40[16];
    UInt16 field_1F80;
};
VALIDATE_OFFSET(tTrackInfo, beats, 0x0);
VALIDATE_OFFSET(tTrackInfo, field_1F40, 0x1F40);
VALIDATE_OFFSET(tTrackInfo, field_1F80, 0x1F80);
VALIDATE_SIZE(tTrackInfo, 0x1F84);
