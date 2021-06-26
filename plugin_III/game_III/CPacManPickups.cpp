/*
    Plugin-SDK (Grand Theft Auto 3) source file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/
#include "CPacManPickups.h"

PLUGIN_SOURCE_FILE

PLUGIN_VARIABLE CPacManPickup(&CPacManPickups::aPickUps)[256] = *reinterpret_cast<CPacManPickup(*)[256]>(GLOBAL_ADDRESS_BY_VERSION(0x731618, 0x731618, 0x741758));
PLUGIN_VARIABLE CVector &CPacManPickups::LastPickUpCoors = *reinterpret_cast<CVector *>(GLOBAL_ADDRESS_BY_VERSION(0x8F2BF4, 0x8F2CA8, 0x902DE8));
PLUGIN_VARIABLE int &CPacManPickups::PillsEatenInRace = *reinterpret_cast<int *>(GLOBAL_ADDRESS_BY_VERSION(0x940734, 0x9408EC, 0x950A2C));
PLUGIN_VARIABLE bool &CPacManPickups::bPMActive = *reinterpret_cast<bool *>(GLOBAL_ADDRESS_BY_VERSION(0x95CD6F, 0x95CF27, 0x96D067));
PLUGIN_VARIABLE CVector(&aRacePoints1)[107] = *reinterpret_cast<CVector(*)[107]>(GLOBAL_ADDRESS_BY_VERSION(0x5ED94C, 0x5ED94C, 0x5FA94C));
PLUGIN_VARIABLE short &ThingsToCollect = *reinterpret_cast<short *>(GLOBAL_ADDRESS_BY_VERSION(0x95CC30, 0x95CDE8, 0x96CF28));
PLUGIN_VARIABLE short &CollectGameState = *reinterpret_cast<short *>(GLOBAL_ADDRESS_BY_VERSION(0x95CC7A, 0x95CE32, 0x96CF72));

int addrof(CPacManPickups::CleanUpPacManStuff) = ADDRESS_BY_VERSION(0x4333C0, 0x4333C0, 0x4333C0);
int gaddrof(CPacManPickups::CleanUpPacManStuff) = GLOBAL_ADDRESS_BY_VERSION(0x4333C0, 0x4333C0, 0x4333C0);

void CPacManPickups::CleanUpPacManStuff() {
    plugin::CallDynGlobal(gaddrof(CPacManPickups::CleanUpPacManStuff));
}

int addrof(CPacManPickups::ClearPMPickUps) = ADDRESS_BY_VERSION(0x433150, 0x433150, 0x433150);
int gaddrof(CPacManPickups::ClearPMPickUps) = GLOBAL_ADDRESS_BY_VERSION(0x433150, 0x433150, 0x433150);

void CPacManPickups::ClearPMPickUps() {
    plugin::CallDynGlobal(gaddrof(CPacManPickups::ClearPMPickUps));
}

int addrof(CPacManPickups::GenerateOnePMPickUp) = ADDRESS_BY_VERSION(0x432F20, 0x432F20, 0x432F20);
int gaddrof(CPacManPickups::GenerateOnePMPickUp) = GLOBAL_ADDRESS_BY_VERSION(0x432F20, 0x432F20, 0x432F20);

void CPacManPickups::GenerateOnePMPickUp(CVector pos) {
    plugin::CallDynGlobal<CVector>(gaddrof(CPacManPickups::GenerateOnePMPickUp), pos);
}

int addrof(CPacManPickups::GeneratePMPickUps) = ADDRESS_BY_VERSION(0x432AE0, 0x432AE0, 0x432AE0);
int gaddrof(CPacManPickups::GeneratePMPickUps) = GLOBAL_ADDRESS_BY_VERSION(0x432AE0, 0x432AE0, 0x432AE0);

void CPacManPickups::GeneratePMPickUps(CVector pos, float scrambleMult, short count, unsigned char type) {
    plugin::CallDynGlobal<CVector, float, short, unsigned char>(gaddrof(CPacManPickups::GeneratePMPickUps), pos, scrambleMult, count, type);
}

int addrof(CPacManPickups::GeneratePMPickUpsForRace) = ADDRESS_BY_VERSION(0x432D50, 0x432D50, 0x432D50);
int gaddrof(CPacManPickups::GeneratePMPickUpsForRace) = GLOBAL_ADDRESS_BY_VERSION(0x432D50, 0x432D50, 0x432D50);

void CPacManPickups::GeneratePMPickUpsForRace(int race) {
    plugin::CallDynGlobal<int>(gaddrof(CPacManPickups::GeneratePMPickUpsForRace), race);
}

int addrof(CPacManPickups::Init) = ADDRESS_BY_VERSION(0x432760, 0x432760, 0x432760);
int gaddrof(CPacManPickups::Init) = GLOBAL_ADDRESS_BY_VERSION(0x432760, 0x432760, 0x432760);

void CPacManPickups::Init() {
    plugin::CallDynGlobal(gaddrof(CPacManPickups::Init));
}

int addrof(CPacManPickups::QueryPowerPillsCarriedByPlayer) = ADDRESS_BY_VERSION(0x4333F0, 0x4333F0, 0x4333F0);
int gaddrof(CPacManPickups::QueryPowerPillsCarriedByPlayer) = GLOBAL_ADDRESS_BY_VERSION(0x4333F0, 0x4333F0, 0x4333F0);

unsigned int CPacManPickups::QueryPowerPillsCarriedByPlayer() {
    return plugin::CallAndReturnDynGlobal<unsigned int>(gaddrof(CPacManPickups::QueryPowerPillsCarriedByPlayer));
}

int addrof(CPacManPickups::QueryPowerPillsEatenInRace) = ADDRESS_BY_VERSION(0x4333A0, 0x4333A0, 0x4333A0);
int gaddrof(CPacManPickups::QueryPowerPillsEatenInRace) = GLOBAL_ADDRESS_BY_VERSION(0x4333A0, 0x4333A0, 0x4333A0);

int CPacManPickups::QueryPowerPillsEatenInRace() {
    return plugin::CallAndReturnDynGlobal<int>(gaddrof(CPacManPickups::QueryPowerPillsEatenInRace));
}

int addrof(CPacManPickups::Render) = ADDRESS_BY_VERSION(0x432F60, 0x432F60, 0x432F60);
int gaddrof(CPacManPickups::Render) = GLOBAL_ADDRESS_BY_VERSION(0x432F60, 0x432F60, 0x432F60);

void CPacManPickups::Render() {
    plugin::CallDynGlobal(gaddrof(CPacManPickups::Render));
}

int addrof(CPacManPickups::ResetPowerPillsCarriedByPlayer) = ADDRESS_BY_VERSION(0x433410, 0x433410, 0x433410);
int gaddrof(CPacManPickups::ResetPowerPillsCarriedByPlayer) = GLOBAL_ADDRESS_BY_VERSION(0x433410, 0x433410, 0x433410);

void CPacManPickups::ResetPowerPillsCarriedByPlayer() {
    plugin::CallDynGlobal(gaddrof(CPacManPickups::ResetPowerPillsCarriedByPlayer));
}

int addrof(CPacManPickups::ResetPowerPillsEatenInRace) = ADDRESS_BY_VERSION(0x4333B0, 0x4333B0, 0x4333B0);
int gaddrof(CPacManPickups::ResetPowerPillsEatenInRace) = GLOBAL_ADDRESS_BY_VERSION(0x4333B0, 0x4333B0, 0x4333B0);

void CPacManPickups::ResetPowerPillsEatenInRace() {
    plugin::CallDynGlobal(gaddrof(CPacManPickups::ResetPowerPillsEatenInRace));
}

int addrof(CPacManPickups::StartPacManRace) = ADDRESS_BY_VERSION(0x433340, 0x433340, 0x433340);
int gaddrof(CPacManPickups::StartPacManRace) = GLOBAL_ADDRESS_BY_VERSION(0x433340, 0x433340, 0x433340);

void CPacManPickups::StartPacManRace(int race) {
    plugin::CallDynGlobal<int>(gaddrof(CPacManPickups::StartPacManRace), race);
}

int addrof(CPacManPickups::StartPacManRecord) = ADDRESS_BY_VERSION(0x433360, 0x433360, 0x433360);
int gaddrof(CPacManPickups::StartPacManRecord) = GLOBAL_ADDRESS_BY_VERSION(0x433360, 0x433360, 0x433360);

void CPacManPickups::StartPacManRecord() {
    plugin::CallDynGlobal(gaddrof(CPacManPickups::StartPacManRecord));
}

int addrof(CPacManPickups::StartPacManScramble) = ADDRESS_BY_VERSION(0x4333D0, 0x4333D0, 0x4333D0);
int gaddrof(CPacManPickups::StartPacManScramble) = GLOBAL_ADDRESS_BY_VERSION(0x4333D0, 0x4333D0, 0x4333D0);

void CPacManPickups::StartPacManScramble(CVector pos, float scrambleMult, short count) {
    plugin::CallDynGlobal<CVector, float, short>(gaddrof(CPacManPickups::StartPacManScramble), pos, scrambleMult, count);
}

int addrof(CPacManPickups::Update) = ADDRESS_BY_VERSION(0x432800, 0x432800, 0x432800);
int gaddrof(CPacManPickups::Update) = GLOBAL_ADDRESS_BY_VERSION(0x432800, 0x432800, 0x432800);

void CPacManPickups::Update() {
    plugin::CallDynGlobal(gaddrof(CPacManPickups::Update));
}
