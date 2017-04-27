/*
    Plugin-SDK (Grand Theft Auto) header file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/
#pragma once
#include "CEntryExit.h"
#include "CPool.h"

class CEntryExitManager {
public:
	static CPool<CEntryExit> *& mp_poolEntryExits;

public:
	static void Init(void);
	static void Shutdown(void);

	static Bool Save(void);
	static Bool Load(void);
};
