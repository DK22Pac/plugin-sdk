/*
    Plugin-SDK (Grand Theft Auto 3) source file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/
#include "CTrain.h"

PLUGIN_SOURCE_FILE

PLUGIN_VARIABLE CVector(&CTrain::aStationCoors_S)[4] = *reinterpret_cast<CVector(*)[4]>(GLOBAL_ADDRESS_BY_VERSION(0x774D90, 0x774D90, 0x784ED0));
PLUGIN_VARIABLE CVector(&CTrain::aStationCoors)[3] = *reinterpret_cast<CVector(*)[3]>(GLOBAL_ADDRESS_BY_VERSION(0x8F5F8C, 0x8F6040, 0x906180));
PLUGIN_VARIABLE float(&StationDist)[3] = *reinterpret_cast<float(*)[3]>(GLOBAL_ADDRESS_BY_VERSION(0x602284, 0x601C4C, 0x60EC44));
PLUGIN_VARIABLE float(&StationDist_S)[4] = *reinterpret_cast<float(*)[4]>(GLOBAL_ADDRESS_BY_VERSION(0x602290, 0x601C58, 0x60EC50));
PLUGIN_VARIABLE bool(&bTrainArrivalAnnounced)[3] = *reinterpret_cast<bool(*)[3]>(GLOBAL_ADDRESS_BY_VERSION(0x6022A0, 0x601C68, 0x60EC60));
PLUGIN_VARIABLE float &TotalLengthOfTrack = *reinterpret_cast<float *>(GLOBAL_ADDRESS_BY_VERSION(0x64D000, 0x64D000, 0x65D008));
PLUGIN_VARIABLE float &TotalDurationOfTrack = *reinterpret_cast<float *>(GLOBAL_ADDRESS_BY_VERSION(0x64D004, 0x64D004, 0x65D00C));
PLUGIN_VARIABLE float(&EngineTrackPosition)[2] = *reinterpret_cast<float(*)[2]>(GLOBAL_ADDRESS_BY_VERSION(0x64D008, 0x64D008, 0x65D010));
PLUGIN_VARIABLE float &TotalLengthOfTrack_S = *reinterpret_cast<float *>(GLOBAL_ADDRESS_BY_VERSION(0x64D010, 0x64D010, 0x65D018));
PLUGIN_VARIABLE float &TotalDurationOfTrack_S = *reinterpret_cast<float *>(GLOBAL_ADDRESS_BY_VERSION(0x64D014, 0x64D014, 0x65D01C));
PLUGIN_VARIABLE float(&EngineTrackPosition_S)[4] = *reinterpret_cast<float(*)[4]>(GLOBAL_ADDRESS_BY_VERSION(0x64D018, 0x64D018, 0x65D020));
PLUGIN_VARIABLE CTrainInterpolationLine(&aLineBits)[17] = *reinterpret_cast<CTrainInterpolationLine(*)[17]>(GLOBAL_ADDRESS_BY_VERSION(0x70D838, 0x70D838, 0x71D978));
PLUGIN_VARIABLE CTrainInterpolationLine(&aLineBits_S)[18] = *reinterpret_cast<CTrainInterpolationLine(*)[18]>(GLOBAL_ADDRESS_BY_VERSION(0x726600, 0x726600, 0x736740));
PLUGIN_VARIABLE float(&EngineTrackSpeed_S)[4] = *reinterpret_cast<float(*)[4]>(GLOBAL_ADDRESS_BY_VERSION(0x87C7C8, 0x87C778, 0x88C8B8));
PLUGIN_VARIABLE float(&EngineTrackSpeed)[2] = *reinterpret_cast<float(*)[2]>(GLOBAL_ADDRESS_BY_VERSION(0x880848, 0x8807F8, 0x890938));
PLUGIN_VARIABLE CTrainNode *&pTrackNodes_S = *reinterpret_cast<CTrainNode **>(GLOBAL_ADDRESS_BY_VERSION(0x8F2560, 0x8F2614, 0x902754));
PLUGIN_VARIABLE CTrainNode *&pTrackNodes = *reinterpret_cast<CTrainNode **>(GLOBAL_ADDRESS_BY_VERSION(0x8F4338, 0x8F43EC, 0x90452C));
PLUGIN_VARIABLE short &NumTrackNodes = *reinterpret_cast<short *>(GLOBAL_ADDRESS_BY_VERSION(0x95CC5C, 0x95CE14, 0x96CF54));
PLUGIN_VARIABLE short &NumTrackNodes_S = *reinterpret_cast<short *>(GLOBAL_ADDRESS_BY_VERSION(0x95CC6A, 0x95CE22, 0x96CF62));

int ctor_addr_o(CTrain, void(int, unsigned char)) = ADDRESS_BY_VERSION(0x54E2A0, 0x54E3E0, 0x54E390);
int ctor_gaddr_o(CTrain, void(int, unsigned char)) = GLOBAL_ADDRESS_BY_VERSION(0x54E2A0, 0x54E3E0, 0x54E390);

int dtor_addr(CTrain) = ADDRESS_BY_VERSION(0x54E450, 0x54E590, 0x54E540);
int dtor_gaddr(CTrain) = GLOBAL_ADDRESS_BY_VERSION(0x54E450, 0x54E590, 0x54E540);

int del_dtor_addr(CTrain) = ADDRESS_BY_VERSION(0x550500, 0x550640, 0x5505F0);
int del_dtor_gaddr(CTrain) = GLOBAL_ADDRESS_BY_VERSION(0x550500, 0x550640, 0x5505F0);

int addrof(CTrain::SetModelIndex) = ADDRESS_BY_VERSION(0x54E470, 0x54E5B0, 0x54E560);
int gaddrof(CTrain::SetModelIndex) = GLOBAL_ADDRESS_BY_VERSION(0x54E470, 0x54E5B0, 0x54E560);

void CTrain::SetModelIndex(unsigned int modelIndex) {
    plugin::CallVirtualMethod<3, CTrain *, unsigned int>(this, modelIndex);
}

int addrof(CTrain::ProcessControl) = ADDRESS_BY_VERSION(0x54F800, 0x54F940, 0x54F8F0);
int gaddrof(CTrain::ProcessControl) = GLOBAL_ADDRESS_BY_VERSION(0x54F800, 0x54F940, 0x54F8F0);

void CTrain::ProcessControl() {
    plugin::CallVirtualMethod<8, CTrain *>(this);
}

int addrof(CTrain::PreRender) = ADDRESS_BY_VERSION(0x54E4C0, 0x54E600, 0x54E5B0);
int gaddrof(CTrain::PreRender) = GLOBAL_ADDRESS_BY_VERSION(0x54E4C0, 0x54E600, 0x54E5B0);

void CTrain::PreRender() {
    plugin::CallVirtualMethod<12, CTrain *>(this);
}

int addrof(CTrain::Render) = ADDRESS_BY_VERSION(0x54EAA0, 0x54EBE0, 0x54EB90);
int gaddrof(CTrain::Render) = GLOBAL_ADDRESS_BY_VERSION(0x54EAA0, 0x54EBE0, 0x54EB90);

void CTrain::Render() {
    plugin::CallVirtualMethod<13, CTrain *>(this);
}

int addrof(CTrain::AddPassenger) = ADDRESS_BY_VERSION(0x5504A0, 0x5505E0, 0x550590);
int gaddrof(CTrain::AddPassenger) = GLOBAL_ADDRESS_BY_VERSION(0x5504A0, 0x5505E0, 0x550590);

void CTrain::AddPassenger(CPed *passenger) {
    plugin::CallMethodDynGlobal<CTrain *, CPed *>(gaddrof(CTrain::AddPassenger), this, passenger);
}

int addrof(CTrain::OpenTrainDoor) = ADDRESS_BY_VERSION(0x550360, 0x5504A0, 0x550450);
int gaddrof(CTrain::OpenTrainDoor) = GLOBAL_ADDRESS_BY_VERSION(0x550360, 0x5504A0, 0x550450);

void CTrain::OpenTrainDoor(float angle) {
    plugin::CallMethodDynGlobal<CTrain *, float>(gaddrof(CTrain::OpenTrainDoor), this, angle);
}

int addrof(CTrain::TrainHitStuff) = ADDRESS_BY_VERSION(0x550300, 0x550440, 0x5503F0);
int gaddrof(CTrain::TrainHitStuff) = GLOBAL_ADDRESS_BY_VERSION(0x550300, 0x550440, 0x5503F0);

void CTrain::TrainHitStuff(CPtrList &list) {
    plugin::CallMethodDynGlobal<CTrain *, CPtrList &>(gaddrof(CTrain::TrainHitStuff), this, list);
}

int addrof(CTrain::InitTrains) = ADDRESS_BY_VERSION(0x54F000, 0x54F140, 0x54F0F0);
int gaddrof(CTrain::InitTrains) = GLOBAL_ADDRESS_BY_VERSION(0x54F000, 0x54F140, 0x54F0F0);

void CTrain::InitTrains() {
    plugin::CallDynGlobal(gaddrof(CTrain::InitTrains));
}

int addrof(CTrain::ReadAndInterpretTrackFile) = ADDRESS_BY_VERSION(0x54EAB0, 0x54EBF0, 0x54EBA0);
int gaddrof(CTrain::ReadAndInterpretTrackFile) = GLOBAL_ADDRESS_BY_VERSION(0x54EAB0, 0x54EBF0, 0x54EBA0);

void CTrain::ReadAndInterpretTrackFile(char const *filename, CTrainNode **nodes, short *numNodes, int numStations, float *stationDists, float *totalLength, float *totalDuration, CTrainInterpolationLine *line, bool rightRail) {
    plugin::CallDynGlobal<char const *, CTrainNode **, short *, int, float *, float *, float *, CTrainInterpolationLine *, bool>(gaddrof(CTrain::ReadAndInterpretTrackFile), filename, nodes, numNodes, numStations, stationDists, totalLength, totalDuration, line, rightRail);
}

int addrof(CTrain::Shutdown) = ADDRESS_BY_VERSION(0x54F360, 0x54F4A0, 0x54F450);
int gaddrof(CTrain::Shutdown) = GLOBAL_ADDRESS_BY_VERSION(0x54F360, 0x54F4A0, 0x54F450);

void CTrain::Shutdown() {
    plugin::CallDynGlobal(gaddrof(CTrain::Shutdown));
}

int addrof(CTrain::UpdateTrains) = ADDRESS_BY_VERSION(0x54F3A0, 0x54F4E0, 0x54F490);
int gaddrof(CTrain::UpdateTrains) = GLOBAL_ADDRESS_BY_VERSION(0x54F3A0, 0x54F4E0, 0x54F490);

void CTrain::UpdateTrains() {
    plugin::CallDynGlobal(gaddrof(CTrain::UpdateTrains));
}

int addrof(ProcessTrainAnnouncements) = ADDRESS_BY_VERSION(0x54F6D0, 0x54F810, 0x54F7C0);
int gaddrof(ProcessTrainAnnouncements) = GLOBAL_ADDRESS_BY_VERSION(0x54F6D0, 0x54F810, 0x54F7C0);

void ProcessTrainAnnouncements() {
    plugin::CallDynGlobal(gaddrof(ProcessTrainAnnouncements));
}

int addrof(PlayAnnouncement) = ADDRESS_BY_VERSION(0x54F7F0, 0x54F930, 0x54F8E0);
int gaddrof(PlayAnnouncement) = GLOBAL_ADDRESS_BY_VERSION(0x54F7F0, 0x54F930, 0x54F8E0);

void PlayAnnouncement(unsigned char sound, unsigned char station) {
    plugin::CallDynGlobal<unsigned char, unsigned char>(gaddrof(PlayAnnouncement), sound, station);
}
