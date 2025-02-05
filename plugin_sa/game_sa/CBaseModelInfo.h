/*
    Plugin-SDK (Grand Theft Auto San Andreas) header file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/
#pragma once
#include "PluginBase.h"
#include "RenderWare.h"
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
class PLUGIN_API CBaseModelInfo {
public:
	unsigned int   m_nKey;
	unsigned short m_nRefCount;
	short          m_nTxdIndex;
	unsigned char  m_nAlpha; // 0 - 255
	unsigned char  m_nNum2dEffects;
    short          m_n2dEffectIndex;
    short          m_nObjectInfoIndex;
	union{
		unsigned short m_nFlags;
		struct{
			/* https://code.google.com/p/mtasa-blue/source/browse/tags/1.3.4/MTA10/game_sa/CModelInfoSA.h */
			unsigned char bHasBeenPreRendered : 1; // we use this because we need to apply changes only once
			unsigned char bDrawLast: 1;
			unsigned char bAdditiveRender: 1;
			unsigned char bDontWriteZBuffer: 1;
			unsigned char bDontCastShadowsOn : 1;
			unsigned char bDoWeOwnTheColModel : 1;
			unsigned char bIsBackfaceCulled : 1;
			unsigned char bIsLod : 1;
			union{
				struct{
					unsigned char bIsRoad: 1;
					unsigned char bHasComplexHierarchy : 1;
					unsigned char bDontCollideWithFlyer : 1;
					unsigned char nSpecialType : 4;
					unsigned char  : 1;
				};
				struct{
					unsigned char : 2;
					unsigned char nCarmodId : 5;
					unsigned char : 1;
				};
			};
			
		};
	};
	CColModel        *m_pColModel;
	float             m_fDrawDistance;
	union {
		RwObject* m_pRwObject;
		RpClump* m_pRwClump;
		RpAtomic* m_pRwAtomic;
	};

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
	struct RwObject *CreateInstance(RwMatrix *matrix);//=0
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

    	virtual ~CBaseModelInfo() {}
	CBaseModelInfo();  // constructor
	
	bool GetIsDrawLast();
	bool HasBeenPreRendered();
	bool HasComplexHierarchy();
	bool IsBackfaceCulled();
	bool IsBreakableStatuePart();
	bool IsLod();
	bool IsRoad();
	bool IsTagModel();
	bool SwaysInWind();
	void SetHasBeenPreRendered(int bHasBeenPreRendered);
	void SetIsLod(int bIsLod);
	void SetOwnsColModel(int bOwns);
	void IncreaseAlpha();
};

VALIDATE_SIZE(CBaseModelInfo, 0x20);
