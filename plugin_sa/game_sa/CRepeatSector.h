/*
    Plugin-SDK (Grand Theft Auto) header file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/
#pragma once
#include "plbase/PluginBase_SA.h"
#include "CPtrList.h"

#pragma pack(push, 4)
class PLUGIN_API CRepeatSector
{
public:
	CPtrList m_VehiclesList;
	CPtrList m_PedsList;
	CPtrList m_ObjectsList;
};
#pragma pack(pop)

VALIDATE_SIZE(CRepeatSector, 0xC);