/*
    Plugin-SDK (Grand Theft Auto) header file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/
#pragma once

#include "plbase/PluginBase_SA.h"

#pragma pack(push,4)
class PLUGIN_API CReference
{
public:
	class CReference *m_pNext;
	class CEntity **m_ppEntity;
};
#pragma pack(pop)

VALIDATE_SIZE(CReference, 8);