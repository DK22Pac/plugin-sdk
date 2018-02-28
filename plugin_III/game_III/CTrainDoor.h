/*
    Plugin-SDK (Grand Theft Auto 3) header file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/
#pragma once

#include "PluginBase.h"

class CTrainDoor {
public:
    float         m_fOpenAngle;
    float         m_fClosedAngle;
    unsigned char m_nDirn;
    unsigned char m_nState;
    unsigned char m_nAxis;
private:
    char _padB;
public:
    float         m_fAngle;
    float         m_fPrevAngle;
    float         m_fAngleVel;

    //funcs

    CTrainDoor();
    bool IsClosed();
    bool IsFullyOpen();
    void Open(float angle);
    void RetTranslationWhenClosed();
    void RetTranslationWhenOpen();
};

VALIDATE_SIZE(CTrainDoor, 0x18);