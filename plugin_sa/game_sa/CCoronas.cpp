/*
    Plugin-SDK (Grand Theft Auto San Andreas) source file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/
#include "CCoronas.h"

unsigned int MAX_CORONAS = 64;
RwTexture **gpCoronaTexture = (RwTexture **)0xC3E000;

float& CCoronas::SunScreenX = *(float *)0xC3E028;
float& CCoronas::SunScreenY = *(float *)0xC3E02C;
bool& CCoronas::SunBlockedByClouds = *(bool *)0xC3E030;
int& CCoronas::bChangeBrightnessImmediately = *(int *)0xC3E034;
unsigned int& CCoronas::NumCoronas = *(unsigned int *)0xC3E038;
CRegisteredCorona *CCoronas::aCoronas = (CRegisteredCorona *)0xC3E058;
float& CCoronas::LightsMult = *(float *)0x8D4B5C;
unsigned int& CCoronas::MoonSize = *(unsigned int *)0x8D4B60;

void CCoronas::Init()
{
	((void (__cdecl *)())0x6FAA70)();
}

void CCoronas::Shutdown()
{
	((void (__cdecl *)())0x6FAB00)();
}

void CCoronas::Update()
{
	((void (__cdecl *)())0x6FADF0)();
}

void CCoronas::Render()
{
	((void (__cdecl *)())0x6FAEC0)();
}

void CCoronas::RenderReflections()
{
	((void (__cdecl *)())0x6FB630)();
}

void CCoronas::RenderSunReflection()
{
	((void (__cdecl *)())0x6FBAA0)();
}

void CCoronas::RegisterCorona(unsigned int id, CEntity *attachTo, unsigned char red, unsigned char green, unsigned char blue, unsigned char alpha, CVector const &posn, float radius, float farClip, RwTexture *texture, eCoronaFlareType flaretype, bool enableReflection, bool checkObstacles, int _param_not_used, float angle, bool longDistance, float nearClip, unsigned char fadeState, float fadeSpeed, bool onlyFromBelow, bool reflectionDelay)
{
	((void (__cdecl *)(unsigned int, CEntity *, unsigned char, unsigned char, unsigned char, unsigned char, CVector const &, float, float, RwTexture *, eCoronaFlareType, bool, bool, int, float, bool, float, unsigned char, float, bool, bool))0x6FC180)(id, attachTo, red, green, blue, alpha, posn, radius, farClip, texture, flaretype, enableReflection, checkObstacles, _param_not_used, angle, longDistance, nearClip, fadeState, fadeSpeed, onlyFromBelow, reflectionDelay);
}

void CCoronas::RegisterCorona(unsigned int id, CEntity *attachTo, unsigned char red, unsigned char green, unsigned char blue, unsigned char alpha, CVector const &posn, float radius, float farClip, eCoronaType coronaType, eCoronaFlareType flaretype, bool enableReflection, bool checkObstacles, int _param_not_used, float angle, bool longDistance, float nearClip, unsigned char fadeState, float fadeSpeed, bool onlyFromBelow, bool reflectionDelay)
{
	((void (__cdecl *)(unsigned int, CEntity *, unsigned char, unsigned char, unsigned char, unsigned char, CVector const &, float, float, eCoronaType, eCoronaFlareType, bool, bool, int, float, bool, float, unsigned char, float, bool, bool))0x6FC580)(id, attachTo, red, green, blue, alpha, posn, radius, farClip, coronaType, flaretype, enableReflection, checkObstacles, _param_not_used, angle, longDistance, nearClip, fadeState, fadeSpeed, onlyFromBelow, reflectionDelay);
}

void CCoronas::UpdateCoronaCoors(unsigned int id, CVector  const& posn, float farClip, float angle)
{
	((void (__cdecl *)(unsigned int, CVector  const&, float, float))0x6FC4D0)(id, posn, farClip, angle);
}

void CCoronas::DoSunAndMoon()
{
	((void (__cdecl *)())0x6FC5A0)();
}