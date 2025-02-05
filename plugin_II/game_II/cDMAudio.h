/*
    Plugin-SDK (Grand Theft Auto 2) header file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/

#pragma once
#include "PluginBase.h"
#include "CAudioManager.h"

enum eVocals {
    VOCAL_0,
    VOCAL_INSANESTUNTBONUS,
    VOCAL_1,
    VOCAL_2,
    VOCAL_EXPIDITIOUS,
    VOCAL_GENOCIDE,
    VOCAL_COPKILLA,
    VOCAL_CARJACKER,
    VOCAL_ELVIS,
    VOCAL_ACCURACYBONUS,
    VOCAL_BACK2FRONT,
    VOCAL_MEDICALEMERCENCY,
    VOCAL_KILLFRENZY,
    VOCAL_BUSTED = 17,
    VOCAL_FRENZYFAILED,
    VOCAL_FRENZYPASSED,
    VOCAL_FRYINGTONITE,
    VOCAL_21,
    VOCAL_JOBCOMPLETE,
    VOCAL_JOBFAILED,
    VOCAL_RESPECTIS,
    VOCAL_SHOCKING,
    VOCAL_SOMETHINGSCOOKING,
    VOCAl_TIMESUP,
    VOCAL_TOASTED,
    VOCAL_WASTED,
    VOCAL_BOMBARMED,
    VOCAL_LAUGH,
    VOCAL_YOOHOO,
    VOCAL_RACEOVER,
    VOCAl_2NDLAP,
    VOCAL_FINALLAP,
    VOCAL_RACEON,
    VOCAL_30PEOPLEDOWN,
    VOCAL_60PEOPLEDOWN,
    VOCAL_90PEOPLEDOWN,
    VOCAL_120PEOPLEDOWN,
    VOCAL_150PEOPLEDOWN,
    VOCAL_TIMEOUT,
    VOCAL_TIMEEXTENDED,
    VOCAL_TIMESUP_2,
    VOCAL_DIDTHATHURT,
    VOCAL_NICEWORK,
    VOCAL_CHOCTASTIC,
    VOCAL_RASPBERRYRIPPLE,
    VOCAL_YOUSHOTYOURLOAD,
    VOCAL_OOHDIDTHATHURT,
    VOCAL_DEATHTOICVANS,
    VOCAL_CRISPYCRITTER,
    VOCAL_YOURETOASTBUDDY,
    VOCAL_EATLEADDEATH,
    VOCAL_THATSGOTTAHURT,
    VOCAL_SORRYABOUTTHAT,
    VOCAL_XINLOIMYMAN,
    VOCAL_DAMNSUNDAYDRIVERS,
    VOCAL_SUCKITANDSEE,
    VOCAL_TASTEMYWRATH,
    VOCAL_HALLELUJAH,
    VOCAL_DAMNATION,
};

class cDMAudio {
public:
    static tAudioObject& NewFrontendAudioObject;
    static tAudioObject& OldFrontendAudioObject;

public:
    char GetEffectsMasterVolume();
    char GetMusicMasterVolume();
    void SetMusicMasterVolume(unsigned char volume);
    void SetEffectsMasterVolume(unsigned char volume);
    void SetCurrent3DProvider(unsigned char provider);
    void PlayVocal(unsigned short id);
    void ReleaseDigitalHandle();
    int CreateEntity(void* object);
    void DestroyEntity(int audioEntity);
};

extern cDMAudio& DMAudio;
