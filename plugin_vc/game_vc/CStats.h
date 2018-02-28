/*
Plugin-SDK (Grand Theft Auto Vice City) header file
Authors: GTA Community. See more here
https://github.com/DK22Pac/plugin-sdk
Do not delete this comment block. Respect others' work!
*/
#pragma once

#include "PluginBase.h"

class CStats
{
public:
	// variables
	static float* FavoriteRadioStationList;		// float CStats::FavoriteRadioStationList[10]
	static bool* abSonyCDs;		// Bool CStats::abSonyCDs[1]
	static bool32& ShowChaseStatOnScreen;		// Bool32 CStats::ShowChaseStatOnScreen
	static bool32& NoMoreHurricanes;		// Bool32 CStats::NoMoreHurricanes
	static bool32& PamphletMissionPassed;		// Bool32 CStats::PamphletMissionPassed
	static bool32& SuburbanPassed;		// Bool32 CStats::SuburbanPassed
	static bool32& CommercialPassed;		// Bool32 CStats::CommercialPassed
	static bool32& IndustrialPassed;		// Bool32 CStats::IndustrialPassed
	static char* LastMissionPassedName;		// char CStats::LastMissionPassedName[8]
	static int& TotalLegitimateKills;		// int CStats::TotalLegitimateKills
	static int& KillsSinceLastCheckpoint;		// int CStats::KillsSinceLastCheckpoint
	static int& CheatedCount;		// int CStats::CheatedCount
	static float& HighestChaseValue;		// float CStats::HighestChaseValue
	static int* BestPositions;		// int CStats::BestPositions[1]
	static int* HighestScores;		// int CStats::HighestScores[5]
	static int* FastestTimes;		// int CStats::FastestTimes[23]
	static int& PropertyDestroyed;		// int CStats::PropertyDestroyed
	static float& AutoPaintingBudget;		// float CStats::AutoPaintingBudget
	static float& PropertyBudget;		// float CStats::PropertyBudget
	static float& Longest2WheelDist;		// float CStats::Longest2WheelDist
	static float& LongestStoppieDist;		// float CStats::LongestStoppieDist
	static float& LongestWheelieDist;		// float CStats::LongestWheelieDist
	static int& Longest2Wheel;		// int CStats::Longest2Wheel
	static int& LongestStoppie;		// int CStats::LongestStoppie
	static int& LongestWheelie;		// int CStats::LongestWheelie
	static bool* PropertyOwned;		// Bool CStats::PropertyOwned[15]
	static int& BloodRingTime;		// int CStats::BloodRingTime
	static int& BloodRingKills;		// int CStats::BloodRingKills
	static int& NumPropertyOwned;		// int CStats::NumPropertyOwned
	static float& ShootingRank;		// float CStats::ShootingRank
	static float& TopShootingRangeScore;		// float CStats::TopShootingRangeScore
	static float& IceCreamSold;		// float CStats::IceCreamSold
	static float& GarbagePickups;		// float CStats::GarbagePickups
	static float& PizzasDelivered;		// float CStats::PizzasDelivered
	static float& Assassinations;		// float CStats::Assassinations
	static float& MovieStunts;		// float CStats::MovieStunts
	static float& StoresKnockedOff;		// float CStats::StoresKnockedOff
	static float& LoanSharks;		// float CStats::LoanSharks
	static float& FashionBudget;		// float CStats::FashionBudget
	static float& WeaponBudget;		// float CStats::WeaponBudget
	static int& SeagullsKilled;		// int CStats::SeagullsKilled
	static int& TimesDrowned;		// int CStats::TimesDrowned
	static int& FlightTime;		// int CStats::FlightTime
	static int& TotalNumberMissions;		// int CStats::TotalNumberMissions
	static int& TotalNumberKillFrenzies;		// int CStats::TotalNumberKillFrenzies
	static int& NumberKillFrenziesPassed;		// int CStats::NumberKillFrenziesPassed
	static int& PhotosTaken;		// int CStats::PhotosTaken
	static int& HighestLevelFireMission;		// int CStats::HighestLevelFireMission
	static int& HighestLevelAmbulanceMission;		// int CStats::HighestLevelAmbulanceMission
	static int& HighestLevelVigilanteMission;		// int CStats::HighestLevelVigilanteMission
	static int& FiresExtinguished;		// int CStats::FiresExtinguished
	static int& CriminalsCaught;		// int CStats::CriminalsCaught
	static int& LivesSavedWithAmbulance;		// int CStats::LivesSavedWithAmbulance
	static float& DistanceTravelledByPlane;		// float CStats::DistanceTravelledByPlane
	static float& DistanceTravelledByHelicoptor;		// float CStats::DistanceTravelledByHelicoptor
	static float& DistanceTravelledByGolfCart;		// float CStats::DistanceTravelledByGolfCart
	static float& DistanceTravelledByBoat;		// float CStats::DistanceTravelledByBoat
	static float& DistanceTravelledByBike;		// float CStats::DistanceTravelledByBike
	static float& DistanceTravelledByCar;		// float CStats::DistanceTravelledByCar
	static float& DistanceTravelledOnFoot;		// float CStats::DistanceTravelledOnFoot
	static int& MoneyMadeWithTaxi;		// int CStats::MoneyMadeWithTaxi
	static int& PassengersDroppedOffWithTaxi;		// int CStats::PassengersDroppedOffWithTaxi
	static int& MissionsPassed;		// int CStats::MissionsPassed
	static int& MissionsGiven;		// int CStats::MissionsGiven
	static int& TotalNumberOfUniqueJumps;		// int CStats::TotalNumberOfUniqueJumps
	static int& NumberOfUniqueJumpsFound;		// int CStats::NumberOfUniqueJumpsFound
	static int& BestStuntJump;		// int CStats::BestStuntJump
	static int& MaximumJumpSpins;		// int CStats::MaximumJumpSpins
	static int& MaximumJumpFlips;		// int CStats::MaximumJumpFlips
	static float& MaximumJumpHeight;		// float CStats::MaximumJumpHeight
	static float& MaximumJumpDistance;		// float CStats::MaximumJumpDistance
	static int& Sprayings;		// int CStats::Sprayings
	static int& SafeHouseVisits;		// int CStats::SafeHouseVisits
	static int& DaysPassed;		// int CStats::DaysPassed
	static int& TimesDied;		// int CStats::TimesDied
	static int& TimesArrested;		// int CStats::TimesArrested
	static int& WantedStarsEvaded;		// int CStats::WantedStarsEvaded
	static int& WantedStarsAttained;		// int CStats::WantedStarsAttained
	static int& HeadsPopped;		// int CStats::HeadsPopped
	static int& BulletsThatHit;		// int CStats::BulletsThatHit
	static int& KgsOfExplosivesUsed;		// int CStats::KgsOfExplosivesUsed
	static float& TotalProgressInGame;		// float CStats::TotalProgressInGame
	static float& ProgressMade;		// float CStats::ProgressMade
	static int& HelisDestroyed;		// int CStats::HelisDestroyed
	static int* PedsKilledOfThisType;		// int CStats::PedsKilledOfThisType[23]
	static int& RoundsFiredByPlayer;		// int CStats::RoundsFiredByPlayer
	static int& TyresPopped;		// int CStats::TyresPopped
	static int& BoatsExploded;		// int CStats::BoatsExploded
	static int& CarsExploded;		// int CStats::CarsExploded
	static int& PeopleKilledByOthers;		// int CStats::PeopleKilledByOthers
	static int& PeopleKilledByPlayer;		// int CStats::PeopleKilledByPlayer

