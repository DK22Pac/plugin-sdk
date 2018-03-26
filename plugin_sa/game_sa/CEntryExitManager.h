/*
    Plugin-SDK (Grand Theft Auto San Andreas) header file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/
#pragma once
#include "CEntryExit.h"
#include "CPool.h"

class PLUGIN_API CEntryExitManager {
public:
	static CPool<CEntryExit> *& mp_poolEntryExits;

public:
	static void Init(void);
	static void Shutdown(void);

	static bool Save(void);
	static bool Load(void);
};
