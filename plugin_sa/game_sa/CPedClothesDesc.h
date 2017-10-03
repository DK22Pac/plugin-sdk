/*
    Plugin-SDK (Grand Theft Auto) header file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/
#pragma once
#include "plbase\PluginBase_SA.h"
#include "eClothesModelPart.h"
#include "eClothesTexturePart.h"

#pragma pack(push, 4)
struct CPedClothesDesc
{
public:
	unsigned __int32 m_adwModelKeys[10];
	unsigned __int32 m_adwTextureKeys[18];
	float m_fFatStat;
	float m_fMuscleStat; 

    void Initialise();
    void SetModel(unsigned int modelid, int eClothesModelPart);
    void SetModel(char const* model, int eClothesModelPart);
    bool GetIsWearingBalaclava();
    bool HasVisibleNewHairCut(int arg1);
    bool HasVisibleTattoo();
    CPedClothesDesc();
    void SetTextureAndModel(unsigned int texture, unsigned int model, int eClothesTexturePart);
    void SetTextureAndModel(char const* texturename, char const* modelname, int eClothesTexturePart);
	
};

#pragma pack(pop)

VALIDATE_SIZE(CPedClothesDesc, 0x78);





 

