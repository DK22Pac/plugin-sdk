/*
    Plugin-SDK (Grand Theft Auto San Andreas) header file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/
#pragma once

#include "PluginBase.h"

class PLUGIN_API CTimer
{
public:
	// class variables

	static bool& m_CodePause;
	static bool& m_UserPause;
	static unsigned int& m_FrameCounter;
	static float& ms_fTimeStepOld;
	static float& ms_fTimeStepNonClipped;
	static float& ms_fTimeStep;
	// game speed
	static float& ms_fTimeScale;
	static unsigned int& m_snPreviousTimeInMilliseconds;
	static unsigned int& m_snTimeInMillisecondsPauseMode;
	static unsigned int& m_snTimeInMillisecondsNonClipped;
	static unsigned int& m_snTimeInMilliseconds;

	// class functions

	static void Initialise();
	static void Shutdown();
	static void GetRealTimeScale(float timeStep);
	static void Suspend();
	static void Resume();
	static int GetCyclesPerMillisecond();
	// cycles per ms * 20
	static int GetCyclesPerFrame();
	static unsigned int GetCurrentTimeInCycles();
	static void Stop();
	static bool GetIsSlowMotionActive();
	static void StartUserPause();
	static void EndUserPause();
	static void Update();
};