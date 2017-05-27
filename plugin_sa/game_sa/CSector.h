/*
    Plugin-SDK (Grand Theft Auto) header file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/
#pragma once
#include "plbase/PluginBase_SA.h"
#include "CPtrListDoubleLink.h"

class PLUGIN_API CSector {
public:
    CPtrListDoubleLink m_buildings;
    CPtrListDoubleLink m_dummies;
};

VALIDATE_SIZE(CSector, 8);