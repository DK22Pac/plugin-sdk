#pragma once

#include <plugin/plugin.h>
#include "CVector.h"

#pragma pack(push, 4)
class PLUGIN_API CCrimeBeingQd
{
public:
    unsigned __int32 m_dwCrimeType;
    unsigned __int32 m_dwCrimeId;
    unsigned __int32 m_dwStartTime;
    CVector m_vCoors;
    unsigned __int8 m_bAlreadyReported;
    unsigned __int8 m_bPoliceDontReallyCare;
};
#pragma pack(pop)

VALIDATE_SIZE(CCrimeBeingQd, 0x1C);