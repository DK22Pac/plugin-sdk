/*
Plugin-SDK (Grand Theft Auto Vice City) header file
Authors: GTA Community. See more here
https://github.com/DK22Pac/plugin-sdk
Do not delete this comment block. Respect others' work!
*/
#include "CStats.h"

// variables
// Converted from float CStats::FavoriteRadioStationList[10] 0x862460
float* CStats::FavoriteRadioStationList = (float*)0x862460;
// Converted from Bool CStats::abSonyCDs[1] 0xA10B88
bool* CStats::abSonyCDs = (bool*)0xA10B88;
// Converted from Bool32 CStats::ShowChaseStatOnScreen 0x97F2C4
bool32& CStats::ShowChaseStatOnScreen = *(bool32*)0x97F2C4;
// Converted from Bool32 CStats::NoMoreHurricanes 0xA0FCAC
bool32& CStats::NoMoreHurricanes = *(bool32*)0xA0FCAC;
// Converted from Bool32 CStats::PamphletMissionPassed 0x97F348
bool32& CStats::PamphletMissionPassed = *(bool32*)0x97F348;
// Converted from Bool32 CStats::SuburbanPassed 0x978A0C
bool32& CStats::SuburbanPassed = *(bool32*)0x978A0C;
// Converted from Bool32 CStats::CommercialPassed 0x9B489C
bool32& CStats::CommercialPassed = *(bool32*)0x9B489C;
// Converted from Bool32 CStats::IndustrialPassed 0x9751F4
bool32& CStats::IndustrialPassed = *(bool32*)0x9751F4;
// Converted from char CStats::LastMissionPassedName[8] 0x7E9D78
char* CStats::LastMissionPassedName = (char*)0x7E9D78;
// Converted from int CStats::TotalLegitimateKills 0x9B6AB0
int& CStats::TotalLegitimateKills = *(int*)0x9B6AB0;
// Converted from int CStats::KillsSinceLastCheckpoint 0x97F2E8
int& CStats::KillsSinceLastCheckpoint = *(int*)0x97F2E8;
// Converted from int CStats::CheatedCount 0x9B5F8C
int& CStats::CheatedCount = *(int*)0x9B5F8C;
// Converted from float CStats::HighestChaseValue 0x978E0C
float& CStats::HighestChaseValue = *(float*)0x978E0C;
// Converted from int CStats::BestPositions[1] 0xA0FD80
int* CStats::BestPositions = (int*)0xA0FD80;
// Converted from int CStats::HighestScores[5] 0x9B6E20
int* CStats::HighestScores = (int*)0x9B6E20;
// Converted from int CStats::FastestTimes[23] 0x974B80
int* CStats::FastestTimes = (int*)0x974B80;
// Converted from int CStats::PropertyDestroyed 0x975404
int& CStats::PropertyDestroyed = *(int*)0x975404;
// Converted from float CStats::AutoPaintingBudget 0xA10298
float& CStats::AutoPaintingBudget = *(float*)0xA10298;
// Converted from float CStats::PropertyBudget 0x9B48B0
float& CStats::PropertyBudget = *(float*)0x9B48B0;
// Converted from float CStats::Longest2WheelDist 0x9B48D0
float& CStats::Longest2WheelDist = *(float*)0x9B48D0;
// Converted from float CStats::LongestStoppieDist 0x9B5F44
float& CStats::LongestStoppieDist = *(float*)0x9B5F44;
// Converted from float CStats::LongestWheelieDist  0x9786C0
float& CStats::LongestWheelieDist = *(float*)0x9786C0;
// Converted from int CStats::Longest2Wheel 0xA0FCF8
int& CStats::Longest2Wheel = *(int*)0xA0FCF8;
// Converted from int CStats::LongestStoppie 0x974B3C
int& CStats::LongestStoppie = *(int*)0x974B3C;
// Converted from int CStats::LongestWheelie 0x97530C
int& CStats::LongestWheelie = *(int*)0x97530C;
// Converted from Bool CStats::PropertyOwned[15] 0xA10AFD
bool* CStats::PropertyOwned = (bool*)0xA10AFD;
// Converted from int CStats::BloodRingTime 0xA0D2E0
int& CStats::BloodRingTime = *(int*)0xA0D2E0;
// Converted from int CStats::BloodRingKills 0x9B6E54
int& CStats::BloodRingKills = *(int*)0x9B6E54;
// Converted from int CStats::NumPropertyOwned 0x978E08
int& CStats::NumPropertyOwned = *(int*)0x978E08;
// Converted from float CStats::ShootingRank 0x974B08
float& CStats::ShootingRank = *(float*)0x974B08;
// Converted from float CStats::TopShootingRangeScore 0xA0D8A4
float& CStats::TopShootingRangeScore = *(float*)0xA0D8A4;
// Converted from float CStats::IceCreamSold 0x975390
float& CStats::IceCreamSold = *(float*)0x975390;
// Converted from float CStats::GarbagePickups 0x974C00
float& CStats::GarbagePickups = *(float*)0x974C00;
// Converted from float CStats::PizzasDelivered 0x978780
float& CStats::PizzasDelivered = *(float*)0x978780;
// Converted from float CStats::Assassinations 0xA10918
float& CStats::Assassinations = *(float*)0xA10918;
// Converted from float CStats::MovieStunts 0xA0FC8C
float& CStats::MovieStunts = *(float*)0xA0FC8C;
// Converted from float CStats::StoresKnockedOff 0x97F898
float& CStats::StoresKnockedOff = *(float*)0x97F898;
// Converted from float CStats::LoanSharks 0x974C28
float& CStats::LoanSharks = *(float*)0x974C28;
// Converted from float CStats::FashionBudget 0xA0D068
float& CStats::FashionBudget = *(float*)0xA0D068;
// Converted from float CStats::WeaponBudget 0xA0FDCC
float& CStats::WeaponBudget = *(float*)0xA0FDCC;
// Converted from int CStats::SeagullsKilled 0x97869C
int& CStats::SeagullsKilled = *(int*)0x97869C;
// Converted from int CStats::TimesDrowned 0x9B48B4
int& CStats::TimesDrowned = *(int*)0x9B48B4;
// Converted from int CStats::FlightTime 0x97854C
int& CStats::FlightTime = *(int*)0x97854C;
// Converted from int CStats::TotalNumberMissions 0x974BF0
int& CStats::TotalNumberMissions = *(int*)0x974BF0;
// Converted from int CStats::TotalNumberKillFrenzies 0x974C0C
int& CStats::TotalNumberKillFrenzies = *(int*)0x974C0C;
// Converted from int CStats::NumberKillFrenziesPassed 0x974C08
int& CStats::NumberKillFrenziesPassed = *(int*)0x974C08;
// Converted from int CStats::PhotosTaken 0x97F21C
int& CStats::PhotosTaken = *(int*)0x97F21C;
// Converted from int CStats::HighestLevelFireMission 0x975310
int& CStats::HighestLevelFireMission = *(int*)0x975310;
// Converted from int CStats::HighestLevelAmbulanceMission 0x978DB8
int& CStats::HighestLevelAmbulanceMission = *(int*)0x978DB8;
// Converted from int CStats::HighestLevelVigilanteMission 0x94DD60
int& CStats::HighestLevelVigilanteMission = *(int*)0x94DD60;
// Converted from int CStats::FiresExtinguished 0x9B6A84
int& CStats::FiresExtinguished = *(int*)0x9B6A84;
// Converted from int CStats::CriminalsCaught 0x9787B4
int& CStats::CriminalsCaught = *(int*)0x9787B4;
// Converted from int CStats::LivesSavedWithAmbulance 0x9B5EA8
int& CStats::LivesSavedWithAmbulance = *(int*)0x9B5EA8;
// Converted from float CStats::DistanceTravelledByPlane 0x9B6A78
float& CStats::DistanceTravelledByPlane = *(float*)0x9B6A78;
// Converted from float CStats::DistanceTravelledByHelicoptor 0x9B6A48
float& CStats::DistanceTravelledByHelicoptor = *(float*)0x9B6A48;
// Converted from float CStats::DistanceTravelledByGolfCart 0x974C04
float& CStats::DistanceTravelledByGolfCart = *(float*)0x974C04;
// Converted from float CStats::DistanceTravelledByBoat 0xA0D384
float& CStats::DistanceTravelledByBoat = *(float*)0xA0D384;
// Converted from float CStats::DistanceTravelledByBike 0xA0D2D8
float& CStats::DistanceTravelledByBike = *(float*)0xA0D2D8;
// Converted from float CStats::DistanceTravelledByCar 0xA0FCFC
float& CStats::DistanceTravelledByCar = *(float*)0xA0FCFC;
// Converted from float CStats::DistanceTravelledOnFoot 0xA0D9B4
float& CStats::DistanceTravelledOnFoot = *(float*)0xA0D9B4;
// Converted from int CStats::MoneyMadeWithTaxi 0xA0D9C8
int& CStats::MoneyMadeWithTaxi = *(int*)0xA0D9C8;
// Converted from int CStats::PassengersDroppedOffWithTaxi 0xA0D1DC
int& CStats::PassengersDroppedOffWithTaxi = *(int*)0xA0D1DC;
// Converted from int CStats::MissionsPassed 0xA0D224
int& CStats::MissionsPassed = *(int*)0xA0D224;
// Converted from int CStats::MissionsGiven 0xA1023C
int& CStats::MissionsGiven = *(int*)0xA1023C;
// Converted from int CStats::TotalNumberOfUniqueJumps 0x978530
int& CStats::TotalNumberOfUniqueJumps = *(int*)0x978530;
// Converted from int CStats::NumberOfUniqueJumpsFound 0x974B48
int& CStats::NumberOfUniqueJumpsFound = *(int*)0x974B48;
// Converted from int CStats::BestStuntJump 0x974B30
int& CStats::BestStuntJump = *(int*)0x974B30;
// Converted from int CStats::MaximumJumpSpins 0x978D14
int& CStats::MaximumJumpSpins = *(int*)0x978D14;
// Converted from int CStats::MaximumJumpFlips 0x9787DC
int& CStats::MaximumJumpFlips = *(int*)0x9787DC;
// Converted from float CStats::MaximumJumpHeight 0xA0CFD8
float& CStats::MaximumJumpHeight = *(float*)0xA0CFD8;
// Converted from float CStats::MaximumJumpDistance 0x97F210
float& CStats::MaximumJumpDistance = *(float*)0x97F210;
// Converted from int CStats::Sprayings 0xA0FC94
int& CStats::Sprayings = *(int*)0xA0FC94;
// Converted from int CStats::SafeHouseVisits 0xA0D228
int& CStats::SafeHouseVisits = *(int*)0xA0D228;
// Converted from int CStats::DaysPassed 0x97F1F4
int& CStats::DaysPassed = *(int*)0x97F1F4;
// Converted from int CStats::TimesDied 0x975320
int& CStats::TimesDied = *(int*)0x975320;
// Converted from int CStats::TimesArrested 0x975330
int& CStats::TimesArrested = *(int*)0x975330;
// Converted from int CStats::WantedStarsEvaded 0x9B5F30
int& CStats::WantedStarsEvaded = *(int*)0x9B5F30;
// Converted from int CStats::WantedStarsAttained 0x9B5EB8
int& CStats::WantedStarsAttained = *(int*)0x9B5EB8;
// Converted from int CStats::HeadsPopped 0x9B6E38
int& CStats::HeadsPopped = *(int*)0x9B6E38;
// Converted from int CStats::BulletsThatHit 0x9B6CD4
int& CStats::BulletsThatHit = *(int*)0x9B6CD4;
// Converted from int CStats::KgsOfExplosivesUsed 0x9787A8
int& CStats::KgsOfExplosivesUsed = *(int*)0x9787A8;
// Converted from float CStats::TotalProgressInGame 0x974B0C
float& CStats::TotalProgressInGame = *(float*)0x974B0C;
// Converted from float CStats::ProgressMade 0x9B6CDC
float& CStats::ProgressMade = *(float*)0x9B6CDC;
// Converted from int CStats::HelisDestroyed  0x9751F0
int& CStats::HelisDestroyed = *(int*)0x9751F0;
// Converted from int CStats::PedsKilledOfThisType[23] 0x94DB64
int* CStats::PedsKilledOfThisType = (int*)0x94DB64;
// Converted from int CStats::RoundsFiredByPlayer 0x97532C
int& CStats::RoundsFiredByPlayer = *(int*)0x97532C;
// Converted from int CStats::TyresPopped 0x94DB58
int& CStats::TyresPopped = *(int*)0x94DB58;
// Converted from int CStats::BoatsExploded 0x974B04
int& CStats::BoatsExploded = *(int*)0x974B04;
// Converted from int CStats::CarsExploded 0xA0D388
int& CStats::CarsExploded = *(int*)0xA0D388;
// Converted from int CStats::PeopleKilledByOthers 0x9753AC
int& CStats::PeopleKilledByOthers = *(int*)0x9753AC;
// Converted from int CStats::PeopleKilledByPlayer 0x978794
int& CStats::PeopleKilledByPlayer = *(int*)0x978794;

