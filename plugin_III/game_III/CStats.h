/*
Plugin-SDK (Grand Theft Auto) header file
Authors: GTA Community. See more here
https://github.com/DK22Pac/plugin-sdk
Do not delete this comment block. Respect others' work!
*/
#pragma once

#include "plbase\PluginBase_III.h"

#pragma pack(push, 4)
class CStats {
public:
    int m_nPeopleKilledByPlayer;
    int m_nPeopleKilledByOthers;
    int m_nCarsExploded;
    int m_nRoundsFiredByPlayer;
    int m_aPedsKilledOfThisType[23];
    int m_nHelisDestroyed;
    float m_fProgressMade;
    float m_fTotalProgressInGame;
    float m_fKgsOfExplosivesUsed;
    int m_nInstantHitsFiredByPlayer;
    int m_nInstantHitsHitByPlayer;
    int m_nCarsCrushed;
    int m_nHeadsPopped;
    int m_nTimesArrested;
    int m_nTimesDied;
    int m_nDaysPassed;
    int m_nMmRain;
    float m_fMaximumJumpDistance;
    float m_fMaximumJumpHeight;
    int m_nMaximumJumpFlips;
    int m_nMaximumJumpSpins;
    int m_nBestStuntJump;
    int m_nNumberOfUniqueJumpsFound;
    int m_nTotalNumberOfUniqueJumps;
    int m_nMissionsGiven;
    int m_nMissionsPassed;
    int m_nPassengersDroppedOffWithTaxi;
    int m_nMoneyMadeWithTaxi;
    int m_nIndustrialPassed;
    int m_nCommercialPassed;
    int m_nSuburbanPassed;
    int m_nElBurroTime;
    float m_fDistanceTravelledOnFoot;
    float m_fDistanceTravelledInVehicle;
    int m_nRecord4x4One;
    int m_nRecord4x4Two;
    int m_nRecord4x4Three;
    int m_nRecord4x4Mayhem;
    int m_nLivesSavedWithAmbulance;
    int m_nCriminalsCaught;
    int m_nHighestLevelAmbulanceMission;
    int m_nFiresExtinguished;
    int m_nLongestFlightInDodo;
    int m_nTimeTakenDefuseMission;
    int m_nNumberKillFrenziesPassed;
    int m_nTotalNumberKillFrenzies;
    int m_nTotalNumberMissions;
    int m_aFastestTimes[16];
    int m_aHighestScores[16];
    int m_nKillsSinceLastCheckpoint;
    int m_nTotalLegitimateKills;
    char m_szLastMissionPassedName[8];

    // variables
    static int &BestStuntJump;
    static int &CarsCrushed;
    static int &CarsExploded;
    static int &CommercialPassed;
    static int &CriminalsCaught;
    static int &DaysPassed;
    static float &DistanceTravelledInVehicle;
    static float &DistanceTravelledOnFoot;
    static int &ElBurroTime;
    static int *FastestTimes; // [16]
    static int &FiresExtinguished;
    static int &HeadsPopped;
    static int &HelisDestroyed;
    static int &HighestLevelAmbulanceMission;
    static int *HighestScores; // [16]
    static int &IndustrialPassed;
    static int &InstantHitsFiredByPlayer;
    static int &InstantHitsHitByPlayer;
    static float &KgsOfExplosivesUsed;
    static int &KillsSinceLastCheckpoint;
    static char *LastMissionPassedName; // [8]
    static int &LivesSavedWithAmbulance;
    static int &LongestFlightInDodo;
    static float &MaximumJumpDistance;
    static int &MaximumJumpFlips;
    static float &MaximumJumpHeight;
    static int &MaximumJumpSpins;
    static int &MissionsGiven;
    static int &MissionsPassed;
    static int &MoneyMadeWithTaxi;
    static int &NumberKillFrenziesPassed;
    static int &NumberOfUniqueJumpsFound;
    static int &PassengersDroppedOffWithTaxi;
    static int *PedsKilledOfThisType; // [23]
    static int &PeopleKilledByOthers;
    static int &PeopleKilledByPlayer;
    static float &ProgressMade;
    static int &Record4x4Mayhem;
    static int &Record4x4One;
    static int &Record4x4Three;
    static int &Record4x4Two;
    static int &RoundsFiredByPlayer;
    static int &SuburbanPassed;
    static int &TimeTakenDefuseMission;
    static int &TimesArrested;
    static int &TimesDied;
    static int &TotalLegitimateKills;
    static int &TotalNumberKillFrenzies;
    static int &TotalNumberMissions;
    static int &TotalNumberOfUniqueJumps;
    static float &TotalProgressInGame;
    static int &mmRain;

    // functions
    static void AnotherCriminalCaught();
    static void AnotherFireExtinguished();
    static void AnotherKillFrenzyPassed();
    static void AnotherLifeSavedWithAmbulance();
    static void CheckPointReachedSuccessfully();
    static void CheckPointReachedUnsuccessfully();
    static int FindCriminalRatingNumber();
    static wchar_t* FindCriminalRatingString();
    static void Init();
    static void LoadStats(unsigned char* bufferPointer, unsigned int structSize);
    static void Register4x4MayhemTime(int time);
    static void Register4x4OneTime(int time);
    static void Register4x4ThreeTime(int time);
    static void Register4x4TwoTime(int time);
    static void RegisterElBurroTime(int time);
    static void RegisterFastestTime(int statID, int time);
    static void RegisterHighestScore(int statID, int score);
    static void RegisterLevelAmbulanceMission(int level);
    static void RegisterLongestFlightInDodo(int distance);
    static void RegisterTimeTakenDefuseMission(int time);
    static void SaveStats(unsigned char* bufferPointer, unsigned int* structSize);
    static void SetTotalNumberKillFrenzies(int number);
    static void SetTotalNumberMissions(int number);
};
#pragma pack(pop)

VALIDATE_SIZE(CStats, 0x1A4);