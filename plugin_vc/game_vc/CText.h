/*
    Plugin-SDK (Grand Theft Auto Vice City) header file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/
#pragma once
#include "PluginBase.h"

struct CKeyEntry {
	wchar_t* value;
	char key[8];
};
VALIDATE_OFFSET(CKeyEntry, value, 0x0);
VALIDATE_OFFSET(CKeyEntry, key, 0x4);
VALIDATE_SIZE(CKeyEntry, 0xC);

class CKeyArray {
public:
	CKeyEntry* entries;
	int numEntries;
};
VALIDATE_OFFSET(CKeyArray, entries, 0x0);
VALIDATE_OFFSET(CKeyArray, numEntries, 0x4);
VALIDATE_SIZE(CKeyArray, 0x8);

class CData {
public:
	wchar_t* chars;
	int numChars;
};
VALIDATE_OFFSET(CData, chars, 0x0);
VALIDATE_OFFSET(CData, numChars, 0x4);
VALIDATE_SIZE(CData, 0x8);

class CMissionTextOffsets {
public:
	struct Entry {
		char szMissionName[8];
		unsigned int offset;
	};

	static constexpr auto MAX_MISSION_TEXTS = 90;
	Entry data[MAX_MISSION_TEXTS];
	unsigned short size;
};
VALIDATE_OFFSET(CMissionTextOffsets, data, 0x0);
VALIDATE_OFFSET(CMissionTextOffsets, size, 0x438);
VALIDATE_SIZE(CMissionTextOffsets, 0x43C);

struct ChunkHeader {
	char magic[4];
	int size;
};
VALIDATE_OFFSET(ChunkHeader, magic, 0x0);
VALIDATE_OFFSET(ChunkHeader, size, 0x4);
VALIDATE_SIZE(ChunkHeader, 0x8);

class CText {
public:
	CKeyArray keyArray;
	CData data;
	CKeyArray mission_keyArray;
	CData mission_data;
	char encoding;
	bool bHasMissionTextOffsets;
	bool bIsMissionTextLoaded;
	char szMissionTableName[8];
	CMissionTextOffsets MissionTextOffsets;

public:
    wchar_t* Get(char const* key);

};
VALIDATE_OFFSET(CText, keyArray, 0x0);
VALIDATE_OFFSET(CText, data, 0x8);
VALIDATE_OFFSET(CText, mission_keyArray, 0x10);
VALIDATE_OFFSET(CText, mission_data, 0x18);
VALIDATE_OFFSET(CText, encoding, 0x20);
VALIDATE_OFFSET(CText, bHasMissionTextOffsets, 0x21);
VALIDATE_OFFSET(CText, bIsMissionTextLoaded, 0x22);
VALIDATE_OFFSET(CText, szMissionTableName, 0x23);
VALIDATE_OFFSET(CText, MissionTextOffsets, 0x2C);
VALIDATE_SIZE(CText, 0x468);

extern CText& TheText;

extern char* UnicodeToAscii(wchar_t* src);
