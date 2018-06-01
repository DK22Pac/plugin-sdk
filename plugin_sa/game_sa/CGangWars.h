/*
    Plugin-SDK (Grand Theft Auto San Andreas) header file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/
#pragma once

#include "PluginBase.h"
#include "CZoneInfo.h"
#include "CZone.h"
#include "CRadar.h"
#include "CVector.h"

enum PLUGIN_API eGangAttackState {
    NO_ATTACK = 0,
    WAR_NOTIFIED = 0X1,
    PLAYER_CAME_TO_WAR = 0X2
};

enum PLUGIN_API eGangWarState {
    NOT_IN_WAR = 0,
    PREFIRST_WAVE = 0X1,
    FIRST_WAVE = 0X2,
    PRESECOND_WAVE = 0X3,
    SECOND_WAVE = 0X4,
    PRETHIRD_WAVE = 0X5,
    THIRD_WAVE = 0X6
};

class PLUGIN_API CGangWars {
public:
    SUPPORTED_10US static int &ZoneInfoForTraining;
    SUPPORTED_10US static int(&GangRatingStrength)[3]; // static int GangRatingStrength[3]
    SUPPORTED_10US static int(&GangRatings)[3]; // static int GangRatings[3]
    SUPPORTED_10US static int &FightTimer;
    SUPPORTED_10US static float &TimeTillNextAttack;
    SUPPORTED_10US static eGangAttackState &State2;
    SUPPORTED_10US static int &Gang2;
    SUPPORTED_10US static unsigned int &LastTimeInArea;
    SUPPORTED_10US static int &WarFerocity;
    SUPPORTED_10US static float &Provocation;
    SUPPORTED_10US static unsigned int &TimeStarted;
    SUPPORTED_10US static eGangWarState &State;
    SUPPORTED_10US static int(&aSpecificZones)[6]; // static int aSpecificZones[6]
    SUPPORTED_10US static float &Difficulty;
    SUPPORTED_10US static int &Gang1;
    SUPPORTED_10US static CZone *&pZoneToFightOver;
    SUPPORTED_10US static CZoneInfo *&pZoneInfoToFightOver;
    SUPPORTED_10US static bool &bGangWarsActive;
    SUPPORTED_10US static bool &bTrainingMission;
    SUPPORTED_10US static bool &bPlayerIsCloseby;
    SUPPORTED_10US static bool &bCanTriggerGangWarWhenOnAMission;
    SUPPORTED_10US static int &NumSpecificZones;
    SUPPORTED_10US static CRadar *&RadarBlip;
    SUPPORTED_10US static float &TerritoryUnderControlPercentage;
    SUPPORTED_10US static bool &bIsPlayerOnAMission;
    SUPPORTED_10US static CVector &CoorsOfPlayerAtStartOfWar;
    SUPPORTED_10US static CVector &PointOfAttack;

    SUPPORTED_10US static void AddKillToProvocation(int Pedtype);
    SUPPORTED_10US static bool AttackWaveOvercome();
    SUPPORTED_10US static unsigned int CalculateTimeTillNextAttack();
    SUPPORTED_10US static bool CanPlayerStartAGangWarHere(CZoneInfo *zoneInfo);
    SUPPORTED_10US static void CheerVictory();
    SUPPORTED_10US static void ClearSpecificZonesToTriggerGangWar();
    SUPPORTED_10US static void ClearTheStreets();
    SUPPORTED_10US static bool CreateAttackWave(int warFerocity, int waveID);
    SUPPORTED_10US static bool CreateDefendingGroup(int unsued);
    SUPPORTED_10US static void DoStuffWhenPlayerVictorious();
    //! unused
    SUPPORTED_10US static bool DoesPlayerControlThisZone(CZoneInfo *zoneinfo);
    SUPPORTED_10US static bool DontCreateCivilians();
    SUPPORTED_10US static void EndGangWar(bool bEnd);
    SUPPORTED_10US static bool GangWarFightingGoingOn();
    SUPPORTED_10US static bool GangWarGoingOn();
    SUPPORTED_10US static void InitAtStartOfGame();
    SUPPORTED_10US static void Load();
    SUPPORTED_10US static void MakeEnemyGainInfluenceInZone(int GangID, int GangDensityIncreaser);
    SUPPORTED_10US static bool MakePlayerGainInfluenceInZone(float remove_mult);
    SUPPORTED_10US static bool PedStreamedInForThisGang(int gangID);
    SUPPORTED_10US static bool PickStreamedInPedForThisGang(int gangID, int *outPedID);
    SUPPORTED_10US static bool PickZoneToAttack();
    SUPPORTED_10US static void ReleaseCarsInAttackWave();
    //! return num of released peds
    SUPPORTED_10US static int ReleasePedsInAttackWave(bool IsEndOfWar, bool RestoreGangPedsAcquaintance);
    SUPPORTED_10US static void Save();
    SUPPORTED_10US static void SetGangWarsActive(bool bActive);
    SUPPORTED_10US static void SetSpecificZoneToTriggerGangWar(int zoneId);
    SUPPORTED_10US static void StartDefensiveGangWar();
    SUPPORTED_10US static void StartOffensiveGangWar();
    SUPPORTED_10US static void StrengthenPlayerInfluenceInZone(int GroveDensityIncreaser);
    //! unused
    SUPPORTED_10US static void SwitchGangWarsActive();
    SUPPORTED_10US static void TellGangMembersTo(int bIsGangWarEnding);
    SUPPORTED_10US static void TellStreamingWhichGangsAreNeeded(int *GangsBitFlags);
    SUPPORTED_10US static void Update();
    SUPPORTED_10US static void UpdateTerritoryUnderControlPercentage();
};

#include "meta/meta.CGangWars.h"
