/*
Plugin-SDK (Grand Theft Auto 3) header file
Authors: GTA Community. See more here
https://github.com/DK22Pac/plugin-sdk
Do not delete this comment block. Respect others' work!
*/
#include "CStats.h"

int   &CStats::BestStuntJump                = *(int*)0x885B50;
int   &CStats::CarsCrushed                  = *(int*)0x943050;
int   &CStats::CarsExploded                 = *(int*)0x941288;
int   &CStats::CommercialPassed             = *(int*)0x8F4334;
int   &CStats::CriminalsCaught              = *(int*)0x8F2518;
int   &CStats::DaysPassed                   = *(int*)0x8F2BB8;
float &CStats::DistanceTravelledInVehicle   = *(float*)0x940574;
float &CStats::DistanceTravelledOnFoot      = *(float*)0x941518;
int   &CStats::ElBurroTime                  = *(int*)0x8E2A6C;
int   *CStats::FastestTimes                 = (int*)0x6E9128;
int   &CStats::FiresExtinguished            = *(int*)0x8F5FEC;
int   &CStats::HeadsPopped                  = *(int*)0x8F647C;
int   &CStats::HelisDestroyed               = *(int*)0x8E2A64;
int   &CStats::HighestLevelAmbulanceMission = *(int*)0x8F2A04;
int   *CStats::HighestScores                = (int*)0x8622B0;
int   &CStats::IndustrialPassed             = *(int*)0x8E2A68;
int   &CStats::InstantHitsFiredByPlayer     = *(int*)0x943070;
int   &CStats::InstantHitsHitByPlayer       = *(int*)0x95CB8C;
float &CStats::KgsOfExplosivesUsed          = *(float*)0x8F2510;
int   &CStats::KillsSinceLastCheckpoint     = *(int*)0x8F2C8C;
char  *CStats::LastMissionPassedName        = (char*)0x70D828;
int   &CStats::LivesSavedWithAmbulance      = *(int*)0x8F57E0;
int   &CStats::LongestFlightInDodo          = *(int*)0x8F5FE4;
float &CStats::MaximumJumpDistance          = *(float*)0x8F2BDC;
int   &CStats::MaximumJumpFlips             = *(int*)0x8F2524;
float &CStats::MaximumJumpHeight            = *(float*)0x940564;
int   &CStats::MaximumJumpSpins             = *(int*)0x8F29B0;
int   &CStats::MissionsGiven                = *(int*)0x9430E8;
int   &CStats::MissionsPassed               = *(int*)0x940768;
int   &CStats::MoneyMadeWithTaxi            = *(int*)0x941544;
int   &CStats::NumberKillFrenziesPassed     = *(int*)0x8E287C;
int   &CStats::NumberOfUniqueJumpsFound     = *(int*)0x885B74;
int   &CStats::PassengersDroppedOffWithTaxi = *(int*)0x940724;
int   *CStats::PedsKilledOfThisType         = (int*)0x880DBC;
int   &CStats::PeopleKilledByOthers         = *(int*)0x8E2C50;
int   &CStats::PeopleKilledByPlayer         = *(int*)0x8F1B7C;
float &CStats::ProgressMade                 = *(float*)0x8F6224;
int   &CStats::Record4x4Mayhem              = *(int*)0x885B70;
int   &CStats::Record4x4One                 = *(int*)0x940570;
int   &CStats::Record4x4Three               = *(int*)0x880FA8;
int   &CStats::Record4x4Two                 = *(int*)0x94058C;
int   &CStats::RoundsFiredByPlayer          = *(int*)0x8E2BE8;
int   &CStats::SuburbanPassed               = *(int*)0x8F2740;
int   &CStats::TimeTakenDefuseMission       = *(int*)0x880E24;
int   &CStats::TimesArrested                = *(int*)0x8E2BEC;
int   &CStats::TimesDied                    = *(int*)0x8E2BDC;
int   &CStats::TotalLegitimateKills         = *(int*)0x8F6004;
int   &CStats::TotalNumberKillFrenzies      = *(int*)0x8E2884;
int   &CStats::TotalNumberMissions          = *(int*)0x8E2820;
int   &CStats::TotalNumberOfUniqueJumps     = *(int*)0x8E2DC0;
float &CStats::TotalProgressInGame          = *(float*)0x885B2C;
int   &CStats::mmRain                       = *(int*)0x8F2C98;

// Converted from cdecl void CStats::AnotherCriminalCaught(void) 0x04AB050 
void CStats::AnotherCriminalCaught() {
    plugin::Call<0x04AB05>();
}

// Converted from cdecl void CStats::AnotherFireExtinguished(void) 0x04AB080 
void CStats::AnotherFireExtinguished() {
    plugin::Call<0x04AB08>();
}

