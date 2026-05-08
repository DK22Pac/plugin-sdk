/*
    Plugin-SDK (Grand Theft Auto San Andreas) header file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/
#pragma once
#include "PluginBase.h"
#include "CVector.h"
#include "CEntity.h"

class PLUGIN_API CAudioLink {
public:
    CVector m_vPosition;
    CEntity* m_pEntity;
    int field_10;
    int m_nAudioEvent;
    int m_nBankId;
    int m_nBankSlotId;
};
VALIDATE_OFFSET(CAudioLink, m_vPosition, 0x0);
VALIDATE_OFFSET(CAudioLink, m_pEntity, 0xC);
VALIDATE_OFFSET(CAudioLink, field_10, 0x10);
VALIDATE_OFFSET(CAudioLink, m_nAudioEvent, 0x14);
VALIDATE_OFFSET(CAudioLink, m_nBankId, 0x18);
VALIDATE_OFFSET(CAudioLink, m_nBankSlotId, 0x1C);
VALIDATE_SIZE(CAudioLink, 0x20);
