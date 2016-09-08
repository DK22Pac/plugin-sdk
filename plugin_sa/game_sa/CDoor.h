/*
    Plugin-SDK (Grand Theft Auto) header file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/
#pragma once

#include "plbase/PluginBase_SA.h"

#pragma pack(push, 4)
class PLUGIN_API CDoor
{
public:
    float m_fOpenAngle;
    float m_fClosedAngle;
    short m_nDirn;
    unsigned char m_nAxis;
    unsigned char m_nDoorState;
    float m_fAngle;
    float m_fPrevAngle;
    float m_fAngVel;
};
#pragma pack(pop)

VALIDATE_SIZE(CDoor, 0x18);