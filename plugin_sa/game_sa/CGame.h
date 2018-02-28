/*
    Plugin-SDK (Grand Theft Auto San Andreas) header file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/
#pragma once

#include "PluginBase.h"

class PLUGIN_API CGame
{
public:
	// Current number of area
	static int& currArea;

	static int &currLevel;
	static bool &bMissionPackGame;

	static char *aDatFile;  // char aDatFile[28]

	//funcs
	static void TidyUpMemory(bool arg1, bool arg2);

	static void InitialiseOnceBeforeRW();
	static void ShutdownRenderWare();
	static void FinalShutdown();
	static void Initialise(char const* filename);
	static void ReInitGameObjectVariables();
	static void Process();
	static bool CanSeeOutSideFromCurrArea();
	static bool CanSeeWaterFromCurrArea();
	static void ShutDownForRestart();
	static void InitialiseWhenRestarting();
	static void DrasticTidyUpMemory(bool arg0);
	static void Shutdown();
	static bool InitialiseEssentialsAfterRW();
	static void Init2();
	static void Init3();
	static bool InitialiseRenderWare();
	static bool Init1(char const* filename);
	static bool InitialiseCoreDataAfterRW();
	static void InitAfterLostFocus();
};
