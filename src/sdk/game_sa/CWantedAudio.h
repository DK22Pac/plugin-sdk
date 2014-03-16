#pragma once

#include <plugin/plugin.h>

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