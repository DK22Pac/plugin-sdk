/*
    Plugin-SDK (Grand Theft Auto 3) header file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/
#pragma once

#include "PluginBase.h"

enum PLUGIN_API eTrainDoorStates {
    TRAIN_DOOR_CLOSED = 0,
    TRAIN_DOOR_OPENING = 1,
    TRAIN_DOOR_OPENED = 2,
    TRAIN_DOOR_CLOSING = 3
};

class PLUGIN_API CTrainDoor {
    PLUGIN_NO_DEFAULT_CONSTRUCTION(CTrainDoor)

public:
    float m_fOpenAngle;
    float m_fClosedAngle;
    unsigned char m_nDirn;
    unsigned char m_nState;
    unsigned char m_nAxis;
    float m_fAngle;
    float m_fPrevAngle;
    float m_fAngleVel;

    SUPPORTED_10EN_11EN_STEAM bool IsClosed();
    SUPPORTED_10EN_11EN_STEAM bool IsFullyOpen();
    SUPPORTED_10EN_11EN_STEAM void Open(float angle);
    SUPPORTED_10EN_11EN_STEAM float RetTranslationWhenClosed();
    SUPPORTED_10EN_11EN_STEAM float RetTranslationWhenOpen();
};

VALIDATE_SIZE(CTrainDoor, 0x18);

#include "meta/meta.CTrainDoor.h"
