#pragma once

#include "plugin\plugin.h"

struct tMusicTrackHistory
{
	Int8 m_indices[20];
};

#pragma pack(push, 1)
class PLUGIN_API CAERadioTrackManager
{
public:
	Int8 field_0;
	Int8 field_1;
	Int8 field_2;
	Int8 field_3;
	Int8 field_4;
	Int8 field_5;
	Int8 field_6;
	Bool m_bRadioAutoSelect;
	Int8 field_8[14];
	UInt8 m_nMonthDay;
	UInt8 m_nClockHours;
	Int32 m_PlayerStats[14];
	Int32 field_50;
	UInt32 m_dwTimeToDisplayRadioName;
	Int32 field_58;
	Int32 field_5C;
	Int32 field_60;
	Int32 field_64;
	Int32 field_68;
	Int32 m_dwStationsListed;
	Int32 m_dwStationsListDown;
	Int32 field_74;
	Int32 field_78;
	Int32 field_7C;
	Int32 field_80;
	Int32 field_84;
	Int8 field_88;
	Int8 field_89[19];
	Int32 field_9C;
	Int32 field_A0;
	Int32 field_A4;
	Int32 field_A8;
	Int8 field_AC;
	Int8 m_nCurrentRadioStation;
	Int8 field_AE;
	Int8 field_AF[10];
	Int8 field_B9;
	Int8 field_BA;
	Int8 field_BB[5];
	Int8 field_C0;
	Int8 field_C1;
	Int8 field_C2[2];
	Int8 field_C4;
	Int8 field_C5[25];
	Int8 field_DE[10];
	Int8 field_E8;
	Int8 m_nRadioStationState;
	Bool m_bStereoActive;
	Int8 field_EB;
	Int32 field_EC;
	Int8 field_F0;
	Int8 field_F1;
	Int8 field_F2;
	Int8 field_F3[5];
	Int8 field_F8;
	Int8 field_F9[15];
	Int8 field_108;
	Int8 field_109[3];
	Int32 field_10C[143];
	Int8 field_348[32];
	Int32 field_368;
	Int8 field_36C;
	Int8 field_36D[3];

	Bool IsVehicleRadioActive();
	char *GetRadioStationName(signed char id);

	// 11 structures
	static tMusicTrackHistory *m_nMusicTrackIndexHistory;
};
#pragma pack(pop)

VALIDATE_SIZE(CAERadioTrackManager, 0x370);