/*
    Plugin-SDK (Grand Theft Auto) header file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/
#pragma once

#include "plbase/PluginBase_SA.h"
#include "CBox.h"
#include "CColSphere.h"
#include "CColData.h"

#pragma pack(push, 4)
class PLUGIN_API CColModel
{
public:
	CBox m_boundBox;
	CColSphere m_colSphere;
	CColData *m_pColData;
};
#pragma pack(pop)

VALIDATE_SIZE(CColModel, 0x30);