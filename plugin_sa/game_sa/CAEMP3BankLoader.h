/*
    Plugin-SDK (Grand Theft Auto San Andreas) header file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/
#pragma once
#include "PluginBase.h"

class PLUGIN_API CBankHeader {
public:
    short m_nOffset;
    short field_2;
    int field_4;
    int m_nSoundHeadroom;
};

VALIDATE_SIZE(CBankHeader, 0xC);

class PLUGIN_API CBankSlotInfo {
public:
    int m_nOffset;
    int m_nLength;
    int field_8;
    int field_C;
    short m_nBankId;
    short m_nNumSoundInfo;
    CBankHeader m_aSoundsHeader[400];
};

VALIDATE_SIZE(CBankSlotInfo, 0x12D4);

class PLUGIN_API CBankLkup {
public:
    char m_nPakFileNumber;
    char __pad0[3];
    int m_nOffset;
    int m_nLength;
};

VALIDATE_SIZE(CBankLkup, 0xC);

class PLUGIN_API CBankSlotsInfos {
public:
    CBankSlotInfo m_aInfos[45];
};

VALIDATE_SIZE(CBankSlotsInfos, 0x34F44);

class PLUGIN_API CBankSlotBankAssignment {
public:
    CBankSlotsInfos* m_pBankSlotInfo;
    int m_nBankOffset;
    int m_nBankLength;
    int m_pStreamOffset;
    int m_pStreamBuffer;
    int m_dwState;
    short m_nBankId;
    short m_nBankSlotId;
    short m_nNumSounds;
    char m_nPakFileNumber;
    char __pad;
};

VALIDATE_SIZE(CBankSlotBankAssignment, 0x20);

class PLUGIN_API CAEMP3BankLoader {
public:
    CBankSlotInfo* m_pBankSlotsInfos;
    CBankLkup* m_pBankLkups;
    void* m_pPakFileName;
    short m_nNumBankSlotsInfos;
    short m_nNumBankLkup;
    short m_nNumPakFiles;
    short __pad1;
    unsigned char m_bAudioFileInfoInitialized;
    char __pad2[3];
    int m_nBankSlotsSize;
    int m_pBankSlots;
    int* m_pPakFilesStreamHandles;
    CBankSlotBankAssignment m_aBankSlotBankAssignment[50];
    short field_664;
    short field_666;
    short m_nNumBanksAssigned;
    unsigned short m_nStreamNum;
    short m_nCurrentSfxInBankSlot[60];
};

VALIDATE_SIZE(CAEMP3BankLoader, 0x6E4);