// Converted from cdecl void CStats::AnotherKillFrenzyPassed(void) 0x04AB240 
void CStats::AnotherKillFrenzyPassed() {
    plugin::Call<0x04AB24>();
}

// Converted from cdecl void CStats::AnotherLifeSavedWithAmbulance(void) 0x04AB040 
void CStats::AnotherLifeSavedWithAmbulance() {
    plugin::Call<0x04AB04>();
}

// Converted from cdecl void CStats::CheckPointReachedSuccessfully(void) 0x04AB270 
void CStats::CheckPointReachedSuccessfully() {
    plugin::Call<0x04AB27>();
}

// Converted from cdecl void CStats::CheckPointReachedUnsuccessfully(void) 0x04AB290 
void CStats::CheckPointReachedUnsuccessfully() {
    plugin::Call<0x04AB29>();
}

// Converted from cdecl int CStats::FindCriminalRatingNumber(void) 0x04AB2A0 
int CStats::FindCriminalRatingNumber() {
    return plugin::CallAndReturn<int, 0x04AB2A>();
}

// Converted from cdecl wchar_t* CStats::FindCriminalRatingString(void) 0x04AB090
wchar_t* CStats::FindCriminalRatingString() {
    return plugin::CallAndReturn<wchar_t*, 0x04AB09>();
}

// Converted from cdecl void CStats::Init(void) 0x04AAC60 
void CStats::Init() {
    plugin::Call<0x04AAC6>();
}

// Converted from cdecl void CStats::LoadStats(uchar *bufferPointer,uint structSize) 0x04AB670
void CStats::LoadStats(unsigned char* bufferPointer, unsigned int structSize) {
    plugin::Call<0x04AB67, unsigned char*, unsigned int>(bufferPointer, structSize);
}

// Converted from cdecl void CStats::Register4x4MayhemTime(int time) 0x04AB020
void CStats::Register4x4MayhemTime(int time) {
    plugin::Call<0x04AB02, int>(time);
}

// Converted from cdecl void CStats::Register4x4OneTime(int time) 0x04AAFC0
void CStats::Register4x4OneTime(int time) {
    plugin::Call<0x04AAFC, int>(time);
}

// Converted from cdecl void CStats::Register4x4ThreeTime(int time) 0x04AB000
void CStats::Register4x4ThreeTime(int time) {
    plugin::Call<0x04AB00, int>(time);
}

// Converted from cdecl void CStats::Register4x4TwoTime(int time) 0x04AAFE0
void CStats::Register4x4TwoTime(int time) {
    plugin::Call<0x04AAFE, int>(time);
}

// Converted from cdecl void CStats::RegisterElBurroTime(int time) 0x04AAFA0
void CStats::RegisterElBurroTime(int time) {
    plugin::Call<0x04AAFA, int>(time);
}

// Converted from cdecl void CStats::RegisterFastestTime(int statID,int time) 0x04AAF50
void CStats::RegisterFastestTime(int statID, int time) {
    plugin::Call<0x04AAF5, int, int>(statID, time);
}

// Converted from cdecl void CStats::RegisterHighestScore(int statID,int score) 0x04AAF80
void CStats::RegisterHighestScore(int statID, int score) {
    plugin::Call<0x04AAF8, int, int>(statID, score);
}

// Converted from cdecl void CStats::RegisterLevelAmbulanceMission(int level) 0x04AB060
void CStats::RegisterLevelAmbulanceMission(int level) {
    plugin::Call<0x04AB06, int>(level);
}

// Converted from cdecl void CStats::RegisterLongestFlightInDodo(int distance) 0x04AB200
void CStats::RegisterLongestFlightInDodo(int distance) {
    plugin::Call<0x04AB20, int>(distance);
}

// Converted from cdecl void CStats::RegisterTimeTakenDefuseMission(int time) 0x04AB220
void CStats::RegisterTimeTakenDefuseMission(int time) {
    plugin::Call<0x04AB22, int>(time);
}

// Converted from cdecl void CStats::SaveStats(uchar *bufferPointer,uint *structSize) 0x04AB3E0
void CStats::SaveStats(unsigned char* bufferPointer, unsigned int* structSize) {
    plugin::Call<0x04AB3E, unsigned char*, unsigned int*>(bufferPointer, structSize);
}

// Converted from cdecl void CStats::SetTotalNumberKillFrenzies(int number) 0x04AB250
void CStats::SetTotalNumberKillFrenzies(int number) {
    plugin::Call<0x04AB25, int>(number);
}

// Converted from cdecl void CStats::SetTotalNumberMissions(int number) 0x04AB260
void CStats::SetTotalNumberMissions(int number) {
    plugin::Call<0x04AB26, int>(number);
}
