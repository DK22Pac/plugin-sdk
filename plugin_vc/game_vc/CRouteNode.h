/*
    Plugin-SDK (Grand Theft Auto Vice City) header file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/
#pragma once

#include "PluginBase.h"
#include "CVector.h"

class PLUGIN_API CRouteNode {
    PLUGIN_NO_DEFAULT_CONSTRUCTION(CRouteNode)

public:
    short m_nRoute;
    CVector m_vecPosition;

    SUPPORTED_10EN_11EN_STEAM static void AddRoutePoint(short route, CVector pos);
    SUPPORTED_10EN_11EN_STEAM static CVector GetPointPosition(short point);
    //! Actually GetFirstPointOfRoute
    SUPPORTED_10EN_11EN_STEAM static short GetRouteStart(short route);
    SUPPORTED_10EN_11EN_STEAM static short GetRouteThisPointIsOn(short point);
    SUPPORTED_10EN_11EN_STEAM static void Initialise();
    SUPPORTED_10EN_11EN_STEAM static void RemoveRoute(short route);
};

SUPPORTED_10EN_11EN_STEAM extern CRouteNode(&gaRoutes)[200]; // CRouteNode gaRoutes[200]

VALIDATE_SIZE(CRouteNode, 0x10);

#include "meta/meta.CRouteNode.h"
