/*
    Plugin-SDK (Grand Theft Auto San Andreas) source file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/
#include "CPedGroupPlacer.h"

PLUGIN_SOURCE_FILE

int const &CPedGroupPlacer::ms_minGangSize = *reinterpret_cast<int const *>(GLOBAL_ADDRESS_BY_VERSION(0x86C6C4, 0, 0, 0, 0, 0));
int const &CPedGroupPlacer::ms_maxGangSize = *reinterpret_cast<int const *>(GLOBAL_ADDRESS_BY_VERSION(0x86C6C8, 0, 0, 0, 0, 0));

int addrof(CPedGroupPlacer::PlaceChatGroup) = ADDRESS_BY_VERSION(0x5FCE80, 0, 0, 0, 0, 0);
int gaddrof(CPedGroupPlacer::PlaceChatGroup) = GLOBAL_ADDRESS_BY_VERSION(0x5FCE80, 0, 0, 0, 0, 0);

bool CPedGroupPlacer::PlaceChatGroup(ePedType pedtype, int numOfPeds, CVector const *origin, int unused) {
    return plugin::CallMethodAndReturnDynGlobal<bool, CPedGroupPlacer *, ePedType, int, CVector const *, int>(gaddrof(CPedGroupPlacer::PlaceChatGroup), this, pedtype, numOfPeds, origin, unused);
}

int addrof(CPedGroupPlacer::PlaceFormationGroup) = ADDRESS_BY_VERSION(0x5FC9B0, 0, 0, 0, 0, 0);
int gaddrof(CPedGroupPlacer::PlaceFormationGroup) = GLOBAL_ADDRESS_BY_VERSION(0x5FC9B0, 0, 0, 0, 0, 0);

bool CPedGroupPlacer::PlaceFormationGroup(ePedType pedtype, int numOfPeds, CVector const *origin, int unused) {
    return plugin::CallMethodAndReturnDynGlobal<bool, CPedGroupPlacer *, ePedType, int, CVector const *, int>(gaddrof(CPedGroupPlacer::PlaceFormationGroup), this, pedtype, numOfPeds, origin, unused);
}

int addrof(CPedGroupPlacer::PlaceGroup) = ADDRESS_BY_VERSION(0x5FD810, 0, 0, 0, 0, 0);
int gaddrof(CPedGroupPlacer::PlaceGroup) = GLOBAL_ADDRESS_BY_VERSION(0x5FD810, 0, 0, 0, 0, 0);

bool CPedGroupPlacer::PlaceGroup(ePedType pedtype, int numOfPeds, CVector const *origin, int nGroupPlacerType) {
    return plugin::CallMethodAndReturnDynGlobal<bool, CPedGroupPlacer *, ePedType, int, CVector const *, int>(gaddrof(CPedGroupPlacer::PlaceGroup), this, pedtype, numOfPeds, origin, nGroupPlacerType);
}

int addrof(CPedGroupPlacer::PlaceRandomGroup) = ADDRESS_BY_VERSION(0x5FD330, 0, 0, 0, 0, 0);
int gaddrof(CPedGroupPlacer::PlaceRandomGroup) = GLOBAL_ADDRESS_BY_VERSION(0x5FD330, 0, 0, 0, 0, 0);

bool CPedGroupPlacer::PlaceRandomGroup(ePedType pedtype, int numOfPeds, CVector *origin, int unused) {
    return plugin::CallMethodAndReturnDynGlobal<bool, CPedGroupPlacer *, ePedType, int, CVector *, int>(gaddrof(CPedGroupPlacer::PlaceRandomGroup), this, pedtype, numOfPeds, origin, unused);
}
