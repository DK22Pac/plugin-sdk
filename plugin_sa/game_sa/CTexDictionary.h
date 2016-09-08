/*
    Plugin-SDK (Grand Theft Auto) header file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/
#pragma once

#include "plbase/PluginBase_SA.h"
#include "RenderWare.h"

#pragma pack (push, 1)
class PLUGIN_API CTexDictionary
{
public:
	// class variables
	RwTexDictionary *m_pRwDictionary;
	unsigned __int16 m_dwRefsCount;
	__int16 m_dwParentIndex;
	unsigned __int32 hash;
};
#pragma pack (pop)

VALIDATE_SIZE(CTexDictionary, 0xC);