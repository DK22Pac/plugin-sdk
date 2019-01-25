/*
    Plugin-SDK (Grand Theft Auto San Andreas) header file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/
#pragma once

#include "PluginBase.h"
#include "CompressedVector2D.h"
#include "CNodeAddress.h"

class PLUGIN_API CCarPathLink {
public:
    CompressedVector2D m_vecPosn;
    CNodeAddress m_address;
    char m_nDirX;
    char m_nDirY;
    char m_nPathNodeWidth;
    
    unsigned char m_nNumLeftLanes : 3;
    unsigned char m_nNumRightLanes : 3;
    unsigned char m_bTrafficLightDirection : 1; //!< 1 if the navi node has the same direction as the traffic light and 0 if the navi node points somewhere else
    unsigned char unk1 : 1;

    unsigned char m_nTrafficLightState : 2; //!< 1 - North-South, 2 - West-East cycle
    unsigned char m_bTrainCrossing : 1;

    SUPPORTED_10US float OneWayLaneOffset();
};

VALIDATE_SIZE(CCarPathLink, 0xE);

#include "meta/meta.CCarPathLink.h"
