/*
    Plugin-SDK (Grand Theft Auto 3) header file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/
#pragma once

#include "PluginBase.h"
#include "CVector.h"
#include "CBuilding.h"
#include "ePhoneState.h"

class PLUGIN_API CPhone {
    PLUGIN_NO_DEFAULT_CONSTRUCTION(CPhone)

public:
    CVector m_vecPos;
    wchar_t *m_pMessages[6];
    int m_nStartTimer;
    CBuilding *m_pEntity;
    ePhoneState m_nState;
    char m_bPlayerIsClose;
private:
    char _pad31[3];
public:
};

VALIDATE_SIZE(CPhone, 0x34);

#include "meta/meta.CPhone.h"
