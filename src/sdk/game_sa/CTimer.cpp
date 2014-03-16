#include "CTimer.h"

bool& CTimer::m_CodePause = *(bool *)0xB7CB48;
bool& CTimer::m_UserPause = *(bool *)0xB7CB49;
unsigned __int32& CTimer::m_FrameCounter = *(unsigned __int32 *)0xB7CB4C;
float& CTimer::ms_fTimeStepOld = *(float *)0xB7CB54;
float& CTimer::ms_fTimeStepNonClipped = *(float *)0xB7CB58;
float& CTimer::ms_fTimeStep = *(float *)0xB7CB5C;
float& CTimer::ms_fTimeScale = *(float *)0xB7CB64;
unsigned __int32& CTimer::m_snPreviousTimeInMilliseconds = *(unsigned __int32 *)0xB7CB78;
unsigned __int32& CTimer::m_snTimeInMillisecondsPauseMode = *(unsigned __int32 *)0xB7CB7C;
unsigned __int32& CTimer::m_snTimeInMillisecondsNonClipped = *(unsigned __int32 *)0xB7CB80;
unsigned __int32& CTimer::m_snTimeInMilliseconds = *(unsigned __int32 *)0xB7CB84;

void CTimer::Initialise()
{
	((void (__cdecl *)()) 0x5617E0)();
}

void CTimer::Shutdown()
{
	((void (__cdecl *)()) 0x5618C0)();
}

void CTimer::GetRealTimeScale(float timeStep)
{
	((void (__cdecl *)(float)) 0x5618D0)(timeStep);
}

void CTimer::Suspend()
{
	((void (__cdecl *)()) 0x5619D0)();
}

void CTimer::Resume()
{
	((void (__cdecl *)()) 0x561A00)();
}

int CTimer::GetCyclesPerMillisecond()
{
	return ((int (__cdecl *)()) 0x561A40)();
}

int CTimer::GetCyclesPerFrame()
{
	return ((int (__cdecl *)()) 0x561A50)();
}

unsigned int CTimer::GetCurrentTimeInCycles()
{
	return ((unsigned int (__cdecl *)()) 0x561A80)();
}

void CTimer::Stop()
{
	((void (__cdecl *)()) 0x561AA0)();
}

bool CTimer::GetIsSlowMotionActive()
{
	return ((bool (__cdecl *)()) 0x561AD0)();
}

void CTimer::StartUserPause()
{
	((void (__cdecl *)()) 0x561AF0)();
}

void CTimer::EndUserPause()
{
	((void (__cdecl *)()) 0x561B00)();
}

void CTimer::Update()
{
	((void (__cdecl *)()) 0x561B10)();
}