	// functions
	static void RegisterFastestTime(int statID, int time);
	static void RegisterHighestScore(int statID, int score);
	static void RegisterBestPosition(int statID, int position);
	static void Init();
	static float GetFavoriteRadioStationList(int stationID);
	static void AnotherLifeSavedWithAmbulance();
	static void AnotherCriminalCaught();
	static void AnotherFireExtinguished();
	static void RegisterLevelVigilanteMission(int level);
	static void RegisterLevelAmbulanceMission(int level);
	static void RegisterLevelFireMission(int level);
	static char const* FindChaseString(float chaseValue);
	static void AnotherKillFrenzyPassed();
	static void SetTotalNumberKillFrenzies(int number);
	static void SetTotalNumberMissions(int number);
	static void MoneySpentOnWeapons(int moneySpent);
	static void MoneySpentOnProperty(int moneySpent);
	static void MoneySpentOnFashion(int moneySpent);
	static void NumOfStoresKnockedOff(int storesKnockedOff);
	static void NumOfAssassinations(int assassinations);
	static void NumOfPizzasDelivered(int pizzasDelivered);
	static void NumOfIceCreamSold(int iceCreamSold);
	static void AddPropertyAsOwned(int propertyID);
	static void AddNumBloodRingKills(int bloodringKills);
	static void LongestTimeInBloodRing(int bloodRingTime);
	static void CheckPointReachedSuccessfully();
	static void CheckPointReachedUnsuccessfully();
	static int FindCriminalRatingNumber();
	static char const* FindCriminalRatingString();
	static float GetPercentageProgress();
	static void BuildStatLine(char* a1, void* a2, int a3, void* a4, int a5);
	static void SaveStats(unsigned char* bufferPointer, unsigned int* structSize);
	static void LoadStats(unsigned char* bufferPointer, unsigned int structSize);
	static void ConstructStatLine(int a1);
};