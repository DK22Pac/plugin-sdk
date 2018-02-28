/*
    Plugin-SDK (Grand Theft Auto Vice City) header file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/
#pragma once

#include "PluginBase.h"

class CDraw
{
public:
	// variables
	static float& ms_fFOV;		// float CDraw::ms_fFOV
	static float& ms_fAspectRatio;		// float CDraw::ms_fAspectRatio
	static float& ms_fFarClipZ;		// float CDraw::ms_fFarClipZ
	static float& ms_fNearClipZ;		// float CDraw::ms_fNearClipZ
	static float& ms_fLODDistance;		// float CDraw::ms_fLODDistance
	static unsigned char& FadeRed;		// unsigned char CDraw::FadeRed
	static unsigned char& FadeGreen;		// unsigned char CDraw::FadeGreen
	static unsigned char& FadeBlue;		// unsigned char CDraw::FadeBlue
	static unsigned char& FadeValue;		// unsigned char CDraw::FadeValue

	// functions
	static void CalculateAspectRatio();
	static void SetFOV(float fov);
};