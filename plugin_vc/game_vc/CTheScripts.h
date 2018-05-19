/*
    Plugin-SDK (Grand Theft Auto Vice City) header file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/
#pragma once

#include "PluginBase.h"
#include "CPlayerInfo.h"
#include "CVehicle.h"
#include "CRGBA.h"
#include "CObject.h"

extern unsigned int MAX_SCRIPT_SPACE_SIZE; // default 260512





class PLUGIN_API CTheScripts {
public:
    static unsigned char *ScriptSpace; // static unsigned char ScriptSpace[MAX_SCRIPT_SPACE_SIZE]
	static int &NumberOfIntroTextLinesThisFrame;

	struct tIntroText {
		float fWidth;
		float fHight;
		CRGBA color;
		bool bCenter;
		bool bBackground;
		bool bBackgroundOnlyText;
		float fSize, fCenterSize;
		CRGBA backgroundColor;
		bool bProportional;
		bool bDisable;
		bool bRightJustify;
		int fontStyle;
		float x;
		float y;
		wchar_t text[100];

		int __pad;
	};

	static bool CTheScripts::IsPlayerOnAMission();
	static bool CTheScripts::IsPlayerStopped(CPlayerInfo* playerinfo);
	static bool CTheScripts::IsVehicleStopped(CVehicle* vehicle);
	static void CTheScripts::Process();
	static signed int CTheScripts::Init();
	static void CTheScripts::CleanUpThisPed(CPed* ped);
	static void CTheScripts::CleanUpThisVehicle(CVehicle* vehicle);
	static void CTheScripts::CleanUpThisObject(CObject* object);
	static void CTheScripts::RemoveThisPed(CPed* ped);
	
	static tIntroText *IntroTextLines;


	
};
