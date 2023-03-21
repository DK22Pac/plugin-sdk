/*
    Plugin-SDK (Grand Theft Auto 2) header file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/

#pragma once
#include "PluginBase.h"

enum eRadioStations {
    STATION_0,
    STATION_1,
    STATION_DOWNTOWN,
    STATION_RESIDENTIAL,
    STATION_INDUSTRIAL,
    STATION_ZAIBATSU,
    STATION_YAKUZA,
    STATION_LOONIE,
    STATION_REDNECK,
    STATION_SCIENTIST,
    STATION_KRISHNA,
    STATION_RUSSIAN
};

struct tAudioObject {
    int type;
    char field_4;
    char field_5;
    char field_6;
    char field_7;
    int field_8;
    void* field_C;
};

struct tSound5 {
    int field_0;
    int field_4;
    int field_8;
};

struct tSound4 {
    int field_0;
    char field_4;
    char field_5;
    char field_6;
    char field_7;
    short field_8;
    char field_A;
    char field_B;
};

struct tAudioEntity {
    char used;
    char field_1;
    char field_2;
    char field_3;
    tAudioObject* obj;
    tSound4* alloc;
};

struct tSound2 {
    char field_0;
    char field_1;
    char field_2;
    char field_3;
    int field_4_fp;
    tAudioObject field_8;
    int field_18;
};

struct tSound {
    int field_0;
    char field_4;
    char field_5;
    char field_6;
    char field_7;
    tSound5 field_8;
    int field_14;
    char field_18;
    char field_19;
    char field_1A;
    char field_1B;
    int field_1C;
    int rate;
    unsigned char volume;
    char field_25;
    char field_26;
    char field_27;
    int field_28;
    char field_2C;
    char field_2D;
    char field_2E;
    char field_2F;
    int field_30;
    int field_34;
    int field_38;
    int field_3C;
    char field_40;
    char field_41;
    char field_42;
    char field_43;
    int field_44;
    unsigned int field_48;
    int field_4C;
    char field_50;
    char field_51;
    char field_52;
    char field_53;
    int field_54;
    int field_58;
    tSound* field_5C;
    unsigned char field_60;
    char field_61;
    char field_62;
    char field_63;
    int field_64;
};

class PLUGIN_API CAudioManager {
public:
    char field_0;
    char field_1;
    char field_2;
    char field_3;
    int field_4;
    unsigned char field_8;
    char field_9;
    char field_A;
    char field_B;
    int field_C;
    unsigned char m_nActiveSamples;
    char field_11;
    char field_12;
    char field_13;
    int m_nSampleRate;
    char field_18;
    char field_19;
    char field_1A;
    char field_1B;
    char m_nSampCount;
    bool m_bSound3d;
    char field_1E;
    char field_1F;
    int field_20;
    unsigned char m_nEffectsVolume;
    unsigned char m_nMusicVolume;
    char field_26;
    char field_27;
    int field_28;
    char field_2C;
    char field_2D;
    char field_2E;
    char field_2F;
    tSound m_sQueueSample;
    unsigned char m_nActiveSampleQueue;
    char field_99;
    char field_9A;
    char field_9B;
    tSound m_asSamples[2][16];
    char m_aSampleQueueIndexTable[2][16];
    char m_aSampleRequestQueuesStatus[2];
    short field_DBE;
    tSound m_asActiveSamples[16];
    int field_1440;
    char field_1444;
    char field_1445;
    char field_1446;
    char field_1447;
    int field_1448;
    int field_144C;
    char field_1450;
    char field_1451;
    char field_1452;
    char field_1453;
    int m_anRandomTable[5];
    int field_1468_v1;
    int field_146C_v2;
    int field_1470_v3;
    short field_1474;
    char field_1476;
    char field_1477;
    int field_1478;
    tAudioEntity m_asAudioEntities[1020];
    unsigned int m_anAudioEntityIndices[1020];
    unsigned int m_nAudioEntitiesTotal;
    int field_5440;
    int field_5444;
    unsigned int m_nFrameCounter;
    tSound2 field_544C[5];
    char field_54D8[5];
    char field_54DD;
    char field_54DE;
    char field_54DF;
    char field_54E0;
    char field_54E1;
    char field_54E2;
    char field_54E3;
    char field_54E4;
    char field_54E5;
    char field_54E6;
    char field_54E7;
    short field_54E8[5];
    unsigned char field_54F2[5];
    char field_54F7[5];
    int field_54FC;
    int field_5500;
    char field_5504;
    char field_5505;
    char field_5506;
    char field_5507;
    int m_nGameAudioEntity;
    tAudioObject m_GameAudioObject;
    int field_551C;
    unsigned char field_5520;
    char field_5521;
    char field_5522;
    char field_5523;
    int field_5524;
    unsigned char field_5528;
    unsigned char field_5529;
    char field_552A;
    char field_552B;
    int field_552C[15];
    char field_5568;
    char field_5569;
    short field_556A;
    short field_556C;
    short field_556E;
    short field_5570;
    short field_5572;
    int field_5574;

public:
;
};

VALIDATE_SIZE(CAudioManager, 0x5578);

extern CAudioManager& AudioManager;
