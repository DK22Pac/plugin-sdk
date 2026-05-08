/*
    Plugin-SDK (Grand Theft Auto 3) header file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/
#pragma once

#include "PluginBase.h"
#include "CVector.h"

class PLUGIN_API CMovie {
    PLUGIN_NO_DEFAULT_CONSTRUCTION(CMovie)

public:
    int m_nCommandId;
    CVector m_vecCurrentPosition;
    CVector m_vecCamera;
    short m_nActorId;
    short m_nActor2Id;
    short m_nVehicleId;
    short m_nModelIndex;
};
VALIDATE_OFFSET(CMovie, m_nCommandId, 0x0);
VALIDATE_OFFSET(CMovie, m_vecCurrentPosition, 0x4);
VALIDATE_OFFSET(CMovie, m_vecCamera, 0x10);
VALIDATE_OFFSET(CMovie, m_nActorId, 0x1C);
VALIDATE_OFFSET(CMovie, m_nActor2Id, 0x1E);
VALIDATE_OFFSET(CMovie, m_nVehicleId, 0x20);
VALIDATE_OFFSET(CMovie, m_nModelIndex, 0x22);
VALIDATE_SIZE(CMovie, 0x24);

#include "meta/meta.CMovie.h"