// functions
// Converted from static void __cdecl CStats::RegisterFastestTime(int statID,int time) 0x4CE3D1
void CStats::RegisterFastestTime(int statID, int time)
{
	((void (__cdecl *)(int, int))0x4CE3D1)(statID, time);
}

// Converted from static void __cdecl CStats::RegisterHighestScore(int statID,int score) 0x4CE3B4
void CStats::RegisterHighestScore(int statID, int score)
{
	((void (__cdecl *)(int, int))0x4CE3B4)(statID, score);
}

// Converted from static void __cdecl CStats::RegisterBestPosition(int statID,int position) 0x4CE397
void CStats::RegisterBestPosition(int statID, int position)
{
	((void (__cdecl *)(int, int))0x4CE397)(statID, position);
}

// Converted from static void __cdecl CStats::Init() 0x4CE3FB
void CStats::Init()
{
	((void (__cdecl *)())0x4CE3FB)();
}

// Converted from static float __cdecl CStats::GetFavoriteRadioStationList(int stationID) 0x4CE38B
float CStats::GetFavoriteRadioStationList(int stationID)
{
	return ((float (__cdecl *)(int))0x4CE38B)(stationID);
}

// Converted from static void __cdecl CStats::AnotherLifeSavedWithAmbulance() 0x4CE384
void CStats::AnotherLifeSavedWithAmbulance()
{
	((void (__cdecl *)())0x4CE384)();
}

