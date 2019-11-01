/*
    Plugin-SDK (Grand Theft Auto Vice City) header file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/
#pragma once

#include "PluginBase.h"
#include "CPhone.h"
#include "CVector.h"
#include "CPlayerPed.h"
#include "CAnimBlendAssociation.h"
#include "CPed.h"

class PLUGIN_API CPhoneInfo {
    PLUGIN_NO_DEFAULT_CONSTRUCTION(CPhoneInfo)

public:
    int m_nTotalPhones;
    int m_nFirstFreeIndex;
    CPhone m_aPhones[50];

    SUPPORTED_10EN_11EN int FindNearestFreePhone(CVector *point);
    SUPPORTED_10EN_11EN int GrabPhone(float x, float y);
    SUPPORTED_10EN_11EN void Initialise();
    SUPPORTED_10EN_11EN void Load(unsigned char *bufferPointer, unsigned int structSize);
    SUPPORTED_10EN_11EN void Save(unsigned char *bufferPointer, unsigned int *structSize);
    SUPPORTED_10EN_11EN void SetPhoneMessage_JustOnce(int index, wchar_t *text_1, wchar_t *text_2, wchar_t *text_3, wchar_t *text_4, wchar_t *text_5, wchar_t *text_6);
    SUPPORTED_10EN_11EN void Shutdown();
    SUPPORTED_10EN_11EN void Update();
};

SUPPORTED_10EN_11EN extern int &PhoneEnableControlsTimer;
SUPPORTED_10EN_11EN extern bool &bDisplayingPhoneMessage;
SUPPORTED_10EN_11EN extern CPhone *&pPhoneDisplayingMessages;
SUPPORTED_10EN_11EN extern bool &bPickingUpPhone;
SUPPORTED_10EN_11EN extern CPlayerPed *&pCallBackPed;

SUPPORTED_10EN_11EN void PhonePutDownCB(CAnimBlendAssociation *association, CPed *ped);
SUPPORTED_10EN_11EN void PhonePickUpCB(CAnimBlendAssociation *association, CPhone *phone);

VALIDATE_SIZE(CPhoneInfo, 0xA30);

#include "meta/meta.CPhoneInfo.h"
