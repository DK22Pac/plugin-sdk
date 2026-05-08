/*
    Plugin-SDK (Grand Theft Auto Vice City) header file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/
#pragma once

#include "PluginBase.h"
#include "CVector.h"

class CMovie {
public:
    int m_nCurrentMovieCommand;
    CVector m_vecCurrentPosition;
    CVector m_vecGotoPosition;
    short m_nActor;
    short m_nActor2;
    short m_nVehicle;
    short m_nModelId;

    CMovie();
};
VALIDATE_OFFSET(CMovie, m_nCurrentMovieCommand, 0x0);
VALIDATE_OFFSET(CMovie, m_vecCurrentPosition, 0x4);
VALIDATE_OFFSET(CMovie, m_vecGotoPosition, 0x10);
VALIDATE_OFFSET(CMovie, m_nActor, 0x1C);
VALIDATE_OFFSET(CMovie, m_nActor2, 0x1E);
VALIDATE_OFFSET(CMovie, m_nVehicle, 0x20);
VALIDATE_OFFSET(CMovie, m_nModelId, 0x22);
VALIDATE_SIZE(CMovie, 0x24);
