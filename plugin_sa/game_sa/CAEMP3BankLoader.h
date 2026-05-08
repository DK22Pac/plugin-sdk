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
VALIDATE_OFFSET(CBankHeader, m_nOffset, 0x0);
VALIDATE_OFFSET(CBankHeader, field_2, 0x2);
VALIDATE_OFFSET(CBankHeader, field_4, 0x4);
VALIDATE_OFFSET(CBankHeader, m_nSoundHeadroom, 0x8);
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
VALIDATE_OFFSET(CBankSlotInfo, m_nOffset, 0x0);
VALIDATE_OFFSET(CBankSlotInfo, m_nLength, 0x4);
VALIDATE_OFFSET(CBankSlotInfo, field_8, 0x8);
VALIDATE_OFFSET(CBankSlotInfo, field_C, 0xC);
VALIDATE_OFFSET(CBankSlotInfo, m_nBankId, 0x10);
VALIDATE_OFFSET(CBankSlotInfo, m_nNumSoundInfo, 0x12);
VALIDATE_OFFSET(CBankSlotInfo, m_aSoundsHeader, 0x14);
VALIDATE_SIZE(CBankSlotInfo, 0x12D4);

class PLUGIN_API CBankLkup {
public:
    char m_nPakFileNumber;
    char __pad0[3];
    int m_nOffset;
    int m_nLength;
};
VALIDATE_OFFSET(CBankLkup, m_nPakFileNumber, 0x0);
VALIDATE_OFFSET(CBankLkup, __pad0, 0x1);
VALIDATE_OFFSET(CBankLkup, m_nOffset, 0x4);
VALIDATE_OFFSET(CBankLkup, m_nLength, 0x8);
VALIDATE_SIZE(CBankLkup, 0xC);

class PLUGIN_API CBankSlotsInfos {
public:
    CBankSlotInfo m_aInfos[45];
};
VALIDATE_OFFSET(CBankSlotsInfos, m_aInfos, 0x0);
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
VALIDATE_OFFSET(CBankSlotBankAssignment, m_pBankSlotInfo, 0x0);
VALIDATE_OFFSET(CBankSlotBankAssignment, m_nBankOffset, 0x4);
VALIDATE_OFFSET(CBankSlotBankAssignment, m_nBankLength, 0x8);
VALIDATE_OFFSET(CBankSlotBankAssignment, m_pStreamOffset, 0xC);
VALIDATE_OFFSET(CBankSlotBankAssignment, m_pStreamBuffer, 0x10);
VALIDATE_OFFSET(CBankSlotBankAssignment, m_dwState, 0x14);
VALIDATE_OFFSET(CBankSlotBankAssignment, m_nBankId, 0x18);
VALIDATE_OFFSET(CBankSlotBankAssignment, m_nBankSlotId, 0x1A);
VALIDATE_OFFSET(CBankSlotBankAssignment, m_nNumSounds, 0x1C);
VALIDATE_OFFSET(CBankSlotBankAssignment, m_nPakFileNumber, 0x1E);
VALIDATE_OFFSET(CBankSlotBankAssignment, __pad, 0x1F);
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
VALIDATE_OFFSET(CAEMP3BankLoader, m_pBankSlotsInfos, 0x0);
VALIDATE_OFFSET(CAEMP3BankLoader, m_pBankLkups, 0x4);
VALIDATE_OFFSET(CAEMP3BankLoader, m_pPakFileName, 0x8);
VALIDATE_OFFSET(CAEMP3BankLoader, m_nNumBankSlotsInfos, 0xC);
VALIDATE_OFFSET(CAEMP3BankLoader, m_nNumBankLkup, 0xE);
VALIDATE_OFFSET(CAEMP3BankLoader, m_nNumPakFiles, 0x10);
VALIDATE_OFFSET(CAEMP3BankLoader, __pad1, 0x12);
VALIDATE_OFFSET(CAEMP3BankLoader, m_bAudioFileInfoInitialized, 0x14);
VALIDATE_OFFSET(CAEMP3BankLoader, __pad2, 0x15);
VALIDATE_OFFSET(CAEMP3BankLoader, m_nBankSlotsSize, 0x18);
VALIDATE_OFFSET(CAEMP3BankLoader, m_pBankSlots, 0x1C);
VALIDATE_OFFSET(CAEMP3BankLoader, m_pPakFilesStreamHandles, 0x20);
VALIDATE_OFFSET(CAEMP3BankLoader, m_aBankSlotBankAssignment, 0x24);
VALIDATE_OFFSET(CAEMP3BankLoader, field_664, 0x664);
VALIDATE_OFFSET(CAEMP3BankLoader, field_666, 0x666);
VALIDATE_OFFSET(CAEMP3BankLoader, m_nNumBanksAssigned, 0x668);
VALIDATE_OFFSET(CAEMP3BankLoader, m_nStreamNum, 0x66A);
VALIDATE_OFFSET(CAEMP3BankLoader, m_nCurrentSfxInBankSlot, 0x66C);
VALIDATE_SIZE(CAEMP3BankLoader, 0x6E4);
