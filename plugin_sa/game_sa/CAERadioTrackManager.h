/*
    Plugin-SDK (Grand Theft Auto) header file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/
#pragma once

#include "plbase/PluginBase_SA.h"

struct tMusicTrackHistory
{
	int8_t m_indices[20];
};

#pragma pack(push, 1)
class PLUGIN_API CAERadioTrackManager
{
public:
	int8_t field_0;
	int8_t field_1;
	int8_t field_2;
	int8_t field_3;
	int8_t field_4;
	int8_t field_5;
	int8_t field_6;
	Bool m_bRadioAutoSelect;
	int8_t field_8[14];
	uint8_t m_nMonthDay;
	uint8_t m_nClockHours;
	int32_t m_PlayerStats[14];
	int32_t field_50;
	uint32_t m_dwTimeToDisplayRadioName;
	int32_t field_58;
	int32_t field_5C;
	int32_t field_60;
	int32_t field_64;
	int32_t field_68;
	int32_t m_dwStationsListed;
	int32_t m_dwStationsListDown;
	int32_t field_74;
	int32_t field_78;
	int32_t field_7C;
	int32_t field_80;
	int32_t field_84;
	int8_t field_88;
	int8_t field_89[19];
	int32_t field_9C;
	int32_t field_A0;
	int32_t field_A4;
	int32_t field_A8;
	int8_t field_AC;
	int8_t m_nCurrentRadioStation;
	int8_t field_AE;
	int8_t field_AF[10];
	int8_t field_B9;
	int8_t field_BA;
	int8_t field_BB[5];
	int8_t field_C0;
	int8_t field_C1;
	int8_t field_C2[2];
	int8_t field_C4;
	int8_t field_C5[25];
	int8_t field_DE[10];
	int8_t field_E8;
	int8_t m_nRadioStationState;
	Bool m_bStereoActive;
	int8_t field_EB;
	int32_t field_EC;
	int8_t field_F0;
	int8_t field_F1;
	int8_t field_F2;
	int8_t field_F3[5];
	int8_t field_F8;
	int8_t field_F9[15];
	int8_t field_108;
	int8_t field_109[3];
	int32_t field_10C[143];
	int8_t field_348[32];
	int32_t field_368;
	int8_t field_36C;
	int8_t field_36D[3];

	Bool IsVehicleRadioActive();
	char *GetRadioStationName(signed char id);

	// 11 structures
	static tMusicTrackHistory *m_nMusicTrackIndexHistory;
};
#pragma pack(pop)

VALIDATE_SIZE(CAERadioTrackManager, 0x370);