/*
    Plugin-SDK (Grand Theft Auto) header file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/
#pragma once

#include "plbase/PluginBase_SA.h"

#pragma pack(push, 4)
class PLUGIN_API CPedAcquaintance
{
public:
	unsigned __int32 m_dwRespect;
	unsigned __int32 m_dwLike;
	unsigned __int32 field_8;
	unsigned __int32 m_dwDislike;
	unsigned __int32 m_dwHate;
};
#pragma pack(pop)

VALIDATE_SIZE(CPedAcquaintance, 0x14);