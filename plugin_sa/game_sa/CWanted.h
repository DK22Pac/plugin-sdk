#pragma once

#include "plbase/PluginBase_SA.h"
#include "CCrimeBeingQd.h"
#include "CWantedAudio.h"

#pragma pack(push, 1)
class PLUGIN_API CWanted
{
public:
	unsigned __int32  m_dwChaosLevel;
	unsigned __int32  m_dwChaosLevelBeforeParole;
	unsigned __int32  m_dwLastTimeWantedDecreased;
	unsigned __int32  m_dwLastTimeWantedLevelChanged;
	unsigned __int32  m_dwTimeOfParole;
	float             m_fMultiplier;
	unsigned __int8   m_bCopsInPursuit;
	unsigned __int8   m_bMaxCopsInPursuit;
	unsigned __int8   m_bMaxCopCarsInPursuit;
	unsigned __int8   m_bCopsBeatingSuspect;
	unsigned __int16  m_wChanceOnRoadBlock;
	unsigned __int8   m_bPoliceBackOff : 1;       // If this is set the police will leave player alone (for cut-scenes)
    unsigned __int8   m_bPoliceBackOffGarage : 1; // If this is set the police will leave player alone (for garages)
    unsigned __int8   m_bEverybodyBackOff : 1;    // If this is set then everybody (including police) will leave the player alone (for cut-scenes)
    unsigned __int8   m_bSwatRequired : 1;        // These three booleans are needed so that the
    unsigned __int8   m_bFbiRequired : 1;         // streaming required vehicle stuff can be overrided
    unsigned __int8   m_bArmyRequired : 1;
	__int8 _pad0;	    
	unsigned __int32  m_dwCurrentChaseTime;
	unsigned __int32  m_dwCurrentChaseTimeCounter;
	unsigned __int32  m_dwTimeCounting;
	unsigned __int32  m_dwWantedLevel;
	unsigned __int32  m_dwWantedLevelBeforeParole;
	CCrimeBeingQd     m_asCrimesBeingQd[16];
	class CCopPed    *m_apCopsInPursuit[10];
	CWantedAudio      m_WantedAudio;
};
#pragma pack(pop)

VALIDATE_SIZE(CWanted, 0x29C);