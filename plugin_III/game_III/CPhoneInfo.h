/*
    Plugin-SDK (Grand Theft Auto 3) header file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/
#pragma once

#include "PluginBase.h"
#include "CPhone.h"
#include "CVector.h"
#include "CPed.h"
#include "CAnimBlendAssociation.h"

class PLUGIN_API CPhoneInfo {
    PLUGIN_NO_DEFAULT_CONSTRUCTION(CPhoneInfo)

public:
    int m_nMax;
    int m_nScriptPhonesMax;
    CPhone m_aPhones[50];

    SUPPORTED_10EN_11EN_STEAM int FindNearestFreePhone(CVector *point);
    SUPPORTED_10EN_11EN_STEAM int GrabPhone(float x, float y);
    SUPPORTED_10EN_11EN_STEAM bool HasMessageBeenDisplayed(int index);
    SUPPORTED_10EN_11EN_STEAM void Initialise();
    SUPPORTED_10EN_11EN_STEAM bool IsMessageBeingDisplayed(int index);
    SUPPORTED_10EN_11EN_STEAM void Load(unsigned char *buf, unsigned int size);
    SUPPORTED_10EN_11EN_STEAM bool PhoneAtThisPosition(CVector point);
    SUPPORTED_10EN_11EN_STEAM void Save(unsigned char *buf, unsigned int *size);
    SUPPORTED_10EN_11EN_STEAM void SetPhoneMessage_JustOnce(int index, wchar_t *text_1, wchar_t *text_2, wchar_t *text_3, wchar_t *text_4, wchar_t *text_5, wchar_t *text_6);
    SUPPORTED_10EN_11EN_STEAM void SetPhoneMessage_Repeatedly(int index, wchar_t *text_1, wchar_t *text_2, wchar_t *text_3, wchar_t *text_4, wchar_t *text_5, wchar_t *text_6);
    SUPPORTED_10EN_11EN_STEAM void Shutdown();
    SUPPORTED_10EN_11EN_STEAM void Update();
};

SUPPORTED_10EN_11EN_STEAM extern unsigned int &PhoneEnableControlsTimer;
SUPPORTED_10EN_11EN_STEAM extern bool &bDisplayingPhoneMessage;
SUPPORTED_10EN_11EN_STEAM extern CPhone *&pPhoneDisplayingMessages;
SUPPORTED_10EN_11EN_STEAM extern bool &bPickingUpPhone;
SUPPORTED_10EN_11EN_STEAM extern CPed *&pCallBackPed;
SUPPORTED_10EN_11EN_STEAM extern CPhoneInfo &gPhoneInfo;

SUPPORTED_10EN_11EN_STEAM void PhonePickUpCB(CAnimBlendAssociation *association, void *data);
SUPPORTED_10EN_11EN_STEAM void PhonePutDownCB(CAnimBlendAssociation *association, void *data);

VALIDATE_SIZE(CPhoneInfo, 0xA30);

#include "meta/meta.CPhoneInfo.h"