// Converted from static void __cdecl CStats::AnotherCriminalCaught() 0x4CE37D
void CStats::AnotherCriminalCaught()
{
	((void (__cdecl *)())0x4CE37D)();
}

// Converted from static void __cdecl CStats::AnotherFireExtinguished() 0x4CE376
void CStats::AnotherFireExtinguished()
{
	((void (__cdecl *)())0x4CE376)();
}

// Converted from static void __cdecl CStats::RegisterLevelVigilanteMission(int level) 0x4CE35F
void CStats::RegisterLevelVigilanteMission(int level)
{
	((void (__cdecl *)(int))0x4CE35F)(level);
}

// Converted from static void __cdecl CStats::RegisterLevelAmbulanceMission(int level) 0x4CE348
void CStats::RegisterLevelAmbulanceMission(int level)
{
	((void (__cdecl *)(int))0x4CE348)(level);
}

// Converted from static void __cdecl CStats::RegisterLevelFireMission(int level) 0x4CE331
void CStats::RegisterLevelFireMission(int level)
{
	((void (__cdecl *)(int))0x4CE331)(level);
}

// Converted from static char const* __cdecl CStats::FindChaseString(float chaseValue) 0x4CDBAE
char const* CStats::FindChaseString(float chaseValue)
{
	return ((char const* (__cdecl *)(float))0x4CDBAE)(chaseValue);
}

