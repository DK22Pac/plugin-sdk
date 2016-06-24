#pragma once

#include "plbase/PluginBase_SA.h"
#include "CVector.h"

#pragma pack(push, 4)
class PLUGIN_API CStoredCollPoly
{
	CVector m_aMeshVertices[3]; // triangle vertices
	Bool    m_bIsActual;
	uint32_t  m_dwLighting;
};
#pragma pack(pop)

VALIDATE_SIZE(CStoredCollPoly, 0x2C);