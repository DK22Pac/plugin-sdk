#pragma once

#include "plugin/plugin.h"

#pragma pack(push, 1)
class PLUGIN_API CColTriangle
{
public:
	unsigned __int16 m_VertA; // vertex index in vertices array
	unsigned __int16 m_VertB; // vertex index in vertices array
	unsigned __int16 m_VertC; // vertex index in vertices array
	unsigned __int8 m_nMaterial;
	unsigned __int8 m_nLigh;
};
#pragma pack(pop)

VALIDATE_SIZE(CColTriangle, 8);