// Converted from static void __cdecl CStats::AnotherKillFrenzyPassed() 0x4CDBA7
void CStats::AnotherKillFrenzyPassed()
{
	((void (__cdecl *)())0x4CDBA7)();
}

// Converted from static void __cdecl CStats::SetTotalNumberKillFrenzies(int number) 0x4CDB9D
void CStats::SetTotalNumberKillFrenzies(int number)
{
	((void (__cdecl *)(int))0x4CDB9D)(number);
}

// Converted from static void __cdecl CStats::SetTotalNumberMissions(int number) 0x4CDB93
void CStats::SetTotalNumberMissions(int number)
{
	((void (__cdecl *)(int))0x4CDB93)(number);
}

// Converted from static void __cdecl CStats::MoneySpentOnWeapons(int moneySpent) 0x4CDB82
void CStats::MoneySpentOnWeapons(int moneySpent)
{
	((void (__cdecl *)(int))0x4CDB82)(moneySpent);
}

// Converted from static void __cdecl CStats::MoneySpentOnProperty(int moneySpent) 0x4CDB71
void CStats::MoneySpentOnProperty(int moneySpent)
{
	((void (__cdecl *)(int))0x4CDB71)(moneySpent);
}

// Converted from static void __cdecl CStats::MoneySpentOnFashion(int moneySpent) 0x4CDB60
void CStats::MoneySpentOnFashion(int moneySpent)
{
	((void (__cdecl *)(int))0x4CDB60)(moneySpent);
}

