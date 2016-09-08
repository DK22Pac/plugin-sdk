/*
    Plugin-SDK (Grand Theft Auto) header file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/
#pragma once

#include "plbase/PluginBase_SA.h"

#pragma pack(push, 4)
class PLUGIN_API CWantedAudio
{
protected:
	void *vmt;
public:
	__int8 field_4[12];
	__int32 field_10;
	__int8 field_14[108];
};
#pragma pack(pop)

VALIDATE_SIZE(CWantedAudio, 0x80);