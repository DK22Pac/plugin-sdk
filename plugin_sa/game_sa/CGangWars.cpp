/*
    Plugin-SDK (Grand Theft Auto San Andreas) source file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/
#include "CGangWars.h"

PLUGIN_SOURCE_FILE

int &CGangWars::ZoneInfoForTraining = *reinterpret_cast<int *>(GLOBAL_ADDRESS_BY_VERSION(0x8A5F40, 0, 0, 0, 0, 0));
int(&CGangWars::GangRatingStrength)[3] = *reinterpret_cast<int(*)[3]>(GLOBAL_ADDRESS_BY_VERSION(0x96AB2C, 0, 0, 0, 0, 0));
int(&CGangWars::GangRatings)[3] = *reinterpret_cast<int(*)[3]>(GLOBAL_ADDRESS_BY_VERSION(0x96AB38, 0, 0, 0, 0, 0));
int &CGangWars::FightTimer = *reinterpret_cast<int *>(GLOBAL_ADDRESS_BY_VERSION(0x96AB44, 0, 0, 0, 0, 0));
float &CGangWars::TimeTillNextAttack = *reinterpret_cast<float *>(GLOBAL_ADDRESS_BY_VERSION(0x96AB48, 0, 0, 0, 0, 0));
eGangAttackState &CGangWars::State2 = *reinterpret_cast<eGangAttackState *>(GLOBAL_ADDRESS_BY_VERSION(0x96AB4C, 0, 0, 0, 0, 0));
int &CGangWars::Gang2 = *reinterpret_cast<int *>(GLOBAL_ADDRESS_BY_VERSION(0x96AB50, 0, 0, 0, 0, 0));
unsigned int &CGangWars::LastTimeInArea = *reinterpret_cast<unsigned int *>(GLOBAL_ADDRESS_BY_VERSION(0x96AB54, 0, 0, 0, 0, 0));
int &CGangWars::WarFerocity = *reinterpret_cast<int *>(GLOBAL_ADDRESS_BY_VERSION(0x96AB58, 0, 0, 0, 0, 0));
float &CGangWars::Provocation = *reinterpret_cast<float *>(GLOBAL_ADDRESS_BY_VERSION(0x96AB5C, 0, 0, 0, 0, 0));
unsigned int &CGangWars::TimeStarted = *reinterpret_cast<unsigned int *>(GLOBAL_ADDRESS_BY_VERSION(0x96AB60, 0, 0, 0, 0, 0));
eGangWarState &CGangWars::State = *reinterpret_cast<eGangWarState *>(GLOBAL_ADDRESS_BY_VERSION(0x96AB64, 0, 0, 0, 0, 0));
int(&CGangWars::aSpecificZones)[6] = *reinterpret_cast<int(*)[6]>(GLOBAL_ADDRESS_BY_VERSION(0x96AB68, 0, 0, 0, 0, 0));
float &CGangWars::Difficulty = *reinterpret_cast<float *>(GLOBAL_ADDRESS_BY_VERSION(0x96AB80, 0, 0, 0, 0, 0));
int &CGangWars::Gang1 = *reinterpret_cast<int *>(GLOBAL_ADDRESS_BY_VERSION(0x96AB84, 0, 0, 0, 0, 0));
CZone *&CGangWars::pZoneToFightOver = *reinterpret_cast<CZone **>(GLOBAL_ADDRESS_BY_VERSION(0x96AB88, 0, 0, 0, 0, 0));
CZoneInfo *&CGangWars::pZoneInfoToFightOver = *reinterpret_cast<CZoneInfo **>(GLOBAL_ADDRESS_BY_VERSION(0x96AB8C, 0, 0, 0, 0, 0));
bool &CGangWars::bGangWarsActive = *reinterpret_cast<bool *>(GLOBAL_ADDRESS_BY_VERSION(0x96AB90, 0, 0, 0, 0, 0));
bool &CGangWars::bTrainingMission = *reinterpret_cast<bool *>(GLOBAL_ADDRESS_BY_VERSION(0x96AB91, 0, 0, 0, 0, 0));
bool &CGangWars::bPlayerIsCloseby = *reinterpret_cast<bool *>(GLOBAL_ADDRESS_BY_VERSION(0x96AB92, 0, 0, 0, 0, 0));
bool &CGangWars::bCanTriggerGangWarWhenOnAMission = *reinterpret_cast<bool *>(GLOBAL_ADDRESS_BY_VERSION(0x96AB93, 0, 0, 0, 0, 0));
int &CGangWars::NumSpecificZones = *reinterpret_cast<int *>(GLOBAL_ADDRESS_BY_VERSION(0x96AB94, 0, 0, 0, 0, 0));
CRadar *&CGangWars::RadarBlip = *reinterpret_cast<CRadar **>(GLOBAL_ADDRESS_BY_VERSION(0x96AB98, 0, 0, 0, 0, 0));
float &CGangWars::TerritoryUnderControlPercentage = *reinterpret_cast<float *>(GLOBAL_ADDRESS_BY_VERSION(0x96AB9C, 0, 0, 0, 0, 0));
bool &CGangWars::bIsPlayerOnAMission = *reinterpret_cast<bool *>(GLOBAL_ADDRESS_BY_VERSION(0x96ABA0, 0, 0, 0, 0, 0));
CVector &CGangWars::CoorsOfPlayerAtStartOfWar = *reinterpret_cast<CVector *>(GLOBAL_ADDRESS_BY_VERSION(0x96ABBC, 0, 0, 0, 0, 0));
CVector &CGangWars::PointOfAttack = *reinterpret_cast<CVector *>(GLOBAL_ADDRESS_BY_VERSION(0x96ABC8, 0, 0, 0, 0, 0));

int addrof(CGangWars::AddKillToProvocation) = ADDRESS_BY_VERSION(0x443950, 0, 0, 0, 0, 0);
int gaddrof(CGangWars::AddKillToProvocation) = GLOBAL_ADDRESS_BY_VERSION(0x443950, 0, 0, 0, 0, 0);

void CGangWars::AddKillToProvocation(int Pedtype) {
    plugin::CallDynGlobal<int>(gaddrof(CGangWars::AddKillToProvocation), Pedtype);
}

int addrof(CGangWars::AttackWaveOvercome) = ADDRESS_BY_VERSION(0x445B30, 0, 0, 0, 0, 0);
int gaddrof(CGangWars::AttackWaveOvercome) = GLOBAL_ADDRESS_BY_VERSION(0x445B30, 0, 0, 0, 0, 0);

bool CGangWars::AttackWaveOvercome() {
    return plugin::CallAndReturnDynGlobal<bool>(gaddrof(CGangWars::AttackWaveOvercome));
}

int addrof(CGangWars::CalculateTimeTillNextAttack) = ADDRESS_BY_VERSION(0x443DB0, 0, 0, 0, 0, 0);
int gaddrof(CGangWars::CalculateTimeTillNextAttack) = GLOBAL_ADDRESS_BY_VERSION(0x443DB0, 0, 0, 0, 0, 0);

unsigned int CGangWars::CalculateTimeTillNextAttack() {
    return plugin::CallAndReturnDynGlobal<unsigned int>(gaddrof(CGangWars::CalculateTimeTillNextAttack));
}

int addrof(CGangWars::CanPlayerStartAGangWarHere) = ADDRESS_BY_VERSION(0x443F80, 0, 0, 0, 0, 0);
int gaddrof(CGangWars::CanPlayerStartAGangWarHere) = GLOBAL_ADDRESS_BY_VERSION(0x443F80, 0, 0, 0, 0, 0);

bool CGangWars::CanPlayerStartAGangWarHere(CZoneInfo *zoneInfo) {
    return plugin::CallAndReturnDynGlobal<bool, CZoneInfo *>(gaddrof(CGangWars::CanPlayerStartAGangWarHere), zoneInfo);
}

int addrof(CGangWars::CheerVictory) = ADDRESS_BY_VERSION(0x444040, 0, 0, 0, 0, 0);
int gaddrof(CGangWars::CheerVictory) = GLOBAL_ADDRESS_BY_VERSION(0x444040, 0, 0, 0, 0, 0);

void CGangWars::CheerVictory() {
    plugin::CallDynGlobal(gaddrof(CGangWars::CheerVictory));
}

int addrof(CGangWars::ClearSpecificZonesToTriggerGangWar) = ADDRESS_BY_VERSION(0x443FF0, 0, 0, 0, 0, 0);
int gaddrof(CGangWars::ClearSpecificZonesToTriggerGangWar) = GLOBAL_ADDRESS_BY_VERSION(0x443FF0, 0, 0, 0, 0, 0);

void CGangWars::ClearSpecificZonesToTriggerGangWar() {
    plugin::CallDynGlobal(gaddrof(CGangWars::ClearSpecificZonesToTriggerGangWar));
}

int addrof(CGangWars::ClearTheStreets) = ADDRESS_BY_VERSION(0x4444B0, 0, 0, 0, 0, 0);
int gaddrof(CGangWars::ClearTheStreets) = GLOBAL_ADDRESS_BY_VERSION(0x4444B0, 0, 0, 0, 0, 0);

void CGangWars::ClearTheStreets() {
    plugin::CallDynGlobal(gaddrof(CGangWars::ClearTheStreets));
}

int addrof(CGangWars::CreateAttackWave) = ADDRESS_BY_VERSION(0x444810, 0, 0, 0, 0, 0);
int gaddrof(CGangWars::CreateAttackWave) = GLOBAL_ADDRESS_BY_VERSION(0x444810, 0, 0, 0, 0, 0);

bool CGangWars::CreateAttackWave(int warFerocity, int waveID) {
    return plugin::CallAndReturnDynGlobal<bool, int, int>(gaddrof(CGangWars::CreateAttackWave), warFerocity, waveID);
}

int addrof(CGangWars::CreateDefendingGroup) = ADDRESS_BY_VERSION(0x4453D0, 0, 0, 0, 0, 0);
int gaddrof(CGangWars::CreateDefendingGroup) = GLOBAL_ADDRESS_BY_VERSION(0x4453D0, 0, 0, 0, 0, 0);

bool CGangWars::CreateDefendingGroup(int unsued) {
    return plugin::CallAndReturnDynGlobal<bool, int>(gaddrof(CGangWars::CreateDefendingGroup), unsued);
}

int addrof(CGangWars::DoStuffWhenPlayerVictorious) = ADDRESS_BY_VERSION(0x446400, 0, 0, 0, 0, 0);
int gaddrof(CGangWars::DoStuffWhenPlayerVictorious) = GLOBAL_ADDRESS_BY_VERSION(0x446400, 0, 0, 0, 0, 0);

void CGangWars::DoStuffWhenPlayerVictorious() {
    plugin::CallDynGlobal(gaddrof(CGangWars::DoStuffWhenPlayerVictorious));
}

int addrof(CGangWars::DoesPlayerControlThisZone) = ADDRESS_BY_VERSION(0x443AE0, 0, 0, 0, 0, 0);
int gaddrof(CGangWars::DoesPlayerControlThisZone) = GLOBAL_ADDRESS_BY_VERSION(0x443AE0, 0, 0, 0, 0, 0);

bool CGangWars::DoesPlayerControlThisZone(CZoneInfo *zoneinfo) {
    return plugin::CallAndReturnDynGlobal<bool, CZoneInfo *>(gaddrof(CGangWars::DoesPlayerControlThisZone), zoneinfo);
}

int addrof(CGangWars::DontCreateCivilians) = ADDRESS_BY_VERSION(0x4439C0, 0, 0, 0, 0, 0);
int gaddrof(CGangWars::DontCreateCivilians) = GLOBAL_ADDRESS_BY_VERSION(0x4439C0, 0, 0, 0, 0, 0);

bool CGangWars::DontCreateCivilians() {
    return plugin::CallAndReturnDynGlobal<bool>(gaddrof(CGangWars::DontCreateCivilians));
}

int addrof(CGangWars::EndGangWar) = ADDRESS_BY_VERSION(0x4464C0, 0, 0, 0, 0, 0);
int gaddrof(CGangWars::EndGangWar) = GLOBAL_ADDRESS_BY_VERSION(0x4464C0, 0, 0, 0, 0, 0);

void CGangWars::EndGangWar(bool bEnd) {
    plugin::CallDynGlobal<bool>(gaddrof(CGangWars::EndGangWar), bEnd);
}

int addrof(CGangWars::GangWarFightingGoingOn) = ADDRESS_BY_VERSION(0x443AC0, 0, 0, 0, 0, 0);
int gaddrof(CGangWars::GangWarFightingGoingOn) = GLOBAL_ADDRESS_BY_VERSION(0x443AC0, 0, 0, 0, 0, 0);

bool CGangWars::GangWarFightingGoingOn() {
    return plugin::CallAndReturnDynGlobal<bool>(gaddrof(CGangWars::GangWarFightingGoingOn));
}

int addrof(CGangWars::GangWarGoingOn) = ADDRESS_BY_VERSION(0x443AA0, 0, 0, 0, 0, 0);
int gaddrof(CGangWars::GangWarGoingOn) = GLOBAL_ADDRESS_BY_VERSION(0x443AA0, 0, 0, 0, 0, 0);

bool CGangWars::GangWarGoingOn() {
    return plugin::CallAndReturnDynGlobal<bool>(gaddrof(CGangWars::GangWarGoingOn));
}

int addrof(CGangWars::InitAtStartOfGame) = ADDRESS_BY_VERSION(0x443920, 0, 0, 0, 0, 0);
int gaddrof(CGangWars::InitAtStartOfGame) = GLOBAL_ADDRESS_BY_VERSION(0x443920, 0, 0, 0, 0, 0);

void CGangWars::InitAtStartOfGame() {
    plugin::CallDynGlobal(gaddrof(CGangWars::InitAtStartOfGame));
}

int addrof(CGangWars::Load) = ADDRESS_BY_VERSION(0x5D3EB0, 0, 0, 0, 0, 0);
int gaddrof(CGangWars::Load) = GLOBAL_ADDRESS_BY_VERSION(0x5D3EB0, 0, 0, 0, 0, 0);

void CGangWars::Load() {
    plugin::CallDynGlobal(gaddrof(CGangWars::Load));
}

int addrof(CGangWars::MakeEnemyGainInfluenceInZone) = ADDRESS_BY_VERSION(0x445FD0, 0, 0, 0, 0, 0);
int gaddrof(CGangWars::MakeEnemyGainInfluenceInZone) = GLOBAL_ADDRESS_BY_VERSION(0x445FD0, 0, 0, 0, 0, 0);

void CGangWars::MakeEnemyGainInfluenceInZone(int GangID, int GangDensityIncreaser) {
    plugin::CallDynGlobal<int, int>(gaddrof(CGangWars::MakeEnemyGainInfluenceInZone), GangID, GangDensityIncreaser);
}

int addrof(CGangWars::MakePlayerGainInfluenceInZone) = ADDRESS_BY_VERSION(0x445E80, 0, 0, 0, 0, 0);
int gaddrof(CGangWars::MakePlayerGainInfluenceInZone) = GLOBAL_ADDRESS_BY_VERSION(0x445E80, 0, 0, 0, 0, 0);

bool CGangWars::MakePlayerGainInfluenceInZone(float remove_mult) {
    return plugin::CallAndReturnDynGlobal<bool, float>(gaddrof(CGangWars::MakePlayerGainInfluenceInZone), remove_mult);
}

int addrof(CGangWars::PedStreamedInForThisGang) = ADDRESS_BY_VERSION(0x4439D0, 0, 0, 0, 0, 0);
int gaddrof(CGangWars::PedStreamedInForThisGang) = GLOBAL_ADDRESS_BY_VERSION(0x4439D0, 0, 0, 0, 0, 0);

bool CGangWars::PedStreamedInForThisGang(int gangID) {
    return plugin::CallAndReturnDynGlobal<bool, int>(gaddrof(CGangWars::PedStreamedInForThisGang), gangID);
}

int addrof(CGangWars::PickStreamedInPedForThisGang) = ADDRESS_BY_VERSION(0x443A20, 0, 0, 0, 0, 0);
int gaddrof(CGangWars::PickStreamedInPedForThisGang) = GLOBAL_ADDRESS_BY_VERSION(0x443A20, 0, 0, 0, 0, 0);

bool CGangWars::PickStreamedInPedForThisGang(int gangID, int *outPedID) {
    return plugin::CallAndReturnDynGlobal<bool, int, int *>(gaddrof(CGangWars::PickStreamedInPedForThisGang), gangID, outPedID);
}

int addrof(CGangWars::PickZoneToAttack) = ADDRESS_BY_VERSION(0x443B00, 0, 0, 0, 0, 0);
int gaddrof(CGangWars::PickZoneToAttack) = GLOBAL_ADDRESS_BY_VERSION(0x443B00, 0, 0, 0, 0, 0);

bool CGangWars::PickZoneToAttack() {
    return plugin::CallAndReturnDynGlobal<bool>(gaddrof(CGangWars::PickZoneToAttack));
}

int addrof(CGangWars::ReleaseCarsInAttackWave) = ADDRESS_BY_VERSION(0x445E20, 0, 0, 0, 0, 0);
int gaddrof(CGangWars::ReleaseCarsInAttackWave) = GLOBAL_ADDRESS_BY_VERSION(0x445E20, 0, 0, 0, 0, 0);

void CGangWars::ReleaseCarsInAttackWave() {
    plugin::CallDynGlobal(gaddrof(CGangWars::ReleaseCarsInAttackWave));
}

int addrof(CGangWars::ReleasePedsInAttackWave) = ADDRESS_BY_VERSION(0x445C30, 0, 0, 0, 0, 0);
int gaddrof(CGangWars::ReleasePedsInAttackWave) = GLOBAL_ADDRESS_BY_VERSION(0x445C30, 0, 0, 0, 0, 0);

int CGangWars::ReleasePedsInAttackWave(bool IsEndOfWar, bool RestoreGangPedsAcquaintance) {
    return plugin::CallAndReturnDynGlobal<int, bool, bool>(gaddrof(CGangWars::ReleasePedsInAttackWave), IsEndOfWar, RestoreGangPedsAcquaintance);
}

int addrof(CGangWars::Save) = ADDRESS_BY_VERSION(0x5D5530, 0, 0, 0, 0, 0);
int gaddrof(CGangWars::Save) = GLOBAL_ADDRESS_BY_VERSION(0x5D5530, 0, 0, 0, 0, 0);

void CGangWars::Save() {
    plugin::CallDynGlobal(gaddrof(CGangWars::Save));
}

int addrof(CGangWars::SetGangWarsActive) = ADDRESS_BY_VERSION(0x446570, 0, 0, 0, 0, 0);
int gaddrof(CGangWars::SetGangWarsActive) = GLOBAL_ADDRESS_BY_VERSION(0x446570, 0, 0, 0, 0, 0);

void CGangWars::SetGangWarsActive(bool bActive) {
    plugin::CallDynGlobal<bool>(gaddrof(CGangWars::SetGangWarsActive), bActive);
}

int addrof(CGangWars::SetSpecificZoneToTriggerGangWar) = ADDRESS_BY_VERSION(0x444010, 0, 0, 0, 0, 0);
int gaddrof(CGangWars::SetSpecificZoneToTriggerGangWar) = GLOBAL_ADDRESS_BY_VERSION(0x444010, 0, 0, 0, 0, 0);

void CGangWars::SetSpecificZoneToTriggerGangWar(int zoneId) {
    plugin::CallDynGlobal<int>(gaddrof(CGangWars::SetSpecificZoneToTriggerGangWar), zoneId);
}

int addrof(CGangWars::StartDefensiveGangWar) = ADDRESS_BY_VERSION(0x444300, 0, 0, 0, 0, 0);
int gaddrof(CGangWars::StartDefensiveGangWar) = GLOBAL_ADDRESS_BY_VERSION(0x444300, 0, 0, 0, 0, 0);

void CGangWars::StartDefensiveGangWar() {
    plugin::CallDynGlobal(gaddrof(CGangWars::StartDefensiveGangWar));
}

int addrof(CGangWars::StartOffensiveGangWar) = ADDRESS_BY_VERSION(0x446050, 0, 0, 0, 0, 0);
int gaddrof(CGangWars::StartOffensiveGangWar) = GLOBAL_ADDRESS_BY_VERSION(0x446050, 0, 0, 0, 0, 0);

void CGangWars::StartOffensiveGangWar() {
    plugin::CallDynGlobal(gaddrof(CGangWars::StartOffensiveGangWar));
}

int addrof(CGangWars::StrengthenPlayerInfluenceInZone) = ADDRESS_BY_VERSION(0x445F50, 0, 0, 0, 0, 0);
int gaddrof(CGangWars::StrengthenPlayerInfluenceInZone) = GLOBAL_ADDRESS_BY_VERSION(0x445F50, 0, 0, 0, 0, 0);

void CGangWars::StrengthenPlayerInfluenceInZone(int GroveDensityIncreaser) {
    plugin::CallDynGlobal<int>(gaddrof(CGangWars::StrengthenPlayerInfluenceInZone), GroveDensityIncreaser);
}

int addrof(CGangWars::SwitchGangWarsActive) = ADDRESS_BY_VERSION(0x4465F0, 0, 0, 0, 0, 0);
int gaddrof(CGangWars::SwitchGangWarsActive) = GLOBAL_ADDRESS_BY_VERSION(0x4465F0, 0, 0, 0, 0, 0);

void CGangWars::SwitchGangWarsActive() {
    plugin::CallDynGlobal(gaddrof(CGangWars::SwitchGangWarsActive));
}

int addrof(CGangWars::TellGangMembersTo) = ADDRESS_BY_VERSION(0x444530, 0, 0, 0, 0, 0);
int gaddrof(CGangWars::TellGangMembersTo) = GLOBAL_ADDRESS_BY_VERSION(0x444530, 0, 0, 0, 0, 0);

void CGangWars::TellGangMembersTo(int bIsGangWarEnding) {
    plugin::CallDynGlobal<int>(gaddrof(CGangWars::TellGangMembersTo), bIsGangWarEnding);
}

int addrof(CGangWars::TellStreamingWhichGangsAreNeeded) = ADDRESS_BY_VERSION(0x443D50, 0, 0, 0, 0, 0);
int gaddrof(CGangWars::TellStreamingWhichGangsAreNeeded) = GLOBAL_ADDRESS_BY_VERSION(0x443D50, 0, 0, 0, 0, 0);

void CGangWars::TellStreamingWhichGangsAreNeeded(int *GangsBitFlags) {
    plugin::CallDynGlobal<int *>(gaddrof(CGangWars::TellStreamingWhichGangsAreNeeded), GangsBitFlags);
}

int addrof(CGangWars::Update) = ADDRESS_BY_VERSION(0x446610, 0, 0, 0, 0, 0);
int gaddrof(CGangWars::Update) = GLOBAL_ADDRESS_BY_VERSION(0x446610, 0, 0, 0, 0, 0);

void CGangWars::Update() {
    plugin::CallDynGlobal(gaddrof(CGangWars::Update));
}

int addrof(CGangWars::UpdateTerritoryUnderControlPercentage) = ADDRESS_BY_VERSION(0x443DE0, 0, 0, 0, 0, 0);
int gaddrof(CGangWars::UpdateTerritoryUnderControlPercentage) = GLOBAL_ADDRESS_BY_VERSION(0x443DE0, 0, 0, 0, 0, 0);

void CGangWars::UpdateTerritoryUnderControlPercentage() {
    plugin::CallDynGlobal(gaddrof(CGangWars::UpdateTerritoryUnderControlPercentage));
}
