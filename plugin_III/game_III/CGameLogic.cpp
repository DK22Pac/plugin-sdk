/*
    Plugin-SDK (Grand Theft Auto 3) source file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/
#include "CGameLogic.h"

PLUGIN_SOURCE_FILE

PLUGIN_VARIABLE unsigned char &CGameLogic::ActivePlayers = *reinterpret_cast<unsigned char *>(GLOBAL_ADDRESS_BY_VERSION(0x95CD5E, 0x95CF16, 0x96D056));

int addrof(CGameLogic::InitAtStartOfGame) = ADDRESS_BY_VERSION(0x4213F0, 0x4213F0, 0x4213F0);
int gaddrof(CGameLogic::InitAtStartOfGame) = GLOBAL_ADDRESS_BY_VERSION(0x4213F0, 0x4213F0, 0x4213F0);

void CGameLogic::InitAtStartOfGame() {
    plugin::CallDynGlobal(gaddrof(CGameLogic::InitAtStartOfGame));
}

int addrof(CGameLogic::PassTime) = ADDRESS_BY_VERSION(0x421C00, 0x421C00, 0x421C00);
int gaddrof(CGameLogic::PassTime) = GLOBAL_ADDRESS_BY_VERSION(0x421C00, 0x421C00, 0x421C00);

void CGameLogic::PassTime(unsigned int time) {
    plugin::CallDynGlobal<unsigned int>(gaddrof(CGameLogic::PassTime), time);
}

int addrof(CGameLogic::RestorePlayerStuffDuringResurrection) = ADDRESS_BY_VERSION(0x421A60, 0x421A60, 0x421A60);
int gaddrof(CGameLogic::RestorePlayerStuffDuringResurrection) = GLOBAL_ADDRESS_BY_VERSION(0x421A60, 0x421A60, 0x421A60);

void CGameLogic::RestorePlayerStuffDuringResurrection(CPlayerPed *player, CVector pos, float angle) {
    plugin::CallDynGlobal<CPlayerPed *, CVector, float>(gaddrof(CGameLogic::RestorePlayerStuffDuringResurrection), player, pos, angle);
}

int addrof(CGameLogic::SortOutStreamingAndMemory) = ADDRESS_BY_VERSION(0x421A20, 0x421A20, 0x421A20);
int gaddrof(CGameLogic::SortOutStreamingAndMemory) = GLOBAL_ADDRESS_BY_VERSION(0x421A20, 0x421A20, 0x421A20);

void CGameLogic::SortOutStreamingAndMemory(CVector const &pos) {
    plugin::CallDynGlobal<CVector const &>(gaddrof(CGameLogic::SortOutStreamingAndMemory), pos);
}

int addrof(CGameLogic::Update) = ADDRESS_BY_VERSION(0x421400, 0x421400, 0x421400);
int gaddrof(CGameLogic::Update) = GLOBAL_ADDRESS_BY_VERSION(0x421400, 0x421400, 0x421400);

void CGameLogic::Update() {
    plugin::CallDynGlobal(gaddrof(CGameLogic::Update));
}
