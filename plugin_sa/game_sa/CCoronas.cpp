#include "CCoronas.h"

float& CCoronas::SunScreenX = *(float *)0xC3E028;
float& CCoronas::SunScreenY = *(float *)0xC3E02C;
unsigned __int8& CCoronas::SunBlockedByClouds = *(unsigned __int8 *)0xC3E030;
bool& CCoronas::bChangeBrightnessImmediately = *(bool *)0xC3E034;
unsigned __int32& CCoronas::NumRegisteredCoronas = *(unsigned __int32 *)0xC3E038;
CRegisteredCorona *CCoronas::aCoronas = (CRegisteredCorona *)0xC3E058;
float& CCoronas::LightsMult = *(float *)0x8D4B5C;
unsigned __int32& CCoronas::MoonSize = *(unsigned __int32 *)0x8D4B60;

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

void CCoronas::RegisterCorona(unsigned int id, CEntity *attachTo, unsigned char red, unsigned char green, unsigned char blue, unsigned char alpha, CVector const &posn, float radius, float farClip, RwTexture *texture, unsigned char flare, bool enableReflection, bool checkObstacles, int _param_not_used, float angle, bool longDistance, float nearClip, unsigned char fadeState, float fadeSpeed, bool onlyFromBelow, bool reflectionDelay)
{
	((void (__cdecl *)(unsigned int, CEntity *, unsigned char, unsigned char, unsigned char, unsigned char, CVector const &, float, float, RwTexture *, unsigned char, bool, bool, int, float, bool, float, unsigned char, float, bool, bool))0x6FC180)(id, attachTo, red, green, blue, alpha, posn, radius, farClip, texture, flare, enableReflection, checkObstacles, _param_not_used, angle, longDistance, nearClip, fadeState, fadeSpeed, onlyFromBelow, reflectionDelay);
}

void CCoronas::RegisterCorona(unsigned int id, CEntity *attachTo, unsigned char red, unsigned char green, unsigned char blue, unsigned char alpha, CVector const &posn, float radius, float farClip, eCoronaType coronaType, unsigned char flare, bool enableReflection, bool checkObstacles, int _param_not_used, float angle, bool longDistance, float nearClip, unsigned char fadeState, float fadeSpeed, bool onlyFromBelow, bool reflectionDelay)
{
	((void (__cdecl *)(unsigned int, CEntity *, unsigned char, unsigned char, unsigned char, unsigned char, CVector const &, float, float, unsigned char, unsigned char, bool, bool, int, float, bool, float, unsigned char, float, bool, bool))0x6FC580)(id, attachTo, red, green, blue, alpha, posn, radius, farClip, coronaType, flare, enableReflection, checkObstacles, _param_not_used, angle, longDistance, nearClip, fadeState, fadeSpeed, onlyFromBelow, reflectionDelay);
}

void CCoronas::UpdateCoronaCoors(unsigned int id, CVector  const& posn, float farClip, float angle)
{
	((void (__cdecl *)(unsigned int, CVector  const&, float, float))0x6FC4D0)(id, posn, farClip, angle);
}

void CCoronas::DoSunAndMoon()
{
	((void (__cdecl *)())0x6FC5A0)();
}