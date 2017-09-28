/*
    Plugin-SDK (Grand Theft Auto) header file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/
#pragma once

#include "plbase/PluginBase_SA.h"
#include "LimbOrientation.h"
#include "AnimBlendFrameData.h"
#include "CVector.h"

#pragma pack(push, 4)
class PLUGIN_API CPedIK
{
public:
	class CPed *m_pPed;
	LimbOrientation m_TorsoOrien;
	float m_fSlopePitch;
	float m_fSlopePitchLimitMult;
	float m_fSlopeRoll;
	float m_fBodyRoll;
	unsigned __int32 m_dwFlags;
	
	//funcs
	void RotateTorso(AnimBlendFrameData* bone, LimbOrientation& orientation, bool flag);
	bool PointGunInDirection(float Z_angle, float arg2, bool flag, float arg4);
	void PointGunAtPosition(CVector const& posn, float arg2);
	static RwMatrixTag* GetWorldMatrix(RwFrame* frame, RwMatrixTag* transformMat);		
};
#pragma pack(pop)

VALIDATE_SIZE(CPedIK, 0x20);
