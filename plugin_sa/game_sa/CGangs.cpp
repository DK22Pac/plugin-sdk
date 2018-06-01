/*
    Plugin-SDK (Grand Theft Auto San Andreas) source file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/
#include "CGangs.h"

PLUGIN_SOURCE_FILE

bool(&CGangs::GangAttackWithCops)[16] = *reinterpret_cast<bool(*)[16]>(GLOBAL_ADDRESS_BY_VERSION(0xC091DC, 0, 0, 0, 0, 0));
CGangInfo(&CGangs::Gang)[10] = *reinterpret_cast<CGangInfo(*)[10]>(GLOBAL_ADDRESS_BY_VERSION(0xC091F0, 0, 0, 0, 0, 0));

int addrof(CGangs::ChooseGangPedModel) = ADDRESS_BY_VERSION(0x5DE5A0, 0, 0, 0, 0, 0);
int gaddrof(CGangs::ChooseGangPedModel) = GLOBAL_ADDRESS_BY_VERSION(0x5DE5A0, 0, 0, 0, 0, 0);

signed int CGangs::ChooseGangPedModel(short gangID) {
    return plugin::CallAndReturnDynGlobal<signed int, short>(gaddrof(CGangs::ChooseGangPedModel), gangID);
}

int addrof(CGangs::GetWillAttackPlayerWithCops) = ADDRESS_BY_VERSION(0x5DE500, 0, 0, 0, 0, 0);
int gaddrof(CGangs::GetWillAttackPlayerWithCops) = GLOBAL_ADDRESS_BY_VERSION(0x5DE500, 0, 0, 0, 0, 0);

bool CGangs::GetWillAttackPlayerWithCops(ePedType gangID) {
    return plugin::CallAndReturnDynGlobal<bool, ePedType>(gaddrof(CGangs::GetWillAttackPlayerWithCops), gangID);
}

int addrof(CGangs::Initialise) = ADDRESS_BY_VERSION(0x5DE680, 0, 0, 0, 0, 0);
int gaddrof(CGangs::Initialise) = GLOBAL_ADDRESS_BY_VERSION(0x5DE680, 0, 0, 0, 0, 0);

void CGangs::Initialise() {
    plugin::CallDynGlobal(gaddrof(CGangs::Initialise));
}

int addrof(CGangs::Load) = ADDRESS_BY_VERSION(0x5D3A90, 0, 0, 0, 0, 0);
int gaddrof(CGangs::Load) = GLOBAL_ADDRESS_BY_VERSION(0x5D3A90, 0, 0, 0, 0, 0);

void CGangs::Load() {
    plugin::CallDynGlobal(gaddrof(CGangs::Load));
}

int addrof(CGangs::Save) = ADDRESS_BY_VERSION(0x5D3A60, 0, 0, 0, 0, 0);
int gaddrof(CGangs::Save) = GLOBAL_ADDRESS_BY_VERSION(0x5D3A60, 0, 0, 0, 0, 0);

void CGangs::Save() {
    plugin::CallDynGlobal(gaddrof(CGangs::Save));
}

int addrof(CGangs::SetGangPedModelOverride) = ADDRESS_BY_VERSION(0x5DE580, 0, 0, 0, 0, 0);
int gaddrof(CGangs::SetGangPedModelOverride) = GLOBAL_ADDRESS_BY_VERSION(0x5DE580, 0, 0, 0, 0, 0);

void CGangs::SetGangPedModelOverride(short gangID, signed char PedModelOverride) {
    plugin::CallDynGlobal<short, signed char>(gaddrof(CGangs::SetGangPedModelOverride), gangID, PedModelOverride);
}

int addrof(CGangs::SetGangWeapons) = ADDRESS_BY_VERSION(0x5DE550, 0, 0, 0, 0, 0);
int gaddrof(CGangs::SetGangWeapons) = GLOBAL_ADDRESS_BY_VERSION(0x5DE550, 0, 0, 0, 0, 0);

void CGangs::SetGangWeapons(short gangID, int weapID1, int weapID2, int weapID3) {
    plugin::CallDynGlobal<short, int, int, int>(gaddrof(CGangs::SetGangWeapons), gangID, weapID1, weapID2, weapID3);
}

int addrof(CGangs::SetWillAttackPlayerWithCops) = ADDRESS_BY_VERSION(0x5DE4E0, 0, 0, 0, 0, 0);
int gaddrof(CGangs::SetWillAttackPlayerWithCops) = GLOBAL_ADDRESS_BY_VERSION(0x5DE4E0, 0, 0, 0, 0, 0);

void CGangs::SetWillAttackPlayerWithCops(ePedType gangID, bool bAttackPlayerWithCops) {
    plugin::CallDynGlobal<ePedType, bool>(gaddrof(CGangs::SetWillAttackPlayerWithCops), gangID, bAttackPlayerWithCops);
}
