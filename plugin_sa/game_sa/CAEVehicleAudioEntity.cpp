/*
    Plugin-SDK (Grand Theft Auto San Andreas) source file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/
#include "CAEVehicleAudioEntity.h"

PLUGIN_SOURCE_FILE

CPed *&CAEVehicleAudioEntity::s_pPlayerAttachedForRadio = *reinterpret_cast<CPed **>(GLOBAL_ADDRESS_BY_VERSION(0xB6B98C, 0, 0, 0, 0, 0));
CPed *&CAEVehicleAudioEntity::s_pPlayerDriver = *reinterpret_cast<CPed **>(GLOBAL_ADDRESS_BY_VERSION(0xB6B990, 0, 0, 0, 0, 0));
bool &CAEVehicleAudioEntity::s_HelicoptorsDisabled = *reinterpret_cast<bool *>(GLOBAL_ADDRESS_BY_VERSION(0xB6B994, 0, 0, 0, 0, 0));
short &CAEVehicleAudioEntity::s_NextDummyEngineSlot = *reinterpret_cast<short *>(GLOBAL_ADDRESS_BY_VERSION(0xB6B998, 0, 0, 0, 0, 0));
tVehicleAudioSettings *&CAEVehicleAudioEntity::s_pVehicleAudioSettingsForRadio = *reinterpret_cast<tVehicleAudioSettings **>(GLOBAL_ADDRESS_BY_VERSION(0xB6B99C, 0, 0, 0, 0, 0));
tEngineDummySlot(&CAEVehicleAudioEntity::s_DummyEngineSlots)[10] = *reinterpret_cast<tEngineDummySlot(*)[10]>(GLOBAL_ADDRESS_BY_VERSION(0xB6B9A0, 0, 0, 0, 0, 0));
tVehicleAudioSettings const(&gVehicleAudioSettings)[232] = *reinterpret_cast<tVehicleAudioSettings const(*)[232]>(GLOBAL_ADDRESS_BY_VERSION(0x860AF0, 0, 0, 0, 0, 0));
