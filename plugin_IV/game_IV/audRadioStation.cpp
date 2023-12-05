/*
    Plugin-SDK (Grand Theft Auto IV) source file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/
#include "audRadioStation.h"

rage::sysArray<audRadioStation*>& audRadioStation::ms_OrderedRadioStations = *gpatternt(rage::sysArray<audRadioStation*>, "8B 3D ? ? ? ? 8D 64 24 00 8B 14 87", 2);
uint8_t& audRadioStation::sm_NumUnlockedRadioStations = *gpatternt(uint8_t, "C6 05 ? ? ? ? ? C6 05 ? ? ? ? ? C6 05 ? ? ? ? ? C7 05 ? ? ? ? ? ? ? ? BE", 2);

uint32_t& audRadioStation::ms_CurrRadioStationRoll = *gpatternt(uint32_t, "89 0D ? ? ? ? 51 B9 ? ? ? ? E8 ? ? ? ? E8 ? ? ? ? 0F B6 C0", 2);
uint32_t& audRadioStation::ms_CurrRadioStation = *gpatternt(uint32_t, "A3 ? ? ? ? C2 04 00 CC CC CC CC CC CC CC CC CC CC 55", 1);

int32_t& audRadioStation::ms_nState = *gpatternt(int32_t, "C7 05 ? ? ? ? ? ? ? ? 8A C8", 2);
uint8_t& audRadioStation::ms_RadioOff = *gpatternt(uint8_t, "C6 05 ? ? ? ? ? C3 CC CC CC CC CC CC CC 81 EC", 2);

audRadioStation* audRadioStation::FindStation(uint32_t hashName) {
    return plugin::CallAndReturnDyn<audRadioStation*>(gpattern("56 0F B6 35 ? ? ? ? 32 C9"), hashName);
}

audRadioStation* audRadioStation::FindStation(const char* name) {
    return plugin::CallAndReturnDyn<audRadioStation*>(gpattern("6A 00 FF 74 24 08 E8 ? ? ? ? 83 C4 08 89 44 24 04 E9 ? ? ? ? CC CC CC CC CC CC CC CC CC 56"), name);
}

const char* audRadioStation::GetName(uint32_t index, bool off) {
    return plugin::CallAndReturnDyn<const char*>(gpattern("53 8A 5C 24 0C 56 8B 74 24 0C 84 DB"), index, off);
}

audRadioStation* audRadioStation::GetStation(uint32_t index) {
    return plugin::CallAndReturnDyn<audRadioStation*>(gpattern("0F B6 05 ? ? ? ? 8B 4C 24 04"), index);
}

int32_t audRadioStation::GetNumStations() {
    return plugin::CallAndReturnDyn<int32_t>(gpattern("E8 ? ? ? ? 39 05 ? ? ? ? 0F 42 05"));
}
