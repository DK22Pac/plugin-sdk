/*
    Plugin-SDK (Grand Theft Auto) header file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/
#pragma once

#include "plbase/PluginBase_SA.h"

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