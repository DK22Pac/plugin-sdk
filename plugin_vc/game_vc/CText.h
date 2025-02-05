/*
    Plugin-SDK (Grand Theft Auto 3) header file
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

class CKeyArray {
public:
	CKeyEntry* entries;
	int numEntries;
};

class CData {
public:
	wchar_t* chars;
	int numChars;
};

class CMissionTextOffsets {
public:
	struct Entry {
		char szMissionName[8];
		unsigned int offset;
	};

	enum { MAX_MISSION_TEXTS = 90 };

	Entry data[MAX_MISSION_TEXTS];
	unsigned short size;
};

struct ChunkHeader {
	char magic[4];
	int size;
};

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

extern CText& TheText;

extern char* UnicodeToAscii(wchar_t* src);
