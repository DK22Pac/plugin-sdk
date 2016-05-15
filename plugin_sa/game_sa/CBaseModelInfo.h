#pragma once
#include "plbase/PluginBase.h"
#include "CColModel.h"
#include "C2dEffect.h"
#include "eModelID.h"

enum ModelInfoType : unsigned char
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
	unsigned char m_nTimeOn;
	unsigned char m_nTimeOff;
	signed short  m_wOtherTimeModel;
};

VALIDATE_SIZE(tTimeInfo, 4);

// originally an abstract class
#pragma pack(push, 4)
class PLUGIN_API CBaseModelInfo {
public:
	unsigned int   m_dwKey;
	unsigned short m_wUsageCount;
	signed short   m_wTxdIndex;
	unsigned char  m_nAlpha; // 0 - 255
	unsigned char  m_n2dfxCount;
    short          m_w2dfxIndex;
    short          m_wObjectInfoIndex;
	union{
		unsigned short m_wFlags;
		struct{
			/* https://code.google.com/p/mtasa-blue/source/browse/tags/1.3.4/MTA10/game_sa/CModelInfoSA.h */
			unsigned char m_bHasBeenPreRendered : 1; // we use this because we need to apply changes only once
			unsigned char m_bAlphaTransparency: 1;
			unsigned char m_bIsLod: 1;
			unsigned char m_bDontCastShadowsOn: 1;
			unsigned char m_bDontWriteZBuffer: 1;
			unsigned char m_bDrawAdditive: 1;
			unsigned char m_bDrawLast: 1;
			unsigned char m_bDoWeOwnTheColModel: 1;
			union{
				struct{
					unsigned char m_bCarmodIsWheel: 1;
					unsigned char bUnknownFlag9: 1;
					unsigned char bUnknownFlag10: 1;
					unsigned char m_bSwaysInWind: 1;
					unsigned char m_bCollisionWasStreamedWithModel: 1;
					unsigned char m_bDontCollideWithFlyer: 1;
					unsigned char m_bHasComplexHierarchy: 1;
					unsigned char m_bWetRoadReflection: 1;
				};
				struct{
					unsigned char pad0: 2;
					unsigned char m_nCarmodId : 5;
					unsigned char pad1: 1;
				};
			};
			
		};
	};
	CColModel        *m_pColModel;
	float             m_fDrawDistance;
	struct RwObject  *m_pRwObject;

	// vtable

	class CBaseModelInfo *AsAtomicModelInfoPtr();
	class CBaseModelInfo *AsDamageAtomicModelInfoPtr();
	class CBaseModelInfo *AsLodAtomicModelInfoPtr();
	ModelInfoType GetModelType();//=0
	tTimeInfo *GetTimeInfo();
	void Init();
	void Shutdown();
	void DeleteRwObject();//=0
	unsigned int GetRwModelType();//=0
	struct RwObject *CreateInstance(struct RwMatrix *matrix);//=0
	struct RwObject *CreateInstance();//=0
	void SetAnimFile(char *filename);
	void ConvertAnimFileIndex();
	signed int GetAnimFileIndex();

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

    __parent_class_vtable__
};
#pragma pack(pop)

VALIDATE_SIZE(CBaseModelInfo, 0x20);