/*
    Plugin-SDK (Grand Theft Auto 3) header file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/
#pragma once

#include "PluginBase.h"
#include "CVector.h"

class CVehicle;

class CDoor {
public:
    float         m_fOpenAngle;
    float         m_fClosedAngle;
    unsigned char m_bDirn;
    unsigned char m_bAxis;
    unsigned char m_bState;
private:
    char _padB;
public:
    float         m_fAngle;
    float         m_fPrevAngle;
    float         m_fAngVel;
    CVector field_18;

    //funcs

    CDoor();
    float GetAngleOpenRatio();
    bool IsClosed();
    bool IsFullyOpen();
    void Open(float angle);
    void Process(CVehicle* vehicle);
    float RetAngleWhenClosed();
    float RetAngleWhenOpen();
};
VALIDATE_OFFSET(CDoor, m_fOpenAngle, 0x0);
VALIDATE_OFFSET(CDoor, m_fClosedAngle, 0x4);
VALIDATE_OFFSET(CDoor, m_bDirn, 0x8);
VALIDATE_OFFSET(CDoor, m_bAxis, 0x9);
VALIDATE_OFFSET(CDoor, m_bState, 0xA);
VALIDATE_OFFSET(CDoor, m_fAngle, 0xC);
VALIDATE_OFFSET(CDoor, m_fPrevAngle, 0x10);
VALIDATE_OFFSET(CDoor, m_fAngVel, 0x14);
VALIDATE_OFFSET(CDoor, field_18, 0x18);
VALIDATE_SIZE(CDoor, 0x24);