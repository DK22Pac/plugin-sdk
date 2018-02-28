/*
    Plugin-SDK (Grand Theft Auto San Andreas) header file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/
#pragma once

#include "PluginBase.h"
#include "CVector.h"
#include "CQuaternion.h"

class PLUGIN_API CFileObjectInstance {
public:
    CVector     m_vecPosition;
    CQuaternion m_qRotation;
    int         m_nModelId;
    int         m_nInterior;
    int         m_nLodIndex; // -1 - without LOD model
};

VALIDATE_SIZE(CFileObjectInstance, 0x28);