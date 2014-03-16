#pragma once
#include <plugin/plugin.h>
#include "RenderWare.h"
#include "CColModel.h"
#include "C2dEffect.h"

enum ModelInfoType : unsigned __int8
{
	MODEL_INFO_ATOMIC = 1,
	MODEL_INFO_TIME = 3,
	MODEL_INFO_WEAPON = 4,
	MODEL_INFO_CLUMP = 5,
	MODEL_INFO_VEHICLE = 6,
	MODEL_INFO_PED = 7,
	MODEL_INFO_LOD = 8
};

struct tTimeInfo
{
	unsigned __int8 m_nTimeOn;
	unsigned __int8 m_nTimeOff;
	signed __int16  m_wOtherTimeModel;
};

VALIDATE_SIZE(tTimeInfo, 4);

// originally an abstract class
#pragma pack(push, 4)
class PLUGIN_API CBaseModelInfo
{
protected:
    CBaseModelInfo(plugin::dummy_func_t) {}
public:
	unsigned __int32  m_dwKey;
	unsigned __int16  m_wUsageCount;
	signed __int16    m_wTxdIndex;
	unsigned __int8   m_nAlpha; // 0 - 255
	unsigned __int8   m_n2dfxCount;
	__int16           m_w2dfxIndex;
	__int16           m_wObjectInfoIndex;
	union{
		unsigned __int16  m_wFlags;
		struct{
			/* https://code.google.com/p/mtasa-blue/source/browse/tags/1.3.4/MTA10/game_sa/CModelInfoSA.h */
			unsigned __int8 m_bHasBeenPreRendered : 1; // we use this because we need to apply changes only once
			unsigned __int8 m_bAlphaTransparency: 1;
			unsigned __int8 m_bIsLod: 1;
			unsigned __int8 m_bDontCastShadowsOn: 1;
			unsigned __int8 m_bDontWriteZBuffer: 1;
			unsigned __int8 m_bDrawAdditive: 1;
			unsigned __int8 m_bDrawLast: 1;
			unsigned __int8 m_bDoWeOwnTheColModel: 1;
			union{
				struct{
					unsigned __int8 m_bCarmodIsWheel: 1;
					unsigned __int8 bUnknownFlag9: 1;
					unsigned __int8 bUnknownFlag10: 1;
					unsigned __int8 m_bSwaysInWind: 1;
					unsigned __int8 m_bCollisionWasStreamedWithModel: 1;
					unsigned __int8 m_bDontCollideWithFlyer: 1;
					unsigned __int8 m_bHasComplexHierarchy: 1;
					unsigned __int8 m_bWetRoadReflection: 1;
				};
				struct{
					unsigned __int8 pad0: 2;
					unsigned __int8 m_nCarmodId : 5;
					unsigned __int8 pad1: 1;
				};
			};
			
		};
	};
	CColModel        *m_pColModel;
	float             m_fDrawDistance;
	RwObject         *m_pRwObject;

	// vtable

	virtual class CBaseModelInfo *AsAtomicModelInfoPtr();
	virtual class CBaseModelInfo *AsDamageAtomicModelInfoPtr();
	virtual class CBaseModelInfo *AsLodAtomicModelInfoPtr();
	virtual ModelInfoType GetModelType();//=0
	virtual tTimeInfo *GetTimeInfo();
	virtual void Init();
	virtual void Shutdown();
	virtual void DeleteRwObject();//=0
	virtual unsigned int GetRwModelType();//=0
	virtual RwObject *CreateInstance(RwMatrixTag *matrix);//=0
	virtual RwObject *CreateInstance();//=0
	virtual void SetAnimFile(char *filename);
	virtual void ConvertAnimFileIndex();
	virtual signed int GetAnimFileIndex();

	//

	CBaseModelInfo();
	virtual ~CBaseModelInfo();

	//
	void SetTexDictionary(char *txdName);
	void ClearTexDictionary();
	void AddTexDictionaryRef();
	void RemoveTexDictionaryRef();
	void AddRef();
	void RemoveRef();
	// initPairedModel defines if we need to set col model for time model
	void SetColModel(CColModel *colModel, bool initPairedModel);
	void Init2dEffects();
	void DeleteCollisionModel();
	// index is a number of effect (max number is (m_n2dfxCount - 1))
	C2dEffect *Get2dEffect(int index);
	void Add2dEffect(C2dEffect *effect);
};
#pragma pack(pop)

VALIDATE_SIZE(CBaseModelInfo, 0x20);