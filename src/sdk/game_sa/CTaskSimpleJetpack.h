#pragma once

#include <plugin/plugin.h>
#include "CTaskSimple.h"
#include "RenderWareTypes.h"
#include "CVector.h"

#pragma pack(push, 1)
class PLUGIN_API CTaskSimpleJetpack : public CTaskSimple
{
public:
	__int8 byte8;
	__int8 byte9;
	__int8 byteA;
	__int8 byteB;
	__int8 byteC;
	__int8 byteD;
	__int8 byteE;
	__int8 fF[1];
	__int32 dword10;
	__int32 dword14;
	float dword18;
	__int32 dword1C;
	__int32 dword20;
	__int32 dword24;
	__int32 dword28;
	__int32 dword2C;
	__int32 dword30;
	__int32 dword34;
	__int32 dword38;
	float dword3C;
	RpClump *m_pJetpackObject;
	__int32 dword44;
	CVector dword48;
	__int32 dword54;
	__int32 dword58;
	__int32 dword5C;
	class CObject *pcobject60;
	void *m_apPparticles[2]; // CParticle *
	float m_fParticleIntensity;
};
#pragma pack(pop)

//VALIDATE_SIZE(CTaskSimpleJetpack, 0x70);