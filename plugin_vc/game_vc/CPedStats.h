/*
    Plugin-SDK (Grand Theft Auto Vice City) header file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/
#pragma once

#include "PluginBase.h"

enum ePersonalityType : unsigned int
{
	PERSONALITY_PLAYER = 0,
	PERSONALITY_COP = 1,
	PERSONALITY_MEDIC = 2,
	PERSONALITY_FIREMAN = 3,
	PERSONALITY_GANG1 = 4,
	PERSONALITY_GANG2 = 5,
	PERSONALITY_GANG3 = 6,
	PERSONALITY_GANG4 = 7,
	PERSONALITY_GANG5 = 8,
	PERSONALITY_GANG6 = 9,
	PERSONALITY_GANG7 = 10,
	PERSONALITY_STREET_GUY = 11,
	PERSONALITY_SUIT_GUY = 12,
	PERSONALITY_SENSIBLE_GUY = 13,
	PERSONALITY_GEEK_GUY = 14,
	PERSONALITY_OLD_GUY = 15,
	PERSONALITY_TOUGH_GUY = 16,
	PERSONALITY_STREET_GIRL = 17,
	PERSONALITY_SUIT_GIRL = 18,
	PERSONALITY_SENSIBLE_GIRL = 19,
	PERSONALITY_GEEK_GIRL = 20,
	PERSONALITY_OLD_GIRL = 21,
	PERSONALITY_TOUGH_GIRL = 22,
	PERSONALITY_TRAMP_MALE = 23,
	PERSONALITY_TRAMP_FEMALE = 24,
	PERSONALITY_TOURIST = 25,
	PERSONALITY_PROSTITUTE = 26,
	PERSONALITY_CRIMINAL = 27,
	PERSONALITY_BUSKER = 28,
	PERSONALITY_TAXIDRIVER = 29,
	PERSONALITY_PSYCHO = 30,
	PERSONALITY_STEWARD = 31,
	PERSONALITY_SPORTSFAN = 32,
	PERSONALITY_SHOPPER = 33,
	PERSONALITY_OLDSHOPPER = 34,
	PERSONALITY_BEACH_GUY = 35,
	PERSONALITY_BEACH_GIRL = 36,
	PERSONALITY_SKATER = 37,
	PERSONALITY_STD_MISSION = 38,
	PERSONALITY_COWARD = 39
};

class CPedStats
{
public:
	ePersonalityType m_Personality;
	char m_aszName[24];
	float m_fFleeDistance;
	float m_fHeadingChangeRate;
	unsigned char m_nFear;
	unsigned char m_nTemper;
	unsigned char m_nLawfullness;
	unsigned char m_nSexiness;
	float m_fAttackStrength;
	float m_fDefendWeakness;
	union
	{
		unsigned char m_nFlags;
		struct
		{
			unsigned char bPunchOnly : 1;
			unsigned char bCanKneeHead : 1;
			unsigned char bCanKick : 1;
			unsigned char bCanRoundHse : 1;
			unsigned char bNoDive : 1;
			unsigned char b1HitKnockdown : 1;
			unsigned char bShoppingBags : 1;
			unsigned char bGunPanic : 1;
		};
	};
	char _pad0[3];
	
	// variables
	static CPedStats* (&ms_apPedStats)[40];		// CPedStats* CPedStats::ms_apPedStats[40]
	
	// functions
	static void Initialise();
	static void Shutdown();
	static void LoadPedStats();
	static unsigned int GetPedStatType(char* pedStatName);
};

VALIDATE_SIZE(CPedStats, 0x34);