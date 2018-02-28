/*
    Plugin-SDK (Grand Theft Auto 3) header file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/
#pragma once

#include "PluginBase.h"

class CStats {
public:
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