// Converted from static void __cdecl CStats::NumOfStoresKnockedOff(int storesKnockedOff) 0x4CDB4F
void CStats::NumOfStoresKnockedOff(int storesKnockedOff)
{
	((void (__cdecl *)(int))0x4CDB4F)(storesKnockedOff);
}

// Converted from static void __cdecl CStats::NumOfAssassinations(int assassinations) 0x4CDB3E
void CStats::NumOfAssassinations(int assassinations)
{
	((void (__cdecl *)(int))0x4CDB3E)(assassinations);
}

// Converted from static void __cdecl CStats::NumOfPizzasDelivered(int pizzasDelivered) 0x4CDB2D
void CStats::NumOfPizzasDelivered(int pizzasDelivered)
{
	((void (__cdecl *)(int))0x4CDB2D)(pizzasDelivered);
}

// Converted from static void __cdecl CStats::NumOfIceCreamSold(int iceCreamSold) 0x4CDB1C
void CStats::NumOfIceCreamSold(int iceCreamSold)
{
	((void (__cdecl *)(int))0x4CDB1C)(iceCreamSold);
}

// Converted from static void __cdecl CStats::AddPropertyAsOwned(int propertyID) 0x4CDB01
void CStats::AddPropertyAsOwned(int propertyID)
{
	((void (__cdecl *)(int))0x4CDB01)(propertyID);
}

// Converted from static void __cdecl CStats::AddNumBloodRingKills(int bloodringKills) 0x4CDAF6
void CStats::AddNumBloodRingKills(int bloodringKills)
{
	((void (__cdecl *)(int))0x4CDAF6)(bloodringKills);
}

// Converted from static void __cdecl CStats::LongestTimeInBloodRing(int bloodRingTime) 0x4CDAE4
void CStats::LongestTimeInBloodRing(int bloodRingTime)
{
	((void (__cdecl *)(int))0x4CDAE4)(bloodRingTime);
}

// Converted from static void __cdecl CStats::CheckPointReachedSuccessfully() 0x4CDAD1
void CStats::CheckPointReachedSuccessfully()
{
	((void (__cdecl *)())0x4CDAD1)();
}

// Converted from static void __cdecl CStats::CheckPointReachedUnsuccessfully() 0x4CDAC9
void CStats::CheckPointReachedUnsuccessfully()
{
	((void (__cdecl *)())0x4CDAC9)();
}

// Converted from static int __cdecl CStats::FindCriminalRatingNumber() 0x4CD97B
int CStats::FindCriminalRatingNumber()
{
	return ((int (__cdecl *)())0x4CD97B)();
}

// Converted from static char const* __cdecl CStats::FindCriminalRatingString() 0x4CDDC5
char const* CStats::FindCriminalRatingString()
{
	return ((char const* (__cdecl *)())0x4CDDC5)();
}

// Converted from static float __cdecl CStats::GetPercentageProgress() 0x4CD907
float CStats::GetPercentageProgress()
{
	return ((float (__cdecl *)())0x4CD907)();
}

// Converted from static void __cdecl CStats::BuildStatLine(char *a1,void *a2,int a3,void *a4,int a5) 0x4CAE8F
void CStats::BuildStatLine(char* a1, void* a2, int a3, void* a4, int a5)
{
	((void (__cdecl *)(char*, void*, int, void*, int))0x4CAE8F)(a1, a2, a3, a4, a5);
}

// Converted from static void __cdecl CStats::SaveStats(unsigned char * bufferPointer,unsigned int *structSize) 0x4CA9F7
void CStats::SaveStats(unsigned char* bufferPointer, unsigned int* structSize)
{
	((void (__cdecl *)(unsigned char*, unsigned int*))0x4CA9F7)(bufferPointer, structSize);
}

// Converted from static void __cdecl CStats::LoadStats(unsigned char * bufferPointer,unsigned int structSize) 0x4CA5BB
void CStats::LoadStats(unsigned char* bufferPointer, unsigned int structSize)
{
	((void (__cdecl *)(unsigned char*, unsigned int))0x4CA5BB)(bufferPointer, structSize);
}

// Converted from static void __cdecl CStats::ConstructStatLine(int a1) 0x4CB085
void CStats::ConstructStatLine(int a1)
{
	((void (__cdecl *)(int))0x4CB085)(a1);
}