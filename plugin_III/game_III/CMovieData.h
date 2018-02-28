/*
    Plugin-SDK (Grand Theft Auto 3) header file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/
#pragma once

#include "PluginBase.h"
#include "CVector.h"

class CMovieData {
public:
    int m_nCurrentMovieCommand;
    CVector m_vecCurrentPosition;
    CVector m_vecGotoPosition;
    short m_nActor;
    short m_nActor2;
    short m_nVehicle;
    short m_nModelId;

    CMovieData();
};

VALIDATE_SIZE(CMovieData, 0x24